// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024root.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

//==========

extern "C" void pmem_read(long long raddr, long long* rdata);

VL_INLINE_OPT void Vtop___024root____Vdpiimwrap_top__DOT__rv_cpu__DOT__rv64_instr_mem__DOT__pmem_read_TOP(QData/*63:0*/ raddr, QData/*63:0*/ &rdata) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiimwrap_top__DOT__rv_cpu__DOT__rv64_instr_mem__DOT__pmem_read_TOP\n"); );
    // Body
    long long raddr__Vcvt;
    for (size_t raddr__Vidx = 0; raddr__Vidx < 1; ++raddr__Vidx) raddr__Vcvt = raddr;
    long long rdata__Vcvt;
    pmem_read(raddr__Vcvt, &rdata__Vcvt);
    rdata = rdata__Vcvt;
}

extern "C" void pmem_write(long long waddr, long long wdata, char wmask);

VL_INLINE_OPT void Vtop___024root____Vdpiimwrap_top__DOT__rv_cpu__DOT__rv64_instr_mem__DOT__pmem_write_TOP(QData/*63:0*/ waddr, QData/*63:0*/ wdata, CData/*7:0*/ wmask) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiimwrap_top__DOT__rv_cpu__DOT__rv64_instr_mem__DOT__pmem_write_TOP\n"); );
    // Body
    long long waddr__Vcvt;
    for (size_t waddr__Vidx = 0; waddr__Vidx < 1; ++waddr__Vidx) waddr__Vcvt = waddr;
    long long wdata__Vcvt;
    for (size_t wdata__Vidx = 0; wdata__Vidx < 1; ++wdata__Vidx) wdata__Vcvt = wdata;
    char wmask__Vcvt;
    for (size_t wmask__Vidx = 0; wmask__Vidx < 1; ++wmask__Vidx) wmask__Vcvt = wmask;
    pmem_write(waddr__Vcvt, wdata__Vcvt, wmask__Vcvt);
}

extern "C" void set_gpr_ptr(const svOpenArrayHandle a);

VL_INLINE_OPT void Vtop___024root____Vdpiimwrap_top__DOT__rv_cpu__DOT__rv64_regfile__DOT__set_gpr_ptr__Vdpioc2_TOP(const VlUnpacked<QData/*63:0*/, 32> &a) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiimwrap_top__DOT__rv_cpu__DOT__rv64_regfile__DOT__set_gpr_ptr__Vdpioc2_TOP\n"); );
    // Body
    static const int a__Vopenprops__ulims[2] = {0, 31};
    static const VerilatedVarProps a__Vopenprops(VLVT_UINT64, VLVD_IN, VerilatedVarProps::Packed(), 63, 0, VerilatedVarProps::Unpacked(), 1, a__Vopenprops__ulims);
    VerilatedDpiOpenVar a__Vopenarray (&a__Vopenprops, &a);
    set_gpr_ptr(&a__Vopenarray);
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__2(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__2\n"); );
    // Variables
    CData/*4:0*/ __Vdlyvdim0__top__DOT__rv_cpu__DOT__rv64_regfile__DOT__regfile__v0;
    VlWide<3>/*95:0*/ __Vtemp1;
    VlWide<3>/*95:0*/ __Vtemp3;
    VlWide<3>/*95:0*/ __Vtemp4;
    VlWide<3>/*95:0*/ __Vtemp5;
    VlWide<3>/*95:0*/ __Vtemp6;
    VlWide<3>/*95:0*/ __Vtemp7;
    QData/*63:0*/ __Vdlyvval__top__DOT__rv_cpu__DOT__rv64_regfile__DOT__regfile__v0;
    // Body
    if (((0x23U == (0x7fU & vlSelf->top__DOT__rv_cpu__DOT__instr)) 
         & (~ (IData)(vlSelf->rst)))) {
        Vtop___024root____Vdpiimwrap_top__DOT__rv_cpu__DOT__rv64_instr_mem__DOT__pmem_write_TOP(vlSelf->top__DOT__rv_cpu__DOT__alu_res, 
                                                                                ((0U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSelf->top__DOT__rv_cpu__DOT__instr 
                                                                                >> 0x14U)))
                                                                                 ? 0ULL
                                                                                 : 
                                                                                vlSelf->top__DOT__rv_cpu__DOT__rv64_regfile__DOT__regfile
                                                                                [
                                                                                (0x1fU 
                                                                                & (vlSelf->top__DOT__rv_cpu__DOT__instr 
                                                                                >> 0x14U))]), 
                                                                                ((((8U 
                                                                                & (- (IData)(
                                                                                ((IData)(vlSelf->top__DOT__rv_cpu__DOT__rv64_idu__DOT__rv_ld) 
                                                                                | (IData)(
                                                                                (0x3023U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->top__DOT__rv_cpu__DOT__instr))))))) 
                                                                                | (1U 
                                                                                & (- (IData)(
                                                                                (((IData)(vlSelf->top__DOT__rv_cpu__DOT__rv64_idu__DOT__rv_lb) 
                                                                                | (IData)(vlSelf->top__DOT__rv_cpu__DOT__rv64_idu__DOT__rv_lbu)) 
                                                                                | (IData)(
                                                                                (0x23U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->top__DOT__rv_cpu__DOT__instr)))))))) 
                                                                                | (2U 
                                                                                & (- (IData)(
                                                                                (((IData)(vlSelf->top__DOT__rv_cpu__DOT__rv64_idu__DOT__rv_lh) 
                                                                                | (IData)(vlSelf->top__DOT__rv_cpu__DOT__rv64_idu__DOT__rv_lhu)) 
                                                                                | (IData)(
                                                                                (0x1023U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->top__DOT__rv_cpu__DOT__instr)))))))) 
                                                                                | (4U 
                                                                                & (- (IData)(
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
                                                                                & vlSelf->top__DOT__rv_cpu__DOT__instr)))))))));
    }
    vlSelf->top__DOT__rv_cpu__DOT__pc_reg = ((IData)(vlSelf->rst)
                                              ? 0x7ffffffcULL
                                              : vlSelf->top__DOT__rv_cpu__DOT__pc);
    __Vdlyvval__top__DOT__rv_cpu__DOT__rv64_regfile__DOT__regfile__v0 
        = (((~ ((0x63U == (0x7fU & vlSelf->top__DOT__rv_cpu__DOT__instr)) 
                | (0x23U == (0x7fU & vlSelf->top__DOT__rv_cpu__DOT__instr)))) 
            & (0U != (0x1fU & (vlSelf->top__DOT__rv_cpu__DOT__instr 
                               >> 7U)))) ? vlSelf->top__DOT__rv_cpu__DOT__wr_reg_data
            : 0ULL);
    __Vdlyvdim0__top__DOT__rv_cpu__DOT__rv64_regfile__DOT__regfile__v0 
        = (0x1fU & (vlSelf->top__DOT__rv_cpu__DOT__instr 
                    >> 7U));
    vlSelf->top__DOT__rv_cpu__DOT__rv64_regfile__DOT__regfile[__Vdlyvdim0__top__DOT__rv_cpu__DOT__rv64_regfile__DOT__regfile__v0] 
        = __Vdlyvval__top__DOT__rv_cpu__DOT__rv64_regfile__DOT__regfile__v0;
    if ((1U & (~ (IData)(vlSelf->rst)))) {
        vlSelf->top__DOT__rv_cpu__DOT__instr = (IData)(vlSelf->top__DOT__rv_cpu__DOT__rv64_instr_mem__DOT__rdata);
    }
    vlSelf->top__DOT__rv_cpu__DOT__alu_sext_before_wr_reg 
        = ((0x3bU == (0x7fU & vlSelf->top__DOT__rv_cpu__DOT__instr)) 
           | (0x1bU == (0x7fU & vlSelf->top__DOT__rv_cpu__DOT__instr)));
    vlSelf->top__DOT__rv_cpu__DOT__alu2reg_en = (1U 
                                                 & (~ 
                                                    (((0x23U 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->top__DOT__rv_cpu__DOT__instr)) 
                                                      | (3U 
                                                         == 
                                                         (0x7fU 
                                                          & vlSelf->top__DOT__rv_cpu__DOT__instr))) 
                                                     | (0x63U 
                                                        == 
                                                        (0x7fU 
                                                         & vlSelf->top__DOT__rv_cpu__DOT__instr)))));
    vlSelf->top__DOT__rv_cpu__DOT__rv64_idu__DOT__rv_ld 
        = (IData)((0x3003U == (0x707fU & vlSelf->top__DOT__rv_cpu__DOT__instr)));
    vlSelf->top__DOT__rv_cpu__DOT__rv64_idu__DOT__rv_lb 
        = (IData)((3U == (0x707fU & vlSelf->top__DOT__rv_cpu__DOT__instr)));
    vlSelf->top__DOT__rv_cpu__DOT__rv64_idu__DOT__rv_lh 
        = (IData)((0x1003U == (0x707fU & vlSelf->top__DOT__rv_cpu__DOT__instr)));
    vlSelf->top__DOT__rv_cpu__DOT__rv64_idu__DOT__rv_lw 
        = (IData)((0x2003U == (0x707fU & vlSelf->top__DOT__rv_cpu__DOT__instr)));
    vlSelf->top__DOT__rv_cpu__DOT__rv64_idu__DOT__rv_lbu 
        = (IData)((0x4003U == (0x707fU & vlSelf->top__DOT__rv_cpu__DOT__instr)));
    vlSelf->top__DOT__rv_cpu__DOT__rv64_idu__DOT__rv_lhu 
        = (IData)((0x5003U == (0x707fU & vlSelf->top__DOT__rv_cpu__DOT__instr)));
    vlSelf->top__DOT__rv_cpu__DOT__rs1_data = ((0U 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->top__DOT__rv_cpu__DOT__instr 
                                                    >> 0xfU)))
                                                ? 0ULL
                                                : vlSelf->top__DOT__rv_cpu__DOT__rv64_regfile__DOT__regfile
                                               [(0x1fU 
                                                 & (vlSelf->top__DOT__rv_cpu__DOT__instr 
                                                    >> 0xfU))]);
    vlSelf->top__DOT__rv_cpu__DOT__alu_ctrl = ((0x10fffU 
                                                & vlSelf->top__DOT__rv_cpu__DOT__alu_ctrl) 
                                               | (((IData)(
                                                           (0x6063U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->top__DOT__rv_cpu__DOT__instr))) 
                                                   << 0xfU) 
                                                  | (((IData)(
                                                              (0x5063U 
                                                               == 
                                                               (0x707fU 
                                                                & vlSelf->top__DOT__rv_cpu__DOT__instr))) 
                                                      << 0xeU) 
                                                     | (((IData)(
                                                                 (0x4063U 
                                                                  == 
                                                                  (0x707fU 
                                                                   & vlSelf->top__DOT__rv_cpu__DOT__instr))) 
                                                         << 0xdU) 
                                                        | ((IData)(
                                                                   (0x1063U 
                                                                    == 
                                                                    (0x707fU 
                                                                     & vlSelf->top__DOT__rv_cpu__DOT__instr))) 
                                                           << 0xcU)))));
    vlSelf->top__DOT__rv_cpu__DOT__alu_ctrl = ((0xffffU 
                                                & vlSelf->top__DOT__rv_cpu__DOT__alu_ctrl) 
                                               | ((IData)(
                                                          (0x7063U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->top__DOT__rv_cpu__DOT__instr))) 
                                                  << 0x10U));
    vlSelf->top__DOT__rv_cpu__DOT__rv64_idu__DOT__immI 
        = (((- (QData)((IData)((vlSelf->top__DOT__rv_cpu__DOT__instr 
                                >> 0x1fU)))) << 0xcU) 
           | (QData)((IData)((vlSelf->top__DOT__rv_cpu__DOT__instr 
                              >> 0x14U))));
    vlSelf->top__DOT__rv_cpu__DOT__rv64_idu__DOT__op_u 
        = ((0x37U == (0x7fU & vlSelf->top__DOT__rv_cpu__DOT__instr)) 
           | (0x17U == (0x7fU & vlSelf->top__DOT__rv_cpu__DOT__instr)));
    vlSelf->top__DOT__rv_cpu__DOT__rv64_idu__DOT__op_i 
        = ((((0x13U == (0x7fU & vlSelf->top__DOT__rv_cpu__DOT__instr)) 
             | (3U == (0x7fU & vlSelf->top__DOT__rv_cpu__DOT__instr))) 
            | (0x67U == (0x7fU & vlSelf->top__DOT__rv_cpu__DOT__instr))) 
           | (0x1bU == (0x7fU & vlSelf->top__DOT__rv_cpu__DOT__instr)));
    vlSelf->top__DOT__rv_cpu__DOT__rv64_idu__DOT__rv_srai 
        = ((IData)((0x5013U == (0x707fU & vlSelf->top__DOT__rv_cpu__DOT__instr))) 
           & (0x20U == (vlSelf->top__DOT__rv_cpu__DOT__instr 
                        >> 0x19U)));
    vlSelf->top__DOT__rv_cpu__DOT__rv64_idu__DOT__rv_jalr 
        = (IData)((0x67U == (0x707fU & vlSelf->top__DOT__rv_cpu__DOT__instr)));
    vlSelf->top__DOT__rv_cpu__DOT__rv64_idu__DOT__op_r 
        = ((0x33U == (0x7fU & vlSelf->top__DOT__rv_cpu__DOT__instr)) 
           | (0x3bU == (0x7fU & vlSelf->top__DOT__rv_cpu__DOT__instr)));
    vlSelf->top__DOT__rv_cpu__DOT__rd_mem_op = (((IData)(vlSelf->top__DOT__rv_cpu__DOT__rv64_idu__DOT__rv_lbu) 
                                                 << 6U) 
                                                | (((IData)(vlSelf->top__DOT__rv_cpu__DOT__rv64_idu__DOT__rv_lhu) 
                                                    << 5U) 
                                                   | (((IData)(
                                                               (0x6003U 
                                                                == 
                                                                (0x707fU 
                                                                 & vlSelf->top__DOT__rv_cpu__DOT__instr))) 
                                                       << 4U) 
                                                      | (((IData)(vlSelf->top__DOT__rv_cpu__DOT__rv64_idu__DOT__rv_lb) 
                                                          << 3U) 
                                                         | (((IData)(vlSelf->top__DOT__rv_cpu__DOT__rv64_idu__DOT__rv_lh) 
                                                             << 2U) 
                                                            | (((IData)(vlSelf->top__DOT__rv_cpu__DOT__rv64_idu__DOT__rv_lw) 
                                                                << 1U) 
                                                               | (IData)(vlSelf->top__DOT__rv_cpu__DOT__rv64_idu__DOT__rv_ld)))))));
    vlSelf->top__DOT__rv_cpu__DOT__imm = (((((((- (QData)((IData)(vlSelf->top__DOT__rv_cpu__DOT__rv64_idu__DOT__op_u))) 
                                               & (((QData)((IData)(
                                                                   (- (IData)(
                                                                              (vlSelf->top__DOT__rv_cpu__DOT__instr 
                                                                               >> 0x1fU))))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    (0xfffff000U 
                                                                     & vlSelf->top__DOT__rv_cpu__DOT__instr))))) 
                                              | ((- (QData)((IData)(
                                                                    (0x6fU 
                                                                     == 
                                                                     (0x7fU 
                                                                      & vlSelf->top__DOT__rv_cpu__DOT__instr))))) 
                                                 & (((- (QData)((IData)(
                                                                        (vlSelf->top__DOT__rv_cpu__DOT__instr 
                                                                         >> 0x1fU)))) 
                                                     << 0x14U) 
                                                    | (QData)((IData)(
                                                                      ((0xff000U 
                                                                        & vlSelf->top__DOT__rv_cpu__DOT__instr) 
                                                                       | ((0x800U 
                                                                           & (vlSelf->top__DOT__rv_cpu__DOT__instr 
                                                                              >> 9U)) 
                                                                          | (0x7feU 
                                                                             & (vlSelf->top__DOT__rv_cpu__DOT__instr 
                                                                                >> 0x14U))))))))) 
                                             | ((- (QData)((IData)(
                                                                   (0x63U 
                                                                    == 
                                                                    (0x7fU 
                                                                     & vlSelf->top__DOT__rv_cpu__DOT__instr))))) 
                                                & (((- (QData)((IData)(
                                                                       (vlSelf->top__DOT__rv_cpu__DOT__instr 
                                                                        >> 0x1fU)))) 
                                                    << 0xcU) 
                                                   | (QData)((IData)(
                                                                     ((0x800U 
                                                                       & (vlSelf->top__DOT__rv_cpu__DOT__instr 
                                                                          << 4U)) 
                                                                      | ((0x7e0U 
                                                                          & (vlSelf->top__DOT__rv_cpu__DOT__instr 
                                                                             >> 0x14U)) 
                                                                         | (0x1eU 
                                                                            & (vlSelf->top__DOT__rv_cpu__DOT__instr 
                                                                               >> 7U))))))))) 
                                            | ((- (QData)((IData)(
                                                                  ((IData)(vlSelf->top__DOT__rv_cpu__DOT__rv64_idu__DOT__op_i) 
                                                                   & (~ (IData)(vlSelf->top__DOT__rv_cpu__DOT__rv64_idu__DOT__rv_srai)))))) 
                                               & vlSelf->top__DOT__rv_cpu__DOT__rv64_idu__DOT__immI)) 
                                           | ((- (QData)((IData)(
                                                                 ((IData)(vlSelf->top__DOT__rv_cpu__DOT__rv64_idu__DOT__op_i) 
                                                                  & (IData)(vlSelf->top__DOT__rv_cpu__DOT__rv64_idu__DOT__rv_srai))))) 
                                              & (QData)((IData)(
                                                                (0x3fU 
                                                                 & (IData)(vlSelf->top__DOT__rv_cpu__DOT__rv64_idu__DOT__immI)))))) 
                                          | ((- (QData)((IData)(
                                                                (0x23U 
                                                                 == 
                                                                 (0x7fU 
                                                                  & vlSelf->top__DOT__rv_cpu__DOT__instr))))) 
                                             & (((- (QData)((IData)(
                                                                    (vlSelf->top__DOT__rv_cpu__DOT__instr 
                                                                     >> 0x1fU)))) 
                                                 << 0xcU) 
                                                | (QData)((IData)(
                                                                  ((0xfe0U 
                                                                    & (vlSelf->top__DOT__rv_cpu__DOT__instr 
                                                                       >> 0x14U)) 
                                                                   | (0x1fU 
                                                                      & (vlSelf->top__DOT__rv_cpu__DOT__instr 
                                                                         >> 7U))))))));
    vlSelf->top__DOT__rv_cpu__DOT__pc_src_en = (((0x17U 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->top__DOT__rv_cpu__DOT__instr)) 
                                                 << 3U) 
                                                | (((IData)(vlSelf->top__DOT__rv_cpu__DOT__rv64_idu__DOT__rv_jalr) 
                                                    << 2U) 
                                                   | (((0x6fU 
                                                        == 
                                                        (0x7fU 
                                                         & vlSelf->top__DOT__rv_cpu__DOT__instr)) 
                                                       << 1U) 
                                                      | (0x63U 
                                                         == 
                                                         (0x7fU 
                                                          & vlSelf->top__DOT__rv_cpu__DOT__instr)))));
    vlSelf->top__DOT__rv_cpu__DOT__alu_sr2_rs2_en = 
        ((0x63U == (0x7fU & vlSelf->top__DOT__rv_cpu__DOT__instr)) 
         | (IData)(vlSelf->top__DOT__rv_cpu__DOT__rv64_idu__DOT__op_r));
    vlSelf->top__DOT__rv_cpu__DOT__alu_ctrl = ((0x1fff1U 
                                                & vlSelf->top__DOT__rv_cpu__DOT__alu_ctrl) 
                                               | ((((IData)(
                                                            (0x3013U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->top__DOT__rv_cpu__DOT__instr))) 
                                                    | (((IData)(vlSelf->top__DOT__rv_cpu__DOT__rv64_idu__DOT__op_r) 
                                                        & (3U 
                                                           == 
                                                           (7U 
                                                            & (vlSelf->top__DOT__rv_cpu__DOT__instr 
                                                               >> 0xcU)))) 
                                                       & (0U 
                                                          == 
                                                          (vlSelf->top__DOT__rv_cpu__DOT__instr 
                                                           >> 0x19U)))) 
                                                   << 3U) 
                                                  | ((((IData)(
                                                               (0x2013U 
                                                                == 
                                                                (0x707fU 
                                                                 & vlSelf->top__DOT__rv_cpu__DOT__instr))) 
                                                       | (((IData)(vlSelf->top__DOT__rv_cpu__DOT__rv64_idu__DOT__op_r) 
                                                           & (2U 
                                                              == 
                                                              (7U 
                                                               & (vlSelf->top__DOT__rv_cpu__DOT__instr 
                                                                  >> 0xcU)))) 
                                                          & (0U 
                                                             == 
                                                             (vlSelf->top__DOT__rv_cpu__DOT__instr 
                                                              >> 0x19U)))) 
                                                      << 2U) 
                                                     | (((((IData)(vlSelf->top__DOT__rv_cpu__DOT__rv64_idu__DOT__op_r) 
                                                           & (0U 
                                                              == 
                                                              (7U 
                                                               & (vlSelf->top__DOT__rv_cpu__DOT__instr 
                                                                  >> 0xcU)))) 
                                                          & (0x20U 
                                                             == 
                                                             (vlSelf->top__DOT__rv_cpu__DOT__instr 
                                                              >> 0x19U))) 
                                                         | ((IData)(
                                                                    (0x3bU 
                                                                     == 
                                                                     (0x707fU 
                                                                      & vlSelf->top__DOT__rv_cpu__DOT__instr))) 
                                                            & (0x20U 
                                                               == 
                                                               (vlSelf->top__DOT__rv_cpu__DOT__instr 
                                                                >> 0x19U)))) 
                                                        << 1U))));
    vlSelf->top__DOT__rv_cpu__DOT__alu_ctrl = ((0x1ff8fU 
                                                & vlSelf->top__DOT__rv_cpu__DOT__alu_ctrl) 
                                               | ((((((IData)(vlSelf->top__DOT__rv_cpu__DOT__rv64_idu__DOT__op_r) 
                                                      & (6U 
                                                         == 
                                                         (7U 
                                                          & (vlSelf->top__DOT__rv_cpu__DOT__instr 
                                                             >> 0xcU)))) 
                                                     & (0U 
                                                        == 
                                                        (vlSelf->top__DOT__rv_cpu__DOT__instr 
                                                         >> 0x19U))) 
                                                    | (IData)(
                                                              (0x6013U 
                                                               == 
                                                               (0x707fU 
                                                                & vlSelf->top__DOT__rv_cpu__DOT__instr)))) 
                                                   << 6U) 
                                                  | ((((((IData)(vlSelf->top__DOT__rv_cpu__DOT__rv64_idu__DOT__op_r) 
                                                         & (4U 
                                                            == 
                                                            (7U 
                                                             & (vlSelf->top__DOT__rv_cpu__DOT__instr 
                                                                >> 0xcU)))) 
                                                        & (0U 
                                                           == 
                                                           (vlSelf->top__DOT__rv_cpu__DOT__instr 
                                                            >> 0x19U))) 
                                                       | (IData)(
                                                                 (0x4013U 
                                                                  == 
                                                                  (0x707fU 
                                                                   & vlSelf->top__DOT__rv_cpu__DOT__instr)))) 
                                                      << 5U) 
                                                     | (((((IData)(vlSelf->top__DOT__rv_cpu__DOT__rv64_idu__DOT__op_r) 
                                                           & (7U 
                                                              == 
                                                              (7U 
                                                               & (vlSelf->top__DOT__rv_cpu__DOT__instr 
                                                                  >> 0xcU)))) 
                                                          & (0U 
                                                             == 
                                                             (vlSelf->top__DOT__rv_cpu__DOT__instr 
                                                              >> 0x19U))) 
                                                         | (IData)(
                                                                   (0x7013U 
                                                                    == 
                                                                    (0x707fU 
                                                                     & vlSelf->top__DOT__rv_cpu__DOT__instr)))) 
                                                        << 4U))));
    vlSelf->top__DOT__rv_cpu__DOT__alu_ctrl = ((0x1fe7fU 
                                                & vlSelf->top__DOT__rv_cpu__DOT__alu_ctrl) 
                                               | ((((((IData)(
                                                              (0x5013U 
                                                               == 
                                                               (0x707fU 
                                                                & vlSelf->top__DOT__rv_cpu__DOT__instr))) 
                                                      & (0U 
                                                         == 
                                                         (vlSelf->top__DOT__rv_cpu__DOT__instr 
                                                          >> 0x19U))) 
                                                     | (((IData)(vlSelf->top__DOT__rv_cpu__DOT__rv64_idu__DOT__op_r) 
                                                         & (5U 
                                                            == 
                                                            (7U 
                                                             & (vlSelf->top__DOT__rv_cpu__DOT__instr 
                                                                >> 0xcU)))) 
                                                        & (0U 
                                                           == 
                                                           (vlSelf->top__DOT__rv_cpu__DOT__instr 
                                                            >> 0x19U)))) 
                                                    | ((IData)(
                                                               (0x501bU 
                                                                == 
                                                                (0x707fU 
                                                                 & vlSelf->top__DOT__rv_cpu__DOT__instr))) 
                                                       & (0U 
                                                          == 
                                                          (vlSelf->top__DOT__rv_cpu__DOT__instr 
                                                           >> 0x19U)))) 
                                                   << 8U) 
                                                  | ((((IData)(
                                                               (0x1013U 
                                                                == 
                                                                (0x707fU 
                                                                 & vlSelf->top__DOT__rv_cpu__DOT__instr))) 
                                                       & (0U 
                                                          == 
                                                          (vlSelf->top__DOT__rv_cpu__DOT__instr 
                                                           >> 0x19U))) 
                                                      | (((IData)(vlSelf->top__DOT__rv_cpu__DOT__rv64_idu__DOT__op_r) 
                                                          & (1U 
                                                             == 
                                                             (7U 
                                                              & (vlSelf->top__DOT__rv_cpu__DOT__instr 
                                                                 >> 0xcU)))) 
                                                         & (0U 
                                                            == 
                                                            (vlSelf->top__DOT__rv_cpu__DOT__instr 
                                                             >> 0x19U)))) 
                                                     << 7U)));
    vlSelf->top__DOT__rv_cpu__DOT__alu_ctrl = ((0x1fffeU 
                                                & vlSelf->top__DOT__rv_cpu__DOT__alu_ctrl) 
                                               | (((((((IData)(
                                                               (0x13U 
                                                                == 
                                                                (0x707fU 
                                                                 & vlSelf->top__DOT__rv_cpu__DOT__instr))) 
                                                       | (((IData)(vlSelf->top__DOT__rv_cpu__DOT__rv64_idu__DOT__op_r) 
                                                           & (0U 
                                                              == 
                                                              (7U 
                                                               & (vlSelf->top__DOT__rv_cpu__DOT__instr 
                                                                  >> 0xcU)))) 
                                                          & (0U 
                                                             == 
                                                             (vlSelf->top__DOT__rv_cpu__DOT__instr 
                                                              >> 0x19U)))) 
                                                      | ((IData)(vlSelf->top__DOT__rv_cpu__DOT__rv64_idu__DOT__rv_jalr) 
                                                         | (0x6fU 
                                                            == 
                                                            (0x7fU 
                                                             & vlSelf->top__DOT__rv_cpu__DOT__instr)))) 
                                                     | ((0x23U 
                                                         == 
                                                         (0x7fU 
                                                          & vlSelf->top__DOT__rv_cpu__DOT__instr)) 
                                                        | (3U 
                                                           == 
                                                           (0x7fU 
                                                            & vlSelf->top__DOT__rv_cpu__DOT__instr)))) 
                                                    | (0x17U 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->top__DOT__rv_cpu__DOT__instr))) 
                                                   | ((IData)(
                                                              (0x3bU 
                                                               == 
                                                               (0x707fU 
                                                                & vlSelf->top__DOT__rv_cpu__DOT__instr))) 
                                                      & (0U 
                                                         == 
                                                         (vlSelf->top__DOT__rv_cpu__DOT__instr 
                                                          >> 0x19U)))) 
                                                  | (IData)(
                                                            (0x1bU 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->top__DOT__rv_cpu__DOT__instr)))));
    vlSelf->top__DOT__rv_cpu__DOT__alu_ctrl = ((0x1f1ffU 
                                                & vlSelf->top__DOT__rv_cpu__DOT__alu_ctrl) 
                                               | (((IData)(
                                                           (0x63U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->top__DOT__rv_cpu__DOT__instr))) 
                                                   << 0xbU) 
                                                  | (((0x37U 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->top__DOT__rv_cpu__DOT__instr)) 
                                                      << 0xaU) 
                                                     | (((((IData)(vlSelf->top__DOT__rv_cpu__DOT__rv64_idu__DOT__op_r) 
                                                           & (5U 
                                                              == 
                                                              (7U 
                                                               & (vlSelf->top__DOT__rv_cpu__DOT__instr 
                                                                  >> 0xcU)))) 
                                                          & (0x20U 
                                                             == 
                                                             (vlSelf->top__DOT__rv_cpu__DOT__instr 
                                                              >> 0x19U))) 
                                                         | (IData)(vlSelf->top__DOT__rv_cpu__DOT__rv64_idu__DOT__rv_srai)) 
                                                        << 9U))));
    vlSelf->top__DOT__rv_cpu__DOT__alu_sr1_pc_en = (IData)(
                                                           (0U 
                                                            != 
                                                            (0xeU 
                                                             & (IData)(vlSelf->top__DOT__rv_cpu__DOT__pc_src_en))));
    vlSelf->top__DOT__rv_cpu__DOT__alu_sr2_pc_en = (IData)(
                                                           (0U 
                                                            != 
                                                            (6U 
                                                             & (IData)(vlSelf->top__DOT__rv_cpu__DOT__pc_src_en))));
    vlSelf->top__DOT__rv_cpu__DOT__rv64_alu__DOT__add_cin 
        = ((IData)((0U != (0xb80eU & vlSelf->top__DOT__rv_cpu__DOT__alu_ctrl)))
            ? 1U : 0U);
    vlSelf->top__DOT__rv_cpu__DOT__alu_src1 = (((- (QData)((IData)(
                                                                   (((((0x63U 
                                                                        == 
                                                                        (0x7fU 
                                                                         & vlSelf->top__DOT__rv_cpu__DOT__instr)) 
                                                                       | (IData)(vlSelf->top__DOT__rv_cpu__DOT__rv64_idu__DOT__op_r)) 
                                                                      | (IData)(vlSelf->top__DOT__rv_cpu__DOT__rv64_idu__DOT__op_i)) 
                                                                     | (0x23U 
                                                                        == 
                                                                        (0x7fU 
                                                                         & vlSelf->top__DOT__rv_cpu__DOT__instr))) 
                                                                    & (~ (IData)(vlSelf->top__DOT__rv_cpu__DOT__alu_sr1_pc_en)))))) 
                                                & vlSelf->top__DOT__rv_cpu__DOT__rs1_data) 
                                               | ((- (QData)((IData)(vlSelf->top__DOT__rv_cpu__DOT__alu_sr1_pc_en))) 
                                                  & vlSelf->top__DOT__rv_cpu__DOT__pc_reg));
    vlSelf->top__DOT__rv_cpu__DOT__alu_src2 = ((((- (QData)((IData)(vlSelf->top__DOT__rv_cpu__DOT__alu_sr2_rs2_en))) 
                                                 & ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->top__DOT__rv_cpu__DOT__instr 
                                                         >> 0x14U)))
                                                     ? 0ULL
                                                     : 
                                                    vlSelf->top__DOT__rv_cpu__DOT__rv64_regfile__DOT__regfile
                                                    [
                                                    (0x1fU 
                                                     & (vlSelf->top__DOT__rv_cpu__DOT__instr 
                                                        >> 0x14U))])) 
                                                | ((- (QData)((IData)(
                                                                      (((((((IData)(vlSelf->top__DOT__rv_cpu__DOT__rv64_idu__DOT__op_u) 
                                                                            | (0x6fU 
                                                                               == 
                                                                               (0x7fU 
                                                                                & vlSelf->top__DOT__rv_cpu__DOT__instr))) 
                                                                           | (0x63U 
                                                                              == 
                                                                              (0x7fU 
                                                                               & vlSelf->top__DOT__rv_cpu__DOT__instr))) 
                                                                          | (IData)(vlSelf->top__DOT__rv_cpu__DOT__rv64_idu__DOT__op_i)) 
                                                                         | (0x23U 
                                                                            == 
                                                                            (0x7fU 
                                                                             & vlSelf->top__DOT__rv_cpu__DOT__instr))) 
                                                                        & (~ (IData)(vlSelf->top__DOT__rv_cpu__DOT__alu_sr2_pc_en))) 
                                                                       & (~ (IData)(vlSelf->top__DOT__rv_cpu__DOT__alu_sr2_rs2_en)))))) 
                                                   & vlSelf->top__DOT__rv_cpu__DOT__imm)) 
                                               | (4ULL 
                                                  & (- (QData)((IData)(vlSelf->top__DOT__rv_cpu__DOT__alu_sr2_pc_en)))));
    vlSelf->top__DOT__rv_cpu__DOT__rv64_alu__DOT__add_src1 
        = ((IData)((0U != (0x14000U & vlSelf->top__DOT__rv_cpu__DOT__alu_ctrl)))
            ? (~ vlSelf->top__DOT__rv_cpu__DOT__alu_src1)
            : vlSelf->top__DOT__rv_cpu__DOT__alu_src1);
    vlSelf->top__DOT__rv_cpu__DOT__rv64_alu__DOT__add_src2 
        = ((IData)((0U != (0xb80eU & vlSelf->top__DOT__rv_cpu__DOT__alu_ctrl)))
            ? (~ vlSelf->top__DOT__rv_cpu__DOT__alu_src2)
            : vlSelf->top__DOT__rv_cpu__DOT__alu_src2);
    VL_EXTEND_WI(65,1, __Vtemp1, (IData)(vlSelf->top__DOT__rv_cpu__DOT__rv64_alu__DOT__add_cin));
    vlSelf->top__DOT__rv_cpu__DOT__rv64_alu__DOT__add_res 
        = ((vlSelf->top__DOT__rv_cpu__DOT__rv64_alu__DOT__add_src1 
            + vlSelf->top__DOT__rv_cpu__DOT__rv64_alu__DOT__add_src2) 
           + (((QData)((IData)(__Vtemp1[1U])) << 0x20U) 
              | (QData)((IData)(__Vtemp1[0U]))));
    vlSelf->top__DOT__rv_cpu__DOT__rv64_alu__DOT__slt_blt_bge_res 
        = ((0xfffffffffffffffeULL & vlSelf->top__DOT__rv_cpu__DOT__rv64_alu__DOT__slt_blt_bge_res) 
           | (IData)((IData)((1U & (((IData)((vlSelf->top__DOT__rv_cpu__DOT__alu_src1 
                                              >> 0x3fU)) 
                                     & (IData)((vlSelf->top__DOT__rv_cpu__DOT__alu_src2 
                                                >> 0x3fU))) 
                                    | ((~ ((IData)(
                                                   (vlSelf->top__DOT__rv_cpu__DOT__alu_src1 
                                                    >> 0x3fU)) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__rv_cpu__DOT__alu_src2 
                                                      >> 0x3fU)))) 
                                       & (IData)((vlSelf->top__DOT__rv_cpu__DOT__rv64_alu__DOT__add_res 
                                                  >> 0x3fU))))))));
    VL_EXTEND_WQ(65,64, __Vtemp3, vlSelf->top__DOT__rv_cpu__DOT__rv64_alu__DOT__add_src1);
    __Vtemp4[0U] = (IData)(vlSelf->top__DOT__rv_cpu__DOT__rv64_alu__DOT__add_src2);
    __Vtemp4[1U] = (IData)((vlSelf->top__DOT__rv_cpu__DOT__rv64_alu__DOT__add_src2 
                            >> 0x20U));
    __Vtemp4[2U] = ((IData)((0U != (0xb80eU & vlSelf->top__DOT__rv_cpu__DOT__alu_ctrl)))
                     ? 1U : 0U);
    VL_ADD_W(3, __Vtemp5, __Vtemp3, __Vtemp4);
    VL_EXTEND_WI(65,1, __Vtemp6, (IData)(vlSelf->top__DOT__rv_cpu__DOT__rv64_alu__DOT__add_cin));
    VL_ADD_W(3, __Vtemp7, __Vtemp5, __Vtemp6);
    vlSelf->top__DOT__rv_cpu__DOT__alu_res = ((((((
                                                   (((((((- (QData)((IData)(
                                                                            (0U 
                                                                             != 
                                                                             (3U 
                                                                              & vlSelf->top__DOT__rv_cpu__DOT__alu_ctrl))))) 
                                                         & vlSelf->top__DOT__rv_cpu__DOT__rv64_alu__DOT__add_res) 
                                                        | ((- (QData)((IData)(
                                                                              (0U 
                                                                               != 
                                                                               (0x6004U 
                                                                                & vlSelf->top__DOT__rv_cpu__DOT__alu_ctrl))))) 
                                                           & vlSelf->top__DOT__rv_cpu__DOT__rv64_alu__DOT__slt_blt_bge_res)) 
                                                       | ((- (QData)((IData)(
                                                                             (0U 
                                                                              != 
                                                                              (0x18008U 
                                                                               & vlSelf->top__DOT__rv_cpu__DOT__alu_ctrl))))) 
                                                          & (QData)((IData)(
                                                                            (1U 
                                                                             & __Vtemp7[2U]))))) 
                                                      | ((- (QData)((IData)(
                                                                            (1U 
                                                                             & (vlSelf->top__DOT__rv_cpu__DOT__alu_ctrl 
                                                                                >> 4U))))) 
                                                         & (vlSelf->top__DOT__rv_cpu__DOT__alu_src1 
                                                            & vlSelf->top__DOT__rv_cpu__DOT__alu_src2))) 
                                                     | ((- (QData)((IData)(
                                                                           (1U 
                                                                            & (vlSelf->top__DOT__rv_cpu__DOT__alu_ctrl 
                                                                               >> 5U))))) 
                                                        & (vlSelf->top__DOT__rv_cpu__DOT__alu_src1 
                                                           ^ vlSelf->top__DOT__rv_cpu__DOT__alu_src2))) 
                                                    | ((- (QData)((IData)(
                                                                          (1U 
                                                                           & (vlSelf->top__DOT__rv_cpu__DOT__alu_ctrl 
                                                                              >> 6U))))) 
                                                       & (vlSelf->top__DOT__rv_cpu__DOT__alu_src1 
                                                          | vlSelf->top__DOT__rv_cpu__DOT__alu_src2))) 
                                                   | ((- (QData)((IData)(
                                                                         (1U 
                                                                          & (vlSelf->top__DOT__rv_cpu__DOT__alu_ctrl 
                                                                             >> 7U))))) 
                                                      & VL_SHIFTL_QQQ(64,64,64, vlSelf->top__DOT__rv_cpu__DOT__alu_src1, vlSelf->top__DOT__rv_cpu__DOT__alu_src2))) 
                                                  | ((- (QData)((IData)(
                                                                        (1U 
                                                                         & (vlSelf->top__DOT__rv_cpu__DOT__alu_ctrl 
                                                                            >> 8U))))) 
                                                     & VL_SHIFTR_QQQ(64,64,64, vlSelf->top__DOT__rv_cpu__DOT__alu_src1, vlSelf->top__DOT__rv_cpu__DOT__alu_src2))) 
                                                 | ((- (QData)((IData)(
                                                                       (1U 
                                                                        & (vlSelf->top__DOT__rv_cpu__DOT__alu_ctrl 
                                                                           >> 9U))))) 
                                                    & VL_SHIFTRS_QQQ(64,64,64, vlSelf->top__DOT__rv_cpu__DOT__alu_src1, vlSelf->top__DOT__rv_cpu__DOT__alu_src2))) 
                                                | ((- (QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->top__DOT__rv_cpu__DOT__alu_ctrl 
                                                                          >> 0xaU))))) 
                                                   & (((QData)((IData)(
                                                                       (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__rv_cpu__DOT__alu_src2 
                                                                                >> 0x1fU))))))) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        ((IData)(
                                                                                (vlSelf->top__DOT__rv_cpu__DOT__alu_src2 
                                                                                >> 0xcU)) 
                                                                         << 0xcU)))))) 
                                               | ((- (QData)((IData)(
                                                                     (1U 
                                                                      & (vlSelf->top__DOT__rv_cpu__DOT__alu_ctrl 
                                                                         >> 0xbU))))) 
                                                  & (QData)((IData)(
                                                                    (0ULL 
                                                                     == vlSelf->top__DOT__rv_cpu__DOT__rv64_alu__DOT__add_res))))) 
                                              | ((- (QData)((IData)(
                                                                    (1U 
                                                                     & (vlSelf->top__DOT__rv_cpu__DOT__alu_ctrl 
                                                                        >> 0xcU))))) 
                                                 & (QData)((IData)(
                                                                   (0ULL 
                                                                    != vlSelf->top__DOT__rv_cpu__DOT__rv64_alu__DOT__add_res)))));
}

VL_INLINE_OPT void Vtop___024root___combo__TOP__4(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___combo__TOP__4\n"); );
    // Body
    vlSelf->top__DOT__rv_cpu__DOT__ebreak = ((IData)(vlSelf->rst)
                                              ? 0U : (IData)(
                                                             (0x100073U 
                                                              == vlSelf->top__DOT__rv_cpu__DOT__instr)));
    vlSelf->top__DOT__rv_cpu__DOT__pc_sel = ((5U & (IData)(vlSelf->top__DOT__rv_cpu__DOT__pc_sel)) 
                                             | (((IData)(vlSelf->rst)
                                                  ? 0U
                                                  : 
                                                 (1U 
                                                  & ((IData)(vlSelf->top__DOT__rv_cpu__DOT__pc_src_en) 
                                                     >> 1U))) 
                                                << 1U));
    vlSelf->top__DOT__rv_cpu__DOT__pc_sel = ((3U & (IData)(vlSelf->top__DOT__rv_cpu__DOT__pc_sel)) 
                                             | (((IData)(vlSelf->rst)
                                                  ? 0U
                                                  : 
                                                 (1U 
                                                  & ((IData)(vlSelf->top__DOT__rv_cpu__DOT__pc_src_en) 
                                                     >> 2U))) 
                                                << 2U));
    if ((((((((IData)(vlSelf->top__DOT__rv_cpu__DOT__rv64_idu__DOT__rv_lb) 
              | (IData)(vlSelf->top__DOT__rv_cpu__DOT__rv64_idu__DOT__rv_lh)) 
             | (IData)(vlSelf->top__DOT__rv_cpu__DOT__rv64_idu__DOT__rv_lw)) 
            | (IData)(vlSelf->top__DOT__rv_cpu__DOT__rv64_idu__DOT__rv_lbu)) 
           | (IData)(vlSelf->top__DOT__rv_cpu__DOT__rv64_idu__DOT__rv_lhu)) 
          | (IData)(vlSelf->top__DOT__rv_cpu__DOT__rv64_idu__DOT__rv_ld)) 
         & (~ (IData)(vlSelf->rst)))) {
        Vtop___024root____Vdpiimwrap_top__DOT__rv_cpu__DOT__rv64_instr_mem__DOT__pmem_read_TOP(vlSelf->top__DOT__rv_cpu__DOT__alu_res, vlSelf->__Vtask_top__DOT__rv_cpu__DOT__rv64_data_mem__DOT__pmem_read__1__rdata);
        vlSelf->top__DOT__rv_cpu__DOT__mem_rd_data 
            = vlSelf->__Vtask_top__DOT__rv_cpu__DOT__rv64_data_mem__DOT__pmem_read__1__rdata;
    } else {
        vlSelf->top__DOT__rv_cpu__DOT__mem_rd_data = 0ULL;
    }
    vlSelf->top__DOT__rv_cpu__DOT__pc_sel = ((6U & (IData)(vlSelf->top__DOT__rv_cpu__DOT__pc_sel)) 
                                             | ((IData)(vlSelf->rst)
                                                 ? 0U
                                                 : 
                                                (1U 
                                                 & ((IData)(vlSelf->top__DOT__rv_cpu__DOT__pc_src_en) 
                                                    & (IData)(vlSelf->top__DOT__rv_cpu__DOT__alu_res)))));
    vlSelf->ebreak = vlSelf->top__DOT__rv_cpu__DOT__ebreak;
    vlSelf->top__DOT__rv_cpu__DOT__wr_reg_data = ((
                                                   ((((((((- (QData)((IData)(
                                                                             ((1U 
                                                                               == (IData)(vlSelf->top__DOT__rv_cpu__DOT__rd_mem_op)) 
                                                                              & (3U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->top__DOT__rv_cpu__DOT__instr)))))) 
                                                          & vlSelf->top__DOT__rv_cpu__DOT__mem_rd_data) 
                                                         | ((- (QData)((IData)(
                                                                               ((2U 
                                                                                == (IData)(vlSelf->top__DOT__rv_cpu__DOT__rd_mem_op)) 
                                                                                & (3U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->top__DOT__rv_cpu__DOT__instr)))))) 
                                                            & (((QData)((IData)(
                                                                                (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__rv_cpu__DOT__mem_rd_data 
                                                                                >> 0x1fU))))))) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(vlSelf->top__DOT__rv_cpu__DOT__mem_rd_data))))) 
                                                        | ((- (QData)((IData)(
                                                                              ((4U 
                                                                                == (IData)(vlSelf->top__DOT__rv_cpu__DOT__rd_mem_op)) 
                                                                               & (3U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->top__DOT__rv_cpu__DOT__instr)))))) 
                                                           & (((- (QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__rv_cpu__DOT__mem_rd_data 
                                                                                >> 0xfU)))))) 
                                                               << 0x10U) 
                                                              | (QData)((IData)(
                                                                                (0xffffU 
                                                                                & (IData)(vlSelf->top__DOT__rv_cpu__DOT__mem_rd_data))))))) 
                                                       | ((- (QData)((IData)(
                                                                             ((8U 
                                                                               == (IData)(vlSelf->top__DOT__rv_cpu__DOT__rd_mem_op)) 
                                                                              & (3U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->top__DOT__rv_cpu__DOT__instr)))))) 
                                                          & (((- (QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__rv_cpu__DOT__mem_rd_data 
                                                                                >> 7U)))))) 
                                                              << 8U) 
                                                             | (QData)((IData)(
                                                                               (0xffU 
                                                                                & (IData)(vlSelf->top__DOT__rv_cpu__DOT__mem_rd_data))))))) 
                                                      | ((- (QData)((IData)(
                                                                            ((0x10U 
                                                                              == (IData)(vlSelf->top__DOT__rv_cpu__DOT__rd_mem_op)) 
                                                                             & (3U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->top__DOT__rv_cpu__DOT__instr)))))) 
                                                         & (QData)((IData)(vlSelf->top__DOT__rv_cpu__DOT__mem_rd_data)))) 
                                                     | ((- (QData)((IData)(
                                                                           ((0x20U 
                                                                             == (IData)(vlSelf->top__DOT__rv_cpu__DOT__rd_mem_op)) 
                                                                            & (3U 
                                                                               == 
                                                                               (0x7fU 
                                                                                & vlSelf->top__DOT__rv_cpu__DOT__instr)))))) 
                                                        & (QData)((IData)(
                                                                          (0xffffU 
                                                                           & (IData)(vlSelf->top__DOT__rv_cpu__DOT__mem_rd_data)))))) 
                                                    | ((- (QData)((IData)(
                                                                          ((0x40U 
                                                                            == (IData)(vlSelf->top__DOT__rv_cpu__DOT__rd_mem_op)) 
                                                                           & (3U 
                                                                              == 
                                                                              (0x7fU 
                                                                               & vlSelf->top__DOT__rv_cpu__DOT__instr)))))) 
                                                       & (QData)((IData)(
                                                                         (0xffU 
                                                                          & (IData)(vlSelf->top__DOT__rv_cpu__DOT__mem_rd_data)))))) 
                                                   | ((- (QData)((IData)(
                                                                         ((IData)(vlSelf->top__DOT__rv_cpu__DOT__alu2reg_en) 
                                                                          & (~ (IData)(vlSelf->top__DOT__rv_cpu__DOT__alu_sext_before_wr_reg)))))) 
                                                      & vlSelf->top__DOT__rv_cpu__DOT__alu_res)) 
                                                  | ((- (QData)((IData)(
                                                                        ((IData)(vlSelf->top__DOT__rv_cpu__DOT__alu2reg_en) 
                                                                         & (IData)(vlSelf->top__DOT__rv_cpu__DOT__alu_sext_before_wr_reg))))) 
                                                     & (((QData)((IData)(
                                                                         (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__rv_cpu__DOT__alu_res 
                                                                                >> 0x1fU))))))) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(vlSelf->top__DOT__rv_cpu__DOT__alu_res)))));
    vlSelf->top__DOT__rv_cpu__DOT__rv64_pc__DOT__pc_src2 
        = ((4ULL & (- (QData)((IData)((1U & (~ (IData)(
                                                       (0U 
                                                        != (IData)(vlSelf->top__DOT__rv_cpu__DOT__pc_sel))))))))) 
           | ((- (QData)((IData)((0U != (IData)(vlSelf->top__DOT__rv_cpu__DOT__pc_sel))))) 
              & vlSelf->top__DOT__rv_cpu__DOT__imm));
    vlSelf->top__DOT__rv_cpu__DOT__rv64_pc__DOT__pc_src1 
        = (((- (QData)((IData)((1U & (~ ((IData)(vlSelf->top__DOT__rv_cpu__DOT__pc_sel) 
                                         >> 2U)))))) 
            & vlSelf->top__DOT__rv_cpu__DOT__pc_reg) 
           | ((- (QData)((IData)((1U & ((IData)(vlSelf->top__DOT__rv_cpu__DOT__pc_sel) 
                                        >> 2U))))) 
              & vlSelf->top__DOT__rv_cpu__DOT__rs1_data));
    vlSelf->top__DOT__rv_cpu__DOT__pc = (((4U == (IData)(vlSelf->top__DOT__rv_cpu__DOT__pc_sel)) 
                                          & (~ (IData)(vlSelf->top__DOT__rv_cpu__DOT__ebreak)))
                                          ? (0xfffffffffffffffeULL 
                                             & (vlSelf->top__DOT__rv_cpu__DOT__rv64_pc__DOT__pc_src1 
                                                + vlSelf->top__DOT__rv_cpu__DOT__rv64_pc__DOT__pc_src2))
                                          : ((IData)(vlSelf->top__DOT__rv_cpu__DOT__ebreak)
                                              ? vlSelf->top__DOT__rv_cpu__DOT__pc_reg
                                              : (vlSelf->top__DOT__rv_cpu__DOT__rv64_pc__DOT__pc_src1 
                                                 + vlSelf->top__DOT__rv_cpu__DOT__rv64_pc__DOT__pc_src2)));
    vlSelf->pc = vlSelf->top__DOT__rv_cpu__DOT__pc;
    Vtop___024root____Vdpiimwrap_top__DOT__rv_cpu__DOT__rv64_instr_mem__DOT__pmem_read_TOP(vlSelf->top__DOT__rv_cpu__DOT__pc, vlSelf->__Vtask_top__DOT__rv_cpu__DOT__rv64_instr_mem__DOT__pmem_read__0__rdata);
    vlSelf->top__DOT__rv_cpu__DOT__rv64_instr_mem__DOT__rdata 
        = vlSelf->__Vtask_top__DOT__rv_cpu__DOT__rv64_instr_mem__DOT__pmem_read__0__rdata;
}

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vtop___024root___sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    Vtop___024root___combo__TOP__4(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

QData Vtop___024root___change_request_1(Vtop___024root* vlSelf);

VL_INLINE_OPT QData Vtop___024root___change_request(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___change_request\n"); );
    // Body
    return (Vtop___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vtop___024root___change_request_1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
