`ifndef ALU_OPNUM
    `define ALU_OPNUM 22
`endif
module alu (
    input  [`ALU_OPNUM-1:0] alu_ctrl,
    input  [63:0] alu_sr1,
    input  [63:0] alu_sr2,
    //input	  alu_src1_bit32,
    //input	  alu_src2_bit32,
    //input	  alu_src2_bit5,
    output [63:0] alu_res

);

    wire op_add;
    wire op_sub;
    wire op_slt;
    wire op_sltu;
    wire op_and;
    wire op_xor;
    wire op_or;
    wire op_sll;
    wire op_srl;
    wire op_sra;
    wire op_lui;
    wire op_beq ;
    wire op_bne ;
    wire op_blt ;
    wire op_bge ;
    wire op_bltu;
    wire op_bgeu;

    wire [63:0] add_src1;
    wire [63:0] add_src2;
    wire        add_cin;
    wire [63:0] add_sub_res;
    wire [63:0] add_res;
    wire        add_cout;

    wire [63:0] and_res;
    wire [63:0] or_res ;
    wire [63:0] xor_res;
    wire [63:0] lui_res;
    wire [63:0] slt_blt_bge_res;
    wire [63:0] sltu_bltu_bgeu_res;
    wire [63:0] sll_res;
    wire [63:0] srl_res;
    wire [63:0] sra_res;
    wire [63:0] beq_res;
    wire [63:0] bne_res;
    //***5.9***shift cputest pc:800000ac sraw a0,a0,s0, a0:98765432, s0:5, expect result: fffffffffcc3b2a1,but 4c3b2a1, since operate with the 64bit alu src
    //wire [31:0] alu_src1_32;
    //wire [31:0] alu_src2_32;
    //wire [31:0] sra_res_32;
    //wire [64:0] sra_res_64;
    //assign alu_src1_32 = alu_src1[31:0];
    //assign alu_src2_32 = alu_src2[31:0];
    //assign sra_res_32 = $signed(alu_sr1_32) >>> alu_sr2_32;
    //assign sra_res = (~alu_src1_bit32) ? sra_res_64 : sra_res_32;
    //***5.9***shift cputest pc:800000ac sraw a0,a0,s0, a0:98765432, s0:5, expect result: fffffffffcc3b2a1,but 4c3b2a1, since operate with the 64bit alu src

    assign op_add  = alu_ctrl[0];
    assign op_sub  = alu_ctrl[1];
    assign op_slt  = alu_ctrl[2];
    assign op_sltu = alu_ctrl[3];
    assign op_and  = alu_ctrl[4];
    assign op_xor  = alu_ctrl[5];
    assign op_or   = alu_ctrl[6];
    assign op_sll  = alu_ctrl[7];
    assign op_srl  = alu_ctrl[8];
    assign op_sra  = alu_ctrl[9];
    assign op_lui  = alu_ctrl[10];
    assign op_beq  = alu_ctrl[11];
    assign op_bne  = alu_ctrl[12];
    assign op_blt  = alu_ctrl[13];
    assign op_bge  = alu_ctrl[14];
    assign op_bltu = alu_ctrl[15];
    assign op_bgeu = alu_ctrl[16];

    wire op_div ;
    wire op_divu;
    wire op_mul ;
    wire [63:0] div_res;
    wire [63:0] divu_res;
    wire [63:0] mul_res;
    assign op_mul  = alu_ctrl[17];
    assign op_div  = alu_ctrl[18];
    assign op_divu = alu_ctrl[19];
    assign div_res  = $signed(alu_sr1) / $signed(alu_sr2);
    assign divu_res = alu_sr1 / alu_sr2;
    assign mul_res  = alu_sr1 * alu_sr2;
    //assign mul_res  = $signed(alu_sr1) * $signed(alu_sr2);
    wire op_rem;
    wire op_remu;
    wire op_remw;
    wire op_remuw;
    wire [63:0] rem_res;
    wire [63:0] remu_res;
    assign op_rem  = alu_ctrl[20];
    assign op_remu = alu_ctrl[21];
    assign rem_res  = $signed(alu_sr1) % $signed(alu_sr2);
    assign remu_res = alu_sr1 % alu_sr2;

    assign and_res = alu_sr1 & alu_sr2;
    assign or_res  = alu_sr1 | alu_sr2;
    assign xor_res = alu_sr1 ^ alu_sr2;
    assign lui_res = {{32{alu_sr2[31]}}, alu_sr2[31:12], 12'b0};
    
    assign sll_res = alu_sr1 << alu_sr2;
    assign srl_res = alu_sr1 >> alu_sr2;
    assign sra_res = $signed(alu_sr1) >>> alu_sr2;
    
    assign add_src1 = (op_bgeu | op_bge) ? ~alu_sr1: alu_sr1; 
    assign add_src2 = (op_sub | op_slt | op_sltu | op_beq | op_bne | op_blt | op_bltu) ? ~alu_sr2 : alu_sr2;
    //assign add_src2 = (op_sub | op_slt | op_sltu) ? ~alu_sr2 : alu_sr2;
    assign {add_cout, add_res} = add_src1 + add_src2 + {63'b0, add_cin};
    
    //unsigned num cal
    wire sign;
    wire sign_1;
    wire [63:0] add_res_u;
    wire add_cout_u;
    assign sign = (op_sltu | op_bltu) ? 1:0;
    assign sign_1 = (op_bgeu) ? 1:0;
    assign {add_cout_u, add_res_u} = {sign_1,add_src1} + {sign,add_src2} + {64'b0, add_cin};

    assign add_cin = (op_sub | op_slt | op_sltu | op_beq | op_bne | op_blt | op_bltu | op_bgeu | op_bge) ? 1:0;
    //assign add_cin = (add_src2 == ~alu_sr2) ? 1:0;
    assign add_sub_res = add_res;
    
    
    //assign slt_blt_bge_res[0] = add_res[63];
    assign slt_blt_bge_res[0] = add_res[63] | (op_bge & (alu_sr1 == alu_sr2));
    assign slt_blt_bge_res[63:1] = 63'b0;

    assign sltu_bltu_bgeu_res[0] = add_cout_u | (op_bgeu & (alu_sr1 == alu_sr2));
    assign sltu_bltu_bgeu_res[63:1] = 63'b0;
    
    assign beq_res = {63'b0,(add_res==0)};
    assign bne_res = {63'b0,(add_res!=0)};
    //assign beq_res = {63'b0,({add_cout, add_res}==0)};
    //assign bne_res = {63'b0,({add_cout, add_res}!=0)};

    assign alu_res = ({64{op_add  | op_sub}} & add_sub_res)
                   | ({64{op_slt  | op_blt | op_bge}}  & slt_blt_bge_res )
                   | ({64{op_sltu | op_bltu | op_bgeu}}  & sltu_bltu_bgeu_res)
                   | ({64{op_and }} & and_res )
                   | ({64{op_xor }} & xor_res )
                   | ({64{op_or  }} & or_res  )
                   | ({64{op_sll }} & sll_res )
                   | ({64{op_srl }} & srl_res )
                   | ({64{op_sra }} & sra_res )
                   | ({64{op_lui }} & lui_res )
                   | ({64{op_beq }} & beq_res )
                   | ({64{op_bne }} & bne_res )
                   | ({64{op_div }} & div_res )
                   | ({64{op_divu}} & divu_res)
                   | ({64{op_mul }} & mul_res )
                   | ({64{op_rem }} & rem_res )
                   | ({64{op_remu}} & remu_res);


endmodule
