`define REG_WIDTH 8
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
    output reg [63:0] rd_data
);
    reg [`REG_WIDTH-1:0] mem[0:`DATA_MEM_LENTH-1];
    always @(posedge clk) begin
	if (rd_en) begin
	    rd_data <= {mem[rd_addr],mem[rd_addr+1],mem[rd_addr+2],mem[rd_addr+3],mem[rd_addr+4],mem[rd_addr+5],mem[rd_addr+6],mem[rd_addr+7]};
	end
	if (wr_en) begin
	    case (wr_len)
	        1: begin
		    mem[wr_addr] <= wr_data[7:0];
	        end
	        2: begin
		    mem[wr_addr]   <= wr_data[7:0];
		    mem[wr_addr+1] <= wr_data[15:8];
	        end
	        4: begin
		    mem[wr_addr]   <= wr_data[7:0];
		    mem[wr_addr+1] <= wr_data[15:8];
		    mem[wr_addr+2] <= wr_data[23:16];
		    mem[wr_addr+3] <= wr_data[31:24];
	        end
	        8: begin
		    mem[wr_addr]   <= wr_data[7:0];
		    mem[wr_addr+1] <= wr_data[15:8];
		    mem[wr_addr+2] <= wr_data[23:16];
		    mem[wr_addr+3] <= wr_data[31:24];
		    mem[wr_addr+4] <= wr_data[39:32];
		    mem[wr_addr+5] <= wr_data[47:40];
		    mem[wr_addr+6] <= wr_data[55:48];
		    mem[wr_addr+7] <= wr_data[63:56];
	        end
	        default: begin
		    mem[wr_addr] <= mem[wr_addr];
	        end
	    endcase
	end
    end
	
endmodule
