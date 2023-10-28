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

void Vtop::_eval_initial(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_eval_initial\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
    vlTOPp->_combo__TOP__1(vlSymsp);
    vlTOPp->__Vm_traceActivity[1U] = 1U;
    vlTOPp->__Vm_traceActivity[0U] = 1U;
}

void Vtop::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_ctor_var_reset\n"); );
    // Body
    dataA_i = VL_RAND_RESET_I(8);
    dataB_i = VL_RAND_RESET_I(8);
    clk_i = VL_RAND_RESET_I(1);
    C_i = VL_RAND_RESET_I(1);
    S_o = VL_RAND_RESET_I(8);
    C_o = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<8; ++__Vi0) {
            top__DOT__dut__DOT__C_temp[__Vi0] = VL_RAND_RESET_I(1);
    }}
    top__DOT__dut__DOT__fulladder_0__DOT__S_temp = VL_RAND_RESET_I(1);
    top__DOT__dut__DOT__generate_Adder_Block__BRA__1__KET____DOT__fulladder__DOT__C_temp2 = VL_RAND_RESET_I(1);
    top__DOT__dut__DOT__generate_Adder_Block__BRA__1__KET____DOT__fulladder__DOT__S_temp = VL_RAND_RESET_I(1);
    top__DOT__dut__DOT__generate_Adder_Block__BRA__2__KET____DOT__fulladder__DOT__C_temp2 = VL_RAND_RESET_I(1);
    top__DOT__dut__DOT__generate_Adder_Block__BRA__2__KET____DOT__fulladder__DOT__S_temp = VL_RAND_RESET_I(1);
    top__DOT__dut__DOT__generate_Adder_Block__BRA__3__KET____DOT__fulladder__DOT__C_temp2 = VL_RAND_RESET_I(1);
    top__DOT__dut__DOT__generate_Adder_Block__BRA__3__KET____DOT__fulladder__DOT__S_temp = VL_RAND_RESET_I(1);
    top__DOT__dut__DOT__generate_Adder_Block__BRA__4__KET____DOT__fulladder__DOT__C_temp2 = VL_RAND_RESET_I(1);
    top__DOT__dut__DOT__generate_Adder_Block__BRA__4__KET____DOT__fulladder__DOT__S_temp = VL_RAND_RESET_I(1);
    top__DOT__dut__DOT__generate_Adder_Block__BRA__5__KET____DOT__fulladder__DOT__C_temp2 = VL_RAND_RESET_I(1);
    top__DOT__dut__DOT__generate_Adder_Block__BRA__5__KET____DOT__fulladder__DOT__S_temp = VL_RAND_RESET_I(1);
    top__DOT__dut__DOT__generate_Adder_Block__BRA__6__KET____DOT__fulladder__DOT__C_temp2 = VL_RAND_RESET_I(1);
    top__DOT__dut__DOT__generate_Adder_Block__BRA__6__KET____DOT__fulladder__DOT__S_temp = VL_RAND_RESET_I(1);
    top__DOT__dut__DOT__generate_Adder_Block__BRA__7__KET____DOT__fulladder__DOT__C_temp2 = VL_RAND_RESET_I(1);
    top__DOT__dut__DOT__generate_Adder_Block__BRA__7__KET____DOT__fulladder__DOT__S_temp = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<8; ++__Vi0) {
            __Vchglast__TOP__top__DOT__dut__DOT__C_temp[__Vi0] = VL_RAND_RESET_I(1);
    }}
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
