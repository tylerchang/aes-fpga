module simple_rom (
    input  logic        clk,
    input  logic [8:0]  addr,
    output logic [7:0]  data
);

    logic [7:0] rom_data [0:511];

    initial begin
        $readmemh("sub_box.hex", rom_data);
    end

    always_ff @(posedge clk) begin
        data <= rom_data[addr]; 
    end

endmodule

