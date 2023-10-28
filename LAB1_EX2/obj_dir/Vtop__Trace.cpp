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
            tracep->chgBit(oldp+0,(vlTOPp->top__DOT__dut__DOT__C_temp[0]));
            tracep->chgBit(oldp+1,(vlTOPp->top__DOT__dut__DOT__C_temp[1]));
            tracep->chgBit(oldp+2,(vlTOPp->top__DOT__dut__DOT__C_temp[2]));
            tracep->chgBit(oldp+3,(vlTOPp->top__DOT__dut__DOT__C_temp[3]));
            tracep->chgBit(oldp+4,(vlTOPp->top__DOT__dut__DOT__C_temp[4]));
            tracep->chgBit(oldp+5,(vlTOPp->top__DOT__dut__DOT__C_temp[5]));
            tracep->chgBit(oldp+6,(vlTOPp->top__DOT__dut__DOT__C_temp[6]));
            tracep->chgBit(oldp+7,(vlTOPp->top__DOT__dut__DOT__C_temp[7]));
            tracep->chgBit(oldp+8,(vlTOPp->top__DOT__dut__DOT__fulladder_0__DOT__S_temp));
            tracep->chgBit(oldp+9,(vlTOPp->top__DOT__dut__DOT__C_temp
                                   [0U]));
            tracep->chgBit(oldp+10,(((IData)(vlTOPp->top__DOT__dut__DOT__generate_Adder_Block__BRA__1__KET____DOT__fulladder__DOT__S_temp) 
                                     ^ vlTOPp->top__DOT__dut__DOT__C_temp
                                     [0U])));
            tracep->chgBit(oldp+11,(((IData)(vlTOPp->top__DOT__dut__DOT__generate_Adder_Block__BRA__1__KET____DOT__fulladder__DOT__S_temp) 
                                     & vlTOPp->top__DOT__dut__DOT__C_temp
                                     [0U])));
            tracep->chgBit(oldp+12,(vlTOPp->top__DOT__dut__DOT__generate_Adder_Block__BRA__1__KET____DOT__fulladder__DOT__S_temp));
            tracep->chgBit(oldp+13,(vlTOPp->top__DOT__dut__DOT__C_temp
                                    [1U]));
            tracep->chgBit(oldp+14,(((IData)(vlTOPp->top__DOT__dut__DOT__generate_Adder_Block__BRA__2__KET____DOT__fulladder__DOT__S_temp) 
                                     ^ vlTOPp->top__DOT__dut__DOT__C_temp
                                     [1U])));
            tracep->chgBit(oldp+15,(((IData)(vlTOPp->top__DOT__dut__DOT__generate_Adder_Block__BRA__2__KET____DOT__fulladder__DOT__S_temp) 
                                     & vlTOPp->top__DOT__dut__DOT__C_temp
                                     [1U])));
            tracep->chgBit(oldp+16,(vlTOPp->top__DOT__dut__DOT__generate_Adder_Block__BRA__2__KET____DOT__fulladder__DOT__S_temp));
            tracep->chgBit(oldp+17,(vlTOPp->top__DOT__dut__DOT__C_temp
                                    [2U]));
            tracep->chgBit(oldp+18,(((IData)(vlTOPp->top__DOT__dut__DOT__generate_Adder_Block__BRA__3__KET____DOT__fulladder__DOT__S_temp) 
                                     ^ vlTOPp->top__DOT__dut__DOT__C_temp
                                     [2U])));
            tracep->chgBit(oldp+19,(((IData)(vlTOPp->top__DOT__dut__DOT__generate_Adder_Block__BRA__3__KET____DOT__fulladder__DOT__S_temp) 
                                     & vlTOPp->top__DOT__dut__DOT__C_temp
                                     [2U])));
            tracep->chgBit(oldp+20,(vlTOPp->top__DOT__dut__DOT__generate_Adder_Block__BRA__3__KET____DOT__fulladder__DOT__S_temp));
            tracep->chgBit(oldp+21,(vlTOPp->top__DOT__dut__DOT__C_temp
                                    [3U]));
            tracep->chgBit(oldp+22,(((IData)(vlTOPp->top__DOT__dut__DOT__generate_Adder_Block__BRA__4__KET____DOT__fulladder__DOT__S_temp) 
                                     ^ vlTOPp->top__DOT__dut__DOT__C_temp
                                     [3U])));
            tracep->chgBit(oldp+23,(((IData)(vlTOPp->top__DOT__dut__DOT__generate_Adder_Block__BRA__4__KET____DOT__fulladder__DOT__S_temp) 
                                     & vlTOPp->top__DOT__dut__DOT__C_temp
                                     [3U])));
            tracep->chgBit(oldp+24,(vlTOPp->top__DOT__dut__DOT__generate_Adder_Block__BRA__4__KET____DOT__fulladder__DOT__S_temp));
            tracep->chgBit(oldp+25,(vlTOPp->top__DOT__dut__DOT__C_temp
                                    [4U]));
            tracep->chgBit(oldp+26,(((IData)(vlTOPp->top__DOT__dut__DOT__generate_Adder_Block__BRA__5__KET____DOT__fulladder__DOT__S_temp) 
                                     ^ vlTOPp->top__DOT__dut__DOT__C_temp
                                     [4U])));
            tracep->chgBit(oldp+27,(((IData)(vlTOPp->top__DOT__dut__DOT__generate_Adder_Block__BRA__5__KET____DOT__fulladder__DOT__S_temp) 
                                     & vlTOPp->top__DOT__dut__DOT__C_temp
                                     [4U])));
            tracep->chgBit(oldp+28,(vlTOPp->top__DOT__dut__DOT__generate_Adder_Block__BRA__5__KET____DOT__fulladder__DOT__S_temp));
            tracep->chgBit(oldp+29,(vlTOPp->top__DOT__dut__DOT__C_temp
                                    [5U]));
            tracep->chgBit(oldp+30,(((IData)(vlTOPp->top__DOT__dut__DOT__generate_Adder_Block__BRA__6__KET____DOT__fulladder__DOT__S_temp) 
                                     ^ vlTOPp->top__DOT__dut__DOT__C_temp
                                     [5U])));
            tracep->chgBit(oldp+31,(((IData)(vlTOPp->top__DOT__dut__DOT__generate_Adder_Block__BRA__6__KET____DOT__fulladder__DOT__S_temp) 
                                     & vlTOPp->top__DOT__dut__DOT__C_temp
                                     [5U])));
            tracep->chgBit(oldp+32,(vlTOPp->top__DOT__dut__DOT__generate_Adder_Block__BRA__6__KET____DOT__fulladder__DOT__S_temp));
            tracep->chgBit(oldp+33,(vlTOPp->top__DOT__dut__DOT__C_temp
                                    [6U]));
            tracep->chgBit(oldp+34,(((IData)(vlTOPp->top__DOT__dut__DOT__generate_Adder_Block__BRA__7__KET____DOT__fulladder__DOT__S_temp) 
                                     ^ vlTOPp->top__DOT__dut__DOT__C_temp
                                     [6U])));
            tracep->chgBit(oldp+35,(((IData)(vlTOPp->top__DOT__dut__DOT__generate_Adder_Block__BRA__7__KET____DOT__fulladder__DOT__S_temp) 
                                     & vlTOPp->top__DOT__dut__DOT__C_temp
                                     [6U])));
            tracep->chgBit(oldp+36,(vlTOPp->top__DOT__dut__DOT__generate_Adder_Block__BRA__7__KET____DOT__fulladder__DOT__S_temp));
        }
        tracep->chgCData(oldp+37,(vlTOPp->dataA_i),8);
        tracep->chgCData(oldp+38,(vlTOPp->dataB_i),8);
        tracep->chgBit(oldp+39,(vlTOPp->clk_i));
        tracep->chgBit(oldp+40,(vlTOPp->C_i));
        tracep->chgCData(oldp+41,(vlTOPp->S_o),8);
        tracep->chgBit(oldp+42,(vlTOPp->C_o));
        tracep->chgBit(oldp+43,((1U & (IData)(vlTOPp->dataA_i))));
        tracep->chgBit(oldp+44,((1U & (IData)(vlTOPp->dataB_i))));
        tracep->chgBit(oldp+45,(((IData)(vlTOPp->top__DOT__dut__DOT__fulladder_0__DOT__S_temp) 
                                 ^ (IData)(vlTOPp->C_i))));
        tracep->chgBit(oldp+46,((1U & (((IData)(vlTOPp->dataA_i) 
                                        & (IData)(vlTOPp->dataB_i)) 
                                       | ((IData)(vlTOPp->top__DOT__dut__DOT__fulladder_0__DOT__S_temp) 
                                          & (IData)(vlTOPp->C_i))))));
        tracep->chgBit(oldp+47,((1U & ((IData)(vlTOPp->dataA_i) 
                                       & (IData)(vlTOPp->dataB_i)))));
        tracep->chgBit(oldp+48,(((IData)(vlTOPp->top__DOT__dut__DOT__fulladder_0__DOT__S_temp) 
                                 & (IData)(vlTOPp->C_i))));
        tracep->chgBit(oldp+49,((1U & ((IData)(vlTOPp->dataA_i) 
                                       >> 1U))));
        tracep->chgBit(oldp+50,((1U & ((IData)(vlTOPp->dataB_i) 
                                       >> 1U))));
        tracep->chgBit(oldp+51,((1U & ((((IData)(vlTOPp->dataA_i) 
                                         & (IData)(vlTOPp->dataB_i)) 
                                        >> 1U) | ((IData)(vlTOPp->top__DOT__dut__DOT__generate_Adder_Block__BRA__1__KET____DOT__fulladder__DOT__S_temp) 
                                                  & vlTOPp->top__DOT__dut__DOT__C_temp
                                                  [0U])))));
        tracep->chgBit(oldp+52,((1U & (((IData)(vlTOPp->dataA_i) 
                                        & (IData)(vlTOPp->dataB_i)) 
                                       >> 1U))));
        tracep->chgBit(oldp+53,((1U & ((IData)(vlTOPp->dataA_i) 
                                       >> 2U))));
        tracep->chgBit(oldp+54,((1U & ((IData)(vlTOPp->dataB_i) 
                                       >> 2U))));
        tracep->chgBit(oldp+55,((1U & ((((IData)(vlTOPp->dataA_i) 
                                         & (IData)(vlTOPp->dataB_i)) 
                                        >> 2U) | ((IData)(vlTOPp->top__DOT__dut__DOT__generate_Adder_Block__BRA__2__KET____DOT__fulladder__DOT__S_temp) 
                                                  & vlTOPp->top__DOT__dut__DOT__C_temp
                                                  [1U])))));
        tracep->chgBit(oldp+56,((1U & (((IData)(vlTOPp->dataA_i) 
                                        & (IData)(vlTOPp->dataB_i)) 
                                       >> 2U))));
        tracep->chgBit(oldp+57,((1U & ((IData)(vlTOPp->dataA_i) 
                                       >> 3U))));
        tracep->chgBit(oldp+58,((1U & ((IData)(vlTOPp->dataB_i) 
                                       >> 3U))));
        tracep->chgBit(oldp+59,((1U & ((((IData)(vlTOPp->dataA_i) 
                                         & (IData)(vlTOPp->dataB_i)) 
                                        >> 3U) | ((IData)(vlTOPp->top__DOT__dut__DOT__generate_Adder_Block__BRA__3__KET____DOT__fulladder__DOT__S_temp) 
                                                  & vlTOPp->top__DOT__dut__DOT__C_temp
                                                  [2U])))));
        tracep->chgBit(oldp+60,((1U & (((IData)(vlTOPp->dataA_i) 
                                        & (IData)(vlTOPp->dataB_i)) 
                                       >> 3U))));
        tracep->chgBit(oldp+61,((1U & ((IData)(vlTOPp->dataA_i) 
                                       >> 4U))));
        tracep->chgBit(oldp+62,((1U & ((IData)(vlTOPp->dataB_i) 
                                       >> 4U))));
        tracep->chgBit(oldp+63,((1U & ((((IData)(vlTOPp->dataA_i) 
                                         & (IData)(vlTOPp->dataB_i)) 
                                        >> 4U) | ((IData)(vlTOPp->top__DOT__dut__DOT__generate_Adder_Block__BRA__4__KET____DOT__fulladder__DOT__S_temp) 
                                                  & vlTOPp->top__DOT__dut__DOT__C_temp
                                                  [3U])))));
        tracep->chgBit(oldp+64,((1U & (((IData)(vlTOPp->dataA_i) 
                                        & (IData)(vlTOPp->dataB_i)) 
                                       >> 4U))));
        tracep->chgBit(oldp+65,((1U & ((IData)(vlTOPp->dataA_i) 
                                       >> 5U))));
        tracep->chgBit(oldp+66,((1U & ((IData)(vlTOPp->dataB_i) 
                                       >> 5U))));
        tracep->chgBit(oldp+67,((1U & ((((IData)(vlTOPp->dataA_i) 
                                         & (IData)(vlTOPp->dataB_i)) 
                                        >> 5U) | ((IData)(vlTOPp->top__DOT__dut__DOT__generate_Adder_Block__BRA__5__KET____DOT__fulladder__DOT__S_temp) 
                                                  & vlTOPp->top__DOT__dut__DOT__C_temp
                                                  [4U])))));
        tracep->chgBit(oldp+68,((1U & (((IData)(vlTOPp->dataA_i) 
                                        & (IData)(vlTOPp->dataB_i)) 
                                       >> 5U))));
        tracep->chgBit(oldp+69,((1U & ((IData)(vlTOPp->dataA_i) 
                                       >> 6U))));
        tracep->chgBit(oldp+70,((1U & ((IData)(vlTOPp->dataB_i) 
                                       >> 6U))));
        tracep->chgBit(oldp+71,((1U & ((((IData)(vlTOPp->dataA_i) 
                                         & (IData)(vlTOPp->dataB_i)) 
                                        >> 6U) | ((IData)(vlTOPp->top__DOT__dut__DOT__generate_Adder_Block__BRA__6__KET____DOT__fulladder__DOT__S_temp) 
                                                  & vlTOPp->top__DOT__dut__DOT__C_temp
                                                  [5U])))));
        tracep->chgBit(oldp+72,((1U & (((IData)(vlTOPp->dataA_i) 
                                        & (IData)(vlTOPp->dataB_i)) 
                                       >> 6U))));
        tracep->chgBit(oldp+73,((1U & ((IData)(vlTOPp->dataA_i) 
                                       >> 7U))));
        tracep->chgBit(oldp+74,((1U & ((IData)(vlTOPp->dataB_i) 
                                       >> 7U))));
        tracep->chgBit(oldp+75,((1U & ((((IData)(vlTOPp->dataA_i) 
                                         & (IData)(vlTOPp->dataB_i)) 
                                        >> 7U) | ((IData)(vlTOPp->top__DOT__dut__DOT__generate_Adder_Block__BRA__7__KET____DOT__fulladder__DOT__S_temp) 
                                                  & vlTOPp->top__DOT__dut__DOT__C_temp
                                                  [6U])))));
        tracep->chgBit(oldp+76,((1U & (((IData)(vlTOPp->dataA_i) 
                                        & (IData)(vlTOPp->dataB_i)) 
                                       >> 7U))));
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
