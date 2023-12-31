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
    vlTOPp->top__DOT__ex04__DOT__P_reg = (0xffffU & 
                                          ((0U == (IData)(vlTOPp->sel_i))
                                            ? (((0xff00U 
                                                 & ((- (IData)(
                                                               (1U 
                                                                & ((IData)(vlTOPp->top__DOT__ex04__DOT__A_reg) 
                                                                   >> 7U)))) 
                                                    << 8U)) 
                                                | (IData)(vlTOPp->top__DOT__ex04__DOT__A_reg)) 
                                               + ((0xff00U 
                                                   & ((- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlTOPp->top__DOT__ex04__DOT__B_reg) 
                                                                     >> 7U)))) 
                                                      << 8U)) 
                                                  | (IData)(vlTOPp->top__DOT__ex04__DOT__B_reg)))
                                            : ((1U 
                                                == (IData)(vlTOPp->sel_i))
                                                ? (
                                                   ((0xff00U 
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
                                                : (
                                                   (2U 
                                                    == (IData)(vlTOPp->sel_i))
                                                    ? 
                                                   ((IData)(vlTOPp->top__DOT__ex04__DOT__A_reg) 
                                                    * (IData)(vlTOPp->top__DOT__ex04__DOT__B_reg))
                                                    : 0U))));
    vlTOPp->P_o = vlTOPp->top__DOT__ex04__DOT__P_reg;
    vlTOPp->top__DOT__ex04__DOT__A_reg = ((IData)(vlTOPp->EA_i)
                                           ? (0xffU 
                                              & vlTOPp->top__DOT____Vcellinp__ex04__data_i
                                              [0U])
                                           : 0U);
    vlTOPp->top__DOT__ex04__DOT__B_reg = ((IData)(vlTOPp->EB_i)
                                           ? (0xffU 
                                              & vlTOPp->top__DOT____Vcellinp__ex04__data_i
                                              [1U])
                                           : 0U);
}

VL_INLINE_OPT void Vtop::_combo__TOP__3(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_combo__TOP__3\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->top__DOT____Vcellinp__ex04__data_i[1U] 
        = vlTOPp->data_i[1U];
    vlTOPp->top__DOT____Vcellinp__ex04__data_i[0U] 
        = vlTOPp->data_i[0U];
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
    return __req;
}

#ifdef VL_DEBUG
void Vtop::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((sel_i & 0xf8U))) {
        Verilated::overWidthError("sel_i");}
    if (VL_UNLIKELY((clk_i & 0xfeU))) {
        Verilated::overWidthError("clk_i");}
    if (VL_UNLIKELY((EA_i & 0xfeU))) {
        Verilated::overWidthError("EA_i");}
    if (VL_UNLIKELY((EB_i & 0xfeU))) {
        Verilated::overWidthError("EB_i");}
}
#endif  // VL_DEBUG
