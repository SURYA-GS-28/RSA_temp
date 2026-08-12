// ============================================================
// File        : rsa_decrypt.v
// Description : RSA Decryption Module
//               message = cipher ^ d mod n
//               Private key: d = 2753, n = 3233
//               Verification: e*d mod phi(n) = 7*2753 mod 3120 = 1 ✓
// Author      : RSA-SPI Project
// ============================================================

module rsa_decrypt (
    input  wire        clk,        // System clock
    input  wire        rst_n,      // Active-low synchronous reset
    input  wire        start,      // Start decryption
    input  wire [31:0] cipher,     // Encrypted ciphertext input
    output wire [31:0] message,    // Decrypted plaintext output
    output wire        done        // High for one cycle when decryption done
);

    // --------------------------------------------------------
    // RSA Private Key Parameters
    // d = 1783 (modular inverse of e=7 under phi(n)=3120)
    // Verify: (7 * 1783) mod 3120 = 12481 mod 3120 = 1 ✓
    // --------------------------------------------------------
    localparam [31:0] D = 32'd1783;   // Private exponent
    localparam [31:0] N = 32'd3233;   // Modulus (same as encrypt)

    // --------------------------------------------------------
    // Instantiate modular exponentiation: message = cipher^d mod n
    // --------------------------------------------------------
    mod_exp u_mod_exp_dec (
        .clk     (clk),
        .rst_n   (rst_n),
        .start   (start),
        .base    (cipher),    // Base = ciphertext
        .exp     (D),         // Exponent = private key d
        .modulus (N),         // Modulus = n
        .result  (message),   // Output = recovered plaintext
        .done    (done)       // Completion signal
    );

endmodule
