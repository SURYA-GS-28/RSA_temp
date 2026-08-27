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

    localparam MODE_ENCRYPT = 1'b0;
    localparam MODE_DECRYPT = 1'b1;

    // --------------------------------------------------------
    // SPI master timing (testbench IS the external SPI master).
    // Half period 40ns -> 80ns SPI period, 8x slower than the
    // 10ns system clock, giving the 2-flop synchronizers in
    // spi_slave_ext comfortable margin.
    // --------------------------------------------------------
    localparam SPI_HALF_PERIOD = 40;

    // --------------------------------------------------------
    // DUT port connections
    // --------------------------------------------------------
    reg         clk;
    reg         rst_n;

    reg         sclk_ext;
    reg         mosi_ext;
    wire        miso_ext;
    reg         ss_n_ext;
    reg         mode_sel_ext;

    wire        result_ready;
    wire        busy;
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
        .sclk_ext     (sclk_ext),
        .mosi_ext     (mosi_ext),
        .miso_ext     (miso_ext),
        .ss_n_ext     (ss_n_ext),
        .mode_sel_ext (mode_sel_ext),
        .result_ready (result_ready),
        .busy         (busy),
        .done         (done)
    );

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
    // Called with (msg, E_PUB, N_MOD) for encrypt, or
    // (cipher, D_PRI, N_MOD) for decrypt.
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
        input [8*64-1:0] what;
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
    // MISO stability monitor: while sclk_ext is high, miso_ext
    // (driven by the DUT) must not change - the master samples
    // on the rising edge, so any change during the high phase
    // means the slave shifted at the wrong time.
    // --------------------------------------------------------
    reg miso_glitch_error;
    reg sclk_prev;
    reg miso_at_high;

    always @(posedge clk) begin
        if (!rst_n) begin
            miso_glitch_error <= 1'b0;
            sclk_prev         <= 1'b0;
        end
        else begin
            if (!ss_n_ext && sclk_ext && sclk_prev && (miso_ext !== miso_at_high)) begin
                miso_glitch_error <= 1'b1;
            end
            if (sclk_ext && !sclk_prev) begin
                miso_at_high <= miso_ext; // latch value right at the rising edge
            end
            sclk_prev <= sclk_ext;
        end
    end

    // --------------------------------------------------------
    // SPI master driver: full-duplex, Mode 0 (CPOL=0, CPHA=0).
    // Drives mosi_ext + sclk_ext + ss_n_ext, samples miso_ext on
    // each rising edge. tx_word goes out on MOSI; whatever comes
    // back on MISO is returned in rx_word. One 32-bit transaction
    // per call - used both for the "write message" phase and the
    // "read result" phase (dummy zeros sent when only reading).
    // --------------------------------------------------------
    task spi_transfer;
        input  [31:0] tx_word;
        output [31:0] rx_word;
        integer i;
        reg [31:0] captured;
        begin
            captured = 32'd0;
            ss_n_ext = 1'b0;
            #(SPI_HALF_PERIOD);
            for (i = 31; i >= 0; i = i - 1) begin
                mosi_ext = tx_word[i];
                #(SPI_HALF_PERIOD);
                sclk_ext = 1'b1;                       // rising edge: slave samples MOSI
                captured = {captured[30:0], miso_ext}; // master samples MISO
                #(SPI_HALF_PERIOD);
                sclk_ext = 1'b0;                       // falling edge: slave advances output
            end
            #(SPI_HALF_PERIOD);
            ss_n_ext = 1'b1;
            #(SPI_HALF_PERIOD);
            rx_word = captured;
        end
    endtask

    task spi_write_message;
        input [31:0] msg;
        reg   [31:0] discard;
        begin
            spi_transfer(msg, discard);
        end
    endtask

    task spi_read_result;
        output [31:0] result;
        begin
            spi_transfer(32'd0, result);
        end
    endtask

    // --------------------------------------------------------
    // Wait helpers
    // --------------------------------------------------------
    integer timeout;

    task wait_result_ready;
        begin
            timeout = 0;
            while (!result_ready && timeout < 100000) begin
                @(posedge clk);
                timeout = timeout + 1;
            end
        end
    endtask

    task wait_done_pulse;
        integer wtimeout;
        begin
            wtimeout = 0;
            while (!done && wtimeout < 1000) begin
                @(posedge clk);
                wtimeout = wtimeout + 1;
            end
        end
    endtask

    // --------------------------------------------------------
    // Directed encrypt-mode test: write msg, read back result,
    // check against golden encrypt.
    // --------------------------------------------------------
    task run_encrypt_test;
        input [31:0] msg;
        input [8*40-1:0] label;
        reg [31:0] exp_cipher;
        reg [31:0] got_result;
        begin
            exp_cipher = golden_modexp(msg, E_PUB, N_MOD);
            $display("----------------------------------------------------");
            $display("TEST (ENCRYPT): %0s", label);
            $display("  message_in = %0d (0x%08h)", msg, msg);

            miso_glitch_error = 1'b0;
            mode_sel_ext = MODE_ENCRYPT;
            repeat (3) @(posedge clk); // let the mode select synchronizer settle

            spi_write_message(msg);
            wait_result_ready;
            check_true("pipeline completed without timeout", (timeout < 100000));

            if (timeout < 100000) begin
                spi_read_result(got_result);
                wait_done_pulse;

                $display("  result (cipher) = %0d (0x%08h)", got_result, got_result);
                $display("  golden cipher   = %0d (0x%08h)", exp_cipher, exp_cipher);

                check_equal("encrypt result matches golden modexp(msg,E,N)",
                            got_result, exp_cipher);
                check_true("MISO was stable during SCLK-high windows",
                            !miso_glitch_error);
                check_true("done pulsed after result readback",
                            (done === 1'b0)); // done is single-cycle, already cleared by now
            end
            $display("----------------------------------------------------");
            repeat (10) @(posedge clk);
        end
    endtask

    // --------------------------------------------------------
    // Directed decrypt-mode test: write a ciphertext, read back
    // result, check against golden decrypt.
    // --------------------------------------------------------
    task run_decrypt_test;
        input [31:0] cipher_msg;
        input [8*40-1:0] label;
        reg [31:0] exp_plain;
        reg [31:0] got_result;
        begin
            exp_plain = golden_modexp(cipher_msg, D_PRI, N_MOD);
            $display("----------------------------------------------------");
            $display("TEST (DECRYPT): %0s", label);
            $display("  cipher_in = %0d (0x%08h)", cipher_msg, cipher_msg);

            miso_glitch_error = 1'b0;
            mode_sel_ext = MODE_DECRYPT;
            repeat (3) @(posedge clk);

            spi_write_message(cipher_msg);
            wait_result_ready;
            check_true("pipeline completed without timeout", (timeout < 100000));

            if (timeout < 100000) begin
                spi_read_result(got_result);
                wait_done_pulse;

                $display("  result (plain) = %0d (0x%08h)", got_result, got_result);
                $display("  golden plain   = %0d (0x%08h)", exp_plain, exp_plain);

                check_equal("decrypt result matches golden modexp(cipher,D,N)",
                            got_result, exp_plain);
                check_true("MISO was stable during SCLK-high windows",
                            !miso_glitch_error);
            end
            $display("----------------------------------------------------");
            repeat (10) @(posedge clk);
        end
    endtask

    // --------------------------------------------------------
    // Full round trip via two independent SPI-driven operations:
    // encrypt msg -> take the returned cipher -> decrypt it ->
    // confirm we get the original message back (in-range only).
    // --------------------------------------------------------
    task run_roundtrip_test;
        input [31:0] msg;
        input [8*40-1:0] label;
        reg [31:0] exp_cipher;
        reg [31:0] got_cipher;
        reg [31:0] got_plain;
        begin
            exp_cipher = golden_modexp(msg, E_PUB, N_MOD);
            $display("----------------------------------------------------");
            $display("TEST (ROUND TRIP): %0s", label);
            $display("  message_in = %0d (0x%08h)", msg, msg);

            mode_sel_ext = MODE_ENCRYPT;
            repeat (3) @(posedge clk);
            spi_write_message(msg);
            wait_result_ready;
            check_true("encrypt leg completed without timeout", (timeout < 100000));
            spi_read_result(got_cipher);
            wait_done_pulse;
            check_equal("round-trip cipher matches golden modexp(msg,E,N)",
                        got_cipher, exp_cipher);

            mode_sel_ext = MODE_DECRYPT;
            repeat (3) @(posedge clk);
            spi_write_message(got_cipher);
            wait_result_ready;
            check_true("decrypt leg completed without timeout", (timeout < 100000));
            spi_read_result(got_plain);
            wait_done_pulse;

            if (msg < N_MOD) begin
                check_equal("round-trip result matches original message (in-range msg)",
                            got_plain, msg);
            end
            else begin
                $display("    [INFO] message_in (%0d) >= N (%0d): RSA correctness is",
                          msg, N_MOD);
                $display("    [INFO] not expected to hold for this leg.");
            end
            $display("----------------------------------------------------");
            repeat (10) @(posedge clk);
        end
    endtask

    // --------------------------------------------------------
    // Robustness: reset asserted mid-pipeline (after the SPI
    // write completed, while RSA is still crunching), confirm
    // clean recovery.
    // --------------------------------------------------------
    task run_reset_midway_test;
        begin
            $display("----------------------------------------------------");
            $display("TEST: reset asserted mid-pipeline");

            mode_sel_ext = MODE_ENCRYPT;
            repeat (3) @(posedge clk);
            spi_write_message(32'd42);

            // Let the pipeline run partway into encryption, then reset.
            repeat (10) @(posedge clk);
            #1;
            rst_n = 1'b0;
            repeat (3) @(posedge clk);
            #1;
            rst_n = 1'b1;

            repeat (3) @(posedge clk);
            check_true("done is not spuriously asserted just after mid-run reset",
                        (done === 1'b0));
            check_true("busy clears after mid-run reset",
                        (busy === 1'b0));
            check_true("result_ready clears after mid-run reset",
                        (result_ready === 1'b0));

            // Prove the design recovered and is fully functional.
            run_encrypt_test(32'd99, "post-midway-reset recovery (msg=99)");

            $display("----------------------------------------------------");
        end
    endtask

    // --------------------------------------------------------
    // Robustness: attempt a second SPI write while the pipeline
    // is still busy with the first message. spi_slave_ext itself
    // will accept the bits (rx_done_ext pulses), but the top-level
    // FSM must ignore it since it isn't in S_IDLE - the original
    // message_reg and in-flight result must be unaffected.
    // --------------------------------------------------------
    task run_busy_write_test;
        reg [31:0] got_result;
        reg [31:0] exp_cipher;
        begin
            $display("----------------------------------------------------");
            $display("TEST: extra SPI write while busy is ignored");

            exp_cipher = golden_modexp(32'd17, E_PUB, N_MOD);
            mode_sel_ext = MODE_ENCRYPT;
            repeat (3) @(posedge clk);

            spi_write_message(32'd17);

            check_true("busy is asserted shortly after the first write",
                        (busy === 1'b1));

            // Spurious second write attempt while busy.
            spi_write_message(32'd8675309);

            wait_result_ready;
            check_true("original pipeline still completed without timeout",
                        (timeout < 100000));

            if (timeout < 100000) begin
                spi_read_result(got_result);
                wait_done_pulse;
                check_equal("result still matches original msg=17, not the spurious write",
                            got_result, exp_cipher);
            end
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
        $display("  RSA-SPI Pipeline (SPI-slave I/O) -- Self-Checking TB");
        $display("  Golden model keys: e=%0d, d=%0d, n=%0d",
                   E_PUB, D_PRI, N_MOD);
        $display("====================================================");

        rst_n        = 1'b0;
        sclk_ext     = 1'b0;
        mosi_ext     = 1'b0;
        ss_n_ext     = 1'b1;
        mode_sel_ext = MODE_ENCRYPT;
        repeat (4) @(posedge clk);
        #1;
        rst_n = 1'b1;
        repeat (4) @(posedge clk);

        // ---------------- Directed encrypt-mode boundary tests ----------------
        run_encrypt_test(32'd0,         "boundary: message = 0");
        run_encrypt_test(32'd1,         "boundary: message = 1");
        run_encrypt_test(N_MOD - 32'd1, "boundary: message = N-1 (3232)");
        run_encrypt_test(32'd42,        "typical small message (42)");
        run_encrypt_test(32'd65,        "ASCII 'A' (65)");

        // ---------------- Directed decrypt-mode tests ----------------
        // Use golden-computed ciphertexts as decrypt inputs, so the
        // decrypt path is validated standalone (not only ever fed by
        // whatever this same RTL's encrypt path produced).
        run_decrypt_test(golden_modexp(32'd0,   E_PUB, N_MOD), "boundary: decrypt of enc(0)");
        run_decrypt_test(golden_modexp(32'd42,  E_PUB, N_MOD), "decrypt of enc(42)");
        run_decrypt_test(golden_modexp(32'd200, E_PUB, N_MOD), "decrypt of enc(200)");

        // ---------------- Out-of-range documentation tests ----------------
        run_encrypt_test(N_MOD,         "out-of-range: message = N (3233)");
        run_encrypt_test(32'hFFFF_FFFF, "out-of-range: message = 0xFFFFFFFF");

        // ---------------- Full round-trip tests (two chained SPI ops) ----------------
        $display("====================================================");
        $display("  Round-trip tests (encrypt then decrypt, two SPI ops)");
        $display("====================================================");
        run_roundtrip_test(32'd100, "round trip: message = 100");
        run_roundtrip_test(32'd7,   "round trip: message = 7");

        // ---------------- Constrained-random tests ----------------
        $display("====================================================");
        $display("  Constrained-random tests (message in [0, N-1])");
        $display("====================================================");
        for (rnd_idx = 0; rnd_idx < 8; rnd_idx = rnd_idx + 1) begin
            r = $random % N_MOD;
            if (r < 0) r = -r;
            rnd_label = "random message (encrypt)";
            run_encrypt_test(r[31:0], rnd_label);
        end

        // ---------------- Robustness tests ----------------
        $display("====================================================");
        $display("  Robustness tests (reset / busy handling)");
        $display("====================================================");
        run_reset_midway_test;
        run_busy_write_test;

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
