// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtop__Syms.h"


//======================

void Vtop::trace(VerilatedFstC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void Vtop::traceInit(void* userp, VerilatedFst* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vtop__Syms* __restrict vlSymsp = static_cast<Vtop__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vtop::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void Vtop::traceInitTop(void* userp, VerilatedFst* tracep) {
    Vtop__Syms* __restrict vlSymsp = static_cast<Vtop__Syms*>(userp);
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void Vtop::traceInitSub0(void* userp, VerilatedFst* tracep) {
    Vtop__Syms* __restrict vlSymsp = static_cast<Vtop__Syms*>(userp);
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+5+i*1,"data_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, true,(i+0), 7,0);}}
        tracep->declBit(c+7,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+8,"EA_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+9,"EB_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+10,"P_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+5+i*1,"top data_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, true,(i+0), 7,0);}}
        tracep->declBit(c+7,"top clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+8,"top EA_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+9,"top EB_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+10,"top P_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+11+i*1,"top ex03 data_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, true,(i+0), 7,0);}}
        tracep->declBit(c+7,"top ex03 clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+8,"top ex03 EA_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+9,"top ex03 EB_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+10,"top ex03 P_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
        tracep->declBus(c+1,"top ex03 A_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
        tracep->declBus(c+2,"top ex03 B_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
        tracep->declBus(c+3,"top ex03 P_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 15,0);
        tracep->declBus(c+4,"top ex03 sum_temp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 15,0);
    }
}

void Vtop::traceRegister(VerilatedFst* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void Vtop::traceFullTop0(void* userp, VerilatedFst* tracep) {
    Vtop__Syms* __restrict vlSymsp = static_cast<Vtop__Syms*>(userp);
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void Vtop::traceFullSub0(void* userp, VerilatedFst* tracep) {
    Vtop__Syms* __restrict vlSymsp = static_cast<Vtop__Syms*>(userp);
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullCData(oldp+1,(vlTOPp->top__DOT__ex03__DOT__A_reg),8);
        tracep->fullCData(oldp+2,(vlTOPp->top__DOT__ex03__DOT__B_reg),8);
        tracep->fullSData(oldp+3,(vlTOPp->top__DOT__ex03__DOT__P_reg),16);
        tracep->fullSData(oldp+4,((0xffffU & ((IData)(vlTOPp->top__DOT__ex03__DOT__A_reg) 
                                              * (IData)(vlTOPp->top__DOT__ex03__DOT__B_reg)))),16);
        tracep->fullCData(oldp+5,(vlTOPp->data_i[0]),8);
        tracep->fullCData(oldp+6,(vlTOPp->data_i[1]),8);
        tracep->fullBit(oldp+7,(vlTOPp->clk_i));
        tracep->fullBit(oldp+8,(vlTOPp->EA_i));
        tracep->fullBit(oldp+9,(vlTOPp->EB_i));
        tracep->fullSData(oldp+10,(vlTOPp->P_o),16);
        tracep->fullCData(oldp+11,(vlTOPp->top__DOT____Vcellinp__ex03__data_i[0]),8);
        tracep->fullCData(oldp+12,(vlTOPp->top__DOT____Vcellinp__ex03__data_i[1]),8);
    }
}
