module cpu (
    input clk;
    input rst;
);
    ctrl rv64_ctrl (
        .jump (jump),
        .rs1_en (rs1_en),
        .rs1_reg2ctrl (rs1_idx),
        .rs2_en (rs2_en),
        .rs2_reg2ctrl (rs2_idx),
        .alu2reg_en (alu2reg_en),
        .mem2reg_en (mem2reg_en),
        .imm (imm),
        .imm_en (imm_en),
        .pc (pc),
        .mem_rd_data (mem_rd_data),
        .alu_res (alu_res),
        .alu_src1 (alu_src1),
        .alu_src2 (alu_src2),
        .wr_reg_data (wr_reg_data)
        .rd_mem_addr (rd_mem_addr)
        .pc_sel(pc_sel)
    );

    alu rv64_alu (
	.alu_ctrl (alu_ctrl),
	.alu_sr1 (alu_src1), 
    	.alu_sr2 (alu_src2),
    	.alu_res (alu_res)
    );

    pc rv64_pc (
        .clk (),
        .rst (),
        .pc_sel (pc_sel),
        .pc_rd (),
        .imm (imm),
        .pc (pc)
    );

    idu rv64_idu (
    	
        .instr (instr),
        .imm (imm),
        .jump (jump),
        .alu_ctrl (alu_ctrl),
        .rd_mem_en (mem2reg_en),
        .rd_mem_len (rd_mem_len),
        .wr_mem_en (wr_mem_en),
        .wr_mem_len (wr_mem_len),
        .wr_reg_en (wr_reg_en),
        .rs1 (rs1_addr),    
        .rs1_en (rs1_en),    
        .rs2 (rs2_addr),    
        .rs2_en (rs2_en),    
        .imm_en (imm_en)    
    );

    instr_mem rv64_instr_mem (
        .clk (),
        .rst (),
        .wr_en (0),
        .wr_addr (),
        .wr_instr (),
        .rd_addr (pc),
        .rd_en (1),
        .rd_instr (instr)
    );

    data_mem rv64_data_mem (
        clk (),
        rst (),
        wr_en (wr_mem_en),
        wr_addr (alu_res),
        wr_data (rs2_data),
        wr_len (wr_mem_len),
        rd_addr (rd_mem_addr),
        rd_en (mem2reg_en),
        rd_data (mem_rd_data)
        rd_len (rd_mem_len)
    );

    regfile rv64_regfile (
        clk (),
        rst (),
        rs1_en (rs1_en),
        rs1_addr (rs1_addr),
        rd2_en (rs2_en),
        rd2_addr (rs2_addr),
        wr_en (wr_reg_en),
        wr_data (wr_reg_data),
        wr_addr (alu_res),
        rs1_data (rs1_data),
        rs2_data (rs2_data)
    );
endmodule
