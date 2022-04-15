module ctrl (
    //idu to ctrl
    input[2:0]    pc_src_en;
    input         rs1_en;
    input         rs2_en;
    input	  rv_auipc;
    input         alu2reg_en;
    input         mem2reg_en;
    input[63:0]   imm;
    input         imm_en;
    input[6:0]    rd_mem_op;
    //regfile to ctrl
    input[63:0]   rs1_reg2ctrl;
    input[63:0]   rs2_reg2ctrl;
    //pc to ctrl
    input[63:0]   pc;
    //alu to ctrl
    input[63:0]   alu_res;
    //ctrl to alu
    output[63:0]  alu_src1;
    output[63:0]  alu_src2;
    //mem to ctrl
    input[63:0]   mem_rd_data;
    //ctrl to regfile
    output[63:0]  wr_reg_data;
    output[63:0]  rd_mem_addr;
);
    //pc_sel
    //pc_src_en[0] -> conditional transfer, pc_src_en[1] -> jal, pc_src_en[2] -> jalr, pc_src_en[3] -> auipc

    assign pc_sel[0] = ~(|pc_src_en) | ((|pc_src_en) & ~alu_res[0]);

    assign pc_sel[1] = pc_src_en[0] & ~(pc_src_en[1] & pc_src_en[2]) & alu_res[0]
		     | pc_src_en[1] & ~(pc_src_en[0] & pc_src_en[2]);
    
    assign pc_sel[2] = pc_src_en[2] & ~(pc_src_en[0] & pc_src_en[1]);
    
    //alu_ctrl
    assign alu_sr1 = ({64{~(pc_src_en[1] | pc_src_en[2] | pc_src_en[3])}} & rs1_reg2ctrl);
		   | ({64{pc_src_en[2] | pc_src_en[2] | pc_src_en[3]}} & pc);

    assign alu_sr2 = ({64{rs2_en}} & rs2_reg2ctrl)
		   | ({64{imm_en}} & imm)
		   | ({64{pc_src_en[0] | pc_src_en[1]}} & 'h4);
    //write back control
    assign wr_reg_data = ({64{rd_mem_op == `LD & mem2reg_en}} & mem_rd_data)
		       | ({64{rd_mem_op == `LW & mem2reg_en}} & {32{mem_rd_data[31]}, mem_rd_data[31:0]})
		       | ({64{rd_mem_op == `LH & mem2reg_en}} & {48{mem_rd_data[15]}, mem_rd_data[15:0]})
		       | ({64{rd_mem_op == `LB & mem2reg_en}} & {56{mem_rd_data[7]},  mem_rd_data[7:0]})
		       | ({64{rd_mem_op == `LWU & mem2reg_en}} & {32'b0, mem_rd_data[31:0]})
		       | ({64{rd_mem_op == `LHU & mem2reg_en}} & {48'b0, mem_rd_data[15:0]})
		       | ({64{rd_mem_op == `LBU & mem2reg_en}} & {56'b0,  mem_rd_data[7:0]})
		       | ({64{alu2reg_en}} & alu_res);

    assign rd_mem_addr = { 32{alu_res[31]}, alu_res[31:0]};
endmodule
