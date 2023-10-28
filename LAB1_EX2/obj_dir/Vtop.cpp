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

VL_INLINE_OPT void Vtop::_combo__TOP__1(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_combo__TOP__1\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->top__DOT__dut__DOT__generate_Adder_Block__BRA__1__KET____DOT__fulladder__DOT__S_temp 
        = (1U & (((IData)(vlTOPp->dataA_i) ^ (IData)(vlTOPp->dataB_i)) 
                 >> 1U));
    vlTOPp->top__DOT__dut__DOT__generate_Adder_Block__BRA__2__KET____DOT__fulladder__DOT__S_temp 
        = (1U & (((IData)(vlTOPp->dataA_i) ^ (IData)(vlTOPp->dataB_i)) 
                 >> 2U));
    vlTOPp->top__DOT__dut__DOT__generate_Adder_Block__BRA__3__KET____DOT__fulladder__DOT__S_temp 
        = (1U & (((IData)(vlTOPp->dataA_i) ^ (IData)(vlTOPp->dataB_i)) 
                 >> 3U));
    vlTOPp->top__DOT__dut__DOT__generate_Adder_Block__BRA__4__KET____DOT__fulladder__DOT__S_temp 
        = (1U & (((IData)(vlTOPp->dataA_i) ^ (IData)(vlTOPp->dataB_i)) 
                 >> 4U));
    vlTOPp->top__DOT__dut__DOT__generate_Adder_Block__BRA__5__KET____DOT__fulladder__DOT__S_temp 
        = (1U & (((IData)(vlTOPp->dataA_i) ^ (IData)(vlTOPp->dataB_i)) 
                 >> 5U));
    vlTOPp->top__DOT__dut__DOT__generate_Adder_Block__BRA__6__KET____DOT__fulladder__DOT__S_temp 
        = (1U & (((IData)(vlTOPp->dataA_i) ^ (IData)(vlTOPp->dataB_i)) 
                 >> 6U));
    vlTOPp->top__DOT__dut__DOT__generate_Adder_Block__BRA__7__KET____DOT__fulladder__DOT__S_temp 
        = (1U & (((IData)(vlTOPp->dataA_i) ^ (IData)(vlTOPp->dataB_i)) 
                 >> 7U));
    vlTOPp->top__DOT__dut__DOT__fulladder_0__DOT__S_temp 
        = (1U & ((IData)(vlTOPp->dataA_i) ^ (IData)(vlTOPp->dataB_i)));
    vlTOPp->S_o = ((0xfeU & (IData)(vlTOPp->S_o)) | 
                   ((IData)(vlTOPp->top__DOT__dut__DOT__fulladder_0__DOT__S_temp) 
                    ^ (IData)(vlTOPp->C_i)));
    vlTOPp->top__DOT__dut__DOT__C_temp[0U] = (1U & 
                                              (((IData)(vlTOPp->dataA_i) 
                                                & (IData)(vlTOPp->dataB_i)) 
                                               | ((IData)(vlTOPp->top__DOT__dut__DOT__fulladder_0__DOT__S_temp) 
                                                  & (IData)(vlTOPp->C_i))));
    vlTOPp->C_o = vlTOPp->top__DOT__dut__DOT__C_temp
        [7U];
    vlTOPp->top__DOT__dut__DOT__generate_Adder_Block__BRA__1__KET____DOT__fulladder__DOT__C_temp2 
        = ((IData)(vlTOPp->top__DOT__dut__DOT__generate_Adder_Block__BRA__1__KET____DOT__fulladder__DOT__S_temp) 
           & vlTOPp->top__DOT__dut__DOT__C_temp[0U]);
    vlTOPp->top__DOT__dut__DOT__generate_Adder_Block__BRA__2__KET____DOT__fulladder__DOT__C_temp2 
        = ((IData)(vlTOPp->top__DOT__dut__DOT__generate_Adder_Block__BRA__2__KET____DOT__fulladder__DOT__S_temp) 
           & vlTOPp->top__DOT__dut__DOT__C_temp[1U]);
    vlTOPp->top__DOT__dut__DOT__generate_Adder_Block__BRA__3__KET____DOT__fulladder__DOT__C_temp2 
        = ((IData)(vlTOPp->top__DOT__dut__DOT__generate_Adder_Block__BRA__3__KET____DOT__fulladder__DOT__S_temp) 
           & vlTOPp->top__DOT__dut__DOT__C_temp[2U]);
    vlTOPp->top__DOT__dut__DOT__generate_Adder_Block__BRA__4__KET____DOT__fulladder__DOT__C_temp2 
        = ((IData)(vlTOPp->top__DOT__dut__DOT__generate_Adder_Block__BRA__4__KET____DOT__fulladder__DOT__S_temp) 
           & vlTOPp->top__DOT__dut__DOT__C_temp[3U]);
    vlTOPp->top__DOT__dut__DOT__generate_Adder_Block__BRA__5__KET____DOT__fulladder__DOT__C_temp2 
        = ((IData)(vlTOPp->top__DOT__dut__DOT__generate_Adder_Block__BRA__5__KET____DOT__fulladder__DOT__S_temp) 
           & vlTOPp->top__DOT__dut__DOT__C_temp[4U]);
    vlTOPp->top__DOT__dut__DOT__generate_Adder_Block__BRA__6__KET____DOT__fulladder__DOT__C_temp2 
        = ((IData)(vlTOPp->top__DOT__dut__DOT__generate_Adder_Block__BRA__6__KET____DOT__fulladder__DOT__S_temp) 
           & vlTOPp->top__DOT__dut__DOT__C_temp[5U]);
    vlTOPp->top__DOT__dut__DOT__generate_Adder_Block__BRA__7__KET____DOT__fulladder__DOT__C_temp2 
        = ((IData)(vlTOPp->top__DOT__dut__DOT__generate_Adder_Block__BRA__7__KET____DOT__fulladder__DOT__S_temp) 
           & vlTOPp->top__DOT__dut__DOT__C_temp[6U]);
    vlTOPp->S_o = ((0xfdU & (IData)(vlTOPp->S_o)) | 
                   (((IData)(vlTOPp->top__DOT__dut__DOT__generate_Adder_Block__BRA__1__KET____DOT__fulladder__DOT__S_temp) 
                     ^ vlTOPp->top__DOT__dut__DOT__C_temp
                     [0U]) << 1U));
    vlTOPp->S_o = ((0xfbU & (IData)(vlTOPp->S_o)) | 
                   (((IData)(vlTOPp->top__DOT__dut__DOT__generate_Adder_Block__BRA__2__KET____DOT__fulladder__DOT__S_temp) 
                     ^ vlTOPp->top__DOT__dut__DOT__C_temp
                     [1U]) << 2U));
    vlTOPp->S_o = ((0xf7U & (IData)(vlTOPp->S_o)) | 
                   (((IData)(vlTOPp->top__DOT__dut__DOT__generate_Adder_Block__BRA__3__KET____DOT__fulladder__DOT__S_temp) 
                     ^ vlTOPp->top__DOT__dut__DOT__C_temp
                     [2U]) << 3U));
    vlTOPp->S_o = ((0xefU & (IData)(vlTOPp->S_o)) | 
                   (((IData)(vlTOPp->top__DOT__dut__DOT__generate_Adder_Block__BRA__4__KET____DOT__fulladder__DOT__S_temp) 
                     ^ vlTOPp->top__DOT__dut__DOT__C_temp
                     [3U]) << 4U));
    vlTOPp->S_o = ((0xdfU & (IData)(vlTOPp->S_o)) | 
                   (((IData)(vlTOPp->top__DOT__dut__DOT__generate_Adder_Block__BRA__5__KET____DOT__fulladder__DOT__S_temp) 
                     ^ vlTOPp->top__DOT__dut__DOT__C_temp
                     [4U]) << 5U));
    vlTOPp->S_o = ((0xbfU & (IData)(vlTOPp->S_o)) | 
                   (((IData)(vlTOPp->top__DOT__dut__DOT__generate_Adder_Block__BRA__6__KET____DOT__fulladder__DOT__S_temp) 
                     ^ vlTOPp->top__DOT__dut__DOT__C_temp
                     [5U]) << 6U));
    vlTOPp->S_o = ((0x7fU & (IData)(vlTOPp->S_o)) | 
                   (((IData)(vlTOPp->top__DOT__dut__DOT__generate_Adder_Block__BRA__7__KET____DOT__fulladder__DOT__S_temp) 
                     ^ vlTOPp->top__DOT__dut__DOT__C_temp
                     [6U]) << 7U));
    vlTOPp->top__DOT__dut__DOT__C_temp[1U] = (1U & 
                                              ((((IData)(vlTOPp->dataA_i) 
                                                 & (IData)(vlTOPp->dataB_i)) 
                                                >> 1U) 
                                               | (IData)(vlTOPp->top__DOT__dut__DOT__generate_Adder_Block__BRA__1__KET____DOT__fulladder__DOT__C_temp2)));
    vlTOPp->top__DOT__dut__DOT__C_temp[2U] = (1U & 
                                              ((((IData)(vlTOPp->dataA_i) 
                                                 & (IData)(vlTOPp->dataB_i)) 
                                                >> 2U) 
                                               | (IData)(vlTOPp->top__DOT__dut__DOT__generate_Adder_Block__BRA__2__KET____DOT__fulladder__DOT__C_temp2)));
    vlTOPp->top__DOT__dut__DOT__C_temp[3U] = (1U & 
                                              ((((IData)(vlTOPp->dataA_i) 
                                                 & (IData)(vlTOPp->dataB_i)) 
                                                >> 3U) 
                                               | (IData)(vlTOPp->top__DOT__dut__DOT__generate_Adder_Block__BRA__3__KET____DOT__fulladder__DOT__C_temp2)));
    vlTOPp->top__DOT__dut__DOT__C_temp[4U] = (1U & 
                                              ((((IData)(vlTOPp->dataA_i) 
                                                 & (IData)(vlTOPp->dataB_i)) 
                                                >> 4U) 
                                               | (IData)(vlTOPp->top__DOT__dut__DOT__generate_Adder_Block__BRA__4__KET____DOT__fulladder__DOT__C_temp2)));
    vlTOPp->top__DOT__dut__DOT__C_temp[5U] = (1U & 
                                              ((((IData)(vlTOPp->dataA_i) 
                                                 & (IData)(vlTOPp->dataB_i)) 
                                                >> 5U) 
                                               | (IData)(vlTOPp->top__DOT__dut__DOT__generate_Adder_Block__BRA__5__KET____DOT__fulladder__DOT__C_temp2)));
    vlTOPp->top__DOT__dut__DOT__C_temp[6U] = (1U & 
                                              ((((IData)(vlTOPp->dataA_i) 
                                                 & (IData)(vlTOPp->dataB_i)) 
                                                >> 6U) 
                                               | (IData)(vlTOPp->top__DOT__dut__DOT__generate_Adder_Block__BRA__6__KET____DOT__fulladder__DOT__C_temp2)));
    vlTOPp->top__DOT__dut__DOT__C_temp[7U] = (1U & 
                                              ((((IData)(vlTOPp->dataA_i) 
                                                 & (IData)(vlTOPp->dataB_i)) 
                                                >> 7U) 
                                               | (IData)(vlTOPp->top__DOT__dut__DOT__generate_Adder_Block__BRA__7__KET____DOT__fulladder__DOT__C_temp2)));
}

void Vtop::_eval(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_eval\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
    vlTOPp->__Vm_traceActivity[1U] = 1U;
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
    __req |= ((vlTOPp->top__DOT__dut__DOT__C_temp[0U] ^ 
               vlTOPp->__Vchglast__TOP__top__DOT__dut__DOT__C_temp
               [0U])
         | (vlTOPp->top__DOT__dut__DOT__C_temp[1U] ^ 
            vlTOPp->__Vchglast__TOP__top__DOT__dut__DOT__C_temp
            [1U])
         | (vlTOPp->top__DOT__dut__DOT__C_temp[2U] ^ 
            vlTOPp->__Vchglast__TOP__top__DOT__dut__DOT__C_temp
            [2U])
         | (vlTOPp->top__DOT__dut__DOT__C_temp[3U] ^ 
            vlTOPp->__Vchglast__TOP__top__DOT__dut__DOT__C_temp
            [3U])
         | (vlTOPp->top__DOT__dut__DOT__C_temp[4U] ^ 
            vlTOPp->__Vchglast__TOP__top__DOT__dut__DOT__C_temp
            [4U])
         | (vlTOPp->top__DOT__dut__DOT__C_temp[5U] ^ 
            vlTOPp->__Vchglast__TOP__top__DOT__dut__DOT__C_temp
            [5U])
         | (vlTOPp->top__DOT__dut__DOT__C_temp[6U] ^ 
            vlTOPp->__Vchglast__TOP__top__DOT__dut__DOT__C_temp
            [6U])
         | (vlTOPp->top__DOT__dut__DOT__C_temp[7U] ^ 
            vlTOPp->__Vchglast__TOP__top__DOT__dut__DOT__C_temp
            [7U]));
    VL_DEBUG_IF( if(__req && ((vlTOPp->top__DOT__dut__DOT__C_temp
                               [0U] ^ vlTOPp->__Vchglast__TOP__top__DOT__dut__DOT__C_temp
                               [0U]))) VL_DBG_MSGF("        CHANGE: src/nAdder.sv:14\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->top__DOT__dut__DOT__C_temp
                               [1U] ^ vlTOPp->__Vchglast__TOP__top__DOT__dut__DOT__C_temp
                               [1U]))) VL_DBG_MSGF("        CHANGE: src/nAdder.sv:14\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->top__DOT__dut__DOT__C_temp
                               [2U] ^ vlTOPp->__Vchglast__TOP__top__DOT__dut__DOT__C_temp
                               [2U]))) VL_DBG_MSGF("        CHANGE: src/nAdder.sv:14\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->top__DOT__dut__DOT__C_temp
                               [3U] ^ vlTOPp->__Vchglast__TOP__top__DOT__dut__DOT__C_temp
                               [3U]))) VL_DBG_MSGF("        CHANGE: src/nAdder.sv:14\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->top__DOT__dut__DOT__C_temp
                               [4U] ^ vlTOPp->__Vchglast__TOP__top__DOT__dut__DOT__C_temp
                               [4U]))) VL_DBG_MSGF("        CHANGE: src/nAdder.sv:14\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->top__DOT__dut__DOT__C_temp
                               [5U] ^ vlTOPp->__Vchglast__TOP__top__DOT__dut__DOT__C_temp
                               [5U]))) VL_DBG_MSGF("        CHANGE: src/nAdder.sv:14\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->top__DOT__dut__DOT__C_temp
                               [6U] ^ vlTOPp->__Vchglast__TOP__top__DOT__dut__DOT__C_temp
                               [6U]))) VL_DBG_MSGF("        CHANGE: src/nAdder.sv:14\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->top__DOT__dut__DOT__C_temp
                               [7U] ^ vlTOPp->__Vchglast__TOP__top__DOT__dut__DOT__C_temp
                               [7U]))) VL_DBG_MSGF("        CHANGE: src/nAdder.sv:14\n"); );
    // Final
    vlTOPp->__Vchglast__TOP__top__DOT__dut__DOT__C_temp[0U] 
        = vlTOPp->top__DOT__dut__DOT__C_temp[0U];
    vlTOPp->__Vchglast__TOP__top__DOT__dut__DOT__C_temp[1U] 
        = vlTOPp->top__DOT__dut__DOT__C_temp[1U];
    vlTOPp->__Vchglast__TOP__top__DOT__dut__DOT__C_temp[2U] 
        = vlTOPp->top__DOT__dut__DOT__C_temp[2U];
    vlTOPp->__Vchglast__TOP__top__DOT__dut__DOT__C_temp[3U] 
        = vlTOPp->top__DOT__dut__DOT__C_temp[3U];
    vlTOPp->__Vchglast__TOP__top__DOT__dut__DOT__C_temp[4U] 
        = vlTOPp->top__DOT__dut__DOT__C_temp[4U];
    vlTOPp->__Vchglast__TOP__top__DOT__dut__DOT__C_temp[5U] 
        = vlTOPp->top__DOT__dut__DOT__C_temp[5U];
    vlTOPp->__Vchglast__TOP__top__DOT__dut__DOT__C_temp[6U] 
        = vlTOPp->top__DOT__dut__DOT__C_temp[6U];
    vlTOPp->__Vchglast__TOP__top__DOT__dut__DOT__C_temp[7U] 
        = vlTOPp->top__DOT__dut__DOT__C_temp[7U];
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
