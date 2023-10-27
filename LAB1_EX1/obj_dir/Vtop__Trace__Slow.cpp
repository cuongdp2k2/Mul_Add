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
        tracep->declBus(c+69,"A_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBit(c+70,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+71,"C_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+72,"overflowFlag_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+73,"carryFlag_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+74,"S_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBus(c+69,"top A_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBit(c+70,"top clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+71,"top C_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+72,"top overflowFlag_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+73,"top carryFlag_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+74,"top S_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBus(c+75,"top dut DATA_SIZE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+69,"top dut A_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBit(c+70,"top dut clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+71,"top dut C_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+72,"top dut overflowFlag_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+73,"top dut carryFlag_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+74,"top dut S_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBus(c+1,"top dut A_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
        tracep->declBus(c+2,"top dut S_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
        tracep->declBus(c+59,"top dut S_result_wire",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
        tracep->declBus(c+2,"top dut S_forward_wire",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
        tracep->declBus(c+60,"top dut C_wire",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 8,0);
        tracep->declBit(c+3,"top dut FullAdder[0] Adder A_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+4,"top dut FullAdder[0] Adder B_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+61,"top dut FullAdder[0] Adder C_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+35,"top dut FullAdder[0] Adder S_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+36,"top dut FullAdder[0] Adder C_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+5,"top dut FullAdder[0] Adder C_temp1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+37,"top dut FullAdder[0] Adder C_temp2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+6,"top dut FullAdder[0] Adder S_temp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+3,"top dut FullAdder[0] Adder half_adder1 A_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+4,"top dut FullAdder[0] Adder half_adder1 B_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+6,"top dut FullAdder[0] Adder half_adder1 S_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+5,"top dut FullAdder[0] Adder half_adder1 C_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+6,"top dut FullAdder[0] Adder half_adder2 A_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+61,"top dut FullAdder[0] Adder half_adder2 B_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+35,"top dut FullAdder[0] Adder half_adder2 S_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+37,"top dut FullAdder[0] Adder half_adder2 C_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+7,"top dut FullAdder[1] Adder A_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+8,"top dut FullAdder[1] Adder B_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+62,"top dut FullAdder[1] Adder C_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+38,"top dut FullAdder[1] Adder S_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+39,"top dut FullAdder[1] Adder C_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+9,"top dut FullAdder[1] Adder C_temp1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+40,"top dut FullAdder[1] Adder C_temp2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+10,"top dut FullAdder[1] Adder S_temp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+7,"top dut FullAdder[1] Adder half_adder1 A_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+8,"top dut FullAdder[1] Adder half_adder1 B_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+10,"top dut FullAdder[1] Adder half_adder1 S_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+9,"top dut FullAdder[1] Adder half_adder1 C_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+10,"top dut FullAdder[1] Adder half_adder2 A_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+62,"top dut FullAdder[1] Adder half_adder2 B_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+38,"top dut FullAdder[1] Adder half_adder2 S_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+40,"top dut FullAdder[1] Adder half_adder2 C_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+11,"top dut FullAdder[2] Adder A_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+12,"top dut FullAdder[2] Adder B_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+63,"top dut FullAdder[2] Adder C_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+41,"top dut FullAdder[2] Adder S_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+42,"top dut FullAdder[2] Adder C_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+13,"top dut FullAdder[2] Adder C_temp1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+43,"top dut FullAdder[2] Adder C_temp2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+14,"top dut FullAdder[2] Adder S_temp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+11,"top dut FullAdder[2] Adder half_adder1 A_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+12,"top dut FullAdder[2] Adder half_adder1 B_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+14,"top dut FullAdder[2] Adder half_adder1 S_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+13,"top dut FullAdder[2] Adder half_adder1 C_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+14,"top dut FullAdder[2] Adder half_adder2 A_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+63,"top dut FullAdder[2] Adder half_adder2 B_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+41,"top dut FullAdder[2] Adder half_adder2 S_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+43,"top dut FullAdder[2] Adder half_adder2 C_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+15,"top dut FullAdder[3] Adder A_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+16,"top dut FullAdder[3] Adder B_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+64,"top dut FullAdder[3] Adder C_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+44,"top dut FullAdder[3] Adder S_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+45,"top dut FullAdder[3] Adder C_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+17,"top dut FullAdder[3] Adder C_temp1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+46,"top dut FullAdder[3] Adder C_temp2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+18,"top dut FullAdder[3] Adder S_temp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+15,"top dut FullAdder[3] Adder half_adder1 A_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+16,"top dut FullAdder[3] Adder half_adder1 B_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+18,"top dut FullAdder[3] Adder half_adder1 S_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+17,"top dut FullAdder[3] Adder half_adder1 C_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+18,"top dut FullAdder[3] Adder half_adder2 A_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+64,"top dut FullAdder[3] Adder half_adder2 B_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+44,"top dut FullAdder[3] Adder half_adder2 S_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+46,"top dut FullAdder[3] Adder half_adder2 C_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+19,"top dut FullAdder[4] Adder A_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+20,"top dut FullAdder[4] Adder B_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+65,"top dut FullAdder[4] Adder C_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+47,"top dut FullAdder[4] Adder S_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+48,"top dut FullAdder[4] Adder C_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+21,"top dut FullAdder[4] Adder C_temp1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+49,"top dut FullAdder[4] Adder C_temp2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+22,"top dut FullAdder[4] Adder S_temp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+19,"top dut FullAdder[4] Adder half_adder1 A_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+20,"top dut FullAdder[4] Adder half_adder1 B_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+22,"top dut FullAdder[4] Adder half_adder1 S_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+21,"top dut FullAdder[4] Adder half_adder1 C_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+22,"top dut FullAdder[4] Adder half_adder2 A_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+65,"top dut FullAdder[4] Adder half_adder2 B_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+47,"top dut FullAdder[4] Adder half_adder2 S_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+49,"top dut FullAdder[4] Adder half_adder2 C_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+23,"top dut FullAdder[5] Adder A_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+24,"top dut FullAdder[5] Adder B_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+66,"top dut FullAdder[5] Adder C_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+50,"top dut FullAdder[5] Adder S_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+51,"top dut FullAdder[5] Adder C_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+25,"top dut FullAdder[5] Adder C_temp1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+52,"top dut FullAdder[5] Adder C_temp2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+26,"top dut FullAdder[5] Adder S_temp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+23,"top dut FullAdder[5] Adder half_adder1 A_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+24,"top dut FullAdder[5] Adder half_adder1 B_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+26,"top dut FullAdder[5] Adder half_adder1 S_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+25,"top dut FullAdder[5] Adder half_adder1 C_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+26,"top dut FullAdder[5] Adder half_adder2 A_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+66,"top dut FullAdder[5] Adder half_adder2 B_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+50,"top dut FullAdder[5] Adder half_adder2 S_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+52,"top dut FullAdder[5] Adder half_adder2 C_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+27,"top dut FullAdder[6] Adder A_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+28,"top dut FullAdder[6] Adder B_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+67,"top dut FullAdder[6] Adder C_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+53,"top dut FullAdder[6] Adder S_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+54,"top dut FullAdder[6] Adder C_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+29,"top dut FullAdder[6] Adder C_temp1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+55,"top dut FullAdder[6] Adder C_temp2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+30,"top dut FullAdder[6] Adder S_temp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+27,"top dut FullAdder[6] Adder half_adder1 A_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+28,"top dut FullAdder[6] Adder half_adder1 B_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+30,"top dut FullAdder[6] Adder half_adder1 S_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+29,"top dut FullAdder[6] Adder half_adder1 C_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+30,"top dut FullAdder[6] Adder half_adder2 A_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+67,"top dut FullAdder[6] Adder half_adder2 B_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+53,"top dut FullAdder[6] Adder half_adder2 S_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+55,"top dut FullAdder[6] Adder half_adder2 C_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+31,"top dut FullAdder[7] Adder A_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+32,"top dut FullAdder[7] Adder B_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+68,"top dut FullAdder[7] Adder C_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+56,"top dut FullAdder[7] Adder S_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+57,"top dut FullAdder[7] Adder C_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+33,"top dut FullAdder[7] Adder C_temp1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+58,"top dut FullAdder[7] Adder C_temp2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+34,"top dut FullAdder[7] Adder S_temp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+31,"top dut FullAdder[7] Adder half_adder1 A_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+32,"top dut FullAdder[7] Adder half_adder1 B_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+34,"top dut FullAdder[7] Adder half_adder1 S_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+33,"top dut FullAdder[7] Adder half_adder1 C_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+34,"top dut FullAdder[7] Adder half_adder2 A_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+68,"top dut FullAdder[7] Adder half_adder2 B_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+56,"top dut FullAdder[7] Adder half_adder2 S_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+58,"top dut FullAdder[7] Adder half_adder2 C_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
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
        tracep->fullCData(oldp+1,(vlTOPp->top__DOT__dut__DOT__A_reg),8);
        tracep->fullCData(oldp+2,(vlTOPp->top__DOT__dut__DOT__S_reg),8);
        tracep->fullBit(oldp+3,((1U & (IData)(vlTOPp->top__DOT__dut__DOT__A_reg))));
        tracep->fullBit(oldp+4,((1U & (IData)(vlTOPp->top__DOT__dut__DOT__S_reg))));
        tracep->fullBit(oldp+5,((1U & ((IData)(vlTOPp->top__DOT__dut__DOT__A_reg) 
                                       & (IData)(vlTOPp->top__DOT__dut__DOT__S_reg)))));
        tracep->fullBit(oldp+6,(vlTOPp->top__DOT__dut__DOT__FullAdder__BRA__0__KET____DOT__Adder__DOT__S_temp));
        tracep->fullBit(oldp+7,((1U & ((IData)(vlTOPp->top__DOT__dut__DOT__A_reg) 
                                       >> 1U))));
        tracep->fullBit(oldp+8,((1U & ((IData)(vlTOPp->top__DOT__dut__DOT__S_reg) 
                                       >> 1U))));
        tracep->fullBit(oldp+9,((1U & (((IData)(vlTOPp->top__DOT__dut__DOT__A_reg) 
                                        & (IData)(vlTOPp->top__DOT__dut__DOT__S_reg)) 
                                       >> 1U))));
        tracep->fullBit(oldp+10,(vlTOPp->top__DOT__dut__DOT__FullAdder__BRA__1__KET____DOT__Adder__DOT__S_temp));
        tracep->fullBit(oldp+11,((1U & ((IData)(vlTOPp->top__DOT__dut__DOT__A_reg) 
                                        >> 2U))));
        tracep->fullBit(oldp+12,((1U & ((IData)(vlTOPp->top__DOT__dut__DOT__S_reg) 
                                        >> 2U))));
        tracep->fullBit(oldp+13,((1U & (((IData)(vlTOPp->top__DOT__dut__DOT__A_reg) 
                                         & (IData)(vlTOPp->top__DOT__dut__DOT__S_reg)) 
                                        >> 2U))));
        tracep->fullBit(oldp+14,(vlTOPp->top__DOT__dut__DOT__FullAdder__BRA__2__KET____DOT__Adder__DOT__S_temp));
        tracep->fullBit(oldp+15,((1U & ((IData)(vlTOPp->top__DOT__dut__DOT__A_reg) 
                                        >> 3U))));
        tracep->fullBit(oldp+16,((1U & ((IData)(vlTOPp->top__DOT__dut__DOT__S_reg) 
                                        >> 3U))));
        tracep->fullBit(oldp+17,((1U & (((IData)(vlTOPp->top__DOT__dut__DOT__A_reg) 
                                         & (IData)(vlTOPp->top__DOT__dut__DOT__S_reg)) 
                                        >> 3U))));
        tracep->fullBit(oldp+18,(vlTOPp->top__DOT__dut__DOT__FullAdder__BRA__3__KET____DOT__Adder__DOT__S_temp));
        tracep->fullBit(oldp+19,((1U & ((IData)(vlTOPp->top__DOT__dut__DOT__A_reg) 
                                        >> 4U))));
        tracep->fullBit(oldp+20,((1U & ((IData)(vlTOPp->top__DOT__dut__DOT__S_reg) 
                                        >> 4U))));
        tracep->fullBit(oldp+21,((1U & (((IData)(vlTOPp->top__DOT__dut__DOT__A_reg) 
                                         & (IData)(vlTOPp->top__DOT__dut__DOT__S_reg)) 
                                        >> 4U))));
        tracep->fullBit(oldp+22,(vlTOPp->top__DOT__dut__DOT__FullAdder__BRA__4__KET____DOT__Adder__DOT__S_temp));
        tracep->fullBit(oldp+23,((1U & ((IData)(vlTOPp->top__DOT__dut__DOT__A_reg) 
                                        >> 5U))));
        tracep->fullBit(oldp+24,((1U & ((IData)(vlTOPp->top__DOT__dut__DOT__S_reg) 
                                        >> 5U))));
        tracep->fullBit(oldp+25,((1U & (((IData)(vlTOPp->top__DOT__dut__DOT__A_reg) 
                                         & (IData)(vlTOPp->top__DOT__dut__DOT__S_reg)) 
                                        >> 5U))));
        tracep->fullBit(oldp+26,(vlTOPp->top__DOT__dut__DOT__FullAdder__BRA__5__KET____DOT__Adder__DOT__S_temp));
        tracep->fullBit(oldp+27,((1U & ((IData)(vlTOPp->top__DOT__dut__DOT__A_reg) 
                                        >> 6U))));
        tracep->fullBit(oldp+28,((1U & ((IData)(vlTOPp->top__DOT__dut__DOT__S_reg) 
                                        >> 6U))));
        tracep->fullBit(oldp+29,((1U & (((IData)(vlTOPp->top__DOT__dut__DOT__A_reg) 
                                         & (IData)(vlTOPp->top__DOT__dut__DOT__S_reg)) 
                                        >> 6U))));
        tracep->fullBit(oldp+30,(vlTOPp->top__DOT__dut__DOT__FullAdder__BRA__6__KET____DOT__Adder__DOT__S_temp));
        tracep->fullBit(oldp+31,((1U & ((IData)(vlTOPp->top__DOT__dut__DOT__A_reg) 
                                        >> 7U))));
        tracep->fullBit(oldp+32,((1U & ((IData)(vlTOPp->top__DOT__dut__DOT__S_reg) 
                                        >> 7U))));
        tracep->fullBit(oldp+33,((1U & (((IData)(vlTOPp->top__DOT__dut__DOT__A_reg) 
                                         & (IData)(vlTOPp->top__DOT__dut__DOT__S_reg)) 
                                        >> 7U))));
        tracep->fullBit(oldp+34,(vlTOPp->top__DOT__dut__DOT__FullAdder__BRA__7__KET____DOT__Adder__DOT__S_temp));
        tracep->fullBit(oldp+35,((1U & ((IData)(vlTOPp->top__DOT__dut__DOT__FullAdder__BRA__0__KET____DOT__Adder__DOT__S_temp) 
                                        ^ (IData)(vlTOPp->top__DOT__dut__DOT__C_wire)))));
        tracep->fullBit(oldp+36,((1U & (((IData)(vlTOPp->top__DOT__dut__DOT__A_reg) 
                                         & (IData)(vlTOPp->top__DOT__dut__DOT__S_reg)) 
                                        | ((IData)(vlTOPp->top__DOT__dut__DOT__FullAdder__BRA__0__KET____DOT__Adder__DOT__S_temp) 
                                           & (IData)(vlTOPp->top__DOT__dut__DOT__C_wire))))));
        tracep->fullBit(oldp+37,(((IData)(vlTOPp->top__DOT__dut__DOT__FullAdder__BRA__0__KET____DOT__Adder__DOT__S_temp) 
                                  & (IData)(vlTOPp->top__DOT__dut__DOT__C_wire))));
        tracep->fullBit(oldp+38,((1U & ((IData)(vlTOPp->top__DOT__dut__DOT__FullAdder__BRA__1__KET____DOT__Adder__DOT__S_temp) 
                                        ^ ((IData)(vlTOPp->top__DOT__dut__DOT__C_wire) 
                                           >> 1U)))));
        tracep->fullBit(oldp+39,((1U & ((((IData)(vlTOPp->top__DOT__dut__DOT__A_reg) 
                                          & (IData)(vlTOPp->top__DOT__dut__DOT__S_reg)) 
                                         >> 1U) | ((IData)(vlTOPp->top__DOT__dut__DOT__FullAdder__BRA__1__KET____DOT__Adder__DOT__S_temp) 
                                                   & ((IData)(vlTOPp->top__DOT__dut__DOT__C_wire) 
                                                      >> 1U))))));
        tracep->fullBit(oldp+40,(((IData)(vlTOPp->top__DOT__dut__DOT__FullAdder__BRA__1__KET____DOT__Adder__DOT__S_temp) 
                                  & ((IData)(vlTOPp->top__DOT__dut__DOT__C_wire) 
                                     >> 1U))));
        tracep->fullBit(oldp+41,((1U & ((IData)(vlTOPp->top__DOT__dut__DOT__FullAdder__BRA__2__KET____DOT__Adder__DOT__S_temp) 
                                        ^ ((IData)(vlTOPp->top__DOT__dut__DOT__C_wire) 
                                           >> 2U)))));
        tracep->fullBit(oldp+42,((1U & ((((IData)(vlTOPp->top__DOT__dut__DOT__A_reg) 
                                          & (IData)(vlTOPp->top__DOT__dut__DOT__S_reg)) 
                                         >> 2U) | ((IData)(vlTOPp->top__DOT__dut__DOT__FullAdder__BRA__2__KET____DOT__Adder__DOT__S_temp) 
                                                   & ((IData)(vlTOPp->top__DOT__dut__DOT__C_wire) 
                                                      >> 2U))))));
        tracep->fullBit(oldp+43,(((IData)(vlTOPp->top__DOT__dut__DOT__FullAdder__BRA__2__KET____DOT__Adder__DOT__S_temp) 
                                  & ((IData)(vlTOPp->top__DOT__dut__DOT__C_wire) 
                                     >> 2U))));
        tracep->fullBit(oldp+44,((1U & ((IData)(vlTOPp->top__DOT__dut__DOT__FullAdder__BRA__3__KET____DOT__Adder__DOT__S_temp) 
                                        ^ ((IData)(vlTOPp->top__DOT__dut__DOT__C_wire) 
                                           >> 3U)))));
        tracep->fullBit(oldp+45,((1U & ((((IData)(vlTOPp->top__DOT__dut__DOT__A_reg) 
                                          & (IData)(vlTOPp->top__DOT__dut__DOT__S_reg)) 
                                         >> 3U) | ((IData)(vlTOPp->top__DOT__dut__DOT__FullAdder__BRA__3__KET____DOT__Adder__DOT__S_temp) 
                                                   & ((IData)(vlTOPp->top__DOT__dut__DOT__C_wire) 
                                                      >> 3U))))));
        tracep->fullBit(oldp+46,(((IData)(vlTOPp->top__DOT__dut__DOT__FullAdder__BRA__3__KET____DOT__Adder__DOT__S_temp) 
                                  & ((IData)(vlTOPp->top__DOT__dut__DOT__C_wire) 
                                     >> 3U))));
        tracep->fullBit(oldp+47,((1U & ((IData)(vlTOPp->top__DOT__dut__DOT__FullAdder__BRA__4__KET____DOT__Adder__DOT__S_temp) 
                                        ^ ((IData)(vlTOPp->top__DOT__dut__DOT__C_wire) 
                                           >> 4U)))));
        tracep->fullBit(oldp+48,((1U & ((((IData)(vlTOPp->top__DOT__dut__DOT__A_reg) 
                                          & (IData)(vlTOPp->top__DOT__dut__DOT__S_reg)) 
                                         >> 4U) | ((IData)(vlTOPp->top__DOT__dut__DOT__FullAdder__BRA__4__KET____DOT__Adder__DOT__S_temp) 
                                                   & ((IData)(vlTOPp->top__DOT__dut__DOT__C_wire) 
                                                      >> 4U))))));
        tracep->fullBit(oldp+49,(((IData)(vlTOPp->top__DOT__dut__DOT__FullAdder__BRA__4__KET____DOT__Adder__DOT__S_temp) 
                                  & ((IData)(vlTOPp->top__DOT__dut__DOT__C_wire) 
                                     >> 4U))));
        tracep->fullBit(oldp+50,((1U & ((IData)(vlTOPp->top__DOT__dut__DOT__FullAdder__BRA__5__KET____DOT__Adder__DOT__S_temp) 
                                        ^ ((IData)(vlTOPp->top__DOT__dut__DOT__C_wire) 
                                           >> 5U)))));
        tracep->fullBit(oldp+51,((1U & ((((IData)(vlTOPp->top__DOT__dut__DOT__A_reg) 
                                          & (IData)(vlTOPp->top__DOT__dut__DOT__S_reg)) 
                                         >> 5U) | ((IData)(vlTOPp->top__DOT__dut__DOT__FullAdder__BRA__5__KET____DOT__Adder__DOT__S_temp) 
                                                   & ((IData)(vlTOPp->top__DOT__dut__DOT__C_wire) 
                                                      >> 5U))))));
        tracep->fullBit(oldp+52,(((IData)(vlTOPp->top__DOT__dut__DOT__FullAdder__BRA__5__KET____DOT__Adder__DOT__S_temp) 
                                  & ((IData)(vlTOPp->top__DOT__dut__DOT__C_wire) 
                                     >> 5U))));
        tracep->fullBit(oldp+53,((1U & ((IData)(vlTOPp->top__DOT__dut__DOT__FullAdder__BRA__6__KET____DOT__Adder__DOT__S_temp) 
                                        ^ ((IData)(vlTOPp->top__DOT__dut__DOT__C_wire) 
                                           >> 6U)))));
        tracep->fullBit(oldp+54,((1U & ((((IData)(vlTOPp->top__DOT__dut__DOT__A_reg) 
                                          & (IData)(vlTOPp->top__DOT__dut__DOT__S_reg)) 
                                         >> 6U) | ((IData)(vlTOPp->top__DOT__dut__DOT__FullAdder__BRA__6__KET____DOT__Adder__DOT__S_temp) 
                                                   & ((IData)(vlTOPp->top__DOT__dut__DOT__C_wire) 
                                                      >> 6U))))));
        tracep->fullBit(oldp+55,(((IData)(vlTOPp->top__DOT__dut__DOT__FullAdder__BRA__6__KET____DOT__Adder__DOT__S_temp) 
                                  & ((IData)(vlTOPp->top__DOT__dut__DOT__C_wire) 
                                     >> 6U))));
        tracep->fullBit(oldp+56,((1U & ((IData)(vlTOPp->top__DOT__dut__DOT__FullAdder__BRA__7__KET____DOT__Adder__DOT__S_temp) 
                                        ^ ((IData)(vlTOPp->top__DOT__dut__DOT__C_wire) 
                                           >> 7U)))));
        tracep->fullBit(oldp+57,((1U & ((((IData)(vlTOPp->top__DOT__dut__DOT__A_reg) 
                                          & (IData)(vlTOPp->top__DOT__dut__DOT__S_reg)) 
                                         >> 7U) | ((IData)(vlTOPp->top__DOT__dut__DOT__FullAdder__BRA__7__KET____DOT__Adder__DOT__S_temp) 
                                                   & ((IData)(vlTOPp->top__DOT__dut__DOT__C_wire) 
                                                      >> 7U))))));
        tracep->fullBit(oldp+58,(((IData)(vlTOPp->top__DOT__dut__DOT__FullAdder__BRA__7__KET____DOT__Adder__DOT__S_temp) 
                                  & ((IData)(vlTOPp->top__DOT__dut__DOT__C_wire) 
                                     >> 7U))));
        tracep->fullCData(oldp+59,(vlTOPp->top__DOT__dut__DOT__S_result_wire),8);
        tracep->fullSData(oldp+60,(vlTOPp->top__DOT__dut__DOT__C_wire),9);
        tracep->fullBit(oldp+61,((1U & (IData)(vlTOPp->top__DOT__dut__DOT__C_wire))));
        tracep->fullBit(oldp+62,((1U & ((IData)(vlTOPp->top__DOT__dut__DOT__C_wire) 
                                        >> 1U))));
        tracep->fullBit(oldp+63,((1U & ((IData)(vlTOPp->top__DOT__dut__DOT__C_wire) 
                                        >> 2U))));
        tracep->fullBit(oldp+64,((1U & ((IData)(vlTOPp->top__DOT__dut__DOT__C_wire) 
                                        >> 3U))));
        tracep->fullBit(oldp+65,((1U & ((IData)(vlTOPp->top__DOT__dut__DOT__C_wire) 
                                        >> 4U))));
        tracep->fullBit(oldp+66,((1U & ((IData)(vlTOPp->top__DOT__dut__DOT__C_wire) 
                                        >> 5U))));
        tracep->fullBit(oldp+67,((1U & ((IData)(vlTOPp->top__DOT__dut__DOT__C_wire) 
                                        >> 6U))));
        tracep->fullBit(oldp+68,((1U & ((IData)(vlTOPp->top__DOT__dut__DOT__C_wire) 
                                        >> 7U))));
        tracep->fullCData(oldp+69,(vlTOPp->A_i),8);
        tracep->fullBit(oldp+70,(vlTOPp->clk_i));
        tracep->fullBit(oldp+71,(vlTOPp->C_i));
        tracep->fullBit(oldp+72,(vlTOPp->overflowFlag_o));
        tracep->fullBit(oldp+73,(vlTOPp->carryFlag_o));
        tracep->fullCData(oldp+74,(vlTOPp->S_o),8);
        tracep->fullIData(oldp+75,(8U),32);
    }
}
