// ============================================================
// File        : spi_master.v
// Description : SPI Master Transmitter
//               Transmits 32-bit data serially via MOSI, MSB first.
//               SPI Mode 0 (CPOL=0, CPHA=0):
//                 - SCLK idle low
//                 - Data changes on falling edge
//                 - Slave samples on rising edge
// Clock divider: SCLK period = 2 * CLK_DIV system clocks
// Author      : RSA-SPI Project
// ============================================================

module spi_master #(
    parameter CLK_DIV = 4   // SCLK half-period in system clocks
) (
    input  wire        clk,       // System clock
    input  wire        rst_n,     // Active-low synchronous reset
    input  wire        start,     // Pulse high to begin transmission
    input  wire [31:0] data_in,   // 32-bit data to transmit (MSB first)
    output reg         sclk,      // SPI clock
    output reg         mosi,      // Master Out Slave In
    output reg         ss_n,      // Slave Select (active low)
    output reg         done       // Pulses high one cycle after last bit
);

    // --------------------------------------------------------
    // State machine: IDLE, ACTIVE
    // --------------------------------------------------------
    localparam ST_IDLE   = 1'b0;
    localparam ST_ACTIVE = 1'b1;
    reg state;

    reg [31:0] shift_reg;   // Holds bits to transmit
    reg [5:0]  bit_cnt;     // Counts bits sent: increments 0->31, done at 32
    reg [5:0]  clk_cnt;     // Clock divider counter
    reg        sclk_en;     // Internal SCLK before gating

    // --------------------------------------------------------
    // SPI Master: runs at system clock, generates SCLK via divider
    // --------------------------------------------------------
    always @(posedge clk) begin
        if (!rst_n) begin
            state     <= ST_IDLE;
            sclk      <= 1'b0;
            mosi      <= 1'b0;
            ss_n      <= 1'b1;
            done      <= 1'b0;
            shift_reg <= 32'd0;
            bit_cnt   <= 6'd0;
            clk_cnt   <= 6'd0;
            sclk_en   <= 1'b0;
        end
        else begin
            done <= 1'b0; // Default

            case (state)
                ST_IDLE: begin
                    sclk <= 1'b0;
                    if (start) begin
                        // Latch data, assert SS, pre-drive MSB
                        shift_reg <= data_in;
                        bit_cnt   <= 6'd0;
                        clk_cnt   <= 6'd0;
                        ss_n      <= 1'b0;        // Assert slave select
                        mosi      <= data_in[31]; // Drive MSB before first clock
                        sclk      <= 1'b0;
                        sclk_en   <= 1'b0;
                        state     <= ST_ACTIVE;
                    end
                end

                ST_ACTIVE: begin
                    // ---- Clock divider ----
                    if (clk_cnt < CLK_DIV - 1) begin
                        clk_cnt <= clk_cnt + 6'd1;
                        // No SCLK toggle yet
                    end
                    else begin
                        clk_cnt <= 6'd0;
                        sclk_en <= ~sclk_en; // Toggle internal SCLK

                        if (!sclk_en) begin
                            // ---- Rising edge of SCLK ----
                            sclk <= 1'b1; // Drive SCLK high (slave samples here)
                            // MOSI already stable; do nothing to data
                        end
                        else begin
                            // ---- Falling edge of SCLK ----
                            sclk <= 1'b0; // Drive SCLK low

                            if (bit_cnt < 6'd31) begin
                                // Shift out next bit on falling edge
                                shift_reg <= shift_reg << 1;
                                mosi      <= shift_reg[30]; // bit 30 after shifting becomes MSB
                                bit_cnt   <= bit_cnt + 6'd1;
                            end
                            else begin
                                // ---- All 32 bits transmitted ----
                                ss_n  <= 1'b1;  // Deassert slave select
                                mosi  <= 1'b0;  // MOSI idle
                                done  <= 1'b1;  // Signal done
                                state <= ST_IDLE;
                            end
                        end
                    end
                end

                default: state <= ST_IDLE;
            endcase
        end
    end

endmodule

