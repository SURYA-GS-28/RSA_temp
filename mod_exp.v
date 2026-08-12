// ============================================================
// File        : mod_exp.v
// Description : Modular Exponentiation using Square-and-Multiply
//               Computes result = (base ^ exp) mod modulus
//               Uses 64-bit intermediates to avoid overflow.
//               Iterative, synthesisable (replace * with IP for ASIC).
// Author      : RSA-SPI Project
// ============================================================

module mod_exp (
    input  wire        clk,        // System clock
    input  wire        rst_n,      // Active-low synchronous reset
    input  wire        start,      // Pulse high to begin computation
    input  wire [31:0] base,       // Base value (message or cipher)
    input  wire [31:0] exp,        // Exponent (e or d)
    input  wire [31:0] modulus,    // RSA modulus n
    output reg  [31:0] result,     // Final: base^exp mod modulus
    output reg         done        // Pulses high one cycle when complete
);

    // --------------------------------------------------------
    // 64-bit registers to prevent multiplication overflow
    // max intermediate: (n-1)^2 = 3232^2 = 10,445,824 < 2^24, fits in 64-bit
    // --------------------------------------------------------
    reg [63:0] acc;         // Accumulator: starts at 1, result = acc
    reg [63:0] base_r;      // Current base (squared each round)
    reg [31:0] exp_r;       // Remaining exponent bits
    reg [5:0]  bit_cnt;     // Bit index counter (0 to 31)
    reg        busy;        // Computation in progress

    always @(posedge clk) begin
        if (!rst_n) begin
            result  <= 32'd0;
            done    <= 1'b0;
            busy    <= 1'b0;
            acc     <= 64'd1;
            base_r  <= 64'd0;
            exp_r   <= 32'd0;
            bit_cnt <= 6'd0;
        end
        else begin
            done <= 1'b0; // Default: not done

            if (start && !busy) begin
                // Latch inputs, initialise accumulator to 1
                base_r  <= base % modulus;
                exp_r   <= exp;
                acc     <= 64'd1;
                bit_cnt <= 6'd0;
                busy    <= 1'b1;
            end
            else if (busy) begin
                if (bit_cnt < 6'd32) begin
                    // If current exponent bit is 1: acc = (acc * base_r) mod n
                    if (exp_r[0])
                        acc <= (acc * base_r) % modulus;
                    // Square the base for the next bit position
                    base_r  <= (base_r * base_r) % modulus;
                    // Shift exponent right (next bit becomes LSB)
                    exp_r   <= exp_r >> 1;
                    bit_cnt <= bit_cnt + 6'd1;
                end
                else begin
                    // All 32 bits processed
                    result <= acc[31:0];
                    done   <= 1'b1;
                    busy   <= 1'b0;
                end
            end
        end
    end

endmodule

