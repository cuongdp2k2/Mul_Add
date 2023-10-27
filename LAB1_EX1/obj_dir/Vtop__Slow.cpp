// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop.h"
#include "Vtop__Syms.h"

//==========

VL_CTOR_IMP(Vtop) {
    Vtop__Syms* __restrict vlSymsp = __VlSymsp = new Vtop__Syms(this, name());
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vtop::__Vconfigure(Vtop__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

Vtop::~Vtop() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void Vtop::_settle__TOP__2(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_settle__TOP__2\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->top__DOT__dut__DOT__C_wire = ((0x1feU & (IData)(vlTOPp->top__DOT__dut__DOT__C_wire)) 
                                          | (IData)(vlTOPp->C_i));
    vlTOPp->S_o = vlTOPp->top__DOT__dut__DOT__S_reg;
    vlTOPp->top__DOT__dut__DOT__FullAdder__BRA__0__KET____DOT__Adder__DOT__S_temp 
        = (1U & ((IData)(vlTOPp->top__DOT__dut__DOT__A_reg) 
                 ^ (IData)(vlTOPp->top__DOT__dut__DOT__S_reg)));
    vlTOPp->top__DOT__dut__DOT__FullAdder__BRA__1__KET____DOT__Adder__DOT__S_temp 
        = (1U & (((IData)(vlTOPp->top__DOT__dut__DOT__A_reg) 
                  ^ (IData)(vlTOPp->top__DOT__dut__DOT__S_reg)) 
                 >> 1U));
    vlTOPp->top__DOT__dut__DOT__FullAdder__BRA__2__KET____DOT__Adder__DOT__S_temp 
        = (1U & (((IData)(vlTOPp->top__DOT__dut__DOT__A_reg) 
                  ^ (IData)(vlTOPp->top__DOT__dut__DOT__S_reg)) 
                 >> 2U));
    vlTOPp->top__DOT__dut__DOT__FullAdder__BRA__3__KET____DOT__Adder__DOT__S_temp 
        = (1U & (((IData)(vlTOPp->top__DOT__dut__DOT__A_reg) 
                  ^ (IData)(vlTOPp->top__DOT__dut__DOT__S_reg)) 
                 >> 3U));
    vlTOPp->top__DOT__dut__DOT__FullAdder__BRA__4__KET____DOT__Adder__DOT__S_temp 
        = (1U & (((IData)(vlTOPp->top__DOT__dut__DOT__A_reg) 
                  ^ (IData)(vlTOPp->top__DOT__dut__DOT__S_reg)) 
                 >> 4U));
    vlTOPp->top__DOT__dut__DOT__FullAdder__BRA__5__KET____DOT__Adder__DOT__S_temp 
        = (1U & (((IData)(vlTOPp->top__DOT__dut__DOT__A_reg) 
                  ^ (IData)(vlTOPp->top__DOT__dut__DOT__S_reg)) 
                 >> 5U));
    vlTOPp->top__DOT__dut__DOT__FullAdder__BRA__6__KET____DOT__Adder__DOT__S_temp 
        = (1U & (((IData)(vlTOPp->top__DOT__dut__DOT__A_reg) 
                  ^ (IData)(vlTOPp->top__DOT__dut__DOT__S_reg)) 
                 >> 6U));
    vlTOPp->top__DOT__dut__DOT__FullAdder__BRA__7__KET____DOT__Adder__DOT__S_temp 
        = (1U & (((IData)(vlTOPp->top__DOT__dut__DOT__A_reg) 
                  ^ (IData)(vlTOPp->top__DOT__dut__DOT__S_reg)) 
                 >> 7U));
    vlTOPp->top__DOT__dut__DOT__FullAdder__BRA__0__KET____DOT__Adder__DOT__C_temp2 
        = ((IData)(vlTOPp->top__DOT__dut__DOT__FullAdder__BRA__0__KET____DOT__Adder__DOT__S_temp) 
           & (IData)(vlTOPp->top__DOT__dut__DOT__C_wire));
    vlTOPp->top__DOT__dut__DOT__S_result_wire = ((0xfeU 
                                                  & (IData)(vlTOPp->top__DOT__dut__DOT__S_result_wire)) 
                                                 | (1U 
                                                    & ((IData)(vlTOPp->top__DOT__dut__DOT__FullAdder__BRA__0__KET____DOT__Adder__DOT__S_temp) 
                                                       ^ (IData)(vlTOPp->top__DOT__dut__DOT__C_wire))));
    vlTOPp->top__DOT__dut__DOT__FullAdder__BRA__1__KET____DOT__Adder__DOT__C_temp2 
        = ((IData)(vlTOPp->top__DOT__dut__DOT__FullAdder__BRA__1__KET____DOT__Adder__DOT__S_temp) 
           & ((IData)(vlTOPp->top__DOT__dut__DOT__C_wire) 
              >> 1U));
    vlTOPp->top__DOT__dut__DOT__S_result_wire = ((0xfdU 
                                                  & (IData)(vlTOPp->top__DOT__dut__DOT__S_result_wire)) 
                                                 | (2U 
                                                    & (((IData)(vlTOPp->top__DOT__dut__DOT__FullAdder__BRA__1__KET____DOT__Adder__DOT__S_temp) 
                                                        << 1U) 
                                                       ^ 
                                                       (0xfffffffeU 
                                                        & (IData)(vlTOPp->top__DOT__dut__DOT__C_wire)))));
    vlTOPp->top__DOT__dut__DOT__FullAdder__BRA__2__KET____DOT__Adder__DOT__C_temp2 
        = ((IData)(vlTOPp->top__DOT__dut__DOT__FullAdder__BRA__2__KET____DOT__Adder__DOT__S_temp) 
           & ((IData)(vlTOPp->top__DOT__dut__DOT__C_wire) 
              >> 2U));
    vlTOPp->top__DOT__dut__DOT__S_result_wire = ((0xfbU 
                                                  & (IData)(vlTOPp->top__DOT__dut__DOT__S_result_wire)) 
                                                 | (4U 
                                                    & (((IData)(vlTOPp->top__DOT__dut__DOT__FullAdder__BRA__2__KET____DOT__Adder__DOT__S_temp) 
                                                        << 2U) 
                                                       ^ 
                                                       (0xfffffffcU 
                                                        & (IData)(vlTOPp->top__DOT__dut__DOT__C_wire)))));
    vlTOPp->top__DOT__dut__DOT__FullAdder__BRA__3__KET____DOT__Adder__DOT__C_temp2 
        = ((IData)(vlTOPp->top__DOT__dut__DOT__FullAdder__BRA__3__KET____DOT__Adder__DOT__S_temp) 
           & ((IData)(vlTOPp->top__DOT__dut__DOT__C_wire) 
              >> 3U));
    vlTOPp->top__DOT__dut__DOT__S_result_wire = ((0xf7U 
                                                  & (IData)(vlTOPp->top__DOT__dut__DOT__S_result_wire)) 
                                                 | (8U 
                                                    & (((IData)(vlTOPp->top__DOT__dut__DOT__FullAdder__BRA__3__KET____DOT__Adder__DOT__S_temp) 
                                                        << 3U) 
                                                       ^ 
                                                       (0xfffffff8U 
                                                        & (IData)(vlTOPp->top__DOT__dut__DOT__C_wire)))));
    vlTOPp->top__DOT__dut__DOT__FullAdder__BRA__4__KET____DOT__Adder__DOT__C_temp2 
        = ((IData)(vlTOPp->top__DOT__dut__DOT__FullAdder__BRA__4__KET____DOT__Adder__DOT__S_temp) 
           & ((IData)(vlTOPp->top__DOT__dut__DOT__C_wire) 
              >> 4U));
    vlTOPp->top__DOT__dut__DOT__S_result_wire = ((0xefU 
                                                  & (IData)(vlTOPp->top__DOT__dut__DOT__S_result_wire)) 
                                                 | (0x10U 
                                                    & (((IData)(vlTOPp->top__DOT__dut__DOT__FullAdder__BRA__4__KET____DOT__Adder__DOT__S_temp) 
                                                        << 4U) 
                                                       ^ 
                                                       (0xfffffff0U 
                                                        & (IData)(vlTOPp->top__DOT__dut__DOT__C_wire)))));
    vlTOPp->top__DOT__dut__DOT__FullAdder__BRA__5__KET____DOT__Adder__DOT__C_temp2 
        = ((IData)(vlTOPp->top__DOT__dut__DOT__FullAdder__BRA__5__KET____DOT__Adder__DOT__S_temp) 
           & ((IData)(vlTOPp->top__DOT__dut__DOT__C_wire) 
              >> 5U));
    vlTOPp->top__DOT__dut__DOT__S_result_wire = ((0xdfU 
                                                  & (IData)(vlTOPp->top__DOT__dut__DOT__S_result_wire)) 
                                                 | (0x20U 
                                                    & (((IData)(vlTOPp->top__DOT__dut__DOT__FullAdder__BRA__5__KET____DOT__Adder__DOT__S_temp) 
                                                        << 5U) 
                                                       ^ 
                                                       (0xffffffe0U 
                                                        & (IData)(vlTOPp->top__DOT__dut__DOT__C_wire)))));
    vlTOPp->top__DOT__dut__DOT__FullAdder__BRA__6__KET____DOT__Adder__DOT__C_temp2 
        = ((IData)(vlTOPp->top__DOT__dut__DOT__FullAdder__BRA__6__KET____DOT__Adder__DOT__S_temp) 
           & ((IData)(vlTOPp->top__DOT__dut__DOT__C_wire) 
              >> 6U));
    vlTOPp->top__DOT__dut__DOT__S_result_wire = ((0xbfU 
                                                  & (IData)(vlTOPp->top__DOT__dut__DOT__S_result_wire)) 
                                                 | (0x40U 
                                                    & (((IData)(vlTOPp->top__DOT__dut__DOT__FullAdder__BRA__6__KET____DOT__Adder__DOT__S_temp) 
                                                        << 6U) 
                                                       ^ 
                                                       (0xffffffc0U 
                                                        & (IData)(vlTOPp->top__DOT__dut__DOT__C_wire)))));
    vlTOPp->top__DOT__dut__DOT__FullAdder__BRA__7__KET____DOT__Adder__DOT__C_temp2 
        = ((IData)(vlTOPp->top__DOT__dut__DOT__FullAdder__BRA__7__KET____DOT__Adder__DOT__S_temp) 
           & ((IData)(vlTOPp->top__DOT__dut__DOT__C_wire) 
              >> 7U));
    vlTOPp->top__DOT__dut__DOT__S_result_wire = ((0x7fU 
                                                  & (IData)(vlTOPp->top__DOT__dut__DOT__S_result_wire)) 
                                                 | (0x80U 
                                                    & (((IData)(vlTOPp->top__DOT__dut__DOT__FullAdder__BRA__7__KET____DOT__Adder__DOT__S_temp) 
                                                        << 7U) 
                                                       ^ 
                                                       (0xffffff80U 
                                                        & (IData)(vlTOPp->top__DOT__dut__DOT__C_wire)))));
    vlTOPp->top__DOT__dut__DOT__C_wire = ((0x1fdU & (IData)(vlTOPp->top__DOT__dut__DOT__C_wire)) 
                                          | (2U & (
                                                   (((IData)(vlTOPp->top__DOT__dut__DOT__A_reg) 
                                                     & (IData)(vlTOPp->top__DOT__dut__DOT__S_reg)) 
                                                    | (IData)(vlTOPp->top__DOT__dut__DOT__FullAdder__BRA__0__KET____DOT__Adder__DOT__C_temp2)) 
                                                   << 1U)));
    vlTOPp->top__DOT__dut__DOT__C_wire = ((0x1fbU & (IData)(vlTOPp->top__DOT__dut__DOT__C_wire)) 
                                          | (4U & (
                                                   (0xfffffffcU 
                                                    & (((IData)(vlTOPp->top__DOT__dut__DOT__A_reg) 
                                                        & (IData)(vlTOPp->top__DOT__dut__DOT__S_reg)) 
                                                       << 1U)) 
                                                   | ((IData)(vlTOPp->top__DOT__dut__DOT__FullAdder__BRA__1__KET____DOT__Adder__DOT__C_temp2) 
                                                      << 2U))));
    vlTOPp->top__DOT__dut__DOT__C_wire = ((0x1f7U & (IData)(vlTOPp->top__DOT__dut__DOT__C_wire)) 
                                          | (8U & (
                                                   (0xfffffff8U 
                                                    & (((IData)(vlTOPp->top__DOT__dut__DOT__A_reg) 
                                                        & (IData)(vlTOPp->top__DOT__dut__DOT__S_reg)) 
                                                       << 1U)) 
                                                   | ((IData)(vlTOPp->top__DOT__dut__DOT__FullAdder__BRA__2__KET____DOT__Adder__DOT__C_temp2) 
                                                      << 3U))));
    vlTOPp->top__DOT__dut__DOT__C_wire = ((0x1efU & (IData)(vlTOPp->top__DOT__dut__DOT__C_wire)) 
                                          | (0x10U 
                                             & ((0xfffffff0U 
                                                 & (((IData)(vlTOPp->top__DOT__dut__DOT__A_reg) 
                                                     & (IData)(vlTOPp->top__DOT__dut__DOT__S_reg)) 
                                                    << 1U)) 
                                                | ((IData)(vlTOPp->top__DOT__dut__DOT__FullAdder__BRA__3__KET____DOT__Adder__DOT__C_temp2) 
                                                   << 4U))));
    vlTOPp->top__DOT__dut__DOT__C_wire = ((0x1dfU & (IData)(vlTOPp->top__DOT__dut__DOT__C_wire)) 
                                          | (0x20U 
                                             & ((0xffffffe0U 
                                                 & (((IData)(vlTOPp->top__DOT__dut__DOT__A_reg) 
                                                     & (IData)(vlTOPp->top__DOT__dut__DOT__S_reg)) 
                                                    << 1U)) 
                                                | ((IData)(vlTOPp->top__DOT__dut__DOT__FullAdder__BRA__4__KET____DOT__Adder__DOT__C_temp2) 
                                                   << 5U))));
    vlTOPp->top__DOT__dut__DOT__C_wire = ((0x1bfU & (IData)(vlTOPp->top__DOT__dut__DOT__C_wire)) 
                                          | (0x40U 
                                             & ((0xffffffc0U 
                                                 & (((IData)(vlTOPp->top__DOT__dut__DOT__A_reg) 
                                                     & (IData)(vlTOPp->top__DOT__dut__DOT__S_reg)) 
                                                    << 1U)) 
                                                | ((IData)(vlTOPp->top__DOT__dut__DOT__FullAdder__BRA__5__KET____DOT__Adder__DOT__C_temp2) 
                                                   << 6U))));
    vlTOPp->top__DOT__dut__DOT__C_wire = ((0x17fU & (IData)(vlTOPp->top__DOT__dut__DOT__C_wire)) 
                                          | (0x80U 
                                             & ((0xffffff80U 
                                                 & (((IData)(vlTOPp->top__DOT__dut__DOT__A_reg) 
                                                     & (IData)(vlTOPp->top__DOT__dut__DOT__S_reg)) 
                                                    << 1U)) 
                                                | ((IData)(vlTOPp->top__DOT__dut__DOT__FullAdder__BRA__6__KET____DOT__Adder__DOT__C_temp2) 
                                                   << 7U))));
    vlTOPp->top__DOT__dut__DOT__C_wire = ((0xffU & (IData)(vlTOPp->top__DOT__dut__DOT__C_wire)) 
                                          | (0x100U 
                                             & ((0xffffff00U 
                                                 & (((IData)(vlTOPp->top__DOT__dut__DOT__A_reg) 
                                                     & (IData)(vlTOPp->top__DOT__dut__DOT__S_reg)) 
                                                    << 1U)) 
                                                | ((IData)(vlTOPp->top__DOT__dut__DOT__FullAdder__BRA__7__KET____DOT__Adder__DOT__C_temp2) 
                                                   << 8U))));
}

void Vtop::_eval_initial(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_eval_initial\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk_i = vlTOPp->clk_i;
}

void Vtop::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::final\n"); );
    // Variables
    Vtop__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vtop::_eval_settle(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_eval_settle\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
    vlTOPp->__Vm_traceActivity[2U] = 1U;
    vlTOPp->__Vm_traceActivity[1U] = 1U;
    vlTOPp->__Vm_traceActivity[0U] = 1U;
}

void Vtop::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_ctor_var_reset\n"); );
    // Body
    A_i = VL_RAND_RESET_I(8);
    clk_i = VL_RAND_RESET_I(1);
    C_i = VL_RAND_RESET_I(1);
    overflowFlag_o = VL_RAND_RESET_I(1);
    carryFlag_o = VL_RAND_RESET_I(1);
    S_o = VL_RAND_RESET_I(8);
    top__DOT__dut__DOT__A_reg = VL_RAND_RESET_I(8);
    top__DOT__dut__DOT__S_reg = VL_RAND_RESET_I(8);
    top__DOT__dut__DOT__S_result_wire = VL_RAND_RESET_I(8);
    top__DOT__dut__DOT__C_wire = VL_RAND_RESET_I(9);
    top__DOT__dut__DOT__FullAdder__BRA__0__KET____DOT__Adder__DOT__C_temp2 = VL_RAND_RESET_I(1);
    top__DOT__dut__DOT__FullAdder__BRA__0__KET____DOT__Adder__DOT__S_temp = VL_RAND_RESET_I(1);
    top__DOT__dut__DOT__FullAdder__BRA__1__KET____DOT__Adder__DOT__C_temp2 = VL_RAND_RESET_I(1);
    top__DOT__dut__DOT__FullAdder__BRA__1__KET____DOT__Adder__DOT__S_temp = VL_RAND_RESET_I(1);
    top__DOT__dut__DOT__FullAdder__BRA__2__KET____DOT__Adder__DOT__C_temp2 = VL_RAND_RESET_I(1);
    top__DOT__dut__DOT__FullAdder__BRA__2__KET____DOT__Adder__DOT__S_temp = VL_RAND_RESET_I(1);
    top__DOT__dut__DOT__FullAdder__BRA__3__KET____DOT__Adder__DOT__C_temp2 = VL_RAND_RESET_I(1);
    top__DOT__dut__DOT__FullAdder__BRA__3__KET____DOT__Adder__DOT__S_temp = VL_RAND_RESET_I(1);
    top__DOT__dut__DOT__FullAdder__BRA__4__KET____DOT__Adder__DOT__C_temp2 = VL_RAND_RESET_I(1);
    top__DOT__dut__DOT__FullAdder__BRA__4__KET____DOT__Adder__DOT__S_temp = VL_RAND_RESET_I(1);
    top__DOT__dut__DOT__FullAdder__BRA__5__KET____DOT__Adder__DOT__C_temp2 = VL_RAND_RESET_I(1);
    top__DOT__dut__DOT__FullAdder__BRA__5__KET____DOT__Adder__DOT__S_temp = VL_RAND_RESET_I(1);
    top__DOT__dut__DOT__FullAdder__BRA__6__KET____DOT__Adder__DOT__C_temp2 = VL_RAND_RESET_I(1);
    top__DOT__dut__DOT__FullAdder__BRA__6__KET____DOT__Adder__DOT__S_temp = VL_RAND_RESET_I(1);
    top__DOT__dut__DOT__FullAdder__BRA__7__KET____DOT__Adder__DOT__C_temp2 = VL_RAND_RESET_I(1);
    top__DOT__dut__DOT__FullAdder__BRA__7__KET____DOT__Adder__DOT__S_temp = VL_RAND_RESET_I(1);
    __Vchglast__TOP__top__DOT__dut__DOT__C_wire = VL_RAND_RESET_I(9);
    { int __Vi0=0; for (; __Vi0<3; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
