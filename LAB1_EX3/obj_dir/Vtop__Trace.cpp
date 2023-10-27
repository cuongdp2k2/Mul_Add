// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtop__Syms.h"


void Vtop::traceChgTop0(void* userp, VerilatedFst* tracep) {
    Vtop__Syms* __restrict vlSymsp = static_cast<Vtop__Syms*>(userp);
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void Vtop::traceChgSub0(void* userp, VerilatedFst* tracep) {
    Vtop__Syms* __restrict vlSymsp = static_cast<Vtop__Syms*>(userp);
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgCData(oldp+0,(vlTOPp->top__DOT__ex03__DOT__A_reg),8);
            tracep->chgCData(oldp+1,(vlTOPp->top__DOT__ex03__DOT__B_reg),8);
            tracep->chgSData(oldp+2,(vlTOPp->top__DOT__ex03__DOT__P_reg),16);
            tracep->chgSData(oldp+3,((0xffffU & ((IData)(vlTOPp->top__DOT__ex03__DOT__A_reg) 
                                                 * (IData)(vlTOPp->top__DOT__ex03__DOT__B_reg)))),16);
        }
        tracep->chgCData(oldp+4,(vlTOPp->data_i[0]),8);
        tracep->chgCData(oldp+5,(vlTOPp->data_i[1]),8);
        tracep->chgBit(oldp+6,(vlTOPp->clk_i));
        tracep->chgBit(oldp+7,(vlTOPp->EA_i));
        tracep->chgBit(oldp+8,(vlTOPp->EB_i));
        tracep->chgSData(oldp+9,(vlTOPp->P_o),16);
        tracep->chgCData(oldp+10,(vlTOPp->top__DOT____Vcellinp__ex03__data_i[0]),8);
        tracep->chgCData(oldp+11,(vlTOPp->top__DOT____Vcellinp__ex03__data_i[1]),8);
    }
}

void Vtop::traceCleanup(void* userp, VerilatedFst* /*unused*/) {
    Vtop__Syms* __restrict vlSymsp = static_cast<Vtop__Syms*>(userp);
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
        vlTOPp->__Vm_traceActivity[1U] = 0U;
    }
}
