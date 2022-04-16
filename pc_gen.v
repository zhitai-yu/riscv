module pc_gen (
    input clk,
    input rst,
    input[2:0] pc_sel,
    input[63:0] rs1,
    input[63:0] imm,
    output[63:0] pc
);

    wire [63:0] pc_src1;
    wire [63:0] pc_src2;
    reg  [63:0] pc_reg;

    assign pc = (pc_sel == 4)?((pc_src1 + pc_src2) & ~1) : (pc_src1 + pc_src2);
    	
    always @(posedge clk) begin
    	if (rst) begin
	    pc_reg <= 64'h7ffffffc;
    	end
	else begin
	    pc_reg <= pc;
	end
    end
    
    //pc_sel 001 -> pc+4 , 010 -> jal, 100 -> jalr
    assign pc_src1 = ({64{pc_sel[0] | pc_sel[1]}} & pc_reg)
	           | ({64{pc_sel[2]}} & rs1);

    assign pc_src2 = ({64{pc_sel[0]}} & 64'h4)
	           | ({64{pc_sel[1]}} & {imm[62:0],1'b0})
	           | ({64{pc_sel[2]}} & imm);
    
endmodule
