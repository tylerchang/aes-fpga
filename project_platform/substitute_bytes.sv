module substitute_bytes(input logic  [127:0] in,
			input logic mode,
			input logic clk,
			output logic [127:0] out);

	logic [7:0] in_bytes [15:0];
	logic [7:0] out_bytes [15:0];
	logic [8:0] addr [15:0];

	// function automatic logic [7:0] get_byte(input logic [127:0] vec, input int index);
   	// 	get_byte = vec[127 - index * 8 -: 8];
	// endfunction
	
	genvar j;
	generate
		for (j = 0; j < 16; j++) begin: gen_rom_instances
			simple_rom simple_rom_j(.clk(clk), .data(out_bytes[j]), .addr(addr[j]));
		end
	endgenerate

	always_comb begin

		for (int i = 0; i < 16; i++) begin
			in_bytes[i] = in[127 - i * 8 -: 8];
			out[127 - i * 8 -: 8] = out_bytes[i];
			addr[i] = {mode, in_bytes[i]};
		end


	end

endmodule
