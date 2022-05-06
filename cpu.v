module cpu (
    input clk,
    input rst,
    output cpuebreak,
    output [63:0] cpupc
);

    wire  rs1_en;
    wire  rs2_en;
    wire  alu2reg_en;
    wire  mem2reg_en;
    wire [63:0] imm;
    wire [6:0] rd_mem_op;
    wire [63:0] rs1_data;
    wire [63:0] rs2_data;
    wire [4:0] rs1_addr;
    wire [4:0] rs2_addr;
    wire [4:0] rd;
    wire [63:0] pc;
    wire [63:0] pc_reg;
    wire [2:0] pc_sel;
    wire [3:0] pc_src_en;
    wire wr_reg_en;
    wire [3:0] wr_rd_mem_len;
    wire [16:0] alu_ctrl;
    wire [63:0] mem_rd_data;
    wire rd_mem_en;
    wire wr_mem_en;
    wire [31:0] instr;
    wire [63:0] alu_src1; 
    wire [63:0] alu_src2;
    wire [63:0] alu_res;
    wire [63:0] wr_reg_data;
    wire [63:0] rd_mem_addr;
    wire [10:0] rd_addr2mem;
    wire [10:0] wr_addr2mem;
    wire [63:0] wr_addr2instrmem;
    wire ebreak;
    wire alu_sext_before_wr_reg;

    wire alu_sr1_rs1_en;
    wire alu_sr1_pc_en;
    wire alu_sr2_rs2_en;
    wire alu_sr2_imm_en;
    wire alu_sr2_pc_en;
    assign cpuebreak = ebreak;
    assign rd_addr2mem = rd_mem_addr[10:0];
    assign wr_addr2mem = alu_res[10:0];
    assign wr_addr2instrmem = pc;
    assign cpupc = pc;
    ctrl rv64_ctrl (
        .rst(rst),
	//from idu
        .pc_src_en (pc_src_en),
        .alu_sr1_rs1_en(alu_sr1_rs1_en),
        .alu_sr1_pc_en(alu_sr1_pc_en),
        .alu_sr2_rs2_en(alu_sr2_rs2_en),
        .alu_sr2_imm_en(alu_sr2_imm_en),
        .alu_sr2_pc_en(alu_sr2_pc_en),
        .alu2reg_en (alu2reg_en),
        .mem2reg_en (mem2reg_en),
        .imm (imm),
        .rd_mem_op (rd_mem_op),	
        .alu_sext_before_wr_reg(alu_sext_before_wr_reg),
	//from regfile
        .rs1_reg2ctrl (rs1_data),
        .rs2_reg2ctrl (rs2_data),
	//from pc
        .pc (pc_reg),
	//from alu
        .alu_res (alu_res),
	//from mem
        .mem_rd_data (mem_rd_data),
	//to pc
        .pc_sel(pc_sel),
	//to alu
        .alu_src1 (alu_src1),
        .alu_src2 (alu_src2),
	//to regfile
        .wr_reg_data (wr_reg_data),
        .rd_mem_addr (rd_mem_addr)
    );

    alu rv64_alu (
	//from idu
	.alu_ctrl (alu_ctrl),
	//from ctrl
	.alu_sr1 (alu_src1), 
    	.alu_sr2 (alu_src2),
	//to ctrl and mem_addr and ctrl addr
    	.alu_res (alu_res)
    );

    pc_gen rv64_pc (
        .clk (clk),
        .rst (rst),
        .pc_sel (pc_sel),
        .rs1 (rs1_data),
        .imm (imm),
        .pc (pc),
        .pc_reg (pc_reg),
        .ebreak(ebreak)
    );

    idu rv64_idu (
        .rst (rst),
	//from instr_mem
        .instr (instr),
	//to ctrl
        .pc_src_en (pc_src_en),
        .rs1_en (rs1_en),    
        .rs2_en (rs2_en),    
        .alu2reg_en (alu2reg_en),
        .mem2reg_en (mem2reg_en),
        .imm (imm),
        .rd_mem_op (rd_mem_op),	
        .alu_sr1_rs1_en(alu_sr1_rs1_en),
        .alu_sr1_pc_en(alu_sr1_pc_en),
        .alu_sr2_rs2_en(alu_sr2_rs2_en),
        .alu_sr2_imm_en(alu_sr2_imm_en),
        .alu_sr2_pc_en(alu_sr2_pc_en),
        .alu_sext_before_wr_reg(alu_sext_before_wr_reg),
	//to regfile
        .rs1 (rs1_addr),    
        .rs2 (rs2_addr),    
        .rd (rd),    
        .wr_reg_en (wr_reg_en),
	//to alu
        .alu_ctrl (alu_ctrl),
	//to data_mem
        .wr_rd_mem_len (wr_rd_mem_len),
        .rd_mem_en (rd_mem_en),
        .wr_mem_en (wr_mem_en),

        //to pc
        .ebreak(ebreak)
    );

    instr_mem rv64_instr_mem (
        .clk (clk),
        .rst (rst),
        .rd_addr (wr_addr2instrmem),
        .rd_en (1),
        .rd_instr (instr)
    );

    data_mem rv64_data_mem (
        .clk (clk),
        .rst (rst),
        .wr_en (wr_mem_en),
        .wr_addr (wr_addr2mem),
        .wr_data (rs2_data),
        .wr_len (wr_rd_mem_len),
        .rd_addr (rd_addr2mem),
        .rd_en (rd_mem_en),
        .rd_data (mem_rd_data)
    );

    regfile rv64_regfile (
        .clk (clk),
        .rst (rst),
        .rs1_en (rs1_en),
        .rs1_addr (rs1_addr),
        .rs2_en (rs2_en),
        .rs2_addr (rs2_addr),
        .wr_en (wr_reg_en),
        .wr_data (wr_reg_data),
        .wr_addr (rd),
        .rs1_data (rs1_data),
        .rs2_data (rs2_data)
    );
endmodule
