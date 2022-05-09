`define INSTR_SIZE 32
`define ALU_OPNUM 22 
module idu(
    input  rst,
    //instr_mem to idu
    input  [`INSTR_SIZE-1:0] instr,
    //idu to ctrl
    output [2:0]  pc_src_en_o,
    output rs1_en,    
    output rs2_en,    
    output alu2reg_en,
    output mem2reg_en,
    output [63:0] imm,
    output [6:0] rd_mem_op,    
    output alu_sr1_rs1_en,
    output alu_sr1_pc_en,
    output alu_sr2_rs2_en,
    output alu_sr2_imm_en,
    output alu_sr2_pc_en,
    output alu_sext_before_wr_reg,
    output alu_src1_bit32,
    output alu_src2_bit32,
    output alu_src2_bit5,
    output alu_src1_sext,
    //idu to regfile
    output [4:0] rs1,    
    output [4:0] rs2,    
    output [4:0] rd,    
    output wr_reg_en,    
    //idu to alu
    output [`ALU_OPNUM-1:0] alu_ctrl,
    //idu to data_mem
    output [7:0] wr_rd_mem_len,
    output rd_mem_en,
    output wr_mem_en,
    //idu to pc
    output ebreak
);

    //pc_src_en or not
    //mem write or read
    //which operation
    //imm_en and val
    //rs1_en and val
    //rs2_en and val
    //rd_en  and val
    wire [3:0] pc_src_en;
    wire [6:0]   opcode;
    wire [2:0] func3 ;
    wire [6:0] func7 ;
    wire [63:0] immI;  
    wire [63:0] immU;  
    wire [63:0] immS;  
    wire [63:0] immB;  
    wire [63:0] immJ;  
    wire func3_000;
    wire func3_001;
    wire func3_010;
    wire func3_011;
    wire func3_100;
    wire func3_101;
    wire func3_110;
    wire func3_111;
    wire op_u;
    wire op_i;
    wire op_r;
    wire op_j;
    wire op_b;
    wire op_s;
    wire op_cali;
    wire op_memi;
    wire rv_addi; 
    wire rv_slti; 
    wire rv_sltiu;
    wire rv_xori; 
    wire rv_ori ; 
    wire rv_andi; 
    wire rv_slli; 
    wire rv_srli; 
    wire rv_srai; 
    wire rv_add ;
    wire rv_sub ;
    wire rv_sll ;
    wire rv_slt ;
    wire rv_sltu;
    wire rv_xor ;
    wire rv_srl ;
    wire rv_sra ;
    wire rv_or  ;
    wire rv_and ;
    wire rv_jalr;
    wire rv_beq ;
    wire rv_bne ;
    wire rv_blt ;
    wire rv_bge ;
    wire rv_bltu;
    wire rv_bgeu;
    wire rv_sb  ;
    wire rv_sh  ;
    wire rv_sw  ;
    wire rv_sd  ;
    wire rv_lui  ;
    wire rv_auipc  ;
    wire rv_jal  ;
    wire rv_ld  ;
    wire rv_lw  ;
    wire rv_lh  ;
    wire rv_lb  ;
    wire rv_lwu  ;
    wire rv_lhu  ;
    wire rv_lbu  ;
    wire imm_en;
    wire rv_div;
    wire rv_divu;
    wire rv_mul;
    wire rv_rem;
    wire rv_remu;

    assign ebreak = (rst==1)?0:(instr[31:0] == 32'h0100073);
    assign pc_src_en_o = pc_src_en[2:0];
    assign opcode = instr[6:0];
    assign rd     = instr[11:7];
    assign func3  = instr[14:12];
    assign rs1    = instr[19:15];
    assign rs2    = instr[24:20];
    assign func7  = instr[31:25];
    
    assign immI = {{52{instr[31]}}, instr[31:20]};
    assign immU = {{32{instr[31]}},instr[31:12], 12'b0};
    assign immS = {{52{instr[31]}}, instr[31:25], instr[11:7]};
    assign immB = {{52{instr[31]}}, instr[7], instr[30:25], instr[11:8], 1'b0};
    assign immJ = {{44{instr[31]}}, instr[19:12], instr[20], instr[30:21], 1'b0};
    
    assign func3_000 = (func3==3'b000);
    assign func3_001 = (func3==3'b001);
    assign func3_010 = (func3==3'b010);
    assign func3_011 = (func3==3'b011);
    assign func3_100 = (func3==3'b100);
    assign func3_101 = (func3==3'b101);
    assign func3_110 = (func3==3'b110);
    assign func3_111 = (func3==3'b111);
    
    //u_type instruction
    assign op_u  = (opcode == 7'b0110111 || opcode == 7'b0010111);
    assign rv_lui   = (opcode == 7'b0110111);
    assign rv_auipc = (opcode == 7'b0010111);
    
    //i_type instruction
    assign op_i = (op_cali || op_memi || opcode==7'b1100111 || op_iw);
    
    assign op_cali  = (opcode == 7'b0010011);
    assign rv_addi  = op_cali && func3_000;
    assign rv_slti  = op_cali && func3_010;
    assign rv_sltiu = op_cali && func3_011;
    assign rv_xori  = op_cali && func3_100;
    assign rv_ori   = op_cali && func3_110;
    assign rv_andi  = op_cali && func3_111;
    assign rv_slli  = op_cali && func3_001 && (instr[31:26]==6'b000000);
    assign rv_srli  = op_cali && func3_101 && (instr[31:26]==6'b000000);
    assign rv_srai  = op_cali && func3_101 && (instr[31:26]==6'b010000);
    //assign rv_slli  = op_cali && func3_001 && (func7==7'b0000000);
    //assign rv_srli  = op_cali && func3_101 && (func7==7'b0000000);
    //assign rv_srai  = op_cali && func3_101 && (func7==7'b0100000);
    
    assign op_j    = (opcode == 7'b1101111);
    assign rv_jal  = (opcode == 7'b1101111);
    
    assign op_memi  = (opcode == 7'b0000011);
    assign rv_ld  = op_memi && func3_011;
    assign rv_lb  = op_memi && func3_000;
    assign rv_lh  = op_memi && func3_001;
    assign rv_lw  = op_memi && func3_010;
    assign rv_lbu = op_memi && func3_100;
    assign rv_lhu = op_memi && func3_101;
    assign rv_lwu = op_memi && func3_110;
    assign rd_mem_op = {rv_lbu,rv_lhu,rv_lwu,rv_lb,rv_lh,rv_lw,rv_ld};

    //r_type instruction
    assign op_r  = (opcode == 7'b0110011) || op_rw;
    assign rv_add  = op_r && func3_000 && (func7==7'b0000000);
    assign rv_sub  = op_r && func3_000 && (func7==7'b0100000);
    assign rv_sll  = op_r && func3_001 && (func7==7'b0000000);
    assign rv_slt  = op_r && func3_010 && (func7==7'b0000000);
    assign rv_sltu = op_r && func3_011 && (func7==7'b0000000);
    assign rv_xor  = op_r && func3_100 && (func7==7'b0000000);
    assign rv_srl  = op_r && func3_101 && (func7==7'b0000000);
    assign rv_sra  = op_r && func3_101 && (func7==7'b0100000);
    assign rv_or   = op_r && func3_110 && (func7==7'b0000000);
    assign rv_and  = op_r && func3_111 && (func7==7'b0000000);
    assign rv_div  = op_r && func3_100 && (func7==7'b0000001);
    assign rv_divu = op_r && func3_101 && (func7==7'b0000001);
    assign rv_mul  = op_r && func3_000 && (func7==7'b0000001);
    assign rv_rem  = op_r && func3_110 && (func7 ==7'b0000001);
    assign rv_remu = op_r && func3_111 && (func7 ==7'b0000001);
    
    
    //j_type instruction
    assign rv_jalr = (opcode == 7'b1100111) && func3_000;
    
    //b_type instruction
    assign op_b  = (opcode == 7'b1100011);
    assign rv_beq  = op_b && func3_000;
    assign rv_bne  = op_b && func3_001;
    assign rv_blt  = op_b && func3_100;
    assign rv_bge  = op_b && func3_101;
    assign rv_bltu = op_b && func3_110;
    assign rv_bgeu = op_b && func3_111;
    
    //s_type instruction
    assign op_s  = (opcode == 7'b0100011);
    assign rv_sb  = op_s && func3_000;
    assign rv_sh  = op_s && func3_001;
    assign rv_sw  = op_s && func3_010;
    assign rv_sd  = op_s && func3_011;

    wire op_rw;
    wire rv_addw;
    wire rv_subw;
    wire rv_sllw;
    wire rv_srlw;
    wire rv_sraw;
    wire rv_mulw;
    wire rv_divw;
    wire rv_divuw;
    wire rv_remw;
    wire rv_remuw;
    //I type RVM
    wire op_iw;
    wire rv_addiw;
    wire rv_slliw;
    wire rv_srliw;    
    wire rv_sraiw;      
    //R type RVM 
    assign op_rw = (opcode == 7'b0111011);
    assign rv_addw  = op_rw && func3_000 && (func7 ==7'b0000000);
    assign rv_subw  = op_rw && func3_000 && (func7 ==7'b0100000);
    assign rv_sllw  = op_rw && func3_001 && (func7 ==7'b0000000);
    assign rv_srlw  = op_rw && func3_101 && (func7 ==7'b0000000);
    assign rv_sraw  = op_rw && func3_101 && (func7 ==7'b0100000);
    assign rv_mulw  = op_rw && func3_000 && (func7 ==7'b0000001);
    assign rv_divw  = op_rw && func3_100 && (func7 ==7'b0000001);
    assign rv_divuw = op_rw && func3_101 && (func7 ==7'b0000001);
    assign rv_remw  = op_rw && func3_110 && (func7 ==7'b0000001);
    assign rv_remuw = op_rw && func3_111 && (func7 ==7'b0000001);
    //I type RVM
    assign op_iw = (opcode == 7'b0011011);
    assign rv_addiw  = op_iw && func3_000;
    assign rv_slliw  = op_iw && func3_001 && (instr[31:26]==6'b000000);
    assign rv_srliw  = op_iw && func3_101 && (instr[31:26]==6'b000000);    
    assign rv_sraiw  = op_iw && func3_101 && (instr[31:26]==6'b010000);    

    assign alu_sext_before_wr_reg = op_rw | op_iw;
    assign alu_src1_bit32 = rv_srliw | alu_src2_bit5 | rv_divuw | rv_divw | rv_remuw | rv_remw;
    assign alu_src2_bit32 = rv_divuw | rv_divw | rv_remuw | rv_remw;
    assign alu_src2_bit5  = rv_sraw | rv_srlw | rv_sllw;
    assign alu_src1_sext = rv_sraiw | rv_sraw;

    assign rs1_en = (op_b |
           	     op_r |
           	     op_i |
           	     op_s );
    
    assign rs2_en = (op_r |
                     op_s |
           	     op_b );
    
    assign imm_en = (op_u |
    		     op_j |
    		     op_b |
    		     op_i |
    		     op_s );
    
    assign alu_sr1_rs1_en = rs1_en & ~alu_sr1_pc_en;
    assign alu_sr1_pc_en = pc_src_en[1] | pc_src_en[2] | pc_src_en[3];
    assign alu_sr2_rs2_en =  op_b | op_r;
    assign alu_sr2_imm_en = imm_en & ~alu_sr2_pc_en & ~alu_sr2_rs2_en;
    assign alu_sr2_pc_en = pc_src_en[1] | pc_src_en[2];

    //5.9 movsx cputest rv_sraiw pc:80000098 at dut time 83000,immI wrong expected 0x18,but 0x418
    //solution add rv_sraiw to decide immI
    assign imm = ({64{op_u}} & immU)
               | ({64{op_j}} & immJ)
               | ({64{op_b}} & immB)
               | ({64{op_i & ~rv_srai & ~rv_sraiw}} & immI)
               | ({64{op_i & (rv_srai | rv_sraiw)}} & {58'b0,immI[5:0]})
               | ({64{op_s}} & immS);

    assign alu_ctrl[0]  = rv_addi | rv_add | (rv_jalr | rv_jal) |
			 (op_s | op_memi) | rv_auipc | rv_addw | rv_addiw;
    assign alu_ctrl[1]  = rv_sub | rv_subw;
    assign alu_ctrl[2]  = rv_slti | rv_slt;
    assign alu_ctrl[3]  = rv_sltiu | rv_sltu;
    assign alu_ctrl[4]  = rv_and | rv_andi;
    assign alu_ctrl[5]  = rv_xor | rv_xori;
    assign alu_ctrl[6]  = rv_or | rv_ori;
    assign alu_ctrl[7]  = rv_slli | rv_sll | rv_slliw | rv_sllw;
    assign alu_ctrl[8]  = rv_srli | rv_srl | rv_srliw | rv_srlw;
    assign alu_ctrl[9]  = rv_sra | rv_srai | rv_sraiw | rv_sraw;
    assign alu_ctrl[10] = rv_lui;
    assign alu_ctrl[11] = rv_beq;
    assign alu_ctrl[12] = rv_bne;
    assign alu_ctrl[13] = rv_blt;
    assign alu_ctrl[14] = rv_bge;
    assign alu_ctrl[15] = rv_bltu;
    assign alu_ctrl[16] = rv_bgeu;
    assign alu_ctrl[17] = rv_mulw | rv_mul;
    assign alu_ctrl[18] = rv_divw | rv_div;
    assign alu_ctrl[19] = rv_divuw | rv_divu;

    assign alu_ctrl[20] = rv_remw | rv_rem;
    assign alu_ctrl[21] = rv_remuw | rv_remu;

    //pc control signal
    //assign pc_src_en[0] = (rv_beq | rv_bne | rv_blt | rv_bge | rv_bltu | rv_bgeu);
    assign pc_src_en[0] = op_b;
    assign pc_src_en[1] = rv_jal;
    assign pc_src_en[2] = rv_jalr;
    assign pc_src_en[3] = rv_auipc;

    //memory control signal
    assign rd_mem_en = (rv_lb | rv_lh | rv_lw | rv_lbu | rv_lhu | rv_ld);
    assign wr_mem_en = op_s;
    assign wr_rd_mem_len = ({8{rv_ld | rv_sd}} & 8)
		         | ({8{rv_lb | rv_lbu | rv_sb}} & 1)
		         | ({8{rv_lh | rv_lhu | rv_sh}} & 2)
		         | ({8{rv_lw | rv_lwu | rv_sw}} & 4);

 
    //write back to regfile control
    assign mem2reg_en = op_memi;
    assign alu2reg_en = ~(op_s | op_memi | op_b);
    assign wr_reg_en  = ~(op_b | op_s);
endmodule

