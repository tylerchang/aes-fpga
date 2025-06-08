module add_round_key (
    input [127:0] in_text,  // input text
    input [127:0] round_key, // round key
    output [127:0] out_text // output text
);
    
    // The same XOR operation, regardless of encryption or decryption
    assign out_text = in_text ^ round_key;
    
endmodule
    
