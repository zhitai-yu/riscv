`define REG_WIDTH 8
`define INSTR_MEM_LENTH 2048
module instr_mem (
    input clk,
    input rst,
    input [10:0] rd_addr,
    input rd_en,
    output reg [31:0] rd_instr
);

    reg [`REG_WIDTH-1:0] mem[`INSTR_MEM_LENTH-1:0];
    always @(posedge clk) begin
        if(rd_en)begin
	    rd_instr <= {mem[rd_addr],mem[rd_addr+1],mem[rd_addr+2],mem[rd_addr+3]};
        end
    end

	
endmodule
