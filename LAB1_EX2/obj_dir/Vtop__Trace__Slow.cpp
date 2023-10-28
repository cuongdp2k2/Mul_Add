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
        tracep->declBus(c+38,"dataA_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBus(c+39,"dataB_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBit(c+40,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+41,"C_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+42,"S_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBit(c+43,"C_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+38,"top dataA_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBus(c+39,"top dataB_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBit(c+40,"top clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+41,"top C_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+42,"top S_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBit(c+43,"top C_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+78,"top dut BUS_SIZE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+38,"top dut dataA_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBus(c+39,"top dut dataB_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBit(c+41,"top dut C_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+42,"top dut S_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBit(c+43,"top dut C_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        {int i; for (i=0; i<8; i++) {
                tracep->declBit(c+1+i*1,"top dut C_temp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+1));}}
        tracep->declBit(c+44,"top dut fulladder_0 A_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+45,"top dut fulladder_0 B_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+41,"top dut fulladder_0 C_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+46,"top dut fulladder_0 S_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+47,"top dut fulladder_0 C_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+48,"top dut fulladder_0 C_temp1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+49,"top dut fulladder_0 C_temp2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+9,"top dut fulladder_0 S_temp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+44,"top dut fulladder_0 half_adder1 A_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+45,"top dut fulladder_0 half_adder1 B_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+9,"top dut fulladder_0 half_adder1 S_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+48,"top dut fulladder_0 half_adder1 C_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+9,"top dut fulladder_0 half_adder2 A_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+41,"top dut fulladder_0 half_adder2 B_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+46,"top dut fulladder_0 half_adder2 S_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+49,"top dut fulladder_0 half_adder2 C_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+50,"top dut generate_Adder_Block[1] fulladder A_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+51,"top dut generate_Adder_Block[1] fulladder B_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+10,"top dut generate_Adder_Block[1] fulladder C_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+11,"top dut generate_Adder_Block[1] fulladder S_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+52,"top dut generate_Adder_Block[1] fulladder C_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+53,"top dut generate_Adder_Block[1] fulladder C_temp1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+12,"top dut generate_Adder_Block[1] fulladder C_temp2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+13,"top dut generate_Adder_Block[1] fulladder S_temp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+50,"top dut generate_Adder_Block[1] fulladder half_adder1 A_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+51,"top dut generate_Adder_Block[1] fulladder half_adder1 B_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+13,"top dut generate_Adder_Block[1] fulladder half_adder1 S_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+53,"top dut generate_Adder_Block[1] fulladder half_adder1 C_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+13,"top dut generate_Adder_Block[1] fulladder half_adder2 A_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+10,"top dut generate_Adder_Block[1] fulladder half_adder2 B_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+11,"top dut generate_Adder_Block[1] fulladder half_adder2 S_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+12,"top dut generate_Adder_Block[1] fulladder half_adder2 C_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+54,"top dut generate_Adder_Block[2] fulladder A_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+55,"top dut generate_Adder_Block[2] fulladder B_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+14,"top dut generate_Adder_Block[2] fulladder C_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+15,"top dut generate_Adder_Block[2] fulladder S_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+56,"top dut generate_Adder_Block[2] fulladder C_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+57,"top dut generate_Adder_Block[2] fulladder C_temp1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+16,"top dut generate_Adder_Block[2] fulladder C_temp2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+17,"top dut generate_Adder_Block[2] fulladder S_temp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+54,"top dut generate_Adder_Block[2] fulladder half_adder1 A_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+55,"top dut generate_Adder_Block[2] fulladder half_adder1 B_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+17,"top dut generate_Adder_Block[2] fulladder half_adder1 S_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+57,"top dut generate_Adder_Block[2] fulladder half_adder1 C_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+17,"top dut generate_Adder_Block[2] fulladder half_adder2 A_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+14,"top dut generate_Adder_Block[2] fulladder half_adder2 B_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+15,"top dut generate_Adder_Block[2] fulladder half_adder2 S_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+16,"top dut generate_Adder_Block[2] fulladder half_adder2 C_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+58,"top dut generate_Adder_Block[3] fulladder A_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+59,"top dut generate_Adder_Block[3] fulladder B_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+18,"top dut generate_Adder_Block[3] fulladder C_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+19,"top dut generate_Adder_Block[3] fulladder S_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+60,"top dut generate_Adder_Block[3] fulladder C_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+61,"top dut generate_Adder_Block[3] fulladder C_temp1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+20,"top dut generate_Adder_Block[3] fulladder C_temp2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+21,"top dut generate_Adder_Block[3] fulladder S_temp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+58,"top dut generate_Adder_Block[3] fulladder half_adder1 A_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+59,"top dut generate_Adder_Block[3] fulladder half_adder1 B_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+21,"top dut generate_Adder_Block[3] fulladder half_adder1 S_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+61,"top dut generate_Adder_Block[3] fulladder half_adder1 C_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+21,"top dut generate_Adder_Block[3] fulladder half_adder2 A_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+18,"top dut generate_Adder_Block[3] fulladder half_adder2 B_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+19,"top dut generate_Adder_Block[3] fulladder half_adder2 S_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+20,"top dut generate_Adder_Block[3] fulladder half_adder2 C_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+62,"top dut generate_Adder_Block[4] fulladder A_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+63,"top dut generate_Adder_Block[4] fulladder B_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+22,"top dut generate_Adder_Block[4] fulladder C_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+23,"top dut generate_Adder_Block[4] fulladder S_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+64,"top dut generate_Adder_Block[4] fulladder C_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+65,"top dut generate_Adder_Block[4] fulladder C_temp1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+24,"top dut generate_Adder_Block[4] fulladder C_temp2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+25,"top dut generate_Adder_Block[4] fulladder S_temp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+62,"top dut generate_Adder_Block[4] fulladder half_adder1 A_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+63,"top dut generate_Adder_Block[4] fulladder half_adder1 B_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+25,"top dut generate_Adder_Block[4] fulladder half_adder1 S_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+65,"top dut generate_Adder_Block[4] fulladder half_adder1 C_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+25,"top dut generate_Adder_Block[4] fulladder half_adder2 A_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+22,"top dut generate_Adder_Block[4] fulladder half_adder2 B_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+23,"top dut generate_Adder_Block[4] fulladder half_adder2 S_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+24,"top dut generate_Adder_Block[4] fulladder half_adder2 C_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+66,"top dut generate_Adder_Block[5] fulladder A_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+67,"top dut generate_Adder_Block[5] fulladder B_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+26,"top dut generate_Adder_Block[5] fulladder C_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+27,"top dut generate_Adder_Block[5] fulladder S_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+68,"top dut generate_Adder_Block[5] fulladder C_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+69,"top dut generate_Adder_Block[5] fulladder C_temp1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+28,"top dut generate_Adder_Block[5] fulladder C_temp2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+29,"top dut generate_Adder_Block[5] fulladder S_temp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+66,"top dut generate_Adder_Block[5] fulladder half_adder1 A_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+67,"top dut generate_Adder_Block[5] fulladder half_adder1 B_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+29,"top dut generate_Adder_Block[5] fulladder half_adder1 S_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+69,"top dut generate_Adder_Block[5] fulladder half_adder1 C_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+29,"top dut generate_Adder_Block[5] fulladder half_adder2 A_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+26,"top dut generate_Adder_Block[5] fulladder half_adder2 B_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+27,"top dut generate_Adder_Block[5] fulladder half_adder2 S_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+28,"top dut generate_Adder_Block[5] fulladder half_adder2 C_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+70,"top dut generate_Adder_Block[6] fulladder A_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+71,"top dut generate_Adder_Block[6] fulladder B_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+30,"top dut generate_Adder_Block[6] fulladder C_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+31,"top dut generate_Adder_Block[6] fulladder S_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+72,"top dut generate_Adder_Block[6] fulladder C_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+73,"top dut generate_Adder_Block[6] fulladder C_temp1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+32,"top dut generate_Adder_Block[6] fulladder C_temp2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+33,"top dut generate_Adder_Block[6] fulladder S_temp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+70,"top dut generate_Adder_Block[6] fulladder half_adder1 A_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+71,"top dut generate_Adder_Block[6] fulladder half_adder1 B_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+33,"top dut generate_Adder_Block[6] fulladder half_adder1 S_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+73,"top dut generate_Adder_Block[6] fulladder half_adder1 C_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+33,"top dut generate_Adder_Block[6] fulladder half_adder2 A_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+30,"top dut generate_Adder_Block[6] fulladder half_adder2 B_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+31,"top dut generate_Adder_Block[6] fulladder half_adder2 S_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+32,"top dut generate_Adder_Block[6] fulladder half_adder2 C_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+74,"top dut generate_Adder_Block[7] fulladder A_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+75,"top dut generate_Adder_Block[7] fulladder B_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+34,"top dut generate_Adder_Block[7] fulladder C_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+35,"top dut generate_Adder_Block[7] fulladder S_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+76,"top dut generate_Adder_Block[7] fulladder C_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+77,"top dut generate_Adder_Block[7] fulladder C_temp1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+36,"top dut generate_Adder_Block[7] fulladder C_temp2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+37,"top dut generate_Adder_Block[7] fulladder S_temp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+74,"top dut generate_Adder_Block[7] fulladder half_adder1 A_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+75,"top dut generate_Adder_Block[7] fulladder half_adder1 B_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+37,"top dut generate_Adder_Block[7] fulladder half_adder1 S_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+77,"top dut generate_Adder_Block[7] fulladder half_adder1 C_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+37,"top dut generate_Adder_Block[7] fulladder half_adder2 A_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+34,"top dut generate_Adder_Block[7] fulladder half_adder2 B_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+35,"top dut generate_Adder_Block[7] fulladder half_adder2 S_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+36,"top dut generate_Adder_Block[7] fulladder half_adder2 C_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
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
        tracep->fullBit(oldp+1,(vlTOPp->top__DOT__dut__DOT__C_temp[0]));
        tracep->fullBit(oldp+2,(vlTOPp->top__DOT__dut__DOT__C_temp[1]));
        tracep->fullBit(oldp+3,(vlTOPp->top__DOT__dut__DOT__C_temp[2]));
        tracep->fullBit(oldp+4,(vlTOPp->top__DOT__dut__DOT__C_temp[3]));
        tracep->fullBit(oldp+5,(vlTOPp->top__DOT__dut__DOT__C_temp[4]));
        tracep->fullBit(oldp+6,(vlTOPp->top__DOT__dut__DOT__C_temp[5]));
        tracep->fullBit(oldp+7,(vlTOPp->top__DOT__dut__DOT__C_temp[6]));
        tracep->fullBit(oldp+8,(vlTOPp->top__DOT__dut__DOT__C_temp[7]));
        tracep->fullBit(oldp+9,(vlTOPp->top__DOT__dut__DOT__fulladder_0__DOT__S_temp));
        tracep->fullBit(oldp+10,(vlTOPp->top__DOT__dut__DOT__C_temp
                                 [0U]));
        tracep->fullBit(oldp+11,(((IData)(vlTOPp->top__DOT__dut__DOT__generate_Adder_Block__BRA__1__KET____DOT__fulladder__DOT__S_temp) 
                                  ^ vlTOPp->top__DOT__dut__DOT__C_temp
                                  [0U])));
        tracep->fullBit(oldp+12,(((IData)(vlTOPp->top__DOT__dut__DOT__generate_Adder_Block__BRA__1__KET____DOT__fulladder__DOT__S_temp) 
                                  & vlTOPp->top__DOT__dut__DOT__C_temp
                                  [0U])));
        tracep->fullBit(oldp+13,(vlTOPp->top__DOT__dut__DOT__generate_Adder_Block__BRA__1__KET____DOT__fulladder__DOT__S_temp));
        tracep->fullBit(oldp+14,(vlTOPp->top__DOT__dut__DOT__C_temp
                                 [1U]));
        tracep->fullBit(oldp+15,(((IData)(vlTOPp->top__DOT__dut__DOT__generate_Adder_Block__BRA__2__KET____DOT__fulladder__DOT__S_temp) 
                                  ^ vlTOPp->top__DOT__dut__DOT__C_temp
                                  [1U])));
        tracep->fullBit(oldp+16,(((IData)(vlTOPp->top__DOT__dut__DOT__generate_Adder_Block__BRA__2__KET____DOT__fulladder__DOT__S_temp) 
                                  & vlTOPp->top__DOT__dut__DOT__C_temp
                                  [1U])));
        tracep->fullBit(oldp+17,(vlTOPp->top__DOT__dut__DOT__generate_Adder_Block__BRA__2__KET____DOT__fulladder__DOT__S_temp));
        tracep->fullBit(oldp+18,(vlTOPp->top__DOT__dut__DOT__C_temp
                                 [2U]));
        tracep->fullBit(oldp+19,(((IData)(vlTOPp->top__DOT__dut__DOT__generate_Adder_Block__BRA__3__KET____DOT__fulladder__DOT__S_temp) 
                                  ^ vlTOPp->top__DOT__dut__DOT__C_temp
                                  [2U])));
        tracep->fullBit(oldp+20,(((IData)(vlTOPp->top__DOT__dut__DOT__generate_Adder_Block__BRA__3__KET____DOT__fulladder__DOT__S_temp) 
                                  & vlTOPp->top__DOT__dut__DOT__C_temp
                                  [2U])));
        tracep->fullBit(oldp+21,(vlTOPp->top__DOT__dut__DOT__generate_Adder_Block__BRA__3__KET____DOT__fulladder__DOT__S_temp));
        tracep->fullBit(oldp+22,(vlTOPp->top__DOT__dut__DOT__C_temp
                                 [3U]));
        tracep->fullBit(oldp+23,(((IData)(vlTOPp->top__DOT__dut__DOT__generate_Adder_Block__BRA__4__KET____DOT__fulladder__DOT__S_temp) 
                                  ^ vlTOPp->top__DOT__dut__DOT__C_temp
                                  [3U])));
        tracep->fullBit(oldp+24,(((IData)(vlTOPp->top__DOT__dut__DOT__generate_Adder_Block__BRA__4__KET____DOT__fulladder__DOT__S_temp) 
                                  & vlTOPp->top__DOT__dut__DOT__C_temp
                                  [3U])));
        tracep->fullBit(oldp+25,(vlTOPp->top__DOT__dut__DOT__generate_Adder_Block__BRA__4__KET____DOT__fulladder__DOT__S_temp));
        tracep->fullBit(oldp+26,(vlTOPp->top__DOT__dut__DOT__C_temp
                                 [4U]));
        tracep->fullBit(oldp+27,(((IData)(vlTOPp->top__DOT__dut__DOT__generate_Adder_Block__BRA__5__KET____DOT__fulladder__DOT__S_temp) 
                                  ^ vlTOPp->top__DOT__dut__DOT__C_temp
                                  [4U])));
        tracep->fullBit(oldp+28,(((IData)(vlTOPp->top__DOT__dut__DOT__generate_Adder_Block__BRA__5__KET____DOT__fulladder__DOT__S_temp) 
                                  & vlTOPp->top__DOT__dut__DOT__C_temp
                                  [4U])));
        tracep->fullBit(oldp+29,(vlTOPp->top__DOT__dut__DOT__generate_Adder_Block__BRA__5__KET____DOT__fulladder__DOT__S_temp));
        tracep->fullBit(oldp+30,(vlTOPp->top__DOT__dut__DOT__C_temp
                                 [5U]));
        tracep->fullBit(oldp+31,(((IData)(vlTOPp->top__DOT__dut__DOT__generate_Adder_Block__BRA__6__KET____DOT__fulladder__DOT__S_temp) 
                                  ^ vlTOPp->top__DOT__dut__DOT__C_temp
                                  [5U])));
        tracep->fullBit(oldp+32,(((IData)(vlTOPp->top__DOT__dut__DOT__generate_Adder_Block__BRA__6__KET____DOT__fulladder__DOT__S_temp) 
                                  & vlTOPp->top__DOT__dut__DOT__C_temp
                                  [5U])));
        tracep->fullBit(oldp+33,(vlTOPp->top__DOT__dut__DOT__generate_Adder_Block__BRA__6__KET____DOT__fulladder__DOT__S_temp));
        tracep->fullBit(oldp+34,(vlTOPp->top__DOT__dut__DOT__C_temp
                                 [6U]));
        tracep->fullBit(oldp+35,(((IData)(vlTOPp->top__DOT__dut__DOT__generate_Adder_Block__BRA__7__KET____DOT__fulladder__DOT__S_temp) 
                                  ^ vlTOPp->top__DOT__dut__DOT__C_temp
                                  [6U])));
        tracep->fullBit(oldp+36,(((IData)(vlTOPp->top__DOT__dut__DOT__generate_Adder_Block__BRA__7__KET____DOT__fulladder__DOT__S_temp) 
                                  & vlTOPp->top__DOT__dut__DOT__C_temp
                                  [6U])));
        tracep->fullBit(oldp+37,(vlTOPp->top__DOT__dut__DOT__generate_Adder_Block__BRA__7__KET____DOT__fulladder__DOT__S_temp));
        tracep->fullCData(oldp+38,(vlTOPp->dataA_i),8);
        tracep->fullCData(oldp+39,(vlTOPp->dataB_i),8);
        tracep->fullBit(oldp+40,(vlTOPp->clk_i));
        tracep->fullBit(oldp+41,(vlTOPp->C_i));
        tracep->fullCData(oldp+42,(vlTOPp->S_o),8);
        tracep->fullBit(oldp+43,(vlTOPp->C_o));
        tracep->fullBit(oldp+44,((1U & (IData)(vlTOPp->dataA_i))));
        tracep->fullBit(oldp+45,((1U & (IData)(vlTOPp->dataB_i))));
        tracep->fullBit(oldp+46,(((IData)(vlTOPp->top__DOT__dut__DOT__fulladder_0__DOT__S_temp) 
                                  ^ (IData)(vlTOPp->C_i))));
        tracep->fullBit(oldp+47,((1U & (((IData)(vlTOPp->dataA_i) 
                                         & (IData)(vlTOPp->dataB_i)) 
                                        | ((IData)(vlTOPp->top__DOT__dut__DOT__fulladder_0__DOT__S_temp) 
                                           & (IData)(vlTOPp->C_i))))));
        tracep->fullBit(oldp+48,((1U & ((IData)(vlTOPp->dataA_i) 
                                        & (IData)(vlTOPp->dataB_i)))));
        tracep->fullBit(oldp+49,(((IData)(vlTOPp->top__DOT__dut__DOT__fulladder_0__DOT__S_temp) 
                                  & (IData)(vlTOPp->C_i))));
        tracep->fullBit(oldp+50,((1U & ((IData)(vlTOPp->dataA_i) 
                                        >> 1U))));
        tracep->fullBit(oldp+51,((1U & ((IData)(vlTOPp->dataB_i) 
                                        >> 1U))));
        tracep->fullBit(oldp+52,((1U & ((((IData)(vlTOPp->dataA_i) 
                                          & (IData)(vlTOPp->dataB_i)) 
                                         >> 1U) | ((IData)(vlTOPp->top__DOT__dut__DOT__generate_Adder_Block__BRA__1__KET____DOT__fulladder__DOT__S_temp) 
                                                   & vlTOPp->top__DOT__dut__DOT__C_temp
                                                   [0U])))));
        tracep->fullBit(oldp+53,((1U & (((IData)(vlTOPp->dataA_i) 
                                         & (IData)(vlTOPp->dataB_i)) 
                                        >> 1U))));
        tracep->fullBit(oldp+54,((1U & ((IData)(vlTOPp->dataA_i) 
                                        >> 2U))));
        tracep->fullBit(oldp+55,((1U & ((IData)(vlTOPp->dataB_i) 
                                        >> 2U))));
        tracep->fullBit(oldp+56,((1U & ((((IData)(vlTOPp->dataA_i) 
                                          & (IData)(vlTOPp->dataB_i)) 
                                         >> 2U) | ((IData)(vlTOPp->top__DOT__dut__DOT__generate_Adder_Block__BRA__2__KET____DOT__fulladder__DOT__S_temp) 
                                                   & vlTOPp->top__DOT__dut__DOT__C_temp
                                                   [1U])))));
        tracep->fullBit(oldp+57,((1U & (((IData)(vlTOPp->dataA_i) 
                                         & (IData)(vlTOPp->dataB_i)) 
                                        >> 2U))));
        tracep->fullBit(oldp+58,((1U & ((IData)(vlTOPp->dataA_i) 
                                        >> 3U))));
        tracep->fullBit(oldp+59,((1U & ((IData)(vlTOPp->dataB_i) 
                                        >> 3U))));
        tracep->fullBit(oldp+60,((1U & ((((IData)(vlTOPp->dataA_i) 
                                          & (IData)(vlTOPp->dataB_i)) 
                                         >> 3U) | ((IData)(vlTOPp->top__DOT__dut__DOT__generate_Adder_Block__BRA__3__KET____DOT__fulladder__DOT__S_temp) 
                                                   & vlTOPp->top__DOT__dut__DOT__C_temp
                                                   [2U])))));
        tracep->fullBit(oldp+61,((1U & (((IData)(vlTOPp->dataA_i) 
                                         & (IData)(vlTOPp->dataB_i)) 
                                        >> 3U))));
        tracep->fullBit(oldp+62,((1U & ((IData)(vlTOPp->dataA_i) 
                                        >> 4U))));
        tracep->fullBit(oldp+63,((1U & ((IData)(vlTOPp->dataB_i) 
                                        >> 4U))));
        tracep->fullBit(oldp+64,((1U & ((((IData)(vlTOPp->dataA_i) 
                                          & (IData)(vlTOPp->dataB_i)) 
                                         >> 4U) | ((IData)(vlTOPp->top__DOT__dut__DOT__generate_Adder_Block__BRA__4__KET____DOT__fulladder__DOT__S_temp) 
                                                   & vlTOPp->top__DOT__dut__DOT__C_temp
                                                   [3U])))));
        tracep->fullBit(oldp+65,((1U & (((IData)(vlTOPp->dataA_i) 
                                         & (IData)(vlTOPp->dataB_i)) 
                                        >> 4U))));
        tracep->fullBit(oldp+66,((1U & ((IData)(vlTOPp->dataA_i) 
                                        >> 5U))));
        tracep->fullBit(oldp+67,((1U & ((IData)(vlTOPp->dataB_i) 
                                        >> 5U))));
        tracep->fullBit(oldp+68,((1U & ((((IData)(vlTOPp->dataA_i) 
                                          & (IData)(vlTOPp->dataB_i)) 
                                         >> 5U) | ((IData)(vlTOPp->top__DOT__dut__DOT__generate_Adder_Block__BRA__5__KET____DOT__fulladder__DOT__S_temp) 
                                                   & vlTOPp->top__DOT__dut__DOT__C_temp
                                                   [4U])))));
        tracep->fullBit(oldp+69,((1U & (((IData)(vlTOPp->dataA_i) 
                                         & (IData)(vlTOPp->dataB_i)) 
                                        >> 5U))));
        tracep->fullBit(oldp+70,((1U & ((IData)(vlTOPp->dataA_i) 
                                        >> 6U))));
        tracep->fullBit(oldp+71,((1U & ((IData)(vlTOPp->dataB_i) 
                                        >> 6U))));
        tracep->fullBit(oldp+72,((1U & ((((IData)(vlTOPp->dataA_i) 
                                          & (IData)(vlTOPp->dataB_i)) 
                                         >> 6U) | ((IData)(vlTOPp->top__DOT__dut__DOT__generate_Adder_Block__BRA__6__KET____DOT__fulladder__DOT__S_temp) 
                                                   & vlTOPp->top__DOT__dut__DOT__C_temp
                                                   [5U])))));
        tracep->fullBit(oldp+73,((1U & (((IData)(vlTOPp->dataA_i) 
                                         & (IData)(vlTOPp->dataB_i)) 
                                        >> 6U))));
        tracep->fullBit(oldp+74,((1U & ((IData)(vlTOPp->dataA_i) 
                                        >> 7U))));
        tracep->fullBit(oldp+75,((1U & ((IData)(vlTOPp->dataB_i) 
                                        >> 7U))));
        tracep->fullBit(oldp+76,((1U & ((((IData)(vlTOPp->dataA_i) 
                                          & (IData)(vlTOPp->dataB_i)) 
                                         >> 7U) | ((IData)(vlTOPp->top__DOT__dut__DOT__generate_Adder_Block__BRA__7__KET____DOT__fulladder__DOT__S_temp) 
                                                   & vlTOPp->top__DOT__dut__DOT__C_temp
                                                   [6U])))));
        tracep->fullBit(oldp+77,((1U & (((IData)(vlTOPp->dataA_i) 
                                         & (IData)(vlTOPp->dataB_i)) 
                                        >> 7U))));
        tracep->fullIData(oldp+78,(8U),32);
    }
}
