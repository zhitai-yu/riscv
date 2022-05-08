// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__traceInitSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vtop___024root__traceInitTop(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vtop___024root__traceInitSub0(vlSelf, tracep);
    }
}

void Vtop___024root__traceInitSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+248,"clk", false,-1);
        tracep->declBit(c+249,"rst", false,-1);
        tracep->declBit(c+250,"ebreak", false,-1);
        tracep->declQuad(c+251,"pc", false,-1, 63,0);
        tracep->declBit(c+248,"top clk", false,-1);
        tracep->declBit(c+249,"top rst", false,-1);
        tracep->declBit(c+250,"top ebreak", false,-1);
        tracep->declQuad(c+251,"top pc", false,-1, 63,0);
        tracep->declBit(c+248,"top rv_cpu clk", false,-1);
        tracep->declBit(c+249,"top rv_cpu rst", false,-1);
        tracep->declBit(c+250,"top rv_cpu cpuebreak", false,-1);
        tracep->declQuad(c+251,"top rv_cpu cpupc", false,-1, 63,0);
        tracep->declBit(c+1,"top rv_cpu rs1_en", false,-1);
        tracep->declBit(c+2,"top rv_cpu rs2_en", false,-1);
        tracep->declBit(c+3,"top rv_cpu alu2reg_en", false,-1);
        tracep->declBit(c+4,"top rv_cpu mem2reg_en", false,-1);
        tracep->declQuad(c+5,"top rv_cpu imm", false,-1, 63,0);
        tracep->declBus(c+7,"top rv_cpu rd_mem_op", false,-1, 6,0);
        tracep->declQuad(c+8,"top rv_cpu rs1_data", false,-1, 63,0);
        tracep->declQuad(c+10,"top rv_cpu rs2_data", false,-1, 63,0);
        tracep->declBus(c+12,"top rv_cpu rs1_addr", false,-1, 4,0);
        tracep->declBus(c+13,"top rv_cpu rs2_addr", false,-1, 4,0);
        tracep->declBus(c+14,"top rv_cpu rd", false,-1, 4,0);
        tracep->declQuad(c+234,"top rv_cpu pc", false,-1, 63,0);
        tracep->declQuad(c+15,"top rv_cpu pc_reg", false,-1, 63,0);
        tracep->declBus(c+236,"top rv_cpu pc_sel", false,-1, 2,0);
        tracep->declBus(c+17,"top rv_cpu pc_src_en", false,-1, 3,0);
        tracep->declBit(c+18,"top rv_cpu wr_reg_en", false,-1);
        tracep->declBus(c+19,"top rv_cpu wr_rd_mem_len", false,-1, 7,0);
        tracep->declBus(c+20,"top rv_cpu alu_ctrl", false,-1, 16,0);
        tracep->declQuad(c+237,"top rv_cpu mem_rd_data", false,-1, 63,0);
        tracep->declBit(c+21,"top rv_cpu rd_mem_en", false,-1);
        tracep->declBit(c+22,"top rv_cpu wr_mem_en", false,-1);
        tracep->declBus(c+23,"top rv_cpu instr", false,-1, 31,0);
        tracep->declQuad(c+24,"top rv_cpu alu_src1", false,-1, 63,0);
        tracep->declQuad(c+26,"top rv_cpu alu_src2", false,-1, 63,0);
        tracep->declQuad(c+28,"top rv_cpu alu_res", false,-1, 63,0);
        tracep->declQuad(c+239,"top rv_cpu wr_reg_data", false,-1, 63,0);
        tracep->declQuad(c+28,"top rv_cpu rd_mem_addr", false,-1, 63,0);
        tracep->declQuad(c+28,"top rv_cpu rd_addr2mem", false,-1, 63,0);
        tracep->declQuad(c+28,"top rv_cpu wr_addr2mem", false,-1, 63,0);
        tracep->declQuad(c+234,"top rv_cpu wr_addr2instrmem", false,-1, 63,0);
        tracep->declBit(c+241,"top rv_cpu ebreak", false,-1);
        tracep->declBit(c+30,"top rv_cpu alu_sext_before_wr_reg", false,-1);
        tracep->declBit(c+31,"top rv_cpu alu_sr1_rs1_en", false,-1);
        tracep->declBit(c+32,"top rv_cpu alu_sr1_pc_en", false,-1);
        tracep->declBit(c+33,"top rv_cpu alu_sr2_rs2_en", false,-1);
        tracep->declBit(c+34,"top rv_cpu alu_sr2_imm_en", false,-1);
        tracep->declBit(c+35,"top rv_cpu alu_sr2_pc_en", false,-1);
        tracep->declBit(c+249,"top rv_cpu rv64_ctrl rst", false,-1);
        tracep->declBus(c+17,"top rv_cpu rv64_ctrl pc_src_en", false,-1, 3,0);
        tracep->declBit(c+31,"top rv_cpu rv64_ctrl alu_sr1_rs1_en", false,-1);
        tracep->declBit(c+32,"top rv_cpu rv64_ctrl alu_sr1_pc_en", false,-1);
        tracep->declBit(c+33,"top rv_cpu rv64_ctrl alu_sr2_rs2_en", false,-1);
        tracep->declBit(c+3,"top rv_cpu rv64_ctrl alu2reg_en", false,-1);
        tracep->declBit(c+35,"top rv_cpu rv64_ctrl alu_sr2_pc_en", false,-1);
        tracep->declBit(c+4,"top rv_cpu rv64_ctrl mem2reg_en", false,-1);
        tracep->declQuad(c+5,"top rv_cpu rv64_ctrl imm", false,-1, 63,0);
        tracep->declBit(c+34,"top rv_cpu rv64_ctrl alu_sr2_imm_en", false,-1);
        tracep->declBus(c+7,"top rv_cpu rv64_ctrl rd_mem_op", false,-1, 6,0);
        tracep->declBit(c+30,"top rv_cpu rv64_ctrl alu_sext_before_wr_reg", false,-1);
        tracep->declQuad(c+8,"top rv_cpu rv64_ctrl rs1_reg2ctrl", false,-1, 63,0);
        tracep->declQuad(c+10,"top rv_cpu rv64_ctrl rs2_reg2ctrl", false,-1, 63,0);
        tracep->declQuad(c+15,"top rv_cpu rv64_ctrl pc", false,-1, 63,0);
        tracep->declQuad(c+28,"top rv_cpu rv64_ctrl alu_res", false,-1, 63,0);
        tracep->declQuad(c+237,"top rv_cpu rv64_ctrl mem_rd_data", false,-1, 63,0);
        tracep->declBus(c+236,"top rv_cpu rv64_ctrl pc_sel", false,-1, 2,0);
        tracep->declQuad(c+24,"top rv_cpu rv64_ctrl alu_src1", false,-1, 63,0);
        tracep->declQuad(c+26,"top rv_cpu rv64_ctrl alu_src2", false,-1, 63,0);
        tracep->declQuad(c+239,"top rv_cpu rv64_ctrl wr_reg_data", false,-1, 63,0);
        tracep->declQuad(c+28,"top rv_cpu rv64_ctrl rd_mem_addr", false,-1, 63,0);
        tracep->declBus(c+20,"top rv_cpu rv64_alu alu_ctrl", false,-1, 16,0);
        tracep->declQuad(c+24,"top rv_cpu rv64_alu alu_sr1", false,-1, 63,0);
        tracep->declQuad(c+26,"top rv_cpu rv64_alu alu_sr2", false,-1, 63,0);
        tracep->declQuad(c+28,"top rv_cpu rv64_alu alu_res", false,-1, 63,0);
        tracep->declBit(c+36,"top rv_cpu rv64_alu op_add", false,-1);
        tracep->declBit(c+37,"top rv_cpu rv64_alu op_sub", false,-1);
        tracep->declBit(c+38,"top rv_cpu rv64_alu op_slt", false,-1);
        tracep->declBit(c+39,"top rv_cpu rv64_alu op_sltu", false,-1);
        tracep->declBit(c+40,"top rv_cpu rv64_alu op_and", false,-1);
        tracep->declBit(c+41,"top rv_cpu rv64_alu op_xor", false,-1);
        tracep->declBit(c+42,"top rv_cpu rv64_alu op_or", false,-1);
        tracep->declBit(c+43,"top rv_cpu rv64_alu op_sll", false,-1);
        tracep->declBit(c+44,"top rv_cpu rv64_alu op_srl", false,-1);
        tracep->declBit(c+45,"top rv_cpu rv64_alu op_sra", false,-1);
        tracep->declBit(c+46,"top rv_cpu rv64_alu op_lui", false,-1);
        tracep->declBit(c+47,"top rv_cpu rv64_alu op_beq", false,-1);
        tracep->declBit(c+48,"top rv_cpu rv64_alu op_bne", false,-1);
        tracep->declBit(c+49,"top rv_cpu rv64_alu op_blt", false,-1);
        tracep->declBit(c+50,"top rv_cpu rv64_alu op_bge", false,-1);
        tracep->declBit(c+51,"top rv_cpu rv64_alu op_bltu", false,-1);
        tracep->declBit(c+52,"top rv_cpu rv64_alu op_bgeu", false,-1);
        tracep->declQuad(c+53,"top rv_cpu rv64_alu add_src1", false,-1, 63,0);
        tracep->declQuad(c+55,"top rv_cpu rv64_alu add_src2", false,-1, 63,0);
        tracep->declBit(c+57,"top rv_cpu rv64_alu add_cin", false,-1);
        tracep->declQuad(c+58,"top rv_cpu rv64_alu add_sub_res", false,-1, 63,0);
        tracep->declQuad(c+58,"top rv_cpu rv64_alu add_res", false,-1, 63,0);
        tracep->declBit(c+60,"top rv_cpu rv64_alu add_cout", false,-1);
        tracep->declQuad(c+61,"top rv_cpu rv64_alu and_res", false,-1, 63,0);
        tracep->declQuad(c+63,"top rv_cpu rv64_alu or_res", false,-1, 63,0);
        tracep->declQuad(c+65,"top rv_cpu rv64_alu xor_res", false,-1, 63,0);
        tracep->declQuad(c+67,"top rv_cpu rv64_alu lui_res", false,-1, 63,0);
        tracep->declQuad(c+69,"top rv_cpu rv64_alu slt_blt_bge_res", false,-1, 63,0);
        tracep->declQuad(c+71,"top rv_cpu rv64_alu sltu_bltu_bgeu_res", false,-1, 63,0);
        tracep->declQuad(c+73,"top rv_cpu rv64_alu sll_res", false,-1, 63,0);
        tracep->declQuad(c+75,"top rv_cpu rv64_alu srl_res", false,-1, 63,0);
        tracep->declQuad(c+77,"top rv_cpu rv64_alu sra_res", false,-1, 63,0);
        tracep->declQuad(c+79,"top rv_cpu rv64_alu beq_res", false,-1, 63,0);
        tracep->declQuad(c+81,"top rv_cpu rv64_alu bne_res", false,-1, 63,0);
        tracep->declBit(c+83,"top rv_cpu rv64_alu sign", false,-1);
        tracep->declQuad(c+84,"top rv_cpu rv64_alu add_res_u", false,-1, 63,0);
        tracep->declBit(c+86,"top rv_cpu rv64_alu add_cout_u", false,-1);
        tracep->declBit(c+248,"top rv_cpu rv64_pc clk", false,-1);
        tracep->declBit(c+249,"top rv_cpu rv64_pc rst", false,-1);
        tracep->declBus(c+236,"top rv_cpu rv64_pc pc_sel", false,-1, 2,0);
        tracep->declQuad(c+8,"top rv_cpu rv64_pc rs1", false,-1, 63,0);
        tracep->declQuad(c+5,"top rv_cpu rv64_pc imm", false,-1, 63,0);
        tracep->declBit(c+241,"top rv_cpu rv64_pc ebreak", false,-1);
        tracep->declQuad(c+234,"top rv_cpu rv64_pc pc", false,-1, 63,0);
        tracep->declQuad(c+15,"top rv_cpu rv64_pc pc_reg", false,-1, 63,0);
        tracep->declQuad(c+242,"top rv_cpu rv64_pc pc_src1", false,-1, 63,0);
        tracep->declQuad(c+244,"top rv_cpu rv64_pc pc_src2", false,-1, 63,0);
        tracep->declBit(c+249,"top rv_cpu rv64_idu rst", false,-1);
        tracep->declBus(c+23,"top rv_cpu rv64_idu instr", false,-1, 31,0);
        tracep->declBus(c+17,"top rv_cpu rv64_idu pc_src_en", false,-1, 3,0);
        tracep->declBit(c+1,"top rv_cpu rv64_idu rs1_en", false,-1);
        tracep->declBit(c+2,"top rv_cpu rv64_idu rs2_en", false,-1);
        tracep->declBit(c+3,"top rv_cpu rv64_idu alu2reg_en", false,-1);
        tracep->declBit(c+4,"top rv_cpu rv64_idu mem2reg_en", false,-1);
        tracep->declQuad(c+5,"top rv_cpu rv64_idu imm", false,-1, 63,0);
        tracep->declBus(c+7,"top rv_cpu rv64_idu rd_mem_op", false,-1, 6,0);
        tracep->declBit(c+31,"top rv_cpu rv64_idu alu_sr1_rs1_en", false,-1);
        tracep->declBit(c+32,"top rv_cpu rv64_idu alu_sr1_pc_en", false,-1);
        tracep->declBit(c+33,"top rv_cpu rv64_idu alu_sr2_rs2_en", false,-1);
        tracep->declBit(c+34,"top rv_cpu rv64_idu alu_sr2_imm_en", false,-1);
        tracep->declBit(c+35,"top rv_cpu rv64_idu alu_sr2_pc_en", false,-1);
        tracep->declBit(c+30,"top rv_cpu rv64_idu alu_sext_before_wr_reg", false,-1);
        tracep->declBus(c+12,"top rv_cpu rv64_idu rs1", false,-1, 4,0);
        tracep->declBus(c+13,"top rv_cpu rv64_idu rs2", false,-1, 4,0);
        tracep->declBus(c+14,"top rv_cpu rv64_idu rd", false,-1, 4,0);
        tracep->declBit(c+18,"top rv_cpu rv64_idu wr_reg_en", false,-1);
        tracep->declBus(c+20,"top rv_cpu rv64_idu alu_ctrl", false,-1, 16,0);
        tracep->declBus(c+19,"top rv_cpu rv64_idu wr_rd_mem_len", false,-1, 7,0);
        tracep->declBit(c+21,"top rv_cpu rv64_idu rd_mem_en", false,-1);
        tracep->declBit(c+22,"top rv_cpu rv64_idu wr_mem_en", false,-1);
        tracep->declBit(c+241,"top rv_cpu rv64_idu ebreak", false,-1);
        tracep->declBus(c+87,"top rv_cpu rv64_idu opcode", false,-1, 6,0);
        tracep->declBus(c+88,"top rv_cpu rv64_idu func3", false,-1, 2,0);
        tracep->declBus(c+89,"top rv_cpu rv64_idu func7", false,-1, 6,0);
        tracep->declQuad(c+90,"top rv_cpu rv64_idu immI", false,-1, 63,0);
        tracep->declQuad(c+92,"top rv_cpu rv64_idu immU", false,-1, 63,0);
        tracep->declQuad(c+94,"top rv_cpu rv64_idu immS", false,-1, 63,0);
        tracep->declQuad(c+96,"top rv_cpu rv64_idu immB", false,-1, 63,0);
        tracep->declQuad(c+98,"top rv_cpu rv64_idu immJ", false,-1, 63,0);
        tracep->declBit(c+100,"top rv_cpu rv64_idu func3_000", false,-1);
        tracep->declBit(c+101,"top rv_cpu rv64_idu func3_001", false,-1);
        tracep->declBit(c+102,"top rv_cpu rv64_idu func3_010", false,-1);
        tracep->declBit(c+103,"top rv_cpu rv64_idu func3_011", false,-1);
        tracep->declBit(c+104,"top rv_cpu rv64_idu func3_100", false,-1);
        tracep->declBit(c+105,"top rv_cpu rv64_idu func3_101", false,-1);
        tracep->declBit(c+106,"top rv_cpu rv64_idu func3_110", false,-1);
        tracep->declBit(c+107,"top rv_cpu rv64_idu func3_111", false,-1);
        tracep->declBit(c+108,"top rv_cpu rv64_idu op_u", false,-1);
        tracep->declBit(c+109,"top rv_cpu rv64_idu op_i", false,-1);
        tracep->declBit(c+110,"top rv_cpu rv64_idu op_r", false,-1);
        tracep->declBit(c+111,"top rv_cpu rv64_idu op_j", false,-1);
        tracep->declBit(c+112,"top rv_cpu rv64_idu op_b", false,-1);
        tracep->declBit(c+22,"top rv_cpu rv64_idu op_s", false,-1);
        tracep->declBit(c+113,"top rv_cpu rv64_idu op_cali", false,-1);
        tracep->declBit(c+4,"top rv_cpu rv64_idu op_memi", false,-1);
        tracep->declBit(c+114,"top rv_cpu rv64_idu rv_addi", false,-1);
        tracep->declBit(c+115,"top rv_cpu rv64_idu rv_slti", false,-1);
        tracep->declBit(c+116,"top rv_cpu rv64_idu rv_sltiu", false,-1);
        tracep->declBit(c+117,"top rv_cpu rv64_idu rv_xori", false,-1);
        tracep->declBit(c+118,"top rv_cpu rv64_idu rv_ori", false,-1);
        tracep->declBit(c+119,"top rv_cpu rv64_idu rv_andi", false,-1);
        tracep->declBit(c+120,"top rv_cpu rv64_idu rv_slli", false,-1);
        tracep->declBit(c+121,"top rv_cpu rv64_idu rv_srli", false,-1);
        tracep->declBit(c+122,"top rv_cpu rv64_idu rv_srai", false,-1);
        tracep->declBit(c+123,"top rv_cpu rv64_idu rv_add", false,-1);
        tracep->declBit(c+124,"top rv_cpu rv64_idu rv_sub", false,-1);
        tracep->declBit(c+125,"top rv_cpu rv64_idu rv_sll", false,-1);
        tracep->declBit(c+126,"top rv_cpu rv64_idu rv_slt", false,-1);
        tracep->declBit(c+127,"top rv_cpu rv64_idu rv_sltu", false,-1);
        tracep->declBit(c+128,"top rv_cpu rv64_idu rv_xor", false,-1);
        tracep->declBit(c+129,"top rv_cpu rv64_idu rv_srl", false,-1);
        tracep->declBit(c+130,"top rv_cpu rv64_idu rv_sra", false,-1);
        tracep->declBit(c+131,"top rv_cpu rv64_idu rv_or", false,-1);
        tracep->declBit(c+132,"top rv_cpu rv64_idu rv_and", false,-1);
        tracep->declBit(c+133,"top rv_cpu rv64_idu rv_jalr", false,-1);
        tracep->declBit(c+134,"top rv_cpu rv64_idu rv_beq", false,-1);
        tracep->declBit(c+135,"top rv_cpu rv64_idu rv_bne", false,-1);
        tracep->declBit(c+136,"top rv_cpu rv64_idu rv_blt", false,-1);
        tracep->declBit(c+137,"top rv_cpu rv64_idu rv_bge", false,-1);
        tracep->declBit(c+138,"top rv_cpu rv64_idu rv_bltu", false,-1);
        tracep->declBit(c+139,"top rv_cpu rv64_idu rv_bgeu", false,-1);
        tracep->declBit(c+140,"top rv_cpu rv64_idu rv_sb", false,-1);
        tracep->declBit(c+141,"top rv_cpu rv64_idu rv_sh", false,-1);
        tracep->declBit(c+142,"top rv_cpu rv64_idu rv_sw", false,-1);
        tracep->declBit(c+143,"top rv_cpu rv64_idu rv_sd", false,-1);
        tracep->declBit(c+144,"top rv_cpu rv64_idu rv_lui", false,-1);
        tracep->declBit(c+145,"top rv_cpu rv64_idu rv_auipc", false,-1);
        tracep->declBit(c+111,"top rv_cpu rv64_idu rv_jal", false,-1);
        tracep->declBit(c+146,"top rv_cpu rv64_idu rv_ld", false,-1);
        tracep->declBit(c+147,"top rv_cpu rv64_idu rv_lw", false,-1);
        tracep->declBit(c+148,"top rv_cpu rv64_idu rv_lh", false,-1);
        tracep->declBit(c+149,"top rv_cpu rv64_idu rv_lb", false,-1);
        tracep->declBit(c+150,"top rv_cpu rv64_idu rv_lwu", false,-1);
        tracep->declBit(c+151,"top rv_cpu rv64_idu rv_lhu", false,-1);
        tracep->declBit(c+152,"top rv_cpu rv64_idu rv_lbu", false,-1);
        tracep->declBit(c+153,"top rv_cpu rv64_idu imm_en", false,-1);
        tracep->declBit(c+154,"top rv_cpu rv64_idu op_rw", false,-1);
        tracep->declBit(c+155,"top rv_cpu rv64_idu rv_addw", false,-1);
        tracep->declBit(c+156,"top rv_cpu rv64_idu rv_subw", false,-1);
        tracep->declBit(c+157,"top rv_cpu rv64_idu rv_sllw", false,-1);
        tracep->declBit(c+158,"top rv_cpu rv64_idu rv_srlw", false,-1);
        tracep->declBit(c+159,"top rv_cpu rv64_idu rv_sraw", false,-1);
        tracep->declBit(c+160,"top rv_cpu rv64_idu rv_mulw", false,-1);
        tracep->declBit(c+161,"top rv_cpu rv64_idu rv_diuw", false,-1);
        tracep->declBit(c+162,"top rv_cpu rv64_idu rv_divuw", false,-1);
        tracep->declBit(c+163,"top rv_cpu rv64_idu rv_remw", false,-1);
        tracep->declBit(c+164,"top rv_cpu rv64_idu rv_remuw", false,-1);
        tracep->declBit(c+165,"top rv_cpu rv64_idu op_iw", false,-1);
        tracep->declBit(c+166,"top rv_cpu rv64_idu rv_addiw", false,-1);
        tracep->declBit(c+167,"top rv_cpu rv64_idu rv_slliw", false,-1);
        tracep->declBit(c+168,"top rv_cpu rv64_idu rv_srliw", false,-1);
        tracep->declBit(c+169,"top rv_cpu rv64_idu rv_sraiw", false,-1);
        tracep->declBit(c+248,"top rv_cpu rv64_instr_mem clk", false,-1);
        tracep->declBit(c+249,"top rv_cpu rv64_instr_mem rst", false,-1);
        tracep->declQuad(c+234,"top rv_cpu rv64_instr_mem rd_addr", false,-1, 63,0);
        tracep->declBit(c+253,"top rv_cpu rv64_instr_mem rd_en", false,-1);
        tracep->declBus(c+23,"top rv_cpu rv64_instr_mem rd_instr", false,-1, 31,0);
        tracep->declQuad(c+246,"top rv_cpu rv64_instr_mem rdata", false,-1, 63,0);
        tracep->declBit(c+248,"top rv_cpu rv64_data_mem clk", false,-1);
        tracep->declBit(c+249,"top rv_cpu rv64_data_mem rst", false,-1);
        tracep->declBit(c+22,"top rv_cpu rv64_data_mem wr_en", false,-1);
        tracep->declQuad(c+28,"top rv_cpu rv64_data_mem wr_addr", false,-1, 63,0);
        tracep->declQuad(c+10,"top rv_cpu rv64_data_mem wr_data", false,-1, 63,0);
        tracep->declBus(c+19,"top rv_cpu rv64_data_mem wr_len", false,-1, 7,0);
        tracep->declQuad(c+28,"top rv_cpu rv64_data_mem rd_addr", false,-1, 63,0);
        tracep->declBit(c+21,"top rv_cpu rv64_data_mem rd_en", false,-1);
        tracep->declQuad(c+237,"top rv_cpu rv64_data_mem rd_data", false,-1, 63,0);
        tracep->declQuad(c+254,"top rv_cpu rv64_data_mem rdata", false,-1, 63,0);
        tracep->declQuad(c+256,"top rv_cpu rv64_data_mem wdata", false,-1, 63,0);
        tracep->declQuad(c+258,"top rv_cpu rv64_data_mem waddr", false,-1, 63,0);
        tracep->declBus(c+260,"top rv_cpu rv64_data_mem wlen", false,-1, 7,0);
        tracep->declBit(c+248,"top rv_cpu rv64_regfile clk", false,-1);
        tracep->declBit(c+249,"top rv_cpu rv64_regfile rst", false,-1);
        tracep->declBit(c+1,"top rv_cpu rv64_regfile rs1_en", false,-1);
        tracep->declBus(c+12,"top rv_cpu rv64_regfile rs1_addr", false,-1, 4,0);
        tracep->declBit(c+2,"top rv_cpu rv64_regfile rs2_en", false,-1);
        tracep->declBus(c+13,"top rv_cpu rv64_regfile rs2_addr", false,-1, 4,0);
        tracep->declBit(c+18,"top rv_cpu rv64_regfile wr_en", false,-1);
        tracep->declQuad(c+239,"top rv_cpu rv64_regfile wr_data", false,-1, 63,0);
        tracep->declBus(c+14,"top rv_cpu rv64_regfile wr_addr", false,-1, 4,0);
        tracep->declQuad(c+8,"top rv_cpu rv64_regfile rs1_data", false,-1, 63,0);
        tracep->declQuad(c+10,"top rv_cpu rv64_regfile rs2_data", false,-1, 63,0);
        tracep->declBus(c+261,"top rv_cpu rv64_regfile i", false,-1, 31,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+170+i*2,"top rv_cpu rv64_regfile regfile", true,(i+0), 63,0);}}
    }
}

void Vtop___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void Vtop___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void Vtop___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void Vtop___024root__traceRegister(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&Vtop___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&Vtop___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&Vtop___024root__traceCleanup, vlSelf);
    }
}

void Vtop___024root__traceFullSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vtop___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vtop___024root* const __restrict vlSelf = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vtop___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void Vtop___024root__traceFullSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlWide<3>/*95:0*/ __Vtemp19;
    VlWide<3>/*95:0*/ __Vtemp20;
    VlWide<3>/*95:0*/ __Vtemp21;
    VlWide<3>/*95:0*/ __Vtemp22;
    VlWide<3>/*95:0*/ __Vtemp23;
    VlWide<3>/*95:0*/ __Vtemp26;
    VlWide<3>/*95:0*/ __Vtemp27;
    VlWide<3>/*95:0*/ __Vtemp28;
    VlWide<3>/*95:0*/ __Vtemp29;
    VlWide<3>/*95:0*/ __Vtemp30;
    VlWide<3>/*95:0*/ __Vtemp32;
    VlWide<3>/*95:0*/ __Vtemp34;
    VlWide<3>/*95:0*/ __Vtemp35;
    VlWide<3>/*95:0*/ __Vtemp36;
    VlWide<3>/*95:0*/ __Vtemp37;
    VlWide<3>/*95:0*/ __Vtemp38;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(((((0x63U == (0x7fU 
                                              & vlSelf->top__DOT__rv_cpu__DOT__instr)) 
                                   | (IData)(vlSelf->top__DOT__rv_cpu__DOT__rv64_idu__DOT__op_r)) 
                                  | (IData)(vlSelf->top__DOT__rv_cpu__DOT__rv64_idu__DOT__op_i)) 
                                 | (0x23U == (0x7fU 
                                              & vlSelf->top__DOT__rv_cpu__DOT__instr)))));
        tracep->fullBit(oldp+2,((((IData)(vlSelf->top__DOT__rv_cpu__DOT__rv64_idu__DOT__op_r) 
                                  | (0x23U == (0x7fU 
                                               & vlSelf->top__DOT__rv_cpu__DOT__instr))) 
                                 | (0x63U == (0x7fU 
                                              & vlSelf->top__DOT__rv_cpu__DOT__instr)))));
        tracep->fullBit(oldp+3,(vlSelf->top__DOT__rv_cpu__DOT__alu2reg_en));
        tracep->fullBit(oldp+4,((3U == (0x7fU & vlSelf->top__DOT__rv_cpu__DOT__instr))));
        tracep->fullQData(oldp+5,(vlSelf->top__DOT__rv_cpu__DOT__imm),64);
        tracep->fullCData(oldp+7,(vlSelf->top__DOT__rv_cpu__DOT__rd_mem_op),7);
        tracep->fullQData(oldp+8,(vlSelf->top__DOT__rv_cpu__DOT__rs1_data),64);
        tracep->fullQData(oldp+10,(((0U == (0x1fU & 
                                            (vlSelf->top__DOT__rv_cpu__DOT__instr 
                                             >> 0x14U)))
                                     ? 0ULL : vlSelf->top__DOT__rv_cpu__DOT__rv64_regfile__DOT__regfile
                                    [(0x1fU & (vlSelf->top__DOT__rv_cpu__DOT__instr 
                                               >> 0x14U))])),64);
        tracep->fullCData(oldp+12,((0x1fU & (vlSelf->top__DOT__rv_cpu__DOT__instr 
                                             >> 0xfU))),5);
        tracep->fullCData(oldp+13,((0x1fU & (vlSelf->top__DOT__rv_cpu__DOT__instr 
                                             >> 0x14U))),5);
        tracep->fullCData(oldp+14,((0x1fU & (vlSelf->top__DOT__rv_cpu__DOT__instr 
                                             >> 7U))),5);
        tracep->fullQData(oldp+15,(vlSelf->top__DOT__rv_cpu__DOT__pc_reg),64);
        tracep->fullCData(oldp+17,(vlSelf->top__DOT__rv_cpu__DOT__pc_src_en),4);
        tracep->fullBit(oldp+18,((1U & (~ ((0x63U == 
                                            (0x7fU 
                                             & vlSelf->top__DOT__rv_cpu__DOT__instr)) 
                                           | (0x23U 
                                              == (0x7fU 
                                                  & vlSelf->top__DOT__rv_cpu__DOT__instr)))))));
        tracep->fullCData(oldp+19,(((((8U & (- (IData)(
                                                       ((IData)(vlSelf->top__DOT__rv_cpu__DOT__rv64_idu__DOT__rv_ld) 
                                                        | (IData)(
                                                                  (0x3023U 
                                                                   == 
                                                                   (0x707fU 
                                                                    & vlSelf->top__DOT__rv_cpu__DOT__instr))))))) 
                                      | (1U & (- (IData)(
                                                         (((IData)(vlSelf->top__DOT__rv_cpu__DOT__rv64_idu__DOT__rv_lb) 
                                                           | (IData)(vlSelf->top__DOT__rv_cpu__DOT__rv64_idu__DOT__rv_lbu)) 
                                                          | (IData)(
                                                                    (0x23U 
                                                                     == 
                                                                     (0x707fU 
                                                                      & vlSelf->top__DOT__rv_cpu__DOT__instr)))))))) 
                                     | (2U & (- (IData)(
                                                        (((IData)(vlSelf->top__DOT__rv_cpu__DOT__rv64_idu__DOT__rv_lh) 
                                                          | (IData)(vlSelf->top__DOT__rv_cpu__DOT__rv64_idu__DOT__rv_lhu)) 
                                                         | (IData)(
                                                                   (0x1023U 
                                                                    == 
                                                                    (0x707fU 
                                                                     & vlSelf->top__DOT__rv_cpu__DOT__instr)))))))) 
                                    | (4U & (- (IData)(
                                                       (((IData)(vlSelf->top__DOT__rv_cpu__DOT__rv64_idu__DOT__rv_lw) 
                                                         | (IData)(
                                                                   (0x6003U 
                                                                    == 
                                                                    (0x707fU 
                                                                     & vlSelf->top__DOT__rv_cpu__DOT__instr)))) 
                                                        | (IData)(
                                                                  (0x2023U 
                                                                   == 
                                                                   (0x707fU 
                                                                    & vlSelf->top__DOT__rv_cpu__DOT__instr))))))))),8);
        tracep->fullIData(oldp+20,(vlSelf->top__DOT__rv_cpu__DOT__alu_ctrl),17);
        tracep->fullBit(oldp+21,(((((((IData)(vlSelf->top__DOT__rv_cpu__DOT__rv64_idu__DOT__rv_lb) 
                                      | (IData)(vlSelf->top__DOT__rv_cpu__DOT__rv64_idu__DOT__rv_lh)) 
                                     | (IData)(vlSelf->top__DOT__rv_cpu__DOT__rv64_idu__DOT__rv_lw)) 
                                    | (IData)(vlSelf->top__DOT__rv_cpu__DOT__rv64_idu__DOT__rv_lbu)) 
                                   | (IData)(vlSelf->top__DOT__rv_cpu__DOT__rv64_idu__DOT__rv_lhu)) 
                                  | (IData)(vlSelf->top__DOT__rv_cpu__DOT__rv64_idu__DOT__rv_ld))));
        tracep->fullBit(oldp+22,((0x23U == (0x7fU & vlSelf->top__DOT__rv_cpu__DOT__instr))));
        tracep->fullIData(oldp+23,(vlSelf->top__DOT__rv_cpu__DOT__instr),32);
        tracep->fullQData(oldp+24,(vlSelf->top__DOT__rv_cpu__DOT__alu_src1),64);
        tracep->fullQData(oldp+26,(vlSelf->top__DOT__rv_cpu__DOT__alu_src2),64);
        tracep->fullQData(oldp+28,(vlSelf->top__DOT__rv_cpu__DOT__alu_res),64);
        tracep->fullBit(oldp+30,(vlSelf->top__DOT__rv_cpu__DOT__alu_sext_before_wr_reg));
        tracep->fullBit(oldp+31,((((((0x63U == (0x7fU 
                                                & vlSelf->top__DOT__rv_cpu__DOT__instr)) 
                                     | (IData)(vlSelf->top__DOT__rv_cpu__DOT__rv64_idu__DOT__op_r)) 
                                    | (IData)(vlSelf->top__DOT__rv_cpu__DOT__rv64_idu__DOT__op_i)) 
                                   | (0x23U == (0x7fU 
                                                & vlSelf->top__DOT__rv_cpu__DOT__instr))) 
                                  & (~ (IData)(vlSelf->top__DOT__rv_cpu__DOT__alu_sr1_pc_en)))));
        tracep->fullBit(oldp+32,(vlSelf->top__DOT__rv_cpu__DOT__alu_sr1_pc_en));
        tracep->fullBit(oldp+33,(vlSelf->top__DOT__rv_cpu__DOT__alu_sr2_rs2_en));
        tracep->fullBit(oldp+34,((((((((IData)(vlSelf->top__DOT__rv_cpu__DOT__rv64_idu__DOT__op_u) 
                                       | (0x6fU == 
                                          (0x7fU & vlSelf->top__DOT__rv_cpu__DOT__instr))) 
                                      | (0x63U == (0x7fU 
                                                   & vlSelf->top__DOT__rv_cpu__DOT__instr))) 
                                     | (IData)(vlSelf->top__DOT__rv_cpu__DOT__rv64_idu__DOT__op_i)) 
                                    | (0x23U == (0x7fU 
                                                 & vlSelf->top__DOT__rv_cpu__DOT__instr))) 
                                   & (~ (IData)(vlSelf->top__DOT__rv_cpu__DOT__alu_sr2_pc_en))) 
                                  & (~ (IData)(vlSelf->top__DOT__rv_cpu__DOT__alu_sr2_rs2_en)))));
        tracep->fullBit(oldp+35,(vlSelf->top__DOT__rv_cpu__DOT__alu_sr2_pc_en));
        tracep->fullBit(oldp+36,((1U & vlSelf->top__DOT__rv_cpu__DOT__alu_ctrl)));
        tracep->fullBit(oldp+37,((1U & (vlSelf->top__DOT__rv_cpu__DOT__alu_ctrl 
                                        >> 1U))));
        tracep->fullBit(oldp+38,((1U & (vlSelf->top__DOT__rv_cpu__DOT__alu_ctrl 
                                        >> 2U))));
        tracep->fullBit(oldp+39,((1U & (vlSelf->top__DOT__rv_cpu__DOT__alu_ctrl 
                                        >> 3U))));
        tracep->fullBit(oldp+40,((1U & (vlSelf->top__DOT__rv_cpu__DOT__alu_ctrl 
                                        >> 4U))));
        tracep->fullBit(oldp+41,((1U & (vlSelf->top__DOT__rv_cpu__DOT__alu_ctrl 
                                        >> 5U))));
        tracep->fullBit(oldp+42,((1U & (vlSelf->top__DOT__rv_cpu__DOT__alu_ctrl 
                                        >> 6U))));
        tracep->fullBit(oldp+43,((1U & (vlSelf->top__DOT__rv_cpu__DOT__alu_ctrl 
                                        >> 7U))));
        tracep->fullBit(oldp+44,((1U & (vlSelf->top__DOT__rv_cpu__DOT__alu_ctrl 
                                        >> 8U))));
        tracep->fullBit(oldp+45,((1U & (vlSelf->top__DOT__rv_cpu__DOT__alu_ctrl 
                                        >> 9U))));
        tracep->fullBit(oldp+46,((1U & (vlSelf->top__DOT__rv_cpu__DOT__alu_ctrl 
                                        >> 0xaU))));
        tracep->fullBit(oldp+47,((1U & (vlSelf->top__DOT__rv_cpu__DOT__alu_ctrl 
                                        >> 0xbU))));
        tracep->fullBit(oldp+48,((1U & (vlSelf->top__DOT__rv_cpu__DOT__alu_ctrl 
                                        >> 0xcU))));
        tracep->fullBit(oldp+49,((1U & (vlSelf->top__DOT__rv_cpu__DOT__alu_ctrl 
                                        >> 0xdU))));
        tracep->fullBit(oldp+50,((1U & (vlSelf->top__DOT__rv_cpu__DOT__alu_ctrl 
                                        >> 0xeU))));
        tracep->fullBit(oldp+51,((1U & (vlSelf->top__DOT__rv_cpu__DOT__alu_ctrl 
                                        >> 0xfU))));
        tracep->fullBit(oldp+52,((1U & (vlSelf->top__DOT__rv_cpu__DOT__alu_ctrl 
                                        >> 0x10U))));
        tracep->fullQData(oldp+53,(vlSelf->top__DOT__rv_cpu__DOT__rv64_alu__DOT__add_src1),64);
        tracep->fullQData(oldp+55,(vlSelf->top__DOT__rv_cpu__DOT__rv64_alu__DOT__add_src2),64);
        tracep->fullBit(oldp+57,(vlSelf->top__DOT__rv_cpu__DOT__rv64_alu__DOT__add_cin));
        tracep->fullQData(oldp+58,(vlSelf->top__DOT__rv_cpu__DOT__rv64_alu__DOT__add_res),64);
        VL_EXTEND_WQ(65,64, __Vtemp19, vlSelf->top__DOT__rv_cpu__DOT__rv64_alu__DOT__add_src1);
        VL_EXTEND_WQ(65,64, __Vtemp20, vlSelf->top__DOT__rv_cpu__DOT__rv64_alu__DOT__add_src2);
        VL_ADD_W(3, __Vtemp21, __Vtemp19, __Vtemp20);
        VL_EXTEND_WI(65,1, __Vtemp22, (IData)(vlSelf->top__DOT__rv_cpu__DOT__rv64_alu__DOT__add_cin));
        VL_ADD_W(3, __Vtemp23, __Vtemp21, __Vtemp22);
        tracep->fullBit(oldp+60,((1U & __Vtemp23[2U])));
        tracep->fullQData(oldp+61,((vlSelf->top__DOT__rv_cpu__DOT__alu_src1 
                                    & vlSelf->top__DOT__rv_cpu__DOT__alu_src2)),64);
        tracep->fullQData(oldp+63,((vlSelf->top__DOT__rv_cpu__DOT__alu_src1 
                                    | vlSelf->top__DOT__rv_cpu__DOT__alu_src2)),64);
        tracep->fullQData(oldp+65,((vlSelf->top__DOT__rv_cpu__DOT__alu_src1 
                                    ^ vlSelf->top__DOT__rv_cpu__DOT__alu_src2)),64);
        tracep->fullQData(oldp+67,((((QData)((IData)(
                                                     (- (IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT__rv_cpu__DOT__alu_src2 
                                                                            >> 0x1fU))))))) 
                                     << 0x20U) | (QData)((IData)(
                                                                 ((IData)(
                                                                          (vlSelf->top__DOT__rv_cpu__DOT__alu_src2 
                                                                           >> 0xcU)) 
                                                                  << 0xcU))))),64);
        tracep->fullQData(oldp+69,(vlSelf->top__DOT__rv_cpu__DOT__rv64_alu__DOT__slt_blt_bge_res),64);
        VL_EXTEND_WQ(65,64, __Vtemp26, vlSelf->top__DOT__rv_cpu__DOT__rv64_alu__DOT__add_src1);
        __Vtemp27[0U] = (IData)(vlSelf->top__DOT__rv_cpu__DOT__rv64_alu__DOT__add_src2);
        __Vtemp27[1U] = (IData)((vlSelf->top__DOT__rv_cpu__DOT__rv64_alu__DOT__add_src2 
                                 >> 0x20U));
        __Vtemp27[2U] = ((IData)((0U != (0xb80eU & vlSelf->top__DOT__rv_cpu__DOT__alu_ctrl)))
                          ? 1U : 0U);
        VL_ADD_W(3, __Vtemp28, __Vtemp26, __Vtemp27);
        VL_EXTEND_WI(65,1, __Vtemp29, (IData)(vlSelf->top__DOT__rv_cpu__DOT__rv64_alu__DOT__add_cin));
        VL_ADD_W(3, __Vtemp30, __Vtemp28, __Vtemp29);
        tracep->fullQData(oldp+71,((QData)((IData)(
                                                   (1U 
                                                    & __Vtemp30[2U])))),64);
        tracep->fullQData(oldp+73,(VL_SHIFTL_QQQ(64,64,64, vlSelf->top__DOT__rv_cpu__DOT__alu_src1, vlSelf->top__DOT__rv_cpu__DOT__alu_src2)),64);
        tracep->fullQData(oldp+75,(VL_SHIFTR_QQQ(64,64,64, vlSelf->top__DOT__rv_cpu__DOT__alu_src1, vlSelf->top__DOT__rv_cpu__DOT__alu_src2)),64);
        tracep->fullQData(oldp+77,(VL_SHIFTRS_QQQ(64,64,64, vlSelf->top__DOT__rv_cpu__DOT__alu_src1, vlSelf->top__DOT__rv_cpu__DOT__alu_src2)),64);
        tracep->fullQData(oldp+79,((QData)((IData)(
                                                   (0ULL 
                                                    == vlSelf->top__DOT__rv_cpu__DOT__rv64_alu__DOT__add_res)))),64);
        tracep->fullQData(oldp+81,((QData)((IData)(
                                                   (0ULL 
                                                    != vlSelf->top__DOT__rv_cpu__DOT__rv64_alu__DOT__add_res)))),64);
        tracep->fullBit(oldp+83,(((IData)((0U != (0xb80eU 
                                                  & vlSelf->top__DOT__rv_cpu__DOT__alu_ctrl)))
                                   ? 1U : 0U)));
        VL_EXTEND_WI(65,1, __Vtemp32, (IData)(vlSelf->top__DOT__rv_cpu__DOT__rv64_alu__DOT__add_cin));
        tracep->fullQData(oldp+84,(((vlSelf->top__DOT__rv_cpu__DOT__rv64_alu__DOT__add_src1 
                                     + vlSelf->top__DOT__rv_cpu__DOT__rv64_alu__DOT__add_src2) 
                                    + (((QData)((IData)(
                                                        __Vtemp32[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    __Vtemp32[0U]))))),64);
        VL_EXTEND_WQ(65,64, __Vtemp34, vlSelf->top__DOT__rv_cpu__DOT__rv64_alu__DOT__add_src1);
        __Vtemp35[0U] = (IData)(vlSelf->top__DOT__rv_cpu__DOT__rv64_alu__DOT__add_src2);
        __Vtemp35[1U] = (IData)((vlSelf->top__DOT__rv_cpu__DOT__rv64_alu__DOT__add_src2 
                                 >> 0x20U));
        __Vtemp35[2U] = ((IData)((0U != (0xb80eU & vlSelf->top__DOT__rv_cpu__DOT__alu_ctrl)))
                          ? 1U : 0U);
        VL_ADD_W(3, __Vtemp36, __Vtemp34, __Vtemp35);
        VL_EXTEND_WI(65,1, __Vtemp37, (IData)(vlSelf->top__DOT__rv_cpu__DOT__rv64_alu__DOT__add_cin));
        VL_ADD_W(3, __Vtemp38, __Vtemp36, __Vtemp37);
        tracep->fullBit(oldp+86,((1U & __Vtemp38[2U])));
        tracep->fullCData(oldp+87,((0x7fU & vlSelf->top__DOT__rv_cpu__DOT__instr)),7);
        tracep->fullCData(oldp+88,((7U & (vlSelf->top__DOT__rv_cpu__DOT__instr 
                                          >> 0xcU))),3);
        tracep->fullCData(oldp+89,((vlSelf->top__DOT__rv_cpu__DOT__instr 
                                    >> 0x19U)),7);
        tracep->fullQData(oldp+90,(vlSelf->top__DOT__rv_cpu__DOT__rv64_idu__DOT__immI),64);
        tracep->fullQData(oldp+92,((((QData)((IData)(
                                                     (- (IData)(
                                                                (vlSelf->top__DOT__rv_cpu__DOT__instr 
                                                                 >> 0x1fU))))) 
                                     << 0x20U) | (QData)((IData)(
                                                                 (0xfffff000U 
                                                                  & vlSelf->top__DOT__rv_cpu__DOT__instr))))),64);
        tracep->fullQData(oldp+94,((((- (QData)((IData)(
                                                        (vlSelf->top__DOT__rv_cpu__DOT__instr 
                                                         >> 0x1fU)))) 
                                     << 0xcU) | (QData)((IData)(
                                                                ((0xfe0U 
                                                                  & (vlSelf->top__DOT__rv_cpu__DOT__instr 
                                                                     >> 0x14U)) 
                                                                 | (0x1fU 
                                                                    & (vlSelf->top__DOT__rv_cpu__DOT__instr 
                                                                       >> 7U))))))),64);
        tracep->fullQData(oldp+96,((((- (QData)((IData)(
                                                        (vlSelf->top__DOT__rv_cpu__DOT__instr 
                                                         >> 0x1fU)))) 
                                     << 0xcU) | (QData)((IData)(
                                                                ((0x800U 
                                                                  & (vlSelf->top__DOT__rv_cpu__DOT__instr 
                                                                     << 4U)) 
                                                                 | ((0x7e0U 
                                                                     & (vlSelf->top__DOT__rv_cpu__DOT__instr 
                                                                        >> 0x14U)) 
                                                                    | (0x1eU 
                                                                       & (vlSelf->top__DOT__rv_cpu__DOT__instr 
                                                                          >> 7U)))))))),64);
        tracep->fullQData(oldp+98,((((- (QData)((IData)(
                                                        (vlSelf->top__DOT__rv_cpu__DOT__instr 
                                                         >> 0x1fU)))) 
                                     << 0x14U) | (QData)((IData)(
                                                                 ((0xff000U 
                                                                   & vlSelf->top__DOT__rv_cpu__DOT__instr) 
                                                                  | ((0x800U 
                                                                      & (vlSelf->top__DOT__rv_cpu__DOT__instr 
                                                                         >> 9U)) 
                                                                     | (0x7feU 
                                                                        & (vlSelf->top__DOT__rv_cpu__DOT__instr 
                                                                           >> 0x14U)))))))),64);
        tracep->fullBit(oldp+100,((0U == (7U & (vlSelf->top__DOT__rv_cpu__DOT__instr 
                                                >> 0xcU)))));
        tracep->fullBit(oldp+101,((1U == (7U & (vlSelf->top__DOT__rv_cpu__DOT__instr 
                                                >> 0xcU)))));
        tracep->fullBit(oldp+102,((2U == (7U & (vlSelf->top__DOT__rv_cpu__DOT__instr 
                                                >> 0xcU)))));
        tracep->fullBit(oldp+103,((3U == (7U & (vlSelf->top__DOT__rv_cpu__DOT__instr 
                                                >> 0xcU)))));
        tracep->fullBit(oldp+104,((4U == (7U & (vlSelf->top__DOT__rv_cpu__DOT__instr 
                                                >> 0xcU)))));
        tracep->fullBit(oldp+105,((5U == (7U & (vlSelf->top__DOT__rv_cpu__DOT__instr 
                                                >> 0xcU)))));
        tracep->fullBit(oldp+106,((6U == (7U & (vlSelf->top__DOT__rv_cpu__DOT__instr 
                                                >> 0xcU)))));
        tracep->fullBit(oldp+107,((7U == (7U & (vlSelf->top__DOT__rv_cpu__DOT__instr 
                                                >> 0xcU)))));
        tracep->fullBit(oldp+108,(vlSelf->top__DOT__rv_cpu__DOT__rv64_idu__DOT__op_u));
        tracep->fullBit(oldp+109,(vlSelf->top__DOT__rv_cpu__DOT__rv64_idu__DOT__op_i));
        tracep->fullBit(oldp+110,(vlSelf->top__DOT__rv_cpu__DOT__rv64_idu__DOT__op_r));
        tracep->fullBit(oldp+111,((0x6fU == (0x7fU 
                                             & vlSelf->top__DOT__rv_cpu__DOT__instr))));
        tracep->fullBit(oldp+112,((0x63U == (0x7fU 
                                             & vlSelf->top__DOT__rv_cpu__DOT__instr))));
        tracep->fullBit(oldp+113,((0x13U == (0x7fU 
                                             & vlSelf->top__DOT__rv_cpu__DOT__instr))));
        tracep->fullBit(oldp+114,((IData)((0x13U == 
                                           (0x707fU 
                                            & vlSelf->top__DOT__rv_cpu__DOT__instr)))));
        tracep->fullBit(oldp+115,((IData)((0x2013U 
                                           == (0x707fU 
                                               & vlSelf->top__DOT__rv_cpu__DOT__instr)))));
        tracep->fullBit(oldp+116,((IData)((0x3013U 
                                           == (0x707fU 
                                               & vlSelf->top__DOT__rv_cpu__DOT__instr)))));
        tracep->fullBit(oldp+117,((IData)((0x4013U 
                                           == (0x707fU 
                                               & vlSelf->top__DOT__rv_cpu__DOT__instr)))));
        tracep->fullBit(oldp+118,((IData)((0x6013U 
                                           == (0x707fU 
                                               & vlSelf->top__DOT__rv_cpu__DOT__instr)))));
        tracep->fullBit(oldp+119,((IData)((0x7013U 
                                           == (0x707fU 
                                               & vlSelf->top__DOT__rv_cpu__DOT__instr)))));
        tracep->fullBit(oldp+120,(((IData)((0x1013U 
                                            == (0x707fU 
                                                & vlSelf->top__DOT__rv_cpu__DOT__instr))) 
                                   & (0U == (vlSelf->top__DOT__rv_cpu__DOT__instr 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+121,(((IData)((0x5013U 
                                            == (0x707fU 
                                                & vlSelf->top__DOT__rv_cpu__DOT__instr))) 
                                   & (0U == (vlSelf->top__DOT__rv_cpu__DOT__instr 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+122,(vlSelf->top__DOT__rv_cpu__DOT__rv64_idu__DOT__rv_srai));
        tracep->fullBit(oldp+123,((((IData)(vlSelf->top__DOT__rv_cpu__DOT__rv64_idu__DOT__op_r) 
                                    & (0U == (7U & 
                                              (vlSelf->top__DOT__rv_cpu__DOT__instr 
                                               >> 0xcU)))) 
                                   & (0U == (vlSelf->top__DOT__rv_cpu__DOT__instr 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+124,((((IData)(vlSelf->top__DOT__rv_cpu__DOT__rv64_idu__DOT__op_r) 
                                    & (0U == (7U & 
                                              (vlSelf->top__DOT__rv_cpu__DOT__instr 
                                               >> 0xcU)))) 
                                   & (0x20U == (vlSelf->top__DOT__rv_cpu__DOT__instr 
                                                >> 0x19U)))));
        tracep->fullBit(oldp+125,((((IData)(vlSelf->top__DOT__rv_cpu__DOT__rv64_idu__DOT__op_r) 
                                    & (1U == (7U & 
                                              (vlSelf->top__DOT__rv_cpu__DOT__instr 
                                               >> 0xcU)))) 
                                   & (0U == (vlSelf->top__DOT__rv_cpu__DOT__instr 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+126,((((IData)(vlSelf->top__DOT__rv_cpu__DOT__rv64_idu__DOT__op_r) 
                                    & (2U == (7U & 
                                              (vlSelf->top__DOT__rv_cpu__DOT__instr 
                                               >> 0xcU)))) 
                                   & (0U == (vlSelf->top__DOT__rv_cpu__DOT__instr 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+127,((((IData)(vlSelf->top__DOT__rv_cpu__DOT__rv64_idu__DOT__op_r) 
                                    & (3U == (7U & 
                                              (vlSelf->top__DOT__rv_cpu__DOT__instr 
                                               >> 0xcU)))) 
                                   & (0U == (vlSelf->top__DOT__rv_cpu__DOT__instr 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+128,((((IData)(vlSelf->top__DOT__rv_cpu__DOT__rv64_idu__DOT__op_r) 
                                    & (4U == (7U & 
                                              (vlSelf->top__DOT__rv_cpu__DOT__instr 
                                               >> 0xcU)))) 
                                   & (0U == (vlSelf->top__DOT__rv_cpu__DOT__instr 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+129,((((IData)(vlSelf->top__DOT__rv_cpu__DOT__rv64_idu__DOT__op_r) 
                                    & (5U == (7U & 
                                              (vlSelf->top__DOT__rv_cpu__DOT__instr 
                                               >> 0xcU)))) 
                                   & (0U == (vlSelf->top__DOT__rv_cpu__DOT__instr 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+130,((((IData)(vlSelf->top__DOT__rv_cpu__DOT__rv64_idu__DOT__op_r) 
                                    & (5U == (7U & 
                                              (vlSelf->top__DOT__rv_cpu__DOT__instr 
                                               >> 0xcU)))) 
                                   & (0x20U == (vlSelf->top__DOT__rv_cpu__DOT__instr 
                                                >> 0x19U)))));
        tracep->fullBit(oldp+131,((((IData)(vlSelf->top__DOT__rv_cpu__DOT__rv64_idu__DOT__op_r) 
                                    & (6U == (7U & 
                                              (vlSelf->top__DOT__rv_cpu__DOT__instr 
                                               >> 0xcU)))) 
                                   & (0U == (vlSelf->top__DOT__rv_cpu__DOT__instr 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+132,((((IData)(vlSelf->top__DOT__rv_cpu__DOT__rv64_idu__DOT__op_r) 
                                    & (7U == (7U & 
                                              (vlSelf->top__DOT__rv_cpu__DOT__instr 
                                               >> 0xcU)))) 
                                   & (0U == (vlSelf->top__DOT__rv_cpu__DOT__instr 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+133,(vlSelf->top__DOT__rv_cpu__DOT__rv64_idu__DOT__rv_jalr));
        tracep->fullBit(oldp+134,((IData)((0x63U == 
                                           (0x707fU 
                                            & vlSelf->top__DOT__rv_cpu__DOT__instr)))));
        tracep->fullBit(oldp+135,((IData)((0x1063U 
                                           == (0x707fU 
                                               & vlSelf->top__DOT__rv_cpu__DOT__instr)))));
        tracep->fullBit(oldp+136,((IData)((0x4063U 
                                           == (0x707fU 
                                               & vlSelf->top__DOT__rv_cpu__DOT__instr)))));
        tracep->fullBit(oldp+137,((IData)((0x5063U 
                                           == (0x707fU 
                                               & vlSelf->top__DOT__rv_cpu__DOT__instr)))));
        tracep->fullBit(oldp+138,((IData)((0x6063U 
                                           == (0x707fU 
                                               & vlSelf->top__DOT__rv_cpu__DOT__instr)))));
        tracep->fullBit(oldp+139,((IData)((0x7063U 
                                           == (0x707fU 
                                               & vlSelf->top__DOT__rv_cpu__DOT__instr)))));
        tracep->fullBit(oldp+140,((IData)((0x23U == 
                                           (0x707fU 
                                            & vlSelf->top__DOT__rv_cpu__DOT__instr)))));
        tracep->fullBit(oldp+141,((IData)((0x1023U 
                                           == (0x707fU 
                                               & vlSelf->top__DOT__rv_cpu__DOT__instr)))));
        tracep->fullBit(oldp+142,((IData)((0x2023U 
                                           == (0x707fU 
                                               & vlSelf->top__DOT__rv_cpu__DOT__instr)))));
        tracep->fullBit(oldp+143,((IData)((0x3023U 
                                           == (0x707fU 
                                               & vlSelf->top__DOT__rv_cpu__DOT__instr)))));
        tracep->fullBit(oldp+144,((0x37U == (0x7fU 
                                             & vlSelf->top__DOT__rv_cpu__DOT__instr))));
        tracep->fullBit(oldp+145,((0x17U == (0x7fU 
                                             & vlSelf->top__DOT__rv_cpu__DOT__instr))));
        tracep->fullBit(oldp+146,(vlSelf->top__DOT__rv_cpu__DOT__rv64_idu__DOT__rv_ld));
        tracep->fullBit(oldp+147,(vlSelf->top__DOT__rv_cpu__DOT__rv64_idu__DOT__rv_lw));
        tracep->fullBit(oldp+148,(vlSelf->top__DOT__rv_cpu__DOT__rv64_idu__DOT__rv_lh));
        tracep->fullBit(oldp+149,(vlSelf->top__DOT__rv_cpu__DOT__rv64_idu__DOT__rv_lb));
        tracep->fullBit(oldp+150,((IData)((0x6003U 
                                           == (0x707fU 
                                               & vlSelf->top__DOT__rv_cpu__DOT__instr)))));
        tracep->fullBit(oldp+151,(vlSelf->top__DOT__rv_cpu__DOT__rv64_idu__DOT__rv_lhu));
        tracep->fullBit(oldp+152,(vlSelf->top__DOT__rv_cpu__DOT__rv64_idu__DOT__rv_lbu));
        tracep->fullBit(oldp+153,((((((IData)(vlSelf->top__DOT__rv_cpu__DOT__rv64_idu__DOT__op_u) 
                                      | (0x6fU == (0x7fU 
                                                   & vlSelf->top__DOT__rv_cpu__DOT__instr))) 
                                     | (0x63U == (0x7fU 
                                                  & vlSelf->top__DOT__rv_cpu__DOT__instr))) 
                                    | (IData)(vlSelf->top__DOT__rv_cpu__DOT__rv64_idu__DOT__op_i)) 
                                   | (0x23U == (0x7fU 
                                                & vlSelf->top__DOT__rv_cpu__DOT__instr)))));
        tracep->fullBit(oldp+154,((0x3bU == (0x7fU 
                                             & vlSelf->top__DOT__rv_cpu__DOT__instr))));
        tracep->fullBit(oldp+155,(((IData)((0x3bU == 
                                            (0x707fU 
                                             & vlSelf->top__DOT__rv_cpu__DOT__instr))) 
                                   & (0U == (vlSelf->top__DOT__rv_cpu__DOT__instr 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+156,(((IData)((0x3bU == 
                                            (0x707fU 
                                             & vlSelf->top__DOT__rv_cpu__DOT__instr))) 
                                   & (0x20U == (vlSelf->top__DOT__rv_cpu__DOT__instr 
                                                >> 0x19U)))));
        tracep->fullBit(oldp+157,(((IData)((0x103bU 
                                            == (0x707fU 
                                                & vlSelf->top__DOT__rv_cpu__DOT__instr))) 
                                   & (0U == (vlSelf->top__DOT__rv_cpu__DOT__instr 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+158,(((IData)((0x503bU 
                                            == (0x707fU 
                                                & vlSelf->top__DOT__rv_cpu__DOT__instr))) 
                                   & (0U == (vlSelf->top__DOT__rv_cpu__DOT__instr 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+159,(((IData)((0x503bU 
                                            == (0x707fU 
                                                & vlSelf->top__DOT__rv_cpu__DOT__instr))) 
                                   & (0x20U == (vlSelf->top__DOT__rv_cpu__DOT__instr 
                                                >> 0x19U)))));
        tracep->fullBit(oldp+160,(((IData)((0x3bU == 
                                            (0x707fU 
                                             & vlSelf->top__DOT__rv_cpu__DOT__instr))) 
                                   & (1U == (vlSelf->top__DOT__rv_cpu__DOT__instr 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+161,(((IData)((0x403bU 
                                            == (0x707fU 
                                                & vlSelf->top__DOT__rv_cpu__DOT__instr))) 
                                   & (1U == (vlSelf->top__DOT__rv_cpu__DOT__instr 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+162,(((IData)((0x503bU 
                                            == (0x707fU 
                                                & vlSelf->top__DOT__rv_cpu__DOT__instr))) 
                                   & (1U == (vlSelf->top__DOT__rv_cpu__DOT__instr 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+163,(((IData)((0x603bU 
                                            == (0x707fU 
                                                & vlSelf->top__DOT__rv_cpu__DOT__instr))) 
                                   & (1U == (vlSelf->top__DOT__rv_cpu__DOT__instr 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+164,(((IData)((0x703bU 
                                            == (0x707fU 
                                                & vlSelf->top__DOT__rv_cpu__DOT__instr))) 
                                   & (1U == (vlSelf->top__DOT__rv_cpu__DOT__instr 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+165,((0x1bU == (0x7fU 
                                             & vlSelf->top__DOT__rv_cpu__DOT__instr))));
        tracep->fullBit(oldp+166,((IData)((0x1bU == 
                                           (0x707fU 
                                            & vlSelf->top__DOT__rv_cpu__DOT__instr)))));
        tracep->fullBit(oldp+167,(((IData)((0x101bU 
                                            == (0x707fU 
                                                & vlSelf->top__DOT__rv_cpu__DOT__instr))) 
                                   & (0U == (vlSelf->top__DOT__rv_cpu__DOT__instr 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+168,(((IData)((0x501bU 
                                            == (0x707fU 
                                                & vlSelf->top__DOT__rv_cpu__DOT__instr))) 
                                   & (0U == (vlSelf->top__DOT__rv_cpu__DOT__instr 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+169,(((IData)((0x501bU 
                                            == (0x707fU 
                                                & vlSelf->top__DOT__rv_cpu__DOT__instr))) 
                                   & (0x20U == (vlSelf->top__DOT__rv_cpu__DOT__instr 
                                                >> 0x19U)))));
        tracep->fullQData(oldp+170,(vlSelf->top__DOT__rv_cpu__DOT__rv64_regfile__DOT__regfile[0]),64);
        tracep->fullQData(oldp+172,(vlSelf->top__DOT__rv_cpu__DOT__rv64_regfile__DOT__regfile[1]),64);
        tracep->fullQData(oldp+174,(vlSelf->top__DOT__rv_cpu__DOT__rv64_regfile__DOT__regfile[2]),64);
        tracep->fullQData(oldp+176,(vlSelf->top__DOT__rv_cpu__DOT__rv64_regfile__DOT__regfile[3]),64);
        tracep->fullQData(oldp+178,(vlSelf->top__DOT__rv_cpu__DOT__rv64_regfile__DOT__regfile[4]),64);
        tracep->fullQData(oldp+180,(vlSelf->top__DOT__rv_cpu__DOT__rv64_regfile__DOT__regfile[5]),64);
        tracep->fullQData(oldp+182,(vlSelf->top__DOT__rv_cpu__DOT__rv64_regfile__DOT__regfile[6]),64);
        tracep->fullQData(oldp+184,(vlSelf->top__DOT__rv_cpu__DOT__rv64_regfile__DOT__regfile[7]),64);
        tracep->fullQData(oldp+186,(vlSelf->top__DOT__rv_cpu__DOT__rv64_regfile__DOT__regfile[8]),64);
        tracep->fullQData(oldp+188,(vlSelf->top__DOT__rv_cpu__DOT__rv64_regfile__DOT__regfile[9]),64);
        tracep->fullQData(oldp+190,(vlSelf->top__DOT__rv_cpu__DOT__rv64_regfile__DOT__regfile[10]),64);
        tracep->fullQData(oldp+192,(vlSelf->top__DOT__rv_cpu__DOT__rv64_regfile__DOT__regfile[11]),64);
        tracep->fullQData(oldp+194,(vlSelf->top__DOT__rv_cpu__DOT__rv64_regfile__DOT__regfile[12]),64);
        tracep->fullQData(oldp+196,(vlSelf->top__DOT__rv_cpu__DOT__rv64_regfile__DOT__regfile[13]),64);
        tracep->fullQData(oldp+198,(vlSelf->top__DOT__rv_cpu__DOT__rv64_regfile__DOT__regfile[14]),64);
        tracep->fullQData(oldp+200,(vlSelf->top__DOT__rv_cpu__DOT__rv64_regfile__DOT__regfile[15]),64);
        tracep->fullQData(oldp+202,(vlSelf->top__DOT__rv_cpu__DOT__rv64_regfile__DOT__regfile[16]),64);
        tracep->fullQData(oldp+204,(vlSelf->top__DOT__rv_cpu__DOT__rv64_regfile__DOT__regfile[17]),64);
        tracep->fullQData(oldp+206,(vlSelf->top__DOT__rv_cpu__DOT__rv64_regfile__DOT__regfile[18]),64);
        tracep->fullQData(oldp+208,(vlSelf->top__DOT__rv_cpu__DOT__rv64_regfile__DOT__regfile[19]),64);
        tracep->fullQData(oldp+210,(vlSelf->top__DOT__rv_cpu__DOT__rv64_regfile__DOT__regfile[20]),64);
        tracep->fullQData(oldp+212,(vlSelf->top__DOT__rv_cpu__DOT__rv64_regfile__DOT__regfile[21]),64);
        tracep->fullQData(oldp+214,(vlSelf->top__DOT__rv_cpu__DOT__rv64_regfile__DOT__regfile[22]),64);
        tracep->fullQData(oldp+216,(vlSelf->top__DOT__rv_cpu__DOT__rv64_regfile__DOT__regfile[23]),64);
        tracep->fullQData(oldp+218,(vlSelf->top__DOT__rv_cpu__DOT__rv64_regfile__DOT__regfile[24]),64);
        tracep->fullQData(oldp+220,(vlSelf->top__DOT__rv_cpu__DOT__rv64_regfile__DOT__regfile[25]),64);
        tracep->fullQData(oldp+222,(vlSelf->top__DOT__rv_cpu__DOT__rv64_regfile__DOT__regfile[26]),64);
        tracep->fullQData(oldp+224,(vlSelf->top__DOT__rv_cpu__DOT__rv64_regfile__DOT__regfile[27]),64);
        tracep->fullQData(oldp+226,(vlSelf->top__DOT__rv_cpu__DOT__rv64_regfile__DOT__regfile[28]),64);
        tracep->fullQData(oldp+228,(vlSelf->top__DOT__rv_cpu__DOT__rv64_regfile__DOT__regfile[29]),64);
        tracep->fullQData(oldp+230,(vlSelf->top__DOT__rv_cpu__DOT__rv64_regfile__DOT__regfile[30]),64);
        tracep->fullQData(oldp+232,(vlSelf->top__DOT__rv_cpu__DOT__rv64_regfile__DOT__regfile[31]),64);
        tracep->fullQData(oldp+234,(vlSelf->top__DOT__rv_cpu__DOT__pc),64);
        tracep->fullCData(oldp+236,(vlSelf->top__DOT__rv_cpu__DOT__pc_sel),3);
        tracep->fullQData(oldp+237,(vlSelf->top__DOT__rv_cpu__DOT__mem_rd_data),64);
        tracep->fullQData(oldp+239,(vlSelf->top__DOT__rv_cpu__DOT__wr_reg_data),64);
        tracep->fullBit(oldp+241,(vlSelf->top__DOT__rv_cpu__DOT__ebreak));
        tracep->fullQData(oldp+242,(vlSelf->top__DOT__rv_cpu__DOT__rv64_pc__DOT__pc_src1),64);
        tracep->fullQData(oldp+244,(vlSelf->top__DOT__rv_cpu__DOT__rv64_pc__DOT__pc_src2),64);
        tracep->fullQData(oldp+246,(vlSelf->top__DOT__rv_cpu__DOT__rv64_instr_mem__DOT__rdata),64);
        tracep->fullBit(oldp+248,(vlSelf->clk));
        tracep->fullBit(oldp+249,(vlSelf->rst));
        tracep->fullBit(oldp+250,(vlSelf->ebreak));
        tracep->fullQData(oldp+251,(vlSelf->pc),64);
        tracep->fullBit(oldp+253,(1U));
        tracep->fullQData(oldp+254,(vlSelf->top__DOT__rv_cpu__DOT__rv64_data_mem__DOT__rdata),64);
        tracep->fullQData(oldp+256,(vlSelf->top__DOT__rv_cpu__DOT__rv64_data_mem__DOT__wdata),64);
        tracep->fullQData(oldp+258,(vlSelf->top__DOT__rv_cpu__DOT__rv64_data_mem__DOT__waddr),64);
        tracep->fullCData(oldp+260,(vlSelf->top__DOT__rv_cpu__DOT__rv64_data_mem__DOT__wlen),8);
        tracep->fullIData(oldp+261,(vlSelf->top__DOT__rv_cpu__DOT__rv64_regfile__DOT__i),32);
    }
}
