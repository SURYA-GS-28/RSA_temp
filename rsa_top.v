// ============================================================
// File        : top_module.v
// Description : Top-Level Integration Module
//               Connects: RSA Encrypt -> SPI Master -> SPI Slave
//                         -> RSA Decrypt
//               FSM Controls sequencing with registered pulses.
// FSM States:
//   S_IDLE      : Wait for start
//   S_ENC_START : Pulse enc_start for one cycle
//   S_ENC_WAIT  : Wait for RSA encryption done
//   S_SPI_START : Pulse spi_start for one cycle
//   S_SPI_WAIT  : Wait for SPI transfer done
//   S_DEC_START : Pulse dec_start for one cycle
//   S_DEC_WAIT  : Wait for RSA decryption done
//   S_DONE      : Assert done for one cycle, return to idle
// Author      : RSA-SPI Project
// ============================================================

module top_module (
    input  wire        clk,            // System clock
    input  wire        rst_n,          // Active-high synchronous reset
    input  wire        start,          // Initiate full pipeline
    input  wire [31:0] message_in,     // 32-bit user message
    output wire [31:0] cipher_out,     // Encrypted data (monitoring)
    output wire [31:0] received_out,   // SPI slave received data (monitoring)
    output wire [31:0] decrypted_out,  // Final decrypted message
    output reg         done            // High one cycle when pipeline complete
);

    // --------------------------------------------------------
    // FSM State Encoding
    // --------------------------------------------------------
    localparam [3:0]
        S_IDLE      = 4'd0,
        S_ENC_START = 4'd1,
        S_ENC_WAIT  = 4'd2,
        S_SPI_START = 4'd3,
        S_SPI_WAIT  = 4'd4,
        S_DEC_START = 4'd5,
        S_DEC_WAIT  = 4'd6,
        S_DONE      = 4'd7;

    reg [3:0] state;

    // --------------------------------------------------------
    // Internal control signals
    // --------------------------------------------------------
    reg  enc_start;               // One-cycle pulse to start RSA encrypt
    wire enc_done;                // RSA encrypt completed
    wire [31:0] cipher_w;         // Ciphertext output

    reg  spi_start;               // One-cycle pulse to start SPI transfer
    wire spi_done;                // SPI master done
    wire sclk_w, mosi_w, ss_n_w; // SPI bus

    wire slave_done;              // SPI slave received complete word
    wire [31:0] received_w;       // Received data from SPI slave

    reg  dec_start;               // One-cycle pulse to start RSA decrypt
    wire dec_done;                // RSA decrypt completed
    wire [31:0] decrypted_w;      // Decrypted output

    // Connect to output ports
    assign cipher_out    = cipher_w;
    assign received_out  = received_w;
    assign decrypted_out = decrypted_w;

    // --------------------------------------------------------
    // RSA Encryption
    // --------------------------------------------------------
    rsa_encrypt u_enc (
        .clk     (clk),
        .rst_n   (rst_n),
        .start   (enc_start),
        .message (message_in),
        .cipher  (cipher_w),
        .done    (enc_done)
    );

    // --------------------------------------------------------
    // SPI Master (CLK_DIV=4 => SCLK period = 8 sys clocks)
    // --------------------------------------------------------
    spi_master #(.CLK_DIV(4)) u_spi_m (
        .clk     (clk),
        .rst_n   (rst_n),
        .start   (spi_start),
        .data_in (cipher_w),
        .sclk    (sclk_w),
        .mosi    (mosi_w),
        .ss_n    (ss_n_w),
        .done    (spi_done)
    );

    // --------------------------------------------------------
    // SPI Slave
    // --------------------------------------------------------
    spi_slave u_spi_s (
        .clk      (clk),
        .rst_n    (rst_n),
        .sclk     (sclk_w),
        .mosi     (mosi_w),
        .ss_n     (ss_n_w),
        .data_out (received_w),
        .done     (slave_done)
    );

    // --------------------------------------------------------
    // RSA Decryption
    // --------------------------------------------------------
    rsa_decrypt u_dec (
        .clk     (clk),
        .rst_n   (rst_n),
        .start   (dec_start),
        .cipher  (received_w),
        .message (decrypted_w),
        .done    (dec_done)
    );

    // --------------------------------------------------------
    // Sequential FSM with registered one-cycle pulse outputs
    // --------------------------------------------------------
    always @(posedge clk) begin
        if (rst_n) begin
            state     <= S_IDLE;
            enc_start <= 1'b0;
            spi_start <= 1'b0;
            dec_start <= 1'b0;
            done      <= 1'b0;
        end
        else begin
            // Default: pulses go low each cycle unless explicitly set
            enc_start <= 1'b0;
            spi_start <= 1'b0;
            dec_start <= 1'b0;
            done      <= 1'b0;

            case (state)
                // Wait for external start pulse
                S_IDLE: begin
                    if (start)
                        state <= S_ENC_START;
                end

                // Generate one-cycle enc_start pulse
                S_ENC_START: begin
                    enc_start <= 1'b1;    // Fire the start pulse
                    state     <= S_ENC_WAIT;
                end

                // Wait for RSA encryption to complete
                S_ENC_WAIT: begin
                    if (enc_done)
                        state <= S_SPI_START;
                end

                // Generate one-cycle spi_start pulse
                S_SPI_START: begin
                    spi_start <= 1'b1;    // Fire the start pulse
                    state     <= S_SPI_WAIT;
                end

                // Wait for SPI master (and slave) to complete transfer
                S_SPI_WAIT: begin
                    if (slave_done)       // Use slave_done to confirm receipt
                        state <= S_DEC_START;
                end

                // Generate one-cycle dec_start pulse
                S_DEC_START: begin
                    dec_start <= 1'b1;    // Fire the start pulse
                    state     <= S_DEC_WAIT;
                end

                // Wait for RSA decryption to complete
                S_DEC_WAIT: begin
                    if (dec_done)
                        state <= S_DONE;
                end

                // Signal completion for one cycle then return to idle
                S_DONE: begin
                    done  <= 1'b1;
                    state <= S_IDLE;
                end

                default: state <= S_IDLE;
            endcase
        end
    end

endmodule

