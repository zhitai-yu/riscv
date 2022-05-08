// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vtop__Syms;
class Vtop_VerilatedVcd;


//----------

VL_MODULE(Vtop___024root) {
  public:

    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_OUT8(ebreak,0,0);
    VL_OUT64(pc,63,0);

    // LOCAL SIGNALS
    CData/*0:0*/ top__DOT__rv_cpu__DOT__alu2reg_en;
    CData/*6:0*/ top__DOT__rv_cpu__DOT__rd_mem_op;
    CData/*2:0*/ top__DOT__rv_cpu__DOT__pc_sel;
    CData/*3:0*/ top__DOT__rv_cpu__DOT__pc_src_en;
    CData/*0:0*/ top__DOT__rv_cpu__DOT__ebreak;
    CData/*0:0*/ top__DOT__rv_cpu__DOT__alu_sext_before_wr_reg;
    CData/*0:0*/ top__DOT__rv_cpu__DOT__alu_sr1_pc_en;
    CData/*0:0*/ top__DOT__rv_cpu__DOT__alu_sr2_rs2_en;
    CData/*0:0*/ top__DOT__rv_cpu__DOT__alu_sr2_pc_en;
    CData/*0:0*/ top__DOT__rv_cpu__DOT__rv64_alu__DOT__add_cin;
    CData/*0:0*/ top__DOT__rv_cpu__DOT__rv64_idu__DOT__op_u;
    CData/*0:0*/ top__DOT__rv_cpu__DOT__rv64_idu__DOT__op_i;
    CData/*0:0*/ top__DOT__rv_cpu__DOT__rv64_idu__DOT__op_r;
    CData/*0:0*/ top__DOT__rv_cpu__DOT__rv64_idu__DOT__rv_srai;
    CData/*0:0*/ top__DOT__rv_cpu__DOT__rv64_idu__DOT__rv_jalr;
    CData/*0:0*/ top__DOT__rv_cpu__DOT__rv64_idu__DOT__rv_ld;
    CData/*0:0*/ top__DOT__rv_cpu__DOT__rv64_idu__DOT__rv_lw;
    CData/*0:0*/ top__DOT__rv_cpu__DOT__rv64_idu__DOT__rv_lh;
    CData/*0:0*/ top__DOT__rv_cpu__DOT__rv64_idu__DOT__rv_lb;
    CData/*0:0*/ top__DOT__rv_cpu__DOT__rv64_idu__DOT__rv_lhu;
    CData/*0:0*/ top__DOT__rv_cpu__DOT__rv64_idu__DOT__rv_lbu;
    CData/*7:0*/ top__DOT__rv_cpu__DOT__rv64_data_mem__DOT__wlen;
    IData/*16:0*/ top__DOT__rv_cpu__DOT__alu_ctrl;
    IData/*31:0*/ top__DOT__rv_cpu__DOT__instr;
    IData/*31:0*/ top__DOT__rv_cpu__DOT__rv64_regfile__DOT__i;
    QData/*63:0*/ top__DOT__rv_cpu__DOT__imm;
    QData/*63:0*/ top__DOT__rv_cpu__DOT__rs1_data;
    QData/*63:0*/ top__DOT__rv_cpu__DOT__pc;
    QData/*63:0*/ top__DOT__rv_cpu__DOT__pc_reg;
    QData/*63:0*/ top__DOT__rv_cpu__DOT__mem_rd_data;
    QData/*63:0*/ top__DOT__rv_cpu__DOT__alu_src1;
    QData/*63:0*/ top__DOT__rv_cpu__DOT__alu_src2;
    QData/*63:0*/ top__DOT__rv_cpu__DOT__alu_res;
    QData/*63:0*/ top__DOT__rv_cpu__DOT__wr_reg_data;
    QData/*63:0*/ top__DOT__rv_cpu__DOT__rv64_alu__DOT__add_src1;
    QData/*63:0*/ top__DOT__rv_cpu__DOT__rv64_alu__DOT__add_src2;
    QData/*63:0*/ top__DOT__rv_cpu__DOT__rv64_alu__DOT__add_res;
    QData/*63:0*/ top__DOT__rv_cpu__DOT__rv64_alu__DOT__slt_blt_bge_res;
    QData/*63:0*/ top__DOT__rv_cpu__DOT__rv64_pc__DOT__pc_src1;
    QData/*63:0*/ top__DOT__rv_cpu__DOT__rv64_pc__DOT__pc_src2;
    QData/*63:0*/ top__DOT__rv_cpu__DOT__rv64_idu__DOT__immI;
    QData/*63:0*/ top__DOT__rv_cpu__DOT__rv64_instr_mem__DOT__rdata;
    QData/*63:0*/ top__DOT__rv_cpu__DOT__rv64_data_mem__DOT__rdata;
    QData/*63:0*/ top__DOT__rv_cpu__DOT__rv64_data_mem__DOT__wdata;
    QData/*63:0*/ top__DOT__rv_cpu__DOT__rv64_data_mem__DOT__waddr;
    VlUnpacked<QData/*63:0*/, 32> top__DOT__rv_cpu__DOT__rv64_regfile__DOT__regfile;

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__clk;
    QData/*63:0*/ __Vtask_top__DOT__rv_cpu__DOT__rv64_instr_mem__DOT__pmem_read__0__rdata;
    QData/*63:0*/ __Vtask_top__DOT__rv_cpu__DOT__rv64_data_mem__DOT__pmem_read__1__rdata;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vtop__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vtop___024root);  ///< Copying not allowed
  public:
    Vtop___024root(const char* name);
    ~Vtop___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vtop__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
