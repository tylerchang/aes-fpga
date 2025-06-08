module aes_scheduler #(
    parameter int N_CORES = 10
)(
    input clk,
    input reset,
    input start, 
    input mode,
    input logic [127:0] round_key, // Packed array syntax
    output logic [3:0] round_key_addr,

    input sink_valid,
    input logic [31:0] sink_data,
    // input sink_channel,
    // input sink_error,
    output logic sink_ready,

    output logic source_valid,
    output logic [31:0] source_data,
    // output source_channel,
    // output source_error,
    input source_ready
);

logic [127:0] in_text [10-1:0]; // TODO: Parameter N
logic [127:0] out_text [10-1:0]; // TODO: Parameter N

/* Read specific instantions */
logic [7:0] r_cnt; // sequential
logic we_r; // comb
logic we_core; //comb
logic wr_en_sched [10-1:0]; // TODO: Change 9 to parameter N (N number cores created) //comb

logic [31:0] r_reg [3:0];

/* Execute specific instantiatons */
logic [5:0] c_cnt; // seq
logic [3:0] round; // seq
logic start_cores; // comb

/* Write specific instantiations */
logic [7:0] w_cnt; // seq
logic we_w; // comb
logic [31:0] core_out [3:0]; //comb
// logic we_w;
// logic [7:0] w_reg [15:0];

logic [1:0] state;
logic [1:0] next_state;
typedef enum logic [1:0] {
    IDLE    = 2'd0,
    READ    = 2'd1,
    EXEC    = 2'd2,
    WRITE   = 2'd3
} state_t;

logic [1:0] r_reg_word_sel;
logic [3:0] r_reg_core_sel;
logic [1:0] w_reg_word_sel;
logic [3:0] w_reg_core_sel;

/* Always have labels for sections of the r/w counters */
assign r_reg_word_sel = r_cnt[1:0];
assign r_reg_core_sel = r_cnt[5:2]; 
assign w_reg_word_sel = w_cnt[1:0];
assign w_reg_core_sel = w_cnt[5:2];


genvar j;
generate
    for (j = 0; j < 10; j++) begin : gen_aes_cores
        aes_core core_inst (
            .clk(clk),
            .in_text(in_text[j]),  
            .round_key(round_key), 
            .wr_en_sched(wr_en_sched[j]),
            .start(start_cores), 
            .mode(mode),
            .out_text(out_text[j]) 
        );
    end
endgenerate

always_comb begin : state_handler

    case (state)
        IDLE: next_state = start ? READ : IDLE;
        
        READ: next_state = wr_en_sched[10-1] ? EXEC : READ;
        
        EXEC: next_state = (c_cnt == 50) ? WRITE : EXEC;

        WRITE: next_state = (w_cnt == 39) ? IDLE : WRITE;

        default: begin
            next_state = IDLE;
        end
    endcase

    // "Overwrites" the above if true
    if (reset | ~start)
        next_state = IDLE;

end

always_comb begin : core_input_comb

    // if (state == IDLE) begin
    //     /* Set default low stuff*/
    // end

    if (state == READ) begin
        we_core = (r_reg_word_sel == 0) & (r_cnt != 0);
        sink_ready = start;
        we_r = sink_valid & sink_ready;
        /* Set all cores to recieve r */
        for(int i = 0; i<10; i++) begin
            in_text[i] = {r_reg[0], r_reg[1], r_reg[2], r_reg[3]};
            wr_en_sched[i] = we_core & (r_reg_core_sel - 1 == 4'(i));
        end
    end else begin
        we_core = 0;
        sink_ready = 0;
        we_r = 0;
        for(int i = 0; i<10; i++) begin
            in_text[i] = 0;
            wr_en_sched[i] = 0;
        end
    end

    if (state == EXEC) begin
        start_cores = 1;
    end else begin
        start_cores = 0;
    end

    if (state == WRITE) begin
        source_valid = start;
        we_w = source_valid & source_ready;

        core_out[0] = out_text[w_reg_core_sel][127:96];
        core_out[1] = out_text[w_reg_core_sel][95:64];
        core_out[2] = out_text[w_reg_core_sel][63:32];
        core_out[3] = out_text[w_reg_core_sel][31:0];
    
        source_data = core_out[w_reg_word_sel];
    end else begin
        source_valid = 0;
        we_w = 0;
        for (int i = 0; i < 4; i++) begin
            core_out[i] = 32'd0;
        end
        source_data = 0;
    end
end

always_ff @(posedge clk ) begin : core_input_seq

    if (state == READ) begin
        if (we_r) begin
            r_reg[r_reg_word_sel] <= sink_data; 
            r_cnt <= r_cnt + 1;
        end      
    end else begin
        r_cnt <= 0;
    end

    if (state == EXEC) begin
        logic [3:0] next_round;
        next_round = round + 1;
        c_cnt <= c_cnt + 1;
        if (c_cnt  % 5 == 1) begin
            round <= next_round;
        end else if (c_cnt  % 5 == 0) begin
            round_key_addr <= mode ? 4'd11 - next_round : next_round;
        end
    end else begin
        c_cnt <= 0;
        round <= 0;
        round_key_addr <= 0;
    end

    if (state == WRITE) begin
        if (we_w)
            w_cnt <= w_cnt + 1;
    end else begin
        w_cnt <= 0;
    end

    state <= next_state;

end

endmodule

