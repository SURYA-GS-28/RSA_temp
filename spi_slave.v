// ============================================================
// File        : spi_slave.v
// Description : SPI Slave Receiver
//               Receives 32-bit data serially via MOSI
//               Samples MOSI on rising edge of SCLK (Mode 0)
//               Reconstructs 32-bit parallel word.
//               bit_cnt counts 1..32: done when bit_cnt reaches 32.
// Author      : RSA-SPI Project
// ============================================================

module spi_slave (
    input  wire        clk,       // System clock
    input  wire        rst_n,     // Active-low synchronous reset
    input  wire        sclk,      // SPI clock from master
    input  wire        mosi,      // Serial data input
    input  wire        ss_n,      // Slave select (active low)
    output reg  [31:0] data_out,  // Reconstructed 32-bit output
    output reg         done       // High one cycle when word received
);

    // --------------------------------------------------------
    // Double-flop synchroniser for SCLK rising edge detection
    // --------------------------------------------------------
    reg sclk_d1, sclk_d2;

    always @(posedge clk) begin
        if (!rst_n) begin
            sclk_d1 <= 1'b0;
            sclk_d2 <= 1'b0;
        end else begin
            sclk_d1 <= sclk;
            sclk_d2 <= sclk_d1;
        end
    end

    // Rising edge: previous=0, current=1
    wire sclk_rising = sclk_d1 & ~sclk_d2;

    // --------------------------------------------------------
    // Internal shift register and counters
    // --------------------------------------------------------
    reg [31:0] shift_reg;   // Incoming bits assembled here
    reg [5:0]  bit_cnt;     // Number of bits received so far (1..32)
    reg        active;      // Slave is actively receiving

    // --------------------------------------------------------
    // SPI Slave Reception: sample on rising SCLK while ss_n=0
    // --------------------------------------------------------
    always @(posedge clk) begin
        if (!rst_n) begin
            shift_reg <= 32'd0;
            data_out  <= 32'd0;
            done      <= 1'b0;
            bit_cnt   <= 6'd0;
            active    <= 1'b0;
        end
        else begin
            done <= 1'b0; // Default: done is low

            // Detect ss_n going low: start of transfer
            if (!ss_n && !active) begin
                bit_cnt   <= 6'd0;
                shift_reg <= 32'd0;
                active    <= 1'b1;
            end

            // Sample MOSI on every rising SCLK edge while active
            if (active && sclk_rising) begin
                // Shift in new bit at LSB; will be MSB-first when reversed
                shift_reg <= {shift_reg[30:0], mosi};
                bit_cnt   <= bit_cnt + 6'd1;

                // After 32nd bit: latch data and signal done
                if (bit_cnt == 6'd31) begin
                    data_out <= {shift_reg[30:0], mosi}; // Final assembled word
                    done     <= 1'b1;
                    active   <= 1'b0;
                end
            end

            // Abort if ss_n goes high before all bits received
            // (only abort if not already done on same cycle)
            if (ss_n && active && bit_cnt < 6'd31) begin
                active <= 1'b0;
            end
        end
    end

endmodule

