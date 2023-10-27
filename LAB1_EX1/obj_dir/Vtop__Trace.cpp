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
            tracep->chgCData(oldp+0,(vlTOPp->top__DOT__dut__DOT__A_reg),8);
            tracep->chgCData(oldp+1,(vlTOPp->top__DOT__dut__DOT__S_reg),8);
            tracep->chgBit(oldp+2,((1U & (IData)(vlTOPp->top__DOT__dut__DOT__A_reg))));
            tracep->chgBit(oldp+3,((1U & (IData)(vlTOPp->top__DOT__dut__DOT__S_reg))));
            tracep->chgBit(oldp+4,((1U & ((IData)(vlTOPp->top__DOT__dut__DOT__A_reg) 
                                          & (IData)(vlTOPp->top__DOT__dut__DOT__S_reg)))));
            tracep->chgBit(oldp+5,(vlTOPp->top__DOT__dut__DOT__FullAdder__BRA__0__KET____DOT__Adder__DOT__S_temp));
            tracep->chgBit(oldp+6,((1U & ((IData)(vlTOPp->top__DOT__dut__DOT__A_reg) 
                                          >> 1U))));
            tracep->chgBit(oldp+7,((1U & ((IData)(vlTOPp->top__DOT__dut__DOT__S_reg) 
                                          >> 1U))));
            tracep->chgBit(oldp+8,((1U & (((IData)(vlTOPp->top__DOT__dut__DOT__A_reg) 
                                           & (IData)(vlTOPp->top__DOT__dut__DOT__S_reg)) 
                                          >> 1U))));
            tracep->chgBit(oldp+9,(vlTOPp->top__DOT__dut__DOT__FullAdder__BRA__1__KET____DOT__Adder__DOT__S_temp));
            tracep->chgBit(oldp+10,((1U & ((IData)(vlTOPp->top__DOT__dut__DOT__A_reg) 
                                           >> 2U))));
            tracep->chgBit(oldp+11,((1U & ((IData)(vlTOPp->top__DOT__dut__DOT__S_reg) 
                                           >> 2U))));
            tracep->chgBit(oldp+12,((1U & (((IData)(vlTOPp->top__DOT__dut__DOT__A_reg) 
                                            & (IData)(vlTOPp->top__DOT__dut__DOT__S_reg)) 
                                           >> 2U))));
            tracep->chgBit(oldp+13,(vlTOPp->top__DOT__dut__DOT__FullAdder__BRA__2__KET____DOT__Adder__DOT__S_temp));
            tracep->chgBit(oldp+14,((1U & ((IData)(vlTOPp->top__DOT__dut__DOT__A_reg) 
                                           >> 3U))));
            tracep->chgBit(oldp+15,((1U & ((IData)(vlTOPp->top__DOT__dut__DOT__S_reg) 
                                           >> 3U))));
            tracep->chgBit(oldp+16,((1U & (((IData)(vlTOPp->top__DOT__dut__DOT__A_reg) 
                                            & (IData)(vlTOPp->top__DOT__dut__DOT__S_reg)) 
                                           >> 3U))));
            tracep->chgBit(oldp+17,(vlTOPp->top__DOT__dut__DOT__FullAdder__BRA__3__KET____DOT__Adder__DOT__S_temp));
            tracep->chgBit(oldp+18,((1U & ((IData)(vlTOPp->top__DOT__dut__DOT__A_reg) 
                                           >> 4U))));
            tracep->chgBit(oldp+19,((1U & ((IData)(vlTOPp->top__DOT__dut__DOT__S_reg) 
                                           >> 4U))));
            tracep->chgBit(oldp+20,((1U & (((IData)(vlTOPp->top__DOT__dut__DOT__A_reg) 
                                            & (IData)(vlTOPp->top__DOT__dut__DOT__S_reg)) 
                                           >> 4U))));
            tracep->chgBit(oldp+21,(vlTOPp->top__DOT__dut__DOT__FullAdder__BRA__4__KET____DOT__Adder__DOT__S_temp));
            tracep->chgBit(oldp+22,((1U & ((IData)(vlTOPp->top__DOT__dut__DOT__A_reg) 
                                           >> 5U))));
            tracep->chgBit(oldp+23,((1U & ((IData)(vlTOPp->top__DOT__dut__DOT__S_reg) 
                                           >> 5U))));
            tracep->chgBit(oldp+24,((1U & (((IData)(vlTOPp->top__DOT__dut__DOT__A_reg) 
                                            & (IData)(vlTOPp->top__DOT__dut__DOT__S_reg)) 
                                           >> 5U))));
            tracep->chgBit(oldp+25,(vlTOPp->top__DOT__dut__DOT__FullAdder__BRA__5__KET____DOT__Adder__DOT__S_temp));
            tracep->chgBit(oldp+26,((1U & ((IData)(vlTOPp->top__DOT__dut__DOT__A_reg) 
                                           >> 6U))));
            tracep->chgBit(oldp+27,((1U & ((IData)(vlTOPp->top__DOT__dut__DOT__S_reg) 
                                           >> 6U))));
            tracep->chgBit(oldp+28,((1U & (((IData)(vlTOPp->top__DOT__dut__DOT__A_reg) 
                                            & (IData)(vlTOPp->top__DOT__dut__DOT__S_reg)) 
                                           >> 6U))));
            tracep->chgBit(oldp+29,(vlTOPp->top__DOT__dut__DOT__FullAdder__BRA__6__KET____DOT__Adder__DOT__S_temp));
            tracep->chgBit(oldp+30,((1U & ((IData)(vlTOPp->top__DOT__dut__DOT__A_reg) 
                                           >> 7U))));
            tracep->chgBit(oldp+31,((1U & ((IData)(vlTOPp->top__DOT__dut__DOT__S_reg) 
                                           >> 7U))));
            tracep->chgBit(oldp+32,((1U & (((IData)(vlTOPp->top__DOT__dut__DOT__A_reg) 
                                            & (IData)(vlTOPp->top__DOT__dut__DOT__S_reg)) 
                                           >> 7U))));
            tracep->chgBit(oldp+33,(vlTOPp->top__DOT__dut__DOT__FullAdder__BRA__7__KET____DOT__Adder__DOT__S_temp));
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [1U] | vlTOPp->__Vm_traceActivity
                         [2U]))) {
            tracep->chgBit(oldp+34,((1U & ((IData)(vlTOPp->top__DOT__dut__DOT__FullAdder__BRA__0__KET____DOT__Adder__DOT__S_temp) 
                                           ^ (IData)(vlTOPp->top__DOT__dut__DOT__C_wire)))));
            tracep->chgBit(oldp+35,((1U & (((IData)(vlTOPp->top__DOT__dut__DOT__A_reg) 
                                            & (IData)(vlTOPp->top__DOT__dut__DOT__S_reg)) 
                                           | ((IData)(vlTOPp->top__DOT__dut__DOT__FullAdder__BRA__0__KET____DOT__Adder__DOT__S_temp) 
                                              & (IData)(vlTOPp->top__DOT__dut__DOT__C_wire))))));
            tracep->chgBit(oldp+36,(((IData)(vlTOPp->top__DOT__dut__DOT__FullAdder__BRA__0__KET____DOT__Adder__DOT__S_temp) 
                                     & (IData)(vlTOPp->top__DOT__dut__DOT__C_wire))));
            tracep->chgBit(oldp+37,((1U & ((IData)(vlTOPp->top__DOT__dut__DOT__FullAdder__BRA__1__KET____DOT__Adder__DOT__S_temp) 
                                           ^ ((IData)(vlTOPp->top__DOT__dut__DOT__C_wire) 
                                              >> 1U)))));
            tracep->chgBit(oldp+38,((1U & ((((IData)(vlTOPp->top__DOT__dut__DOT__A_reg) 
                                             & (IData)(vlTOPp->top__DOT__dut__DOT__S_reg)) 
                                            >> 1U) 
                                           | ((IData)(vlTOPp->top__DOT__dut__DOT__FullAdder__BRA__1__KET____DOT__Adder__DOT__S_temp) 
                                              & ((IData)(vlTOPp->top__DOT__dut__DOT__C_wire) 
                                                 >> 1U))))));
            tracep->chgBit(oldp+39,(((IData)(vlTOPp->top__DOT__dut__DOT__FullAdder__BRA__1__KET____DOT__Adder__DOT__S_temp) 
                                     & ((IData)(vlTOPp->top__DOT__dut__DOT__C_wire) 
                                        >> 1U))));
            tracep->chgBit(oldp+40,((1U & ((IData)(vlTOPp->top__DOT__dut__DOT__FullAdder__BRA__2__KET____DOT__Adder__DOT__S_temp) 
                                           ^ ((IData)(vlTOPp->top__DOT__dut__DOT__C_wire) 
                                              >> 2U)))));
            tracep->chgBit(oldp+41,((1U & ((((IData)(vlTOPp->top__DOT__dut__DOT__A_reg) 
                                             & (IData)(vlTOPp->top__DOT__dut__DOT__S_reg)) 
                                            >> 2U) 
                                           | ((IData)(vlTOPp->top__DOT__dut__DOT__FullAdder__BRA__2__KET____DOT__Adder__DOT__S_temp) 
                                              & ((IData)(vlTOPp->top__DOT__dut__DOT__C_wire) 
                                                 >> 2U))))));
            tracep->chgBit(oldp+42,(((IData)(vlTOPp->top__DOT__dut__DOT__FullAdder__BRA__2__KET____DOT__Adder__DOT__S_temp) 
                                     & ((IData)(vlTOPp->top__DOT__dut__DOT__C_wire) 
                                        >> 2U))));
            tracep->chgBit(oldp+43,((1U & ((IData)(vlTOPp->top__DOT__dut__DOT__FullAdder__BRA__3__KET____DOT__Adder__DOT__S_temp) 
                                           ^ ((IData)(vlTOPp->top__DOT__dut__DOT__C_wire) 
                                              >> 3U)))));
            tracep->chgBit(oldp+44,((1U & ((((IData)(vlTOPp->top__DOT__dut__DOT__A_reg) 
                                             & (IData)(vlTOPp->top__DOT__dut__DOT__S_reg)) 
                                            >> 3U) 
                                           | ((IData)(vlTOPp->top__DOT__dut__DOT__FullAdder__BRA__3__KET____DOT__Adder__DOT__S_temp) 
                                              & ((IData)(vlTOPp->top__DOT__dut__DOT__C_wire) 
                                                 >> 3U))))));
            tracep->chgBit(oldp+45,(((IData)(vlTOPp->top__DOT__dut__DOT__FullAdder__BRA__3__KET____DOT__Adder__DOT__S_temp) 
                                     & ((IData)(vlTOPp->top__DOT__dut__DOT__C_wire) 
                                        >> 3U))));
            tracep->chgBit(oldp+46,((1U & ((IData)(vlTOPp->top__DOT__dut__DOT__FullAdder__BRA__4__KET____DOT__Adder__DOT__S_temp) 
                                           ^ ((IData)(vlTOPp->top__DOT__dut__DOT__C_wire) 
                                              >> 4U)))));
            tracep->chgBit(oldp+47,((1U & ((((IData)(vlTOPp->top__DOT__dut__DOT__A_reg) 
                                             & (IData)(vlTOPp->top__DOT__dut__DOT__S_reg)) 
                                            >> 4U) 
                                           | ((IData)(vlTOPp->top__DOT__dut__DOT__FullAdder__BRA__4__KET____DOT__Adder__DOT__S_temp) 
                                              & ((IData)(vlTOPp->top__DOT__dut__DOT__C_wire) 
                                                 >> 4U))))));
            tracep->chgBit(oldp+48,(((IData)(vlTOPp->top__DOT__dut__DOT__FullAdder__BRA__4__KET____DOT__Adder__DOT__S_temp) 
                                     & ((IData)(vlTOPp->top__DOT__dut__DOT__C_wire) 
                                        >> 4U))));
            tracep->chgBit(oldp+49,((1U & ((IData)(vlTOPp->top__DOT__dut__DOT__FullAdder__BRA__5__KET____DOT__Adder__DOT__S_temp) 
                                           ^ ((IData)(vlTOPp->top__DOT__dut__DOT__C_wire) 
                                              >> 5U)))));
            tracep->chgBit(oldp+50,((1U & ((((IData)(vlTOPp->top__DOT__dut__DOT__A_reg) 
                                             & (IData)(vlTOPp->top__DOT__dut__DOT__S_reg)) 
                                            >> 5U) 
                                           | ((IData)(vlTOPp->top__DOT__dut__DOT__FullAdder__BRA__5__KET____DOT__Adder__DOT__S_temp) 
                                              & ((IData)(vlTOPp->top__DOT__dut__DOT__C_wire) 
                                                 >> 5U))))));
            tracep->chgBit(oldp+51,(((IData)(vlTOPp->top__DOT__dut__DOT__FullAdder__BRA__5__KET____DOT__Adder__DOT__S_temp) 
                                     & ((IData)(vlTOPp->top__DOT__dut__DOT__C_wire) 
                                        >> 5U))));
            tracep->chgBit(oldp+52,((1U & ((IData)(vlTOPp->top__DOT__dut__DOT__FullAdder__BRA__6__KET____DOT__Adder__DOT__S_temp) 
                                           ^ ((IData)(vlTOPp->top__DOT__dut__DOT__C_wire) 
                                              >> 6U)))));
            tracep->chgBit(oldp+53,((1U & ((((IData)(vlTOPp->top__DOT__dut__DOT__A_reg) 
                                             & (IData)(vlTOPp->top__DOT__dut__DOT__S_reg)) 
                                            >> 6U) 
                                           | ((IData)(vlTOPp->top__DOT__dut__DOT__FullAdder__BRA__6__KET____DOT__Adder__DOT__S_temp) 
                                              & ((IData)(vlTOPp->top__DOT__dut__DOT__C_wire) 
                                                 >> 6U))))));
            tracep->chgBit(oldp+54,(((IData)(vlTOPp->top__DOT__dut__DOT__FullAdder__BRA__6__KET____DOT__Adder__DOT__S_temp) 
                                     & ((IData)(vlTOPp->top__DOT__dut__DOT__C_wire) 
                                        >> 6U))));
            tracep->chgBit(oldp+55,((1U & ((IData)(vlTOPp->top__DOT__dut__DOT__FullAdder__BRA__7__KET____DOT__Adder__DOT__S_temp) 
                                           ^ ((IData)(vlTOPp->top__DOT__dut__DOT__C_wire) 
                                              >> 7U)))));
            tracep->chgBit(oldp+56,((1U & ((((IData)(vlTOPp->top__DOT__dut__DOT__A_reg) 
                                             & (IData)(vlTOPp->top__DOT__dut__DOT__S_reg)) 
                                            >> 7U) 
                                           | ((IData)(vlTOPp->top__DOT__dut__DOT__FullAdder__BRA__7__KET____DOT__Adder__DOT__S_temp) 
                                              & ((IData)(vlTOPp->top__DOT__dut__DOT__C_wire) 
                                                 >> 7U))))));
            tracep->chgBit(oldp+57,(((IData)(vlTOPp->top__DOT__dut__DOT__FullAdder__BRA__7__KET____DOT__Adder__DOT__S_temp) 
                                     & ((IData)(vlTOPp->top__DOT__dut__DOT__C_wire) 
                                        >> 7U))));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[2U])) {
            tracep->chgCData(oldp+58,(vlTOPp->top__DOT__dut__DOT__S_result_wire),8);
            tracep->chgSData(oldp+59,(vlTOPp->top__DOT__dut__DOT__C_wire),9);
            tracep->chgBit(oldp+60,((1U & (IData)(vlTOPp->top__DOT__dut__DOT__C_wire))));
            tracep->chgBit(oldp+61,((1U & ((IData)(vlTOPp->top__DOT__dut__DOT__C_wire) 
                                           >> 1U))));
            tracep->chgBit(oldp+62,((1U & ((IData)(vlTOPp->top__DOT__dut__DOT__C_wire) 
                                           >> 2U))));
            tracep->chgBit(oldp+63,((1U & ((IData)(vlTOPp->top__DOT__dut__DOT__C_wire) 
                                           >> 3U))));
            tracep->chgBit(oldp+64,((1U & ((IData)(vlTOPp->top__DOT__dut__DOT__C_wire) 
                                           >> 4U))));
            tracep->chgBit(oldp+65,((1U & ((IData)(vlTOPp->top__DOT__dut__DOT__C_wire) 
                                           >> 5U))));
            tracep->chgBit(oldp+66,((1U & ((IData)(vlTOPp->top__DOT__dut__DOT__C_wire) 
                                           >> 6U))));
            tracep->chgBit(oldp+67,((1U & ((IData)(vlTOPp->top__DOT__dut__DOT__C_wire) 
                                           >> 7U))));
        }
        tracep->chgCData(oldp+68,(vlTOPp->A_i),8);
        tracep->chgBit(oldp+69,(vlTOPp->clk_i));
        tracep->chgBit(oldp+70,(vlTOPp->C_i));
        tracep->chgBit(oldp+71,(vlTOPp->overflowFlag_o));
        tracep->chgBit(oldp+72,(vlTOPp->carryFlag_o));
        tracep->chgCData(oldp+73,(vlTOPp->S_o),8);
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
        vlTOPp->__Vm_traceActivity[2U] = 0U;
    }
}
