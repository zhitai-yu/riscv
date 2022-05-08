// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Valu__Syms.h"


void Valu___024root__traceInitSub0(Valu___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Valu___024root__traceInitTop(Valu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Valu___024root__traceInitSub0(vlSelf, tracep);
    }
}

void Valu___024root__traceInitSub0(Valu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+6,"clk", false,-1);
        tracep->declBit(c+7,"rst", false,-1);
        tracep->declBus(c+8,"op_in", false,-1, 1,0);
        tracep->declBus(c+9,"a_in", false,-1, 5,0);
        tracep->declBus(c+10,"b_in", false,-1, 5,0);
        tracep->declBit(c+11,"in_valid", false,-1);
        tracep->declBus(c+12,"out", false,-1, 5,0);
        tracep->declBit(c+13,"out_valid", false,-1);
        tracep->declBus(c+14,"alu WIDTH", false,-1, 31,0);
        tracep->declBit(c+6,"alu clk", false,-1);
        tracep->declBit(c+7,"alu rst", false,-1);
        tracep->declBus(c+8,"alu op_in", false,-1, 1,0);
        tracep->declBus(c+9,"alu a_in", false,-1, 5,0);
        tracep->declBus(c+10,"alu b_in", false,-1, 5,0);
        tracep->declBit(c+11,"alu in_valid", false,-1);
        tracep->declBus(c+12,"alu out", false,-1, 5,0);
        tracep->declBit(c+13,"alu out_valid", false,-1);
        tracep->declBus(c+1,"alu op_in_r", false,-1, 1,0);
        tracep->declBus(c+2,"alu a_in_r", false,-1, 5,0);
        tracep->declBus(c+3,"alu b_in_r", false,-1, 5,0);
        tracep->declBit(c+4,"alu in_valid_r", false,-1);
        tracep->declBus(c+5,"alu result", false,-1, 5,0);
    }
}

void Valu___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void Valu___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void Valu___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void Valu___024root__traceRegister(Valu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&Valu___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&Valu___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&Valu___024root__traceCleanup, vlSelf);
    }
}

void Valu___024root__traceFullSub0(Valu___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Valu___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    Valu___024root* const __restrict vlSelf = static_cast<Valu___024root*>(voidSelf);
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Valu___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void Valu___024root__traceFullSub0(Valu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullCData(oldp+1,(vlSelf->alu__DOT__op_in_r),2);
        tracep->fullCData(oldp+2,(vlSelf->alu__DOT__a_in_r),6);
        tracep->fullCData(oldp+3,(vlSelf->alu__DOT__b_in_r),6);
        tracep->fullBit(oldp+4,(vlSelf->alu__DOT__in_valid_r));
        tracep->fullCData(oldp+5,(vlSelf->alu__DOT__result),6);
        tracep->fullBit(oldp+6,(vlSelf->clk));
        tracep->fullBit(oldp+7,(vlSelf->rst));
        tracep->fullCData(oldp+8,(vlSelf->op_in),2);
        tracep->fullCData(oldp+9,(vlSelf->a_in),6);
        tracep->fullCData(oldp+10,(vlSelf->b_in),6);
        tracep->fullBit(oldp+11,(vlSelf->in_valid));
        tracep->fullCData(oldp+12,(vlSelf->out),6);
        tracep->fullBit(oldp+13,(vlSelf->out_valid));
        tracep->fullIData(oldp+14,(6U),32);
    }
}
