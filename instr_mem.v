`define REG_WIDTH 64
`define INSTR_MEM_LENTH 2048
module instr_mem (
    input clk,
    input rst,
    input [10:0] rd_addr,
    input rd_en,
    output [63:0] rd_instr
);

    reg [`REG_WIDTH-1:0] mem[`INSTR_MEM_LENTH-1:0];
    always @(posedge clk) begin
        if(rd_en)begin
	    rd_instr <= mem[rd_addr];
        end
    end

	
endmodule
