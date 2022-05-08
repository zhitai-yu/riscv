// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__traceChgSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep);

void Vtop___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vtop___024root* const __restrict vlSelf = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        Vtop___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void Vtop___024root__traceChgSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlWide<3>/*95:0*/ __Vtemp41;
    VlWide<3>/*95:0*/ __Vtemp42;
    VlWide<3>/*95:0*/ __Vtemp43;
    VlWide<3>/*95:0*/ __Vtemp44;
    VlWide<3>/*95:0*/ __Vtemp45;
    VlWide<3>/*95:0*/ __Vtemp48;
    VlWide<3>/*95:0*/ __Vtemp49;
    VlWide<3>/*95:0*/ __Vtemp50;
    VlWide<3>/*95:0*/ __Vtemp51;
    VlWide<3>/*95:0*/ __Vtemp52;
    VlWide<3>/*95:0*/ __Vtemp54;
    VlWide<3>/*95:0*/ __Vtemp56;
    VlWide<3>/*95:0*/ __Vtemp57;
    VlWide<3>/*95:0*/ __Vtemp58;
    VlWide<3>/*95:0*/ __Vtemp59;
    VlWide<3>/*95:0*/ __Vtemp60;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgBit(oldp+0,(((((0x63U == (0x7fU 
                                                 & vlSelf->top__DOT__rv_cpu__DOT__instr)) 
                                      | (IData)(vlSelf->top__DOT__rv_cpu__DOT__rv64_idu__DOT__op_r)) 
                                     | (IData)(vlSelf->top__DOT__rv_cpu__DOT__rv64_idu__DOT__op_i)) 
                                    | (0x23U == (0x7fU 
                                                 & vlSelf->top__DOT__rv_cpu__DOT__instr)))));
            tracep->chgBit(oldp+1,((((IData)(vlSelf->top__DOT__rv_cpu__DOT__rv64_idu__DOT__op_r) 
                                     | (0x23U == (0x7fU 
                                                  & vlSelf->top__DOT__rv_cpu__DOT__instr))) 
                                    | (0x63U == (0x7fU 
                                                 & vlSelf->top__DOT__rv_cpu__DOT__instr)))));
            tracep->chgBit(oldp+2,(vlSelf->top__DOT__rv_cpu__DOT__alu2reg_en));
            tracep->chgBit(oldp+3,((3U == (0x7fU & vlSelf->top__DOT__rv_cpu__DOT__instr))));
            tracep->chgQData(oldp+4,(vlSelf->top__DOT__rv_cpu__DOT__imm),64);
            tracep->chgCData(oldp+6,(vlSelf->top__DOT__rv_cpu__DOT__rd_mem_op),7);
            tracep->chgQData(oldp+7,(vlSelf->top__DOT__rv_cpu__DOT__rs1_data),64);
            tracep->chgQData(oldp+9,(((0U == (0x1fU 
                                              & (vlSelf->top__DOT__rv_cpu__DOT__instr 
                                                 >> 0x14U)))
                                       ? 0ULL : vlSelf->top__DOT__rv_cpu__DOT__rv64_regfile__DOT__regfile
                                      [(0x1fU & (vlSelf->top__DOT__rv_cpu__DOT__instr 
                                                 >> 0x14U))])),64);
            tracep->chgCData(oldp+11,((0x1fU & (vlSelf->top__DOT__rv_cpu__DOT__instr 
                                                >> 0xfU))),5);
            tracep->chgCData(oldp+12,((0x1fU & (vlSelf->top__DOT__rv_cpu__DOT__instr 
                                                >> 0x14U))),5);
            tracep->chgCData(oldp+13,((0x1fU & (vlSelf->top__DOT__rv_cpu__DOT__instr 
                                                >> 7U))),5);
            tracep->chgQData(oldp+14,(vlSelf->top__DOT__rv_cpu__DOT__pc_reg),64);
            tracep->chgCData(oldp+16,(vlSelf->top__DOT__rv_cpu__DOT__pc_src_en),4);
            tracep->chgBit(oldp+17,((1U & (~ ((0x63U 
                                               == (0x7fU 
                                                   & vlSelf->top__DOT__rv_cpu__DOT__instr)) 
                                              | (0x23U 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelf->top__DOT__rv_cpu__DOT__instr)))))));
            tracep->chgCData(oldp+18,(((((8U & (- (IData)(
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
            tracep->chgIData(oldp+19,(vlSelf->top__DOT__rv_cpu__DOT__alu_ctrl),17);
            tracep->chgBit(oldp+20,(((((((IData)(vlSelf->top__DOT__rv_cpu__DOT__rv64_idu__DOT__rv_lb) 
                                         | (IData)(vlSelf->top__DOT__rv_cpu__DOT__rv64_idu__DOT__rv_lh)) 
                                        | (IData)(vlSelf->top__DOT__rv_cpu__DOT__rv64_idu__DOT__rv_lw)) 
                                       | (IData)(vlSelf->top__DOT__rv_cpu__DOT__rv64_idu__DOT__rv_lbu)) 
                                      | (IData)(vlSelf->top__DOT__rv_cpu__DOT__rv64_idu__DOT__rv_lhu)) 
                                     | (IData)(vlSelf->top__DOT__rv_cpu__DOT__rv64_idu__DOT__rv_ld))));
            tracep->chgBit(oldp+21,((0x23U == (0x7fU 
                                               & vlSelf->top__DOT__rv_cpu__DOT__instr))));
            tracep->chgIData(oldp+22,(vlSelf->top__DOT__rv_cpu__DOT__instr),32);
            tracep->chgQData(oldp+23,(vlSelf->top__DOT__rv_cpu__DOT__alu_src1),64);
            tracep->chgQData(oldp+25,(vlSelf->top__DOT__rv_cpu__DOT__alu_src2),64);
            tracep->chgQData(oldp+27,(vlSelf->top__DOT__rv_cpu__DOT__alu_res),64);
            tracep->chgBit(oldp+29,(vlSelf->top__DOT__rv_cpu__DOT__alu_sext_before_wr_reg));
            tracep->chgBit(oldp+30,((((((0x63U == (0x7fU 
                                                   & vlSelf->top__DOT__rv_cpu__DOT__instr)) 
                                        | (IData)(vlSelf->top__DOT__rv_cpu__DOT__rv64_idu__DOT__op_r)) 
                                       | (IData)(vlSelf->top__DOT__rv_cpu__DOT__rv64_idu__DOT__op_i)) 
                                      | (0x23U == (0x7fU 
                                                   & vlSelf->top__DOT__rv_cpu__DOT__instr))) 
                                     & (~ (IData)(vlSelf->top__DOT__rv_cpu__DOT__alu_sr1_pc_en)))));
            tracep->chgBit(oldp+31,(vlSelf->top__DOT__rv_cpu__DOT__alu_sr1_pc_en));
            tracep->chgBit(oldp+32,(vlSelf->top__DOT__rv_cpu__DOT__alu_sr2_rs2_en));
            tracep->chgBit(oldp+33,((((((((IData)(vlSelf->top__DOT__rv_cpu__DOT__rv64_idu__DOT__op_u) 
                                          | (0x6fU 
                                             == (0x7fU 
                                                 & vlSelf->top__DOT__rv_cpu__DOT__instr))) 
                                         | (0x63U == 
                                            (0x7fU 
                                             & vlSelf->top__DOT__rv_cpu__DOT__instr))) 
                                        | (IData)(vlSelf->top__DOT__rv_cpu__DOT__rv64_idu__DOT__op_i)) 
                                       | (0x23U == 
                                          (0x7fU & vlSelf->top__DOT__rv_cpu__DOT__instr))) 
                                      & (~ (IData)(vlSelf->top__DOT__rv_cpu__DOT__alu_sr2_pc_en))) 
                                     & (~ (IData)(vlSelf->top__DOT__rv_cpu__DOT__alu_sr2_rs2_en)))));
            tracep->chgBit(oldp+34,(vlSelf->top__DOT__rv_cpu__DOT__alu_sr2_pc_en));
            tracep->chgBit(oldp+35,((1U & vlSelf->top__DOT__rv_cpu__DOT__alu_ctrl)));
            tracep->chgBit(oldp+36,((1U & (vlSelf->top__DOT__rv_cpu__DOT__alu_ctrl 
                                           >> 1U))));
            tracep->chgBit(oldp+37,((1U & (vlSelf->top__DOT__rv_cpu__DOT__alu_ctrl 
                                           >> 2U))));
            tracep->chgBit(oldp+38,((1U & (vlSelf->top__DOT__rv_cpu__DOT__alu_ctrl 
                                           >> 3U))));
            tracep->chgBit(oldp+39,((1U & (vlSelf->top__DOT__rv_cpu__DOT__alu_ctrl 
                                           >> 4U))));
            tracep->chgBit(oldp+40,((1U & (vlSelf->top__DOT__rv_cpu__DOT__alu_ctrl 
                                           >> 5U))));
            tracep->chgBit(oldp+41,((1U & (vlSelf->top__DOT__rv_cpu__DOT__alu_ctrl 
                                           >> 6U))));
            tracep->chgBit(oldp+42,((1U & (vlSelf->top__DOT__rv_cpu__DOT__alu_ctrl 
                                           >> 7U))));
            tracep->chgBit(oldp+43,((1U & (vlSelf->top__DOT__rv_cpu__DOT__alu_ctrl 
                                           >> 8U))));
            tracep->chgBit(oldp+44,((1U & (vlSelf->top__DOT__rv_cpu__DOT__alu_ctrl 
                                           >> 9U))));
            tracep->chgBit(oldp+45,((1U & (vlSelf->top__DOT__rv_cpu__DOT__alu_ctrl 
                                           >> 0xaU))));
            tracep->chgBit(oldp+46,((1U & (vlSelf->top__DOT__rv_cpu__DOT__alu_ctrl 
                                           >> 0xbU))));
            tracep->chgBit(oldp+47,((1U & (vlSelf->top__DOT__rv_cpu__DOT__alu_ctrl 
                                           >> 0xcU))));
            tracep->chgBit(oldp+48,((1U & (vlSelf->top__DOT__rv_cpu__DOT__alu_ctrl 
                                           >> 0xdU))));
            tracep->chgBit(oldp+49,((1U & (vlSelf->top__DOT__rv_cpu__DOT__alu_ctrl 
                                           >> 0xeU))));
            tracep->chgBit(oldp+50,((1U & (vlSelf->top__DOT__rv_cpu__DOT__alu_ctrl 
                                           >> 0xfU))));
            tracep->chgBit(oldp+51,((1U & (vlSelf->top__DOT__rv_cpu__DOT__alu_ctrl 
                                           >> 0x10U))));
            tracep->chgQData(oldp+52,(vlSelf->top__DOT__rv_cpu__DOT__rv64_alu__DOT__add_src1),64);
            tracep->chgQData(oldp+54,(vlSelf->top__DOT__rv_cpu__DOT__rv64_alu__DOT__add_src2),64);
            tracep->chgBit(oldp+56,(vlSelf->top__DOT__rv_cpu__DOT__rv64_alu__DOT__add_cin));
            tracep->chgQData(oldp+57,(vlSelf->top__DOT__rv_cpu__DOT__rv64_alu__DOT__add_res),64);
            VL_EXTEND_WQ(65,64, __Vtemp41, vlSelf->top__DOT__rv_cpu__DOT__rv64_alu__DOT__add_src1);
            VL_EXTEND_WQ(65,64, __Vtemp42, vlSelf->top__DOT__rv_cpu__DOT__rv64_alu__DOT__add_src2);
            VL_ADD_W(3, __Vtemp43, __Vtemp41, __Vtemp42);
            VL_EXTEND_WI(65,1, __Vtemp44, (IData)(vlSelf->top__DOT__rv_cpu__DOT__rv64_alu__DOT__add_cin));
            VL_ADD_W(3, __Vtemp45, __Vtemp43, __Vtemp44);
            tracep->chgBit(oldp+59,((1U & __Vtemp45[2U])));
            tracep->chgQData(oldp+60,((vlSelf->top__DOT__rv_cpu__DOT__alu_src1 
                                       & vlSelf->top__DOT__rv_cpu__DOT__alu_src2)),64);
            tracep->chgQData(oldp+62,((vlSelf->top__DOT__rv_cpu__DOT__alu_src1 
                                       | vlSelf->top__DOT__rv_cpu__DOT__alu_src2)),64);
            tracep->chgQData(oldp+64,((vlSelf->top__DOT__rv_cpu__DOT__alu_src1 
                                       ^ vlSelf->top__DOT__rv_cpu__DOT__alu_src2)),64);
            tracep->chgQData(oldp+66,((((QData)((IData)(
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
            tracep->chgQData(oldp+68,(vlSelf->top__DOT__rv_cpu__DOT__rv64_alu__DOT__slt_blt_bge_res),64);
            VL_EXTEND_WQ(65,64, __Vtemp48, vlSelf->top__DOT__rv_cpu__DOT__rv64_alu__DOT__add_src1);
            __Vtemp49[0U] = (IData)(vlSelf->top__DOT__rv_cpu__DOT__rv64_alu__DOT__add_src2);
            __Vtemp49[1U] = (IData)((vlSelf->top__DOT__rv_cpu__DOT__rv64_alu__DOT__add_src2 
                                     >> 0x20U));
            __Vtemp49[2U] = ((IData)((0U != (0xb80eU 
                                             & vlSelf->top__DOT__rv_cpu__DOT__alu_ctrl)))
                              ? 1U : 0U);
            VL_ADD_W(3, __Vtemp50, __Vtemp48, __Vtemp49);
            VL_EXTEND_WI(65,1, __Vtemp51, (IData)(vlSelf->top__DOT__rv_cpu__DOT__rv64_alu__DOT__add_cin));
            VL_ADD_W(3, __Vtemp52, __Vtemp50, __Vtemp51);
            tracep->chgQData(oldp+70,((QData)((IData)(
                                                      (1U 
                                                       & __Vtemp52[2U])))),64);
            tracep->chgQData(oldp+72,(VL_SHIFTL_QQQ(64,64,64, vlSelf->top__DOT__rv_cpu__DOT__alu_src1, vlSelf->top__DOT__rv_cpu__DOT__alu_src2)),64);
            tracep->chgQData(oldp+74,(VL_SHIFTR_QQQ(64,64,64, vlSelf->top__DOT__rv_cpu__DOT__alu_src1, vlSelf->top__DOT__rv_cpu__DOT__alu_src2)),64);
            tracep->chgQData(oldp+76,(VL_SHIFTRS_QQQ(64,64,64, vlSelf->top__DOT__rv_cpu__DOT__alu_src1, vlSelf->top__DOT__rv_cpu__DOT__alu_src2)),64);
            tracep->chgQData(oldp+78,((QData)((IData)(
                                                      (0ULL 
                                                       == vlSelf->top__DOT__rv_cpu__DOT__rv64_alu__DOT__add_res)))),64);
            tracep->chgQData(oldp+80,((QData)((IData)(
                                                      (0ULL 
                                                       != vlSelf->top__DOT__rv_cpu__DOT__rv64_alu__DOT__add_res)))),64);
            tracep->chgBit(oldp+82,(((IData)((0U != 
                                              (0xb80eU 
                                               & vlSelf->top__DOT__rv_cpu__DOT__alu_ctrl)))
                                      ? 1U : 0U)));
            VL_EXTEND_WI(65,1, __Vtemp54, (IData)(vlSelf->top__DOT__rv_cpu__DOT__rv64_alu__DOT__add_cin));
            tracep->chgQData(oldp+83,(((vlSelf->top__DOT__rv_cpu__DOT__rv64_alu__DOT__add_src1 
                                        + vlSelf->top__DOT__rv_cpu__DOT__rv64_alu__DOT__add_src2) 
                                       + (((QData)((IData)(
                                                           __Vtemp54[1U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            __Vtemp54[0U]))))),64);
            VL_EXTEND_WQ(65,64, __Vtemp56, vlSelf->top__DOT__rv_cpu__DOT__rv64_alu__DOT__add_src1);
            __Vtemp57[0U] = (IData)(vlSelf->top__DOT__rv_cpu__DOT__rv64_alu__DOT__add_src2);
            __Vtemp57[1U] = (IData)((vlSelf->top__DOT__rv_cpu__DOT__rv64_alu__DOT__add_src2 
                                     >> 0x20U));
            __Vtemp57[2U] = ((IData)((0U != (0xb80eU 
                                             & vlSelf->top__DOT__rv_cpu__DOT__alu_ctrl)))
                              ? 1U : 0U);
            VL_ADD_W(3, __Vtemp58, __Vtemp56, __Vtemp57);
            VL_EXTEND_WI(65,1, __Vtemp59, (IData)(vlSelf->top__DOT__rv_cpu__DOT__rv64_alu__DOT__add_cin));
            VL_ADD_W(3, __Vtemp60, __Vtemp58, __Vtemp59);
            tracep->chgBit(oldp+85,((1U & __Vtemp60[2U])));
            tracep->chgCData(oldp+86,((0x7fU & vlSelf->top__DOT__rv_cpu__DOT__instr)),7);
            tracep->chgCData(oldp+87,((7U & (vlSelf->top__DOT__rv_cpu__DOT__instr 
                                             >> 0xcU))),3);
            tracep->chgCData(oldp+88,((vlSelf->top__DOT__rv_cpu__DOT__instr 
                                       >> 0x19U)),7);
            tracep->chgQData(oldp+89,(vlSelf->top__DOT__rv_cpu__DOT__rv64_idu__DOT__immI),64);
            tracep->chgQData(oldp+91,((((QData)((IData)(
                                                        (- (IData)(
                                                                   (vlSelf->top__DOT__rv_cpu__DOT__instr 
                                                                    >> 0x1fU))))) 
                                        << 0x20U) | (QData)((IData)(
                                                                    (0xfffff000U 
                                                                     & vlSelf->top__DOT__rv_cpu__DOT__instr))))),64);
            tracep->chgQData(oldp+93,((((- (QData)((IData)(
                                                           (vlSelf->top__DOT__rv_cpu__DOT__instr 
                                                            >> 0x1fU)))) 
                                        << 0xcU) | (QData)((IData)(
                                                                   ((0xfe0U 
                                                                     & (vlSelf->top__DOT__rv_cpu__DOT__instr 
                                                                        >> 0x14U)) 
                                                                    | (0x1fU 
                                                                       & (vlSelf->top__DOT__rv_cpu__DOT__instr 
                                                                          >> 7U))))))),64);
            tracep->chgQData(oldp+95,((((- (QData)((IData)(
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
            tracep->chgQData(oldp+97,((((- (QData)((IData)(
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
            tracep->chgBit(oldp+99,((0U == (7U & (vlSelf->top__DOT__rv_cpu__DOT__instr 
                                                  >> 0xcU)))));
            tracep->chgBit(oldp+100,((1U == (7U & (vlSelf->top__DOT__rv_cpu__DOT__instr 
                                                   >> 0xcU)))));
            tracep->chgBit(oldp+101,((2U == (7U & (vlSelf->top__DOT__rv_cpu__DOT__instr 
                                                   >> 0xcU)))));
            tracep->chgBit(oldp+102,((3U == (7U & (vlSelf->top__DOT__rv_cpu__DOT__instr 
                                                   >> 0xcU)))));
            tracep->chgBit(oldp+103,((4U == (7U & (vlSelf->top__DOT__rv_cpu__DOT__instr 
                                                   >> 0xcU)))));
            tracep->chgBit(oldp+104,((5U == (7U & (vlSelf->top__DOT__rv_cpu__DOT__instr 
                                                   >> 0xcU)))));
            tracep->chgBit(oldp+105,((6U == (7U & (vlSelf->top__DOT__rv_cpu__DOT__instr 
                                                   >> 0xcU)))));
            tracep->chgBit(oldp+106,((7U == (7U & (vlSelf->top__DOT__rv_cpu__DOT__instr 
                                                   >> 0xcU)))));
            tracep->chgBit(oldp+107,(vlSelf->top__DOT__rv_cpu__DOT__rv64_idu__DOT__op_u));
            tracep->chgBit(oldp+108,(vlSelf->top__DOT__rv_cpu__DOT__rv64_idu__DOT__op_i));
            tracep->chgBit(oldp+109,(vlSelf->top__DOT__rv_cpu__DOT__rv64_idu__DOT__op_r));
            tracep->chgBit(oldp+110,((0x6fU == (0x7fU 
                                                & vlSelf->top__DOT__rv_cpu__DOT__instr))));
            tracep->chgBit(oldp+111,((0x63U == (0x7fU 
                                                & vlSelf->top__DOT__rv_cpu__DOT__instr))));
            tracep->chgBit(oldp+112,((0x13U == (0x7fU 
                                                & vlSelf->top__DOT__rv_cpu__DOT__instr))));
            tracep->chgBit(oldp+113,((IData)((0x13U 
                                              == (0x707fU 
                                                  & vlSelf->top__DOT__rv_cpu__DOT__instr)))));
            tracep->chgBit(oldp+114,((IData)((0x2013U 
                                              == (0x707fU 
                                                  & vlSelf->top__DOT__rv_cpu__DOT__instr)))));
            tracep->chgBit(oldp+115,((IData)((0x3013U 
                                              == (0x707fU 
                                                  & vlSelf->top__DOT__rv_cpu__DOT__instr)))));
            tracep->chgBit(oldp+116,((IData)((0x4013U 
                                              == (0x707fU 
                                                  & vlSelf->top__DOT__rv_cpu__DOT__instr)))));
            tracep->chgBit(oldp+117,((IData)((0x6013U 
                                              == (0x707fU 
                                                  & vlSelf->top__DOT__rv_cpu__DOT__instr)))));
            tracep->chgBit(oldp+118,((IData)((0x7013U 
                                              == (0x707fU 
                                                  & vlSelf->top__DOT__rv_cpu__DOT__instr)))));
            tracep->chgBit(oldp+119,(((IData)((0x1013U 
                                               == (0x707fU 
                                                   & vlSelf->top__DOT__rv_cpu__DOT__instr))) 
                                      & (0U == (vlSelf->top__DOT__rv_cpu__DOT__instr 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+120,(((IData)((0x5013U 
                                               == (0x707fU 
                                                   & vlSelf->top__DOT__rv_cpu__DOT__instr))) 
                                      & (0U == (vlSelf->top__DOT__rv_cpu__DOT__instr 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+121,(vlSelf->top__DOT__rv_cpu__DOT__rv64_idu__DOT__rv_srai));
            tracep->chgBit(oldp+122,((((IData)(vlSelf->top__DOT__rv_cpu__DOT__rv64_idu__DOT__op_r) 
                                       & (0U == (7U 
                                                 & (vlSelf->top__DOT__rv_cpu__DOT__instr 
                                                    >> 0xcU)))) 
                                      & (0U == (vlSelf->top__DOT__rv_cpu__DOT__instr 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+123,((((IData)(vlSelf->top__DOT__rv_cpu__DOT__rv64_idu__DOT__op_r) 
                                       & (0U == (7U 
                                                 & (vlSelf->top__DOT__rv_cpu__DOT__instr 
                                                    >> 0xcU)))) 
                                      & (0x20U == (vlSelf->top__DOT__rv_cpu__DOT__instr 
                                                   >> 0x19U)))));
            tracep->chgBit(oldp+124,((((IData)(vlSelf->top__DOT__rv_cpu__DOT__rv64_idu__DOT__op_r) 
                                       & (1U == (7U 
                                                 & (vlSelf->top__DOT__rv_cpu__DOT__instr 
                                                    >> 0xcU)))) 
                                      & (0U == (vlSelf->top__DOT__rv_cpu__DOT__instr 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+125,((((IData)(vlSelf->top__DOT__rv_cpu__DOT__rv64_idu__DOT__op_r) 
                                       & (2U == (7U 
                                                 & (vlSelf->top__DOT__rv_cpu__DOT__instr 
                                                    >> 0xcU)))) 
                                      & (0U == (vlSelf->top__DOT__rv_cpu__DOT__instr 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+126,((((IData)(vlSelf->top__DOT__rv_cpu__DOT__rv64_idu__DOT__op_r) 
                                       & (3U == (7U 
                                                 & (vlSelf->top__DOT__rv_cpu__DOT__instr 
                                                    >> 0xcU)))) 
                                      & (0U == (vlSelf->top__DOT__rv_cpu__DOT__instr 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+127,((((IData)(vlSelf->top__DOT__rv_cpu__DOT__rv64_idu__DOT__op_r) 
                                       & (4U == (7U 
                                                 & (vlSelf->top__DOT__rv_cpu__DOT__instr 
                                                    >> 0xcU)))) 
                                      & (0U == (vlSelf->top__DOT__rv_cpu__DOT__instr 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+128,((((IData)(vlSelf->top__DOT__rv_cpu__DOT__rv64_idu__DOT__op_r) 
                                       & (5U == (7U 
                                                 & (vlSelf->top__DOT__rv_cpu__DOT__instr 
                                                    >> 0xcU)))) 
                                      & (0U == (vlSelf->top__DOT__rv_cpu__DOT__instr 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+129,((((IData)(vlSelf->top__DOT__rv_cpu__DOT__rv64_idu__DOT__op_r) 
                                       & (5U == (7U 
                                                 & (vlSelf->top__DOT__rv_cpu__DOT__instr 
                                                    >> 0xcU)))) 
                                      & (0x20U == (vlSelf->top__DOT__rv_cpu__DOT__instr 
                                                   >> 0x19U)))));
            tracep->chgBit(oldp+130,((((IData)(vlSelf->top__DOT__rv_cpu__DOT__rv64_idu__DOT__op_r) 
                                       & (6U == (7U 
                                                 & (vlSelf->top__DOT__rv_cpu__DOT__instr 
                                                    >> 0xcU)))) 
                                      & (0U == (vlSelf->top__DOT__rv_cpu__DOT__instr 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+131,((((IData)(vlSelf->top__DOT__rv_cpu__DOT__rv64_idu__DOT__op_r) 
                                       & (7U == (7U 
                                                 & (vlSelf->top__DOT__rv_cpu__DOT__instr 
                                                    >> 0xcU)))) 
                                      & (0U == (vlSelf->top__DOT__rv_cpu__DOT__instr 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+132,(vlSelf->top__DOT__rv_cpu__DOT__rv64_idu__DOT__rv_jalr));
            tracep->chgBit(oldp+133,((IData)((0x63U 
                                              == (0x707fU 
                                                  & vlSelf->top__DOT__rv_cpu__DOT__instr)))));
            tracep->chgBit(oldp+134,((IData)((0x1063U 
                                              == (0x707fU 
                                                  & vlSelf->top__DOT__rv_cpu__DOT__instr)))));
            tracep->chgBit(oldp+135,((IData)((0x4063U 
                                              == (0x707fU 
                                                  & vlSelf->top__DOT__rv_cpu__DOT__instr)))));
            tracep->chgBit(oldp+136,((IData)((0x5063U 
                                              == (0x707fU 
                                                  & vlSelf->top__DOT__rv_cpu__DOT__instr)))));
            tracep->chgBit(oldp+137,((IData)((0x6063U 
                                              == (0x707fU 
                                                  & vlSelf->top__DOT__rv_cpu__DOT__instr)))));
            tracep->chgBit(oldp+138,((IData)((0x7063U 
                                              == (0x707fU 
                                                  & vlSelf->top__DOT__rv_cpu__DOT__instr)))));
            tracep->chgBit(oldp+139,((IData)((0x23U 
                                              == (0x707fU 
                                                  & vlSelf->top__DOT__rv_cpu__DOT__instr)))));
            tracep->chgBit(oldp+140,((IData)((0x1023U 
                                              == (0x707fU 
                                                  & vlSelf->top__DOT__rv_cpu__DOT__instr)))));
            tracep->chgBit(oldp+141,((IData)((0x2023U 
                                              == (0x707fU 
                                                  & vlSelf->top__DOT__rv_cpu__DOT__instr)))));
            tracep->chgBit(oldp+142,((IData)((0x3023U 
                                              == (0x707fU 
                                                  & vlSelf->top__DOT__rv_cpu__DOT__instr)))));
            tracep->chgBit(oldp+143,((0x37U == (0x7fU 
                                                & vlSelf->top__DOT__rv_cpu__DOT__instr))));
            tracep->chgBit(oldp+144,((0x17U == (0x7fU 
                                                & vlSelf->top__DOT__rv_cpu__DOT__instr))));
            tracep->chgBit(oldp+145,(vlSelf->top__DOT__rv_cpu__DOT__rv64_idu__DOT__rv_ld));
            tracep->chgBit(oldp+146,(vlSelf->top__DOT__rv_cpu__DOT__rv64_idu__DOT__rv_lw));
            tracep->chgBit(oldp+147,(vlSelf->top__DOT__rv_cpu__DOT__rv64_idu__DOT__rv_lh));
            tracep->chgBit(oldp+148,(vlSelf->top__DOT__rv_cpu__DOT__rv64_idu__DOT__rv_lb));
            tracep->chgBit(oldp+149,((IData)((0x6003U 
                                              == (0x707fU 
                                                  & vlSelf->top__DOT__rv_cpu__DOT__instr)))));
            tracep->chgBit(oldp+150,(vlSelf->top__DOT__rv_cpu__DOT__rv64_idu__DOT__rv_lhu));
            tracep->chgBit(oldp+151,(vlSelf->top__DOT__rv_cpu__DOT__rv64_idu__DOT__rv_lbu));
            tracep->chgBit(oldp+152,((((((IData)(vlSelf->top__DOT__rv_cpu__DOT__rv64_idu__DOT__op_u) 
                                         | (0x6fU == 
                                            (0x7fU 
                                             & vlSelf->top__DOT__rv_cpu__DOT__instr))) 
                                        | (0x63U == 
                                           (0x7fU & vlSelf->top__DOT__rv_cpu__DOT__instr))) 
                                       | (IData)(vlSelf->top__DOT__rv_cpu__DOT__rv64_idu__DOT__op_i)) 
                                      | (0x23U == (0x7fU 
                                                   & vlSelf->top__DOT__rv_cpu__DOT__instr)))));
            tracep->chgBit(oldp+153,((0x3bU == (0x7fU 
                                                & vlSelf->top__DOT__rv_cpu__DOT__instr))));
            tracep->chgBit(oldp+154,(((IData)((0x3bU 
                                               == (0x707fU 
                                                   & vlSelf->top__DOT__rv_cpu__DOT__instr))) 
                                      & (0U == (vlSelf->top__DOT__rv_cpu__DOT__instr 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+155,(((IData)((0x3bU 
                                               == (0x707fU 
                                                   & vlSelf->top__DOT__rv_cpu__DOT__instr))) 
                                      & (0x20U == (vlSelf->top__DOT__rv_cpu__DOT__instr 
                                                   >> 0x19U)))));
            tracep->chgBit(oldp+156,(((IData)((0x103bU 
                                               == (0x707fU 
                                                   & vlSelf->top__DOT__rv_cpu__DOT__instr))) 
                                      & (0U == (vlSelf->top__DOT__rv_cpu__DOT__instr 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+157,(((IData)((0x503bU 
                                               == (0x707fU 
                                                   & vlSelf->top__DOT__rv_cpu__DOT__instr))) 
                                      & (0U == (vlSelf->top__DOT__rv_cpu__DOT__instr 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+158,(((IData)((0x503bU 
                                               == (0x707fU 
                                                   & vlSelf->top__DOT__rv_cpu__DOT__instr))) 
                                      & (0x20U == (vlSelf->top__DOT__rv_cpu__DOT__instr 
                                                   >> 0x19U)))));
            tracep->chgBit(oldp+159,(((IData)((0x3bU 
                                               == (0x707fU 
                                                   & vlSelf->top__DOT__rv_cpu__DOT__instr))) 
                                      & (1U == (vlSelf->top__DOT__rv_cpu__DOT__instr 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+160,(((IData)((0x403bU 
                                               == (0x707fU 
                                                   & vlSelf->top__DOT__rv_cpu__DOT__instr))) 
                                      & (1U == (vlSelf->top__DOT__rv_cpu__DOT__instr 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+161,(((IData)((0x503bU 
                                               == (0x707fU 
                                                   & vlSelf->top__DOT__rv_cpu__DOT__instr))) 
                                      & (1U == (vlSelf->top__DOT__rv_cpu__DOT__instr 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+162,(((IData)((0x603bU 
                                               == (0x707fU 
                                                   & vlSelf->top__DOT__rv_cpu__DOT__instr))) 
                                      & (1U == (vlSelf->top__DOT__rv_cpu__DOT__instr 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+163,(((IData)((0x703bU 
                                               == (0x707fU 
                                                   & vlSelf->top__DOT__rv_cpu__DOT__instr))) 
                                      & (1U == (vlSelf->top__DOT__rv_cpu__DOT__instr 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+164,((0x1bU == (0x7fU 
                                                & vlSelf->top__DOT__rv_cpu__DOT__instr))));
            tracep->chgBit(oldp+165,((IData)((0x1bU 
                                              == (0x707fU 
                                                  & vlSelf->top__DOT__rv_cpu__DOT__instr)))));
            tracep->chgBit(oldp+166,(((IData)((0x101bU 
                                               == (0x707fU 
                                                   & vlSelf->top__DOT__rv_cpu__DOT__instr))) 
                                      & (0U == (vlSelf->top__DOT__rv_cpu__DOT__instr 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+167,(((IData)((0x501bU 
                                               == (0x707fU 
                                                   & vlSelf->top__DOT__rv_cpu__DOT__instr))) 
                                      & (0U == (vlSelf->top__DOT__rv_cpu__DOT__instr 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+168,(((IData)((0x501bU 
                                               == (0x707fU 
                                                   & vlSelf->top__DOT__rv_cpu__DOT__instr))) 
                                      & (0x20U == (vlSelf->top__DOT__rv_cpu__DOT__instr 
                                                   >> 0x19U)))));
            tracep->chgQData(oldp+169,(vlSelf->top__DOT__rv_cpu__DOT__rv64_regfile__DOT__regfile[0]),64);
            tracep->chgQData(oldp+171,(vlSelf->top__DOT__rv_cpu__DOT__rv64_regfile__DOT__regfile[1]),64);
            tracep->chgQData(oldp+173,(vlSelf->top__DOT__rv_cpu__DOT__rv64_regfile__DOT__regfile[2]),64);
            tracep->chgQData(oldp+175,(vlSelf->top__DOT__rv_cpu__DOT__rv64_regfile__DOT__regfile[3]),64);
            tracep->chgQData(oldp+177,(vlSelf->top__DOT__rv_cpu__DOT__rv64_regfile__DOT__regfile[4]),64);
            tracep->chgQData(oldp+179,(vlSelf->top__DOT__rv_cpu__DOT__rv64_regfile__DOT__regfile[5]),64);
            tracep->chgQData(oldp+181,(vlSelf->top__DOT__rv_cpu__DOT__rv64_regfile__DOT__regfile[6]),64);
            tracep->chgQData(oldp+183,(vlSelf->top__DOT__rv_cpu__DOT__rv64_regfile__DOT__regfile[7]),64);
            tracep->chgQData(oldp+185,(vlSelf->top__DOT__rv_cpu__DOT__rv64_regfile__DOT__regfile[8]),64);
            tracep->chgQData(oldp+187,(vlSelf->top__DOT__rv_cpu__DOT__rv64_regfile__DOT__regfile[9]),64);
            tracep->chgQData(oldp+189,(vlSelf->top__DOT__rv_cpu__DOT__rv64_regfile__DOT__regfile[10]),64);
            tracep->chgQData(oldp+191,(vlSelf->top__DOT__rv_cpu__DOT__rv64_regfile__DOT__regfile[11]),64);
            tracep->chgQData(oldp+193,(vlSelf->top__DOT__rv_cpu__DOT__rv64_regfile__DOT__regfile[12]),64);
            tracep->chgQData(oldp+195,(vlSelf->top__DOT__rv_cpu__DOT__rv64_regfile__DOT__regfile[13]),64);
            tracep->chgQData(oldp+197,(vlSelf->top__DOT__rv_cpu__DOT__rv64_regfile__DOT__regfile[14]),64);
            tracep->chgQData(oldp+199,(vlSelf->top__DOT__rv_cpu__DOT__rv64_regfile__DOT__regfile[15]),64);
            tracep->chgQData(oldp+201,(vlSelf->top__DOT__rv_cpu__DOT__rv64_regfile__DOT__regfile[16]),64);
            tracep->chgQData(oldp+203,(vlSelf->top__DOT__rv_cpu__DOT__rv64_regfile__DOT__regfile[17]),64);
            tracep->chgQData(oldp+205,(vlSelf->top__DOT__rv_cpu__DOT__rv64_regfile__DOT__regfile[18]),64);
            tracep->chgQData(oldp+207,(vlSelf->top__DOT__rv_cpu__DOT__rv64_regfile__DOT__regfile[19]),64);
            tracep->chgQData(oldp+209,(vlSelf->top__DOT__rv_cpu__DOT__rv64_regfile__DOT__regfile[20]),64);
            tracep->chgQData(oldp+211,(vlSelf->top__DOT__rv_cpu__DOT__rv64_regfile__DOT__regfile[21]),64);
            tracep->chgQData(oldp+213,(vlSelf->top__DOT__rv_cpu__DOT__rv64_regfile__DOT__regfile[22]),64);
            tracep->chgQData(oldp+215,(vlSelf->top__DOT__rv_cpu__DOT__rv64_regfile__DOT__regfile[23]),64);
            tracep->chgQData(oldp+217,(vlSelf->top__DOT__rv_cpu__DOT__rv64_regfile__DOT__regfile[24]),64);
            tracep->chgQData(oldp+219,(vlSelf->top__DOT__rv_cpu__DOT__rv64_regfile__DOT__regfile[25]),64);
            tracep->chgQData(oldp+221,(vlSelf->top__DOT__rv_cpu__DOT__rv64_regfile__DOT__regfile[26]),64);
            tracep->chgQData(oldp+223,(vlSelf->top__DOT__rv_cpu__DOT__rv64_regfile__DOT__regfile[27]),64);
            tracep->chgQData(oldp+225,(vlSelf->top__DOT__rv_cpu__DOT__rv64_regfile__DOT__regfile[28]),64);
            tracep->chgQData(oldp+227,(vlSelf->top__DOT__rv_cpu__DOT__rv64_regfile__DOT__regfile[29]),64);
            tracep->chgQData(oldp+229,(vlSelf->top__DOT__rv_cpu__DOT__rv64_regfile__DOT__regfile[30]),64);
            tracep->chgQData(oldp+231,(vlSelf->top__DOT__rv_cpu__DOT__rv64_regfile__DOT__regfile[31]),64);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgQData(oldp+233,(vlSelf->top__DOT__rv_cpu__DOT__pc),64);
            tracep->chgCData(oldp+235,(vlSelf->top__DOT__rv_cpu__DOT__pc_sel),3);
            tracep->chgQData(oldp+236,(vlSelf->top__DOT__rv_cpu__DOT__mem_rd_data),64);
            tracep->chgQData(oldp+238,(vlSelf->top__DOT__rv_cpu__DOT__wr_reg_data),64);
            tracep->chgBit(oldp+240,(vlSelf->top__DOT__rv_cpu__DOT__ebreak));
            tracep->chgQData(oldp+241,(vlSelf->top__DOT__rv_cpu__DOT__rv64_pc__DOT__pc_src1),64);
            tracep->chgQData(oldp+243,(vlSelf->top__DOT__rv_cpu__DOT__rv64_pc__DOT__pc_src2),64);
            tracep->chgQData(oldp+245,(vlSelf->top__DOT__rv_cpu__DOT__rv64_instr_mem__DOT__rdata),64);
        }
        tracep->chgBit(oldp+247,(vlSelf->clk));
        tracep->chgBit(oldp+248,(vlSelf->rst));
        tracep->chgBit(oldp+249,(vlSelf->ebreak));
        tracep->chgQData(oldp+250,(vlSelf->pc),64);
    }
}

void Vtop___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    Vtop___024root* const __restrict vlSelf = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    }
}
