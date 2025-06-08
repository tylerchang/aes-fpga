module aes_core (
    input clk,
    input [127:0] in_text,  
    input [127:0] round_key, 
    input  wr_en_sched,
    input start, 
    input mode,
    output [127:0] out_text 
);

reg wr_en;
reg [2:0] select;
reg [2:0] state;
reg [2:0] next_state;
reg [127:0] r;
reg [5:0] counter;

add_round_key m_add_round_key(.in_text(r), .round_key(round_key), .out_text(out_add));
mix_columns m_mix_columns(.in(r), .mode(mode), .out(out_mix));
shift_rows m_shift_rows(.in_text(r), .mode(mode), .out_text(out_shift));
substitute_bytes m_substitute_bytes(.in(r), .clk(clk), .mode(mode), .out(out_sub));

logic [127:0] out_add;
logic [127:0] out_sub;
logic [127:0] out_shift;
logic [127:0] out_mix;


typedef enum logic [2:0] {
    IDLE   = 3'd0,
    ADD    = 3'd1,
    SUB_1  = 3'd2,
    SUB_2  = 3'd3,
    SHIFT  = 3'd4,
    MIX    = 3'd5
} state_t;

assign out_text = r;

/* FSM that controls what "stage" of AES we are in */
always_comb begin
    
    if (~mode) begin
        case (state)
            // TODO: Comments
            IDLE: begin next_state = ~start ? IDLE : ADD; select = 0; wr_en = wr_en_sched; end
            ADD: begin next_state = (counter == 50) ? IDLE: SUB_1; select = 1; wr_en = 1; end
            SUB_1: begin next_state = SUB_2; select = 2; wr_en = 1; end
            SUB_2: begin next_state = SHIFT; select = 2; wr_en = 1; end
            SHIFT: begin next_state = (counter == 49) ? ADD : MIX; select = 3; wr_en = 1; end
            MIX: begin next_state = ADD; select = 4; wr_en = 1; end
            default: begin next_state = ~start ? IDLE : ADD; select = 0; wr_en = wr_en_sched; end
        endcase
    end else begin
        case (state)
            // TODO: Comments
            IDLE: begin next_state = ~start ? IDLE : ADD; select = 0; wr_en = wr_en_sched; end
            ADD: begin next_state = (counter == 1) ? SHIFT :  (counter == 50) ? IDLE : MIX; select = 1; wr_en = 1;  end
            SUB_1: begin next_state = SUB_2; select = 2; wr_en = 1; end
            SUB_2: begin next_state = ADD; select = 2; wr_en = 1; end
            SHIFT: begin next_state = SUB_1; select = 3; wr_en = 1; end
            MIX: begin next_state = SHIFT; select = 4; wr_en = 1; end
            default: begin next_state = ~start ? 0 : 1; select = 0; wr_en = wr_en_sched; end
        endcase
    end

end

always_ff @(posedge clk) begin

    /* Update counter for 50 cycles */
    if (~start)
        counter <= 0;
    else if (counter != 50)
        counter <= counter + 1;

    if (wr_en) begin
        case (select)
            0: r <= in_text;
            1: r <= out_add;
            2: r <= out_sub;
            3: r <= out_shift;
            4: r <= out_mix;
            default: r <= 128'b0; 
        endcase
    end
    
    
    state <= next_state;
    
    // Debug print for state machine and counter
    // $display("AES_DEBUG: State=%d, NextState=%d, Counter=%d", state, next_state, counter);
    
    // // Debug print for register in hex format with bytes clearly visible
    // $display("AES_DEBUG: Register (hex) = %h", r);
    // // Display register as 4x4 matrix of bytes in column-major order (AES state format)
    // $display("AES_DEBUG: State matrix (column-major):");
    // $display("  %h %h %h %h", r[127:120], r[95:88], r[63:56], r[31:24]);   // First column
    // $display("  %h %h %h %h", r[119:112], r[87:80], r[55:48], r[23:16]);   // Second column
    // $display("  %h %h %h %h", r[111:104], r[79:72], r[47:40], r[15:8]);    // Third column
    // $display("  %h %h %h %h", r[103:96], r[71:64], r[39:32], r[7:0]);      // Fourth column

    // $display("AES_DEBUG: JOSH SUCKs:");
    // $display("  %h %h %h %h", out_mix[127:120], out_mix[95:88], out_mix[63:56], out_mix[31:24]);   // First column
    // $display("  %h %h %h %h", out_mix[119:112], out_mix[87:80], out_mix[55:48], out_mix[23:16]);   // Second column
    // $display("  %h %h %h %h", out_mix[111:104], out_mix[79:72], out_mix[47:40], out_mix[15:8]);    // Third column
    // $display("  %h %h %h %h", out_mix[103:96], out_mix[71:64], out_mix[39:32], out_mix[7:0]);      // Fourth column

end

endmodule
   
