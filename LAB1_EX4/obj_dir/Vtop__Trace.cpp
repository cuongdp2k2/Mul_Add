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
            tracep->chgCData(oldp+0,(vlTOPp->top__DOT__ex04__DOT__A_reg),8);
            tracep->chgCData(oldp+1,(vlTOPp->top__DOT__ex04__DOT__B_reg),8);
            tracep->chgSData(oldp+2,(vlTOPp->top__DOT__ex04__DOT__P_reg),16);
        }
        tracep->chgCData(oldp+3,(vlTOPp->data_i[0]),8);
        tracep->chgCData(oldp+4,(vlTOPp->data_i[1]),8);
        tracep->chgCData(oldp+5,(vlTOPp->sel_i),3);
        tracep->chgBit(oldp+6,(vlTOPp->clk_i));
        tracep->chgBit(oldp+7,(vlTOPp->EA_i));
        tracep->chgBit(oldp+8,(vlTOPp->EB_i));
        tracep->chgSData(oldp+9,(vlTOPp->P_o),16);
        tracep->chgCData(oldp+10,(vlTOPp->top__DOT____Vcellinp__ex04__data_i[0]),8);
        tracep->chgCData(oldp+11,(vlTOPp->top__DOT____Vcellinp__ex04__data_i[1]),8);
        tracep->chgSData(oldp+12,((0xffffU & ((0U == (IData)(vlTOPp->sel_i))
                                               ? ((
                                                   (0xff00U 
                                                    & ((- (IData)(
                                                                  (1U 
                                                                   & ((IData)(vlTOPp->top__DOT__ex04__DOT__A_reg) 
                                                                      >> 7U)))) 
                                                       << 8U)) 
                                                   | (IData)(vlTOPp->top__DOT__ex04__DOT__A_reg)) 
                                                  + 
                                                  ((0xff00U 
                                                    & ((- (IData)(
                                                                  (1U 
                                                                   & ((IData)(vlTOPp->top__DOT__ex04__DOT__B_reg) 
                                                                      >> 7U)))) 
                                                       << 8U)) 
                                                   | (IData)(vlTOPp->top__DOT__ex04__DOT__B_reg)))
                                               : ((1U 
                                                   == (IData)(vlTOPp->sel_i))
                                                   ? 
                                                  (((0xff00U 
                                                     & ((- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlTOPp->top__DOT__ex04__DOT__A_reg) 
                                                                       >> 7U)))) 
                                                        << 8U)) 
                                                    | (IData)(vlTOPp->top__DOT__ex04__DOT__A_reg)) 
                                                   - 
                                                   ((0xff00U 
                                                     & ((- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlTOPp->top__DOT__ex04__DOT__B_reg) 
                                                                       >> 7U)))) 
                                                        << 8U)) 
                                                    | (IData)(vlTOPp->top__DOT__ex04__DOT__B_reg)))
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlTOPp->sel_i))
                                                    ? 
                                                   ((IData)(vlTOPp->top__DOT__ex04__DOT__A_reg) 
                                                    * (IData)(vlTOPp->top__DOT__ex04__DOT__B_reg))
                                                    : 0U))))),16);
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
