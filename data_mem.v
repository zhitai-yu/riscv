`define REG_WIDTH 64
`define DATA_MEM_LENTH 2048
module data_mem (
    input clk,
    input rst,
    input wr_en,
    input [10:0] wr_addr,
    input [63:0] wr_data,
    input [3:0] wr_len,
    input [10:0] rd_addr,
    input rd_en,
    input [3:0] rd_len,
    output [63:0] rd_data
);
    reg [`REG_WIDTH-1:0] mem[0:`DATA_MEM_LENTH-1];
    always @(posedge clk) begin
	if (rd_en) begin
	    rd_data <= mem[rd_addr];
	end
	if (wr_en) begin
	    mem[wr_addr] <= wr_data;
	end
    end
	
endmodule
