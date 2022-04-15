module idu(
    //instr_mem to idu
    input  [`INSTR_SIZE-1:0] instr;
    //idu to ctrl
    output [2:0]  pc_src_en;
    output rs1_en;    
    output rs2_en;    
    output rv_auipc;
    output alu2reg_en;
    output mem2reg_en;
    output [63:0] imm;
    output imm_en;    
    output rd_mem_op;    
    //idu to regfile
    output rs1;    
    output rs2;    
    //idu to alu
    output [16:0] alu_ctrl;
    //idu to data_mem
    output wr_rd_mem_len;
    output rd_mem_en;
    output wr_mem_en;
)

    //pc_src_en or not
    //mem write or read
    //which operation
    //imm_en and val
    //rs1_en and val
    //rs2_en and val
    //rd_en  and val
    wire [6:0]   opcode;
    wire [11:7]  rd    ;
    wire [14:12] func3 ;
    wire [19:15] rs1   ;
    wire [24:20] rs2   ;
    wire [31:25] func3 ;
    wire [31:25] func7 ;
    wire [63:0] immI;  
    wire [63:0] immU;  
    wire [63:0] immS;  
    wire [63:0] immB;  
    wire [63:0] immJ;  
    wire [2:0] func3_000;
    wire [2:0] func3_001;
    wire [2:0] func3_010;
    wire [2:0] func3_011;
    wire [2:0] func3_100;
    wire [2:0] func3_101;
    wire [2:0] func3_110;
    wire [2:0] func3_111;
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
    wire rv_blt ;
    wire rv_bge ;
    wire rv_bltu;
    wire rv_bgeu;
    wire rv_sb  ;
    wire rv_sh  ;
    wire rv_sw  ;
    
    assign opcode = instr[6:0];
    assign rd     = instr[11:7];
    assign func3  = instr[14:12];
    assign rs1    = instr[19:15];
    assign rs2    = instr[24:20];
    assign func3  = instr[31:25];
    assign func7  = instr[31:25];
    
    assign immI = {{52{instr[31]}}, instr[31:20]};
    assign immU = {{32{instr[31]}},instr[31:12], 12'b0};
    assign immS = {{52{instr[31]}}, instr[31:25], instr[11:7]};
    assign immB = {{52{instr[31]}}, instr[7], instr[30:25], instr[11:8], 1'b0};
    assign immJ = {{44{instr[31]}}, instr[19:12], instr[20], instr[30:21], 1'b0};
    
    assign func3_000 = (func3==000);
    assign func3_001 = (func3==001);
    assign func3_010 = (func3==010);
    assign func3_011 = (func3==011);
    assign func3_100 = (func3==100);
    assign func3_101 = (func3==101);
    assign func3_110 = (func3==110);
    assign func3_111 = (func3==111);
    
    //u_type instruction
    assign op_u  = (opcode == 7'b0110111 || opcode == 7'b0010111);
    assign rv_lui   = (opcode == 7'b0110111);
    assign rv_auipc = (opcode == 7'b0010111);
    
    //i_type instruction
    assign op_i = (op_cali || op_memi || opcode==7'b1101111)
    
    assign op_cali  = (opcode == 7'b0010011);
    assign rv_addi  = op_cali && func3_000;
    assign rv_slti  = op_cali && func3_010;
    assign rv_sltiu = op_cali && func3_011;
    assign rv_xori  = op_cali && func3_100;
    assign rv_ori   = op_cali && func3_110;
    assign rv_andi  = op_cali && func3_111;
    assign rv_slli  = op_cali && func3_001 && (func7==00000000);
    assign rv_srli  = op_cali && func3_101 && (func7==00000000);
    assign rv_srai  = op_cali && func3_101 && (func7==01000000);
    
    assign rv_jal  = (opcode == 7'b1101111) && func3_000;
    
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
    assign op_r  = (opcode == 7'b0110011);
    assign rv_add = op_r && func3_000 && (func7==00000000);
    assign rv_sub = op_r && func3_000 && (func7==01000000);
    assign rv_sll = op_r && func3_001 && (func7==00000000);
    assign rv_slt = op_r && func3_010 && (func7==00000000);
    assign rv_sltu= op_r && func3_011 && (func7==00000000);
    assign rv_xor = op_r && func3_100 && (func7==00000000);
    assign rv_srl = op_r && func3_101 && (func7==00000000);
    assign rv_sra = op_r && func3_101 && (func7==01000000);
    assign rv_or  = op_r && func3_110 && (func7==00000000);
    assign rv_and = op_r && func3_111 && (func7==00000000);
    
    
    //j_type instruction
    assign op_j    = (opcode == 7'b1100111);
    assign rv_jalr = (opcode == 7'b1100111) && func3_000;
    
    //b_type instruction
    assign op_b  = (opcode == 7'b1100011);
    assign rv_beq  = op_b && func3_001;
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
    
    assign reg_wrback_en = (op_r |
           	            op_i |
           	            op_u |
           	            op_j );
    
    assign rs1_en = (op_b |
           	     op_r |
           	     op_i |
           	     op_s );
    
    assign rs2_en = (op_r |
           	     op_b );
    
    assign imm_en = (op_u |
    		     op_j |
    		     op_b |
    		     op_i |
    		     op_s );
    
    assign shamt_en = (slli |
    		       srli |
    		       srai );

    assign imm = ({63{op_u}} & immU)
               | ({63{op_j}} & immJ)
               | ({63{op_b}} & immB)
               | ({63{op_i}} & immI)
               | ({63{op_s}} & immS);

    assign alu_ctrl[0]  = rv_addi | rv_add | (rv_jalr | rv_jal) |
			 (rv_lb | rv_lh | rv_lw | rv_lbu | rv_lhu | rv_lwu | rv_sb | rv_sh | rv_sw);
    assign alu_ctrl[1]  = rv_sub;
    assign alu_ctrl[2]  = rv_slti | rv_slt;
    assign alu_ctrl[3]  = rv_sltiu | rv_sltu;
    assign alu_ctrl[4]  = rv_and;
    assign alu_ctrl[5]  = rv_xor;
    assign alu_ctrl[6]  = rv_or;
    assign alu_ctrl[7]  = rv_slli | rv_sll;
    assign alu_ctrl[8]  = rv_srli | rv_srl;
    assign alu_ctrl[9]  = rv_sra | rv_srai;
    assign alu_ctrl[10] = rv_lui;
    assign alu_ctrl[11] = rv_beq;
    assign alu_ctrl[12] = rv_bne;
    assign alu_ctrl[13] = rv_blt;
    assign alu_ctrl[14] = rv_bge;
    assign alu_ctrl[15] = rv_bltu;
    assign alu_ctrl[16] = rv_bgeu;

    //pc control signal
    assign pc_src_en[0] = (rv_beq | rv_bne | rv_blt | rv_bge | rv_bltu | rv_bgeu);
    assign pc_src_en[1] = rv_jal;
    assign pc_src_en[2] = rv_jalr;
    assign pc_src_en[3] = rv_auipc;

    //memory control signal
    assign rd_mem_en = (rv_lb | rv_lh | rv_lw | rv_lbu | rv_lhu);
    assign wr_mem_en = op_s;
    assign wr_rd_mem_len = ({64{rv_ld | rv_sd}} & 8)
		         | ({64{rv_lb | rv_lbu | rv_sb}} & 1)
		         | ({64{rv_lh | rv_lhu | rv_sh}} & 2)
		         | ({64{rv_lw | rv_lwu | rv_sw}} & 4);

 
    //write back to regfile control
    assign mem2reg_en = op_s;
    assign alu2reg_en = ~(op_s | pc_src_en[0]);

    //register write back control signal
    assign wr_reg_en = ~op_s & ~op_b;
	
endmodule

