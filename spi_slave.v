`timescale 1ns/1ps
// ============================================================
// File        : spi_slave_ext.v
// Description : External-facing full-duplex SPI slave (Mode 0:
//               CPOL=0, CPHA=0). Master drives SCLK; this slave
//               samples MOSI on SCLK rising edge and shifts
//               MISO out on SCLK falling edge.
//
//               Two independent 32-bit SPI transactions share
//               this hardware:
//                 1) Master -> Slave : write message_in (RX)
//                 2) Master <- Slave : read decrypted result (TX)
//               SS_N low frames exactly one 32-bit transaction;
//               going high again re-arms both counters.
//
//               rx_done / tx_done are single-cycle pulses in the
//               `clk` domain, synchronized from the sclk_ext/
//               ss_n_ext domain via 2-flop synchronizers, since
//               the external SPI clock is asynchronous to the
//               system clock.
// Author      : RSA-SPI Project
// ============================================================
module spi_slave_ext (
    // External SPI pins (driven by external master)
    input  wire        sclk_ext,
    input  wire        mosi_ext,
    output reg         miso_ext,
    input  wire        ss_n_ext,     // active low

    // System-clock domain
    input  wire        clk,
    input  wire        rst_n,        // active-low async reset

    input  wire [31:0] tx_data,      // loaded into shift reg while deselected
    output reg  [31:0] rx_data,      // captured word once RX transaction completes
    output reg         rx_done,      // 1-cycle pulse (clk domain)
    output reg         tx_done       // 1-cycle pulse (clk domain)
);

    // --------------------------------------------------------
    // RX path: sample MOSI on SCLK rising edge.
    // Single driver for rx_shift / rx_bit_cnt / rx_data / rx_done_lvl.
    // --------------------------------------------------------
    reg [31:0] rx_shift;
    reg [5:0]  rx_bit_cnt;
    reg        rx_done_lvl;

    always @(posedge sclk_ext or posedge ss_n_ext) begin
        if (ss_n_ext) begin
            rx_bit_cnt  <= 6'd0;
            rx_done_lvl <= 1'b0;
        end else begin
            rx_shift   <= {rx_shift[30:0], mosi_ext};
            rx_bit_cnt <= rx_bit_cnt + 6'd1;
            if (rx_bit_cnt == 6'd31) begin
                rx_data     <= {rx_shift[30:0], mosi_ext}; // word just completed
                rx_done_lvl <= 1'b1;
            end
        end
    end

    // --------------------------------------------------------
    // TX path: shift MISO out on SCLK falling edge.
    // Single driver for tx_shift / tx_bit_cnt / miso_ext / tx_done_lvl.
    // tx_shift is (re)loaded with tx_data every time SS_N goes idle,
    // so it always holds the latest result when the next frame starts.
    // --------------------------------------------------------
    reg [31:0] tx_shift;
    reg [5:0]  tx_bit_cnt;
    reg        tx_done_lvl;

    always @(negedge sclk_ext or posedge ss_n_ext) begin
        if (ss_n_ext) begin
            tx_shift    <= tx_data;
            tx_bit_cnt  <= 6'd0;
            miso_ext    <= 1'b0;
            tx_done_lvl <= 1'b0;
        end else begin
            miso_ext   <= tx_shift[31];
            tx_shift   <= {tx_shift[30:0], 1'b0};
            tx_bit_cnt <= tx_bit_cnt + 6'd1;
            if (tx_bit_cnt == 6'd31)
                tx_done_lvl <= 1'b1;
        end
    end

    // --------------------------------------------------------
    // 2-flop synchronizers: rx_done_lvl / tx_done_lvl live in the
    // sclk_ext/ss_n_ext domain. Bring them into `clk` domain and
    // rising-edge-detect to produce clean 1-cycle pulses.
    // --------------------------------------------------------
    reg rx_meta, rx_sync, rx_sync_d;
    reg tx_meta, tx_sync, tx_sync_d;

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            rx_meta   <= 1'b0; rx_sync   <= 1'b0; rx_sync_d <= 1'b0;
            tx_meta   <= 1'b0; tx_sync   <= 1'b0; tx_sync_d <= 1'b0;
            rx_done   <= 1'b0;
            tx_done   <= 1'b0;
        end else begin
            rx_meta   <= rx_done_lvl;
            rx_sync   <= rx_meta;
            rx_sync_d <= rx_sync;
            rx_done   <= rx_sync & ~rx_sync_d;

            tx_meta   <= tx_done_lvl;
            tx_sync   <= tx_meta;
            tx_sync_d <= tx_sync;
            tx_done   <= tx_sync & ~tx_sync_d;
        end
    end

endmodule
