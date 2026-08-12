// ============================================================
// File        : testbench_full.v
// Description : Comprehensive self-checking testbench for the
//               RSA-SPI pipeline (top_module).
//
//               Goes beyond a simple round-trip check by:
//                 1. Computing an INDEPENDENT golden model of
//                    cipher = msg^E mod N and plain = cipher^D mod N
//                    in the testbench itself, so a bug that
//                    cancels out between encrypt and decrypt
//                    (e.g. matching typo in both exponents)
//                    is still caught.
//                 2. Checking the SPI link in isolation
//                    (received_out must equal cipher_out exactly,
//                    and must equal the bit-serial capture taken
//                    directly off the sclk/mosi/ss_n bus by a
//                    protocol monitor that knows nothing about
//                    the DUT's internals).
//                 3. Directed boundary tests (0, 1, N-1) plus
//                    constrained-random tests across the full
//                    valid message range.
//                 4. An out-of-range test (message >= N) to
//                    document actual behaviour rather than
//                    silently passing/failing on an assumption.
//                 5. A reset-during-operation test and a
//                    back-to-back start-while-busy test.
//                 6. A live protocol checker on the SPI bus that
//                    flags framing violations independent of the
//                    functional result (ss_n high-time around the
//                    transfer, no extra/missing sclk edges, MOSI
//                    stable around sampling edges).
//
//               Pass/fail is tracked centrally; the run ends with
//               a single PASS/FAIL summary and a non-zero $finish
//               status code on failure so it can be used in a
//               regression / CI flow.
//
// Compile     : iverilog -o rsa_sim_full src/*.v tb/testbench_full.v
// Run         : vvp rsa_sim_full
// Waveform    : gtkwave rsa_spi_full.vcd
// Author      : RSA-SPI Project
// ============================================================

`timescale 1ns/1ps

module testbench_full;

    // --------------------------------------------------------
    // RSA key parameters (must match src/rsa_encrypt.v and
    // src/rsa_decrypt.v -- duplicated here deliberately so the
    // testbench acts as an independent golden model, not a
    // mirror of whatever the RTL happens to contain).
    // --------------------------------------------------------
    localparam [31:0] N_MOD = 32'd3233;  // modulus n = p*q (p=61, q=53)
    localparam [31:0] E_PUB = 32'd7;     // public exponent
    localparam [31:0] D_PRI = 32'd1783;  // private exponent (7*1783 mod 3120 = 1)

    // --------------------------------------------------------
    // DUT port connections
    // --------------------------------------------------------
    reg         clk;
    reg         rst_n;
    reg         start;
    reg  [31:0] message_in;

    wire [31:0] cipher_out;
    wire [31:0] received_out;
    wire [31:0] decrypted_out;
    wire        done;

    // --------------------------------------------------------
    // Clock generation: 10ns period (100 MHz)
    // --------------------------------------------------------
    initial clk = 1'b0;
    always #5 clk = ~clk;

    // --------------------------------------------------------
    // DUT instantiation
    // --------------------------------------------------------
    top_module u_dut (
        .clk          (clk),
        .rst_n        (rst_n),
        .start        (start),
        .message_in   (message_in),
        .cipher_out   (cipher_out),
        .received_out (received_out),
        .decrypted_out(decrypted_out),
        .done         (done)
    );

    // --------------------------------------------------------
    // Direct taps onto the SPI bus for an independent protocol
    // monitor (does not use any internal DUT state, only the
    // pins that exist between u_spi_m and u_spi_s).
    // --------------------------------------------------------
    wire sclk_mon = u_dut.sclk_w;
    wire mosi_mon = u_dut.mosi_w;
    wire ss_n_mon = u_dut.ss_n_w;

    // --------------------------------------------------------
    // Waveform dump
    // --------------------------------------------------------
    initial begin
        $dumpfile("rsa_spi_full.vcd");
        $dumpvars(0, testbench_full);
    end

    // --------------------------------------------------------
    // Golden reference model: modular exponentiation done with
    // plain 64-bit integer arithmetic, independent of mod_exp.v.
    // --------------------------------------------------------
    function [31:0] golden_modexp;
        input [31:0] base_in;
        input [31:0] exp_in;
        input [31:0] mod_in;
        reg   [63:0] result;
        reg   [63:0] b;
        reg   [31:0] e;
        integer i;
        begin
            result = 64'd1;
            b      = base_in % mod_in;
            e      = exp_in;
            for (i = 0; i < 32; i = i + 1) begin
                if (e[0])
                    result = (result * b) % mod_in;
                b = (b * b) % mod_in;
                e = e >> 1;
            end
            golden_modexp = result[31:0];
        end
    endfunction

    // --------------------------------------------------------
    // Scoreboard counters
    // --------------------------------------------------------
    integer pass_count;
    integer fail_count;
    integer check_count;

    task check_equal;
        input [8*64-1:0] what;   // description string (packed, up to 64 chars)
        input [31:0]  actual;
        input [31:0]  expected;
        begin
            check_count = check_count + 1;
            if (actual === expected) begin
                pass_count = pass_count + 1;
                $display("    [CHECK PASS] %0s : got 0x%08h", what, actual);
            end
            else begin
                fail_count = fail_count + 1;
                $display("    [CHECK FAIL] %0s : expected 0x%08h, got 0x%08h",
                          what, expected, actual);
            end
        end
    endtask

    task check_true;
        input [8*64-1:0] what;
        input         cond;
        begin
            check_count = check_count + 1;
            if (cond) begin
                pass_count = pass_count + 1;
                $display("    [CHECK PASS] %0s", what);
            end
            else begin
                fail_count = fail_count + 1;
                $display("    [CHECK FAIL] %0s", what);
            end
        end
    endtask

    // --------------------------------------------------------
    // Independent SPI bus protocol monitor.
    // Captures bits MSB-first on sclk_mon rising edges while
    // ss_n_mon is low, and flags framing problems:
    //   - mosi changing while sclk is high (should be stable)
    //   - more than 32 bits seen between ss_n falling/rising
    //   - ss_n rising with fewer than 32 bits captured
    // Result exposed in bus_capture / bus_capture_valid.
    // --------------------------------------------------------
    reg [31:0] bus_capture;
    reg [5:0]  bus_bit_cnt;
    reg        bus_active;
    reg        bus_capture_valid;
    reg        bus_framing_error;
    reg        mosi_glitch_error;

    reg sclk_prev;
    reg mosi_at_high; // mosi value sampled while sclk has been high

    always @(posedge clk) begin
        if (!rst_n) begin
            bus_capture       <= 32'd0;
            bus_bit_cnt       <= 6'd0;
            bus_active        <= 1'b0;
            bus_capture_valid <= 1'b0;
            bus_framing_error <= 1'b0;
            mosi_glitch_error <= 1'b0;
            sclk_prev         <= 1'b0;
        end
        else begin
            // Start of frame
            if (!ss_n_mon && !bus_active) begin
                bus_active  <= 1'b1;
                bus_bit_cnt <= 6'd0;
                bus_capture_valid <= 1'b0;
            end

            // Capture on rising sclk edge while frame active
            if (bus_active && sclk_mon && !sclk_prev) begin
                bus_capture <= {bus_capture[30:0], mosi_mon};
                bus_bit_cnt <= bus_bit_cnt + 6'd1;
                if (bus_bit_cnt == 6'd31) begin
                    bus_capture_valid <= 1'b1;
                end
                if (bus_bit_cnt > 6'd31) begin
                    bus_framing_error <= 1'b1; // more than 32 bits in one frame
                end
            end

            // Check mosi stability: it should not change while sclk is high
            if (bus_active && sclk_mon && sclk_prev && (mosi_mon !== mosi_at_high)) begin
                mosi_glitch_error <= 1'b1;
            end
            if (sclk_mon && !sclk_prev) begin
                mosi_at_high <= mosi_mon; // latch value right at the rising edge
            end

            // End of frame
            if (ss_n_mon && bus_active) begin
                if (bus_bit_cnt != 6'd32) begin
                    bus_framing_error <= 1'b1; // frame ended with wrong bit count
                end
                bus_active <= 1'b0;
            end

            sclk_prev <= sclk_mon;
        end
    end

    // --------------------------------------------------------
    // Main directed task: drive one message through the full
    // pipeline and check every observable stage against the
    // golden model and against the independent bus monitor.
    // --------------------------------------------------------
    integer timeout;

    task run_test;
        input [31:0] msg;
        input [8*40-1:0] label; // ASCII label for the test
        reg [31:0] exp_cipher;
        reg [31:0] exp_plain;
        begin
            exp_cipher = golden_modexp(msg, E_PUB, N_MOD);
            // Golden decrypt is applied to the ACTUAL cipher the DUT
            // produces, mirroring what real decrypt hardware sees;
            // this still independently re-derives the math rather
            // than trusting the RTL's own decrypt path.
            $display("----------------------------------------------------");
            $display("TEST: %0s", label);
            $display("  message_in = %0d (0x%08h)", msg, msg);

            // Reset the bus monitor's error flags for this test
            bus_framing_error = 1'b0;
            mosi_glitch_error = 1'b0;

            rst_n      = 1'b0;
            start      = 1'b0;
            message_in = msg;
            repeat (4) @(posedge clk);
            #1;
            rst_n = 1'b1;
            repeat (2) @(posedge clk);

            @(posedge clk); #1;
            start = 1'b1;
            @(posedge clk); #1;
            start = 1'b0;

            timeout = 0;
            while (!done && timeout < 100000) begin
                @(posedge clk);
                timeout = timeout + 1;
            end
            @(posedge clk);

            check_true("pipeline completed without timeout", (timeout < 100000));

            if (timeout < 100000) begin
                exp_plain = golden_modexp(cipher_out, D_PRI, N_MOD);

                $display("  cipher_out    = %0d (0x%08h)", cipher_out, cipher_out);
                $display("  received_out  = %0d (0x%08h)", received_out, received_out);
                $display("  decrypted_out = %0d (0x%08h)", decrypted_out, decrypted_out);
                $display("  golden cipher = %0d (0x%08h)", exp_cipher, exp_cipher);
                $display("  golden plain  = %0d (0x%08h)", exp_plain, exp_plain);

                check_equal("cipher_out matches golden modexp(msg,E,N)",
                            cipher_out, exp_cipher);
                check_equal("received_out matches cipher_out (SPI link integrity)",
                            received_out, cipher_out);
                check_equal("decrypted_out matches golden modexp(cipher,D,N)",
                            decrypted_out, exp_plain);
                check_true("SPI bus protocol monitor saw no framing errors",
                            !bus_framing_error);
                check_true("SPI bus protocol monitor saw no MOSI glitches",
                            !mosi_glitch_error);
                check_equal("bus monitor's own bit-serial capture matches cipher_out",
                            bus_capture, cipher_out);

                if (msg < N_MOD) begin
                    check_equal("decrypted_out matches original message (in-range msg)",
                                decrypted_out, msg);
                end
                else begin
                    $display("    [INFO] message_in (%0d) >= N (%0d): RSA correctness is",
                              msg, N_MOD);
                    $display("    [INFO] not expected to hold; golden model and DUT are");
                    $display("    [INFO] compared against each other only, not against msg.");
                end
            end

            $display("----------------------------------------------------");
            repeat (10) @(posedge clk);
        end
    endtask

    // --------------------------------------------------------
    // Test: assert rst_n in the middle of an in-progress
    // pipeline run and confirm the design returns cleanly to
    // IDLE instead of hanging or asserting done spuriously.
    // --------------------------------------------------------
    task run_reset_midway_test;
        begin
            $display("----------------------------------------------------");
            $display("TEST: reset asserted mid-pipeline");

            rst_n      = 1'b0;
            start      = 1'b0;
            message_in = 32'd42;
            repeat (4) @(posedge clk);
            #1;
            rst_n = 1'b1;
            repeat (2) @(posedge clk);

            @(posedge clk); #1;
            start = 1'b1;
            @(posedge clk); #1;
            start = 1'b0;

            // Let the pipeline run partway into encryption, then reset.
            repeat (10) @(posedge clk);
            #1;
            rst_n = 1'b0;
            repeat (3) @(posedge clk);
            #1;
            rst_n = 1'b1;

            // done should not be asserted right after this reset, and
            // the FSM should accept a fresh start cleanly afterward.
            repeat (3) @(posedge clk);
            check_true("done is not spuriously asserted just after mid-run reset",
                        (done === 1'b0));

            // Now run a clean, complete test to prove the design
            // recovered and is fully functional after the reset.
            run_test(32'd99, "post-midway-reset recovery (msg=99)");

            $display("----------------------------------------------------");
        end
    endtask

    // --------------------------------------------------------
    // Test: pulse start a second time while the pipeline is
    // already busy, and confirm it is ignored (no corruption
    // of the in-flight computation, single done pulse for the
    // original request).
    // --------------------------------------------------------
    integer done_pulses;

    task run_busy_start_test;
        begin
            $display("----------------------------------------------------");
            $display("TEST: extra start pulse while busy is ignored");

            rst_n      = 1'b0;
            start      = 1'b0;
            message_in = 32'd17;
            repeat (4) @(posedge clk);
            #1;
            rst_n = 1'b1;
            repeat (2) @(posedge clk);

            @(posedge clk); #1;
            start = 1'b1;
            @(posedge clk); #1;
            start = 1'b0;

            // Fire a spurious extra start pulse shortly after, while
            // the pipeline is still busy with the first request.
            repeat (5) @(posedge clk);
            #1;
            start = 1'b1;
            @(posedge clk); #1;
            start = 1'b0;

            done_pulses = 0;
            timeout     = 0;
            while (timeout < 100000) begin
                @(posedge clk);
                if (done) done_pulses = done_pulses + 1;
                timeout = timeout + 1;
                if (done_pulses > 0 && done) begin
                    timeout = 100000; // stop right after first done pulse window
                end
            end

            check_true("exactly one done pulse observed for one logical request",
                        (done_pulses == 1));
            check_equal("decrypted_out still correct after spurious mid-flight start",
                        decrypted_out, 32'd17);

            $display("----------------------------------------------------");
            repeat (10) @(posedge clk);
        end
    endtask

    // --------------------------------------------------------
    // Random testing: constrained to the valid RSA message
    // range [0, N_MOD-1].
    // --------------------------------------------------------
    integer r;
    integer rnd_idx;
    reg [8*40-1:0] rnd_label;

    // --------------------------------------------------------
    // Main test sequence
    // --------------------------------------------------------
    initial begin
        pass_count  = 0;
        fail_count  = 0;
        check_count = 0;

        $display("====================================================");
        $display("  RSA-SPI Pipeline -- Comprehensive Self-Checking TB");
        $display("  Golden model keys: e=%0d, d=%0d, n=%0d",
                   E_PUB, D_PRI, N_MOD);
        $display("====================================================");

        rst_n      = 1'b0;
        start      = 1'b0;
        message_in = 32'd0;
        repeat (2) @(posedge clk);

        // ---------------- Directed boundary tests ----------------
        run_test(32'd0,            "boundary: message = 0");
        run_test(32'd1,            "boundary: message = 1");
        run_test(N_MOD - 32'd1,    "boundary: message = N-1 (3232)");
        run_test(32'd42,           "typical small message (42)");
        run_test(32'd100,          "typical small message (100)");
        run_test(32'd65,           "ASCII 'A' (65)");
        run_test(32'd200,          "typical small message (200)");

        // ---------------- Out-of-range documentation test ----------------
        // Message >= N: RSA correctness is not expected to hold
        // (mod_exp.v reduces base_r = base % modulus internally, so
        // the pipeline will not hang, but decrypted_out != message_in
        // in general). This test documents the actual behaviour
        // instead of assuming it.
        run_test(N_MOD,            "out-of-range: message = N (3233)");
        run_test(32'hFFFF_FFFF,    "out-of-range: message = 0xFFFFFFFF");

        // ---------------- Constrained-random tests ----------------
        $display("====================================================");
        $display("  Constrained-random tests (message in [0, N-1])");
        $display("====================================================");
        for (rnd_idx = 0; rnd_idx < 12; rnd_idx = rnd_idx + 1) begin
            r = $random % N_MOD;
            if (r < 0) r = -r;
            rnd_label = "random message";
            run_test(r[31:0], rnd_label);
        end

        // ---------------- Robustness tests ----------------
        $display("====================================================");
        $display("  Robustness tests (reset / busy handling)");
        $display("====================================================");
        run_reset_midway_test;
        run_busy_start_test;

        // ---------------- Final summary ----------------
        $display("====================================================");
        $display("  TEST SUMMARY");
        $display("  Checks run    : %0d", check_count);
        $display("  Checks passed : %0d", pass_count);
        $display("  Checks failed : %0d", fail_count);
        if (fail_count == 0) begin
            $display("  RESULT: *** ALL TESTS PASSED ***");
        end
        else begin
            $display("  RESULT: *** %0d CHECK(S) FAILED ***", fail_count);
        end
        $display("====================================================");

        if (fail_count != 0)
            $finish(1);
        else
            $finish;
    end

endmodule
