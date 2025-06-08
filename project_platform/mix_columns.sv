module mix_columns(input logic  [127:0] in,
		input logic mode,
		output logic [127:0] out);

	logic [7:0] in_bytes [15:0];
	logic [7:0] out_bytes [15:0];


	function automatic [7:0] xtime2;
	input [7:0] a;
	begin
		xtime2 = (a << 1) ^ ((a[7]) ? 8'h1B : 8'h00);
	end
	endfunction

	function automatic [7:0] xtime3;
	input [7:0] a;
	begin
		xtime3 = xtime2(a) ^ a;
	end
	endfunction

	function automatic [7:0] xtime9;
	input [7:0] a;
	logic [7:0] a2, a4, a8;
	begin
		a2 = xtime2(a);
		a4 = xtime2(a2);
		a8 = xtime2(a4);
		xtime9 = a8 ^ a;
	end
	endfunction

	function automatic [7:0] xtime11;
	input [7:0] a;
	logic [7:0] a2, a4, a8;
	begin
		a2 = xtime2(a);          // a * 2
		a4 = xtime2(a2);         // a * 4
		a8 = xtime2(a4);         // a * 8
		xtime11 = a8 ^ a2 ^ a; // a * 8 ^ a * 2 ^ a
	end
	endfunction

	function automatic [7:0] xtime13;
	input [7:0] a;
	logic [7:0] a2, a4, a8;
	begin
		a2 = xtime2(a);          // a * 2
		a4 = xtime2(a2);         // a * 4
		a8 = xtime2(a4);         // a * 8
		xtime13 = a8 ^ a4 ^ a; // a * 8 ^ a * 2 ^ a
	end
	endfunction

	function automatic [7:0] xtime14;
	input [7:0] a;
	logic [7:0] a2, a4, a8;
	begin
		a2 = xtime2(a);          // a * 2
		a4 = xtime2(a2);         // a * 4
		a8 = xtime2(a4);         // a * 8
		xtime14 = a8 ^ a4 ^ a2; // a * 8 ^ a * 2 ^ a
	end
	endfunction

	function automatic logic [7:0] get_byte(input logic [127:0] vec, input int index);
   		get_byte = vec[127 - index * 8 -: 8];
	endfunction
	

	always_comb begin

		for (int i = 0; i < 16; i++) begin
			in_bytes[i] = in[127 - i * 8 -: 8];
		end

		if (~mode) begin
			for (int i = 0; i < 16; i+=4) begin
				
				out_bytes[i] = 	(xtime2(in_bytes[i])) ^ (xtime3(in_bytes[i+1])) ^ in_bytes[i+2] ^ in_bytes[i+3];
				out_bytes[i+1] = in_bytes[i] ^ (xtime2(in_bytes[i+1])) ^ (xtime3(in_bytes[i+2])) ^ in_bytes[i+3];
				out_bytes[i+2] = in_bytes[i] ^ in_bytes[i+1] ^ (xtime2(in_bytes[i+2])) ^ xtime3(in_bytes[i+3]);
				out_bytes[i+3] = xtime3(in_bytes[i]) ^ in_bytes[i+1] ^ in_bytes[i+2] ^ xtime2(in_bytes[i+3]);

			end

		end else begin
			
			for (int i = 0; i < 16; i+=4) begin
				
				out_bytes[i]    = (xtime14(in_bytes[i])) ^ (xtime11(in_bytes[i+1])) ^ (xtime13(in_bytes[i+2])) ^ (xtime9(in_bytes[i+3]));
				out_bytes[i+1]  = (xtime9(in_bytes[i])) ^ (xtime14(in_bytes[i+1])) ^ (xtime11(in_bytes[i+2])) ^ (xtime13(in_bytes[i+3]));
				out_bytes[i+2]  = (xtime13(in_bytes[i])) ^ (xtime9(in_bytes[i+1])) ^ (xtime14(in_bytes[i+2])) ^ (xtime11(in_bytes[i+3]));
				out_bytes[i+3] = (xtime11(in_bytes[i])) ^ (xtime13(in_bytes[i+1])) ^ (xtime9(in_bytes[i+2])) ^ (xtime14(in_bytes[i+3]));

			end

		end
		
		for (int i = 0; i < 16; i++) begin
			out[127 - i * 8 -: 8] = out_bytes[i];
		end
	end
   
endmodule
