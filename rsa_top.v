`timescale 1ns/1ps
// ============================================================
// File        : top_module.v
// Description : Top-Level Integration Module (SPI-framed I/O)
//               External world talks to this module ONLY over
//               SPI (slave role). A mode-select pin picks between
//               two single-operation paths (no more automatic
//               encrypt-then-decrypt round trip):
//                 mode_sel_ext = 0 -> ENCRYPT: message_reg -> rsa_encrypt -> result
//                 mode_sel_ext = 1 -> DECRYPT: message_reg -> rsa_decrypt -> result
//               mode_sel_ext is treated as a synchronized level
//               select (toggle switch), sampled once per
//               transaction at S_LATCH_MSG so a mode change
//               mid-operation can't corrupt an in-flight result.
//
//               External protocol (two separate SPI transactions,
//               same SS_N/SCLK/MOSI/MISO lines, Mode 0):
//                 1) Master writes 32-bit message_in via MOSI.
//                    -> rx_done_ext pulses, pipeline begins.
//                 2) Master polls result_ready; once high, does a
//                    second 32-bit transaction to clock the
//                    result out via MISO.
//                    -> tx_done_ext pulses, result_ready clears,
//                       done pulses for one cycle.
//
// FSM States:
//   S_IDLE        : Wait for external message write (rx_done_ext)
//   S_LATCH_MSG   : Latch received word + sampled mode into registers
//   S_ENC_START   : Pulse enc_start for one cycle (ENCRYPT mode only)
//   S_ENC_WAIT    : Wait for RSA encryption done
//   S_DEC_START   : Pulse dec_start for one cycle (DECRYPT mode only)
//   S_DEC_WAIT    : Wait for RSA decryption done
//   S_LOAD_TX     : Load result (mode-dependent) into SPI tx buffer, raise result_ready
//   S_WAIT_READ   : Wait for external master to read result out (tx_done_ext)
//   S_DONE        : Assert done for one cycle, return to idle
// Author      : RSA-SPI Project
// ============================================================
module top_module (
    input  wire        clk,            // System clock
    input  wire        rst_n,          // Active-low async reset

    // External SPI slave interface - ALL input/output now via SPI
    input  wire        sclk_ext,       // External SPI clock (from master)
    input  wire        mosi_ext,       // External SPI data in (message write)
    output wire        miso_ext,       // External SPI data out (result read)
    input  wire        ss_n_ext,       // External SPI slave select, active low

    input  wire        mode_sel_ext,   // Mode switch: 0=ENCRYPT, 1=DECRYPT (async, synchronized below)

    output reg         result_ready,   // High once result is ready to read
    output reg         busy,           // High while pipeline is running
    output reg         done            // High one cycle when full round-trip complete
);

    // --------------------------------------------------------
    // FSM State Encoding
    // --------------------------------------------------------
    localparam [3:0]
        S_IDLE      = 4'd0,
        S_LATCH_MSG = 4'd1,
        S_ENC_START = 4'd2,
        S_ENC_WAIT  = 4'd3,
        S_DEC_START = 4'd4,
        S_DEC_WAIT  = 4'd5,
        S_LOAD_TX   = 4'd6,
        S_WAIT_READ = 4'd7,
        S_DONE      = 4'd8;

    // Mode encoding
    localparam MODE_ENCRYPT = 1'b0;
    localparam MODE_DECRYPT = 1'b1;

    reg [3:0] state;
    reg       mode_reg;    // sampled mode for the current transaction

    // --------------------------------------------------------
    // 2-flop synchronizer for mode_sel_ext (async external switch)
    // --------------------------------------------------------
    reg mode_meta, mode_sync;
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            mode_meta <= 1'b0;
            mode_sync <= 1'b0;
        end else begin
            mode_meta <= mode_sel_ext;
            mode_sync <= mode_meta;
        end
    end

    // --------------------------------------------------------
    // External SPI slave (handles message-in write + result-out read)
    // --------------------------------------------------------
    wire [31:0] rx_data_ext;   // message received from external master
    wire        rx_done_ext;   // pulse: external write transaction complete
    wire        tx_done_ext;   // pulse: external read transaction complete
    reg  [31:0] tx_data_ext;   // result loaded here for external readback

    spi_slave_ext u_spi_ext (
        .sclk_ext (sclk_ext),
        .mosi_ext (mosi_ext),
        .miso_ext (miso_ext),
        .ss_n_ext (ss_n_ext),
        .clk      (clk),
        .rst_n    (rst_n),
        .tx_data  (tx_data_ext),
        .rx_data  (rx_data_ext),
        .rx_done  (rx_done_ext),
        .tx_done  (tx_done_ext)
    );

    // --------------------------------------------------------
    // Internal control signals - mode-dependent muxing, no
    // internal SPI hop
    // --------------------------------------------------------
    reg  [31:0] message_reg;     // latched external message (plaintext OR ciphertext, per mode)

    reg  enc_start;
    wire enc_done;
    wire [31:0] cipher_w;

    reg  dec_start;
    wire dec_done;
    wire [31:0] decrypted_w;

    // In DECRYPT mode, message_reg IS the ciphertext fed straight to rsa_decrypt.
    // In ENCRYPT mode, rsa_decrypt is unused; its input is don't-care.
    wire [31:0] dec_cipher_in = (mode_reg == MODE_DECRYPT) ? message_reg : cipher_w;

    // Result to send back out over SPI depends on which single op ran
    wire [31:0] result_w = (mode_reg == MODE_ENCRYPT) ? cipher_w : decrypted_w;

    // --------------------------------------------------------
    // RSA Encryption (runs only in ENCRYPT mode)
    // --------------------------------------------------------
    rsa_encrypt u_enc (
        .clk     (clk),
        .rst_n   (rst_n),
        .start   (enc_start),
        .message (message_reg),
        .cipher  (cipher_w),
        .done    (enc_done)
    );

    // --------------------------------------------------------
    // RSA Decryption (runs only in DECRYPT mode)
    // --------------------------------------------------------
    rsa_decrypt u_dec (
        .clk     (clk),
        .rst_n   (rst_n),
        .start   (dec_start),
        .cipher  (dec_cipher_in),
        .message (decrypted_w),
        .done    (dec_done)
    );

    // --------------------------------------------------------
    // Sequential FSM
    // --------------------------------------------------------
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            state        <= S_IDLE;
            mode_reg     <= MODE_ENCRYPT;
            enc_start    <= 1'b0;
            dec_start    <= 1'b0;
            done         <= 1'b0;
            result_ready <= 1'b0;
            busy         <= 1'b0;
            message_reg  <= 32'd0;
            tx_data_ext  <= 32'd0;
        end else begin
            // Defaults: pulses go low each cycle unless explicitly set
            enc_start <= 1'b0;
            dec_start <= 1'b0;
            done      <= 1'b0;

            case (state)
                // Wait for external master to write the message via SPI
                S_IDLE: begin
                    busy <= 1'b0;
                    if (rx_done_ext)
                        state <= S_LATCH_MSG;
                end

                S_LATCH_MSG: begin
                    busy        <= 1'b1;
                    message_reg <= rx_data_ext;
                    mode_reg    <= mode_sync;
                    if (mode_sync == MODE_ENCRYPT)
                        state <= S_ENC_START;
                    else
                        state <= S_DEC_START;
                end

                S_ENC_START: begin
                    enc_start <= 1'b1;
                    state     <= S_ENC_WAIT;
                end

                S_ENC_WAIT: begin
                    if (enc_done)
                        state <= S_LOAD_TX;
                end

                S_DEC_START: begin
                    dec_start <= 1'b1;
                    state     <= S_DEC_WAIT;
                end

                S_DEC_WAIT: begin
                    if (dec_done)
                        state <= S_LOAD_TX;
                end

                // Load result (cipher_w or decrypted_w, per mode) into SPI tx buffer
                S_LOAD_TX: begin
                    tx_data_ext  <= result_w;
                    result_ready <= 1'b1;
                    state        <= S_WAIT_READ;
                end

                // Wait for external master to clock the result out via SPI
                S_WAIT_READ: begin
                    if (tx_done_ext) begin
                        result_ready <= 1'b0;
                        state        <= S_DONE;
                    end
                end

                S_DONE: begin
                    done  <= 1'b1;
                    busy  <= 1'b0;
                    state <= S_IDLE;
                end

                default: state <= S_IDLE;
            endcase
        end
    end

endmodule
