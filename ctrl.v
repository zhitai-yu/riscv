module ctrl (
    //idu to ctrl
    input         rst,
    input[3:0]    pc_src_en,
    input         alu_sr1_rs1_en,
    input         alu_sr1_pc_en,
    input         alu_sr2_rs2_en,
    input         alu2reg_en,
    input         alu_sr2_pc_en,
    input         mem2reg_en,
    input[63:0]   imm,
    input         alu_sr2_imm_en,
    input[6:0]    rd_mem_op,
    //regfile to ctrl
    input[63:0]   rs1_reg2ctrl,
    input[63:0]   rs2_reg2ctrl,
    //pc to ctrl
    input[63:0]   pc,
    //alu to ctrl
    input[63:0]   alu_res,
    //mem to ctrl
    input[63:0]   mem_rd_data,
    //ctrl to pc
    output[2:0]   pc_sel,
    //ctrl to alu
    output[63:0]  alu_src1,
    output[63:0]  alu_src2,
    //ctrl to regfile
    output[63:0]  wr_reg_data,
    output[63:0]  rd_mem_addr
);
    //pc_sel
    //pc_src_en[0] -> conditional transfer, pc_src_en[1] -> jal, pc_src_en[2] -> jalr, pc_src_en[3] -> auipc
    `define LD 7'b0000001
    `define LW 7'b0000010
    `define LH 7'b0000100
    `define LB 7'b0001000
    `define LWU 7'b0010000
    `define LHU 7'b0100000
    `define LBU 7'b1000000
    assign pc_sel[0] = (rst==1)? 0: (pc_src_en[0] & alu_res[0]);

    assign pc_sel[1] =(rst==1)? 0: pc_src_en[1];
    assign pc_sel[2] =(rst==1)? 0: pc_src_en[2];
    
    //alu_ctrl
    assign alu_src1 = ({64{alu_sr1_rs1_en}} & rs1_reg2ctrl)
		   | ({64{alu_sr1_pc_en}} & pc);

    assign alu_src2 = ({64{alu_sr2_rs2_en}} & rs2_reg2ctrl)
		   | ({64{alu_sr2_imm_en}} & imm)
		   | ({64{alu_sr2_pc_en}} & 'h4);
    //write back control
    assign wr_reg_data = ({64{rd_mem_op == `LD & mem2reg_en}} & mem_rd_data)
		       | ({64{rd_mem_op == `LW & mem2reg_en}} & {{32{mem_rd_data[31]}}, mem_rd_data[31:0]})
		       | ({64{rd_mem_op == `LH & mem2reg_en}} & {{48{mem_rd_data[15]}}, mem_rd_data[15:0]})
		       | ({64{rd_mem_op == `LB & mem2reg_en}} & {{56{mem_rd_data[7]}},  mem_rd_data[7:0]})
		       | ({64{rd_mem_op == `LWU & mem2reg_en}} & {32'b0, mem_rd_data[31:0]})
		       | ({64{rd_mem_op == `LHU & mem2reg_en}} & {48'b0, mem_rd_data[15:0]})
		       | ({64{rd_mem_op == `LBU & mem2reg_en}} & {56'b0,  mem_rd_data[7:0]})
		       | ({64{alu2reg_en}} & alu_res);

    assign rd_mem_addr = { {32{alu_res[31]}}, alu_res[31:0]};
endmodule
