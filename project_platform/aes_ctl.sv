module aes_ctl(
    input logic clk,
    input logic reset,
    input logic write,
    input logic chipselect,
    input logic [31:0] writedata,
    output logic [31:0] readdata,
    output logic start,
    output logic mode 
);

always_ff @(posedge clk) begin

    if (reset) begin
        start <= 1'b0;
        mode <= 1'b0;
    end

    if (write & chipselect) begin
        start <= writedata[0];
        mode <= writedata[1];
    end

    readdata <= {{30{1'b0}}, mode, start};
end



endmodule
