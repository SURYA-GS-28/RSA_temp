// ============================================================
// File        : rsa_encrypt.v
// Description : RSA Encryption Module
//               cipher = message ^ e mod n
//               Uses small keys valid for 32-bit simulation:
//               Public key: e = 7, n = 3233 (primes: p=61, q=53)
//               NOTE: These keys are for simulation only.
//               For real ASIC, replace with large-prime keys.
// Author      : RSA-SPI Project
// ============================================================

module rsa_encrypt (
    input  wire        clk,        // System clock
    input  wire        rst_n,      // Active-low synchronous reset
    input  wire        start,      // Start encryption
    input  wire [31:0] message,    // Plaintext 32-bit input message
    output wire [31:0] cipher,     // Encrypted ciphertext output
    output wire        done        // High for one cycle when encryption done
);

    // --------------------------------------------------------
    // RSA Public Key Parameters (simulation-safe small keys)
    // p = 61, q = 53 => n = p*q = 3233
    // phi(n) = (p-1)*(q-1) = 3120
    // e = 7 (gcd(7, 3120) = 1, so valid)
    // --------------------------------------------------------
    localparam [31:0] E = 32'd7;      // Public exponent
    localparam [31:0] N = 32'd3233;   // Modulus

    // --------------------------------------------------------
    // Instantiate modular exponentiation: cipher = message^e mod n
    // --------------------------------------------------------
    mod_exp u_mod_exp_enc (
        .clk     (clk),
        .rst_n   (rst_n),
        .start   (start),
        .base    (message),   // Base = plaintext message
        .exp     (E),         // Exponent = public key e
        .modulus (N),         // Modulus = n
        .result  (cipher),    // Output = encrypted ciphertext
        .done    (done)       // Completion signal
    );

endmodule

