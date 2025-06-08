module shift_rows (
    input [127:0] in_text,  // input text
    input mode,             // mode (0 for encryption, 1 for decryption)
    output [127:0] out_text // output text
);
    // Define byte segments for each row
    logic [31:0] row0, row1, row2, row3;
    
    // Extract rows from input (each row contains 4 bytes, COLUMN MAJOR!!)
    assign row0 = {in_text[127:120], in_text[95:88], in_text[63:56], in_text[31:24]};
    assign row1 = {in_text[119:112], in_text[87:80], in_text[55:48], in_text[23:16]};
    assign row2 = {in_text[111:104], in_text[79:72], in_text[47:40], in_text[15:8]};
    assign row3 = {in_text[103:96], in_text[71:64], in_text[39:32], in_text[7:0]};
    
    // Shifted rows
    logic [31:0] shifted_row0, shifted_row1, shifted_row2, shifted_row3;
    
    // Row 0: No shift in either direction
    assign shifted_row0 = row0;
    
    // imagine [byte0]  [byte1] [byte2] [byte3]
    //         [31:24]  [23:16] [15:8]  [7:0]

    // Row 1: Shift by 1 right (decryption) or left (encryption)
    assign shifted_row1 = mode ? {row1[7:0], row1[31:8]} : {row1[23:0], row1[31:24]};
    
    // Row 2: Shift left/right by 2 in either direction (same result)
    assign shifted_row2 = {row2[15:0], row2[31:16]};
    
    // Row 3: Shift left by 3 right (decryption) or left (decryption)
    assign shifted_row3 = mode ? {row3[23:0], row3[31:24]} : {row3[7:0], row3[31:8]};
    
    // Convert back to 128 bit output in column-major order
    assign out_text = {
        shifted_row0[31:24], shifted_row1[31:24], shifted_row2[31:24], shifted_row3[31:24],
        shifted_row0[23:16], shifted_row1[23:16], shifted_row2[23:16], shifted_row3[23:16],
        shifted_row0[15:8],  shifted_row1[15:8],  shifted_row2[15:8],  shifted_row3[15:8],
        shifted_row0[7:0],   shifted_row1[7:0],   shifted_row2[7:0],   shifted_row3[7:0]
    };
    
endmodule
