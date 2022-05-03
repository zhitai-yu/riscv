module pc_gen (
    input clk,
    input rst,
    input[2:0] pc_sel,
    input[63:0] rs1,
    input[63:0] imm,
    input ebreak,
    output[63:0] pc,
    output reg [63:0] pc_reg
);

    wire [63:0] pc_src1;
    wire [63:0] pc_src2;

    assign pc = (pc_sel == 3'b100 && ~ebreak)?((pc_src1 + pc_src2) & ~1) :
                ((~ebreak)?(pc_src1 + pc_src2):pc_reg);
    	
    always @(posedge clk) begin
    	if (rst) begin
	    pc_reg <= 64'h7ffffffc;
    	end
	    else begin
	        pc_reg <= pc;
	    end
    end
    
    //pc_sel 001 -> pc+4 , 010 -> jal, 100 -> jalr
    assign pc_src1 = ({64{~pc_sel[2]}} & pc_reg)
	           | ({64{pc_sel[2]}} & rs1);

    assign pc_src2 = ({64{~(|pc_sel)}} & 64'h4)
	           | ({64{|pc_sel}} & imm);
    
endmodule
