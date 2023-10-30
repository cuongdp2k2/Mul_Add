// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop.h"
#include "Vtop__Syms.h"

//==========

void Vtop::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtop::eval\n"); );
    Vtop__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        vlSymsp->__Vm_activity = true;
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("top.sv", 1, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vtop::_eval_initial_loop(Vtop__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        _eval_settle(vlSymsp);
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("top.sv", 1, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void Vtop::_sequent__TOP__1(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_sequent__TOP__1\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->carryFlag_o = (1U & ((IData)(vlTOPp->top__DOT__dut__DOT__C_wire) 
                                 >> 8U));
    vlTOPp->overflowFlag_o = (1U & (((IData)(vlTOPp->top__DOT__dut__DOT__C_wire) 
                                     >> 8U) ^ ((IData)(vlTOPp->top__DOT__dut__DOT__C_wire) 
                                               >> 7U)));
    vlTOPp->top__DOT__dut__DOT__A_reg = vlTOPp->A_i;
    vlTOPp->top__DOT__dut__DOT__S_reg = vlTOPp->top__DOT__dut__DOT__S_result_wire;
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
}

VL_INLINE_OPT void Vtop::_combo__TOP__3(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_combo__TOP__3\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->top__DOT__dut__DOT__C_wire = ((0x1feU & (IData)(vlTOPp->top__DOT__dut__DOT__C_wire)) 
                                          | (IData)(vlTOPp->C_i));
    vlTOPp->top__DOT__dut__DOT__FullAdder__BRA__0__KET____DOT__Adder__DOT__C_temp2 
        = ((IData)(vlTOPp->top__DOT__dut__DOT__FullAdder__BRA__0__KET____DOT__Adder__DOT__S_temp) 
           & (IData)(vlTOPp->top__DOT__dut__DOT__C_wire));
    vlTOPp->top__DOT__dut__DOT__FullAdder__BRA__1__KET____DOT__Adder__DOT__C_temp2 
        = ((IData)(vlTOPp->top__DOT__dut__DOT__FullAdder__BRA__1__KET____DOT__Adder__DOT__S_temp) 
           & ((IData)(vlTOPp->top__DOT__dut__DOT__C_wire) 
              >> 1U));
    vlTOPp->top__DOT__dut__DOT__FullAdder__BRA__2__KET____DOT__Adder__DOT__C_temp2 
        = ((IData)(vlTOPp->top__DOT__dut__DOT__FullAdder__BRA__2__KET____DOT__Adder__DOT__S_temp) 
           & ((IData)(vlTOPp->top__DOT__dut__DOT__C_wire) 
              >> 2U));
    vlTOPp->top__DOT__dut__DOT__FullAdder__BRA__3__KET____DOT__Adder__DOT__C_temp2 
        = ((IData)(vlTOPp->top__DOT__dut__DOT__FullAdder__BRA__3__KET____DOT__Adder__DOT__S_temp) 
           & ((IData)(vlTOPp->top__DOT__dut__DOT__C_wire) 
              >> 3U));
    vlTOPp->top__DOT__dut__DOT__FullAdder__BRA__4__KET____DOT__Adder__DOT__C_temp2 
        = ((IData)(vlTOPp->top__DOT__dut__DOT__FullAdder__BRA__4__KET____DOT__Adder__DOT__S_temp) 
           & ((IData)(vlTOPp->top__DOT__dut__DOT__C_wire) 
              >> 4U));
    vlTOPp->top__DOT__dut__DOT__FullAdder__BRA__5__KET____DOT__Adder__DOT__C_temp2 
        = ((IData)(vlTOPp->top__DOT__dut__DOT__FullAdder__BRA__5__KET____DOT__Adder__DOT__S_temp) 
           & ((IData)(vlTOPp->top__DOT__dut__DOT__C_wire) 
              >> 5U));
    vlTOPp->top__DOT__dut__DOT__FullAdder__BRA__6__KET____DOT__Adder__DOT__C_temp2 
        = ((IData)(vlTOPp->top__DOT__dut__DOT__FullAdder__BRA__6__KET____DOT__Adder__DOT__S_temp) 
           & ((IData)(vlTOPp->top__DOT__dut__DOT__C_wire) 
              >> 6U));
    vlTOPp->top__DOT__dut__DOT__FullAdder__BRA__7__KET____DOT__Adder__DOT__C_temp2 
        = ((IData)(vlTOPp->top__DOT__dut__DOT__FullAdder__BRA__7__KET____DOT__Adder__DOT__S_temp) 
           & ((IData)(vlTOPp->top__DOT__dut__DOT__C_wire) 
              >> 7U));
    vlTOPp->top__DOT__dut__DOT__S_result_wire = ((0xfeU 
                                                  & (IData)(vlTOPp->top__DOT__dut__DOT__S_result_wire)) 
                                                 | (1U 
                                                    & ((IData)(vlTOPp->top__DOT__dut__DOT__FullAdder__BRA__0__KET____DOT__Adder__DOT__S_temp) 
                                                       ^ (IData)(vlTOPp->top__DOT__dut__DOT__C_wire))));
    vlTOPp->top__DOT__dut__DOT__S_result_wire = ((0xfdU 
                                                  & (IData)(vlTOPp->top__DOT__dut__DOT__S_result_wire)) 
                                                 | (2U 
                                                    & (((IData)(vlTOPp->top__DOT__dut__DOT__FullAdder__BRA__1__KET____DOT__Adder__DOT__S_temp) 
                                                        << 1U) 
                                                       ^ 
                                                       (0xfffffffeU 
                                                        & (IData)(vlTOPp->top__DOT__dut__DOT__C_wire)))));
    vlTOPp->top__DOT__dut__DOT__S_result_wire = ((0xfbU 
                                                  & (IData)(vlTOPp->top__DOT__dut__DOT__S_result_wire)) 
                                                 | (4U 
                                                    & (((IData)(vlTOPp->top__DOT__dut__DOT__FullAdder__BRA__2__KET____DOT__Adder__DOT__S_temp) 
                                                        << 2U) 
                                                       ^ 
                                                       (0xfffffffcU 
                                                        & (IData)(vlTOPp->top__DOT__dut__DOT__C_wire)))));
    vlTOPp->top__DOT__dut__DOT__S_result_wire = ((0xf7U 
                                                  & (IData)(vlTOPp->top__DOT__dut__DOT__S_result_wire)) 
                                                 | (8U 
                                                    & (((IData)(vlTOPp->top__DOT__dut__DOT__FullAdder__BRA__3__KET____DOT__Adder__DOT__S_temp) 
                                                        << 3U) 
                                                       ^ 
                                                       (0xfffffff8U 
                                                        & (IData)(vlTOPp->top__DOT__dut__DOT__C_wire)))));
    vlTOPp->top__DOT__dut__DOT__S_result_wire = ((0xefU 
                                                  & (IData)(vlTOPp->top__DOT__dut__DOT__S_result_wire)) 
                                                 | (0x10U 
                                                    & (((IData)(vlTOPp->top__DOT__dut__DOT__FullAdder__BRA__4__KET____DOT__Adder__DOT__S_temp) 
                                                        << 4U) 
                                                       ^ 
                                                       (0xfffffff0U 
                                                        & (IData)(vlTOPp->top__DOT__dut__DOT__C_wire)))));
    vlTOPp->top__DOT__dut__DOT__S_result_wire = ((0xdfU 
                                                  & (IData)(vlTOPp->top__DOT__dut__DOT__S_result_wire)) 
                                                 | (0x20U 
                                                    & (((IData)(vlTOPp->top__DOT__dut__DOT__FullAdder__BRA__5__KET____DOT__Adder__DOT__S_temp) 
                                                        << 5U) 
                                                       ^ 
                                                       (0xffffffe0U 
                                                        & (IData)(vlTOPp->top__DOT__dut__DOT__C_wire)))));
    vlTOPp->top__DOT__dut__DOT__S_result_wire = ((0xbfU 
                                                  & (IData)(vlTOPp->top__DOT__dut__DOT__S_result_wire)) 
                                                 | (0x40U 
                                                    & (((IData)(vlTOPp->top__DOT__dut__DOT__FullAdder__BRA__6__KET____DOT__Adder__DOT__S_temp) 
                                                        << 6U) 
                                                       ^ 
                                                       (0xffffffc0U 
                                                        & (IData)(vlTOPp->top__DOT__dut__DOT__C_wire)))));
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

void Vtop::_eval(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_eval\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i)))) {
        vlTOPp->_sequent__TOP__1(vlSymsp);
        vlTOPp->__Vm_traceActivity[1U] = 1U;
    }
    vlTOPp->_combo__TOP__3(vlSymsp);
    vlTOPp->__Vm_traceActivity[2U] = 1U;
    // Final
    vlTOPp->__Vclklast__TOP__clk_i = vlTOPp->clk_i;
}

VL_INLINE_OPT QData Vtop::_change_request(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_change_request\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData Vtop::_change_request_1(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_change_request_1\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlTOPp->top__DOT__dut__DOT__C_wire ^ vlTOPp->__Vchglast__TOP__top__DOT__dut__DOT__C_wire));
    VL_DEBUG_IF( if(__req && ((vlTOPp->top__DOT__dut__DOT__C_wire ^ vlTOPp->__Vchglast__TOP__top__DOT__dut__DOT__C_wire))) VL_DBG_MSGF("        CHANGE: src/main.sv:22: top.dut.C_wire\n"); );
    // Final
    vlTOPp->__Vchglast__TOP__top__DOT__dut__DOT__C_wire 
        = vlTOPp->top__DOT__dut__DOT__C_wire;
    return __req;
}

#ifdef VL_DEBUG
void Vtop::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clk_i & 0xfeU))) {
        Verilated::overWidthError("clk_i");}
    if (VL_UNLIKELY((C_i & 0xfeU))) {
        Verilated::overWidthError("C_i");}
}
#endif  // VL_DEBUG
