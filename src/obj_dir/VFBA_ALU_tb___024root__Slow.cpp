// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VFBA_ALU_tb.h for the primary calling header

#include "VFBA_ALU_tb__pch.h"
#include "VFBA_ALU_tb__Syms.h"
#include "VFBA_ALU_tb___024root.h"

void VFBA_ALU_tb___024root___ctor_var_reset(VFBA_ALU_tb___024root* vlSelf);

VFBA_ALU_tb___024root::VFBA_ALU_tb___024root(VFBA_ALU_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VFBA_ALU_tb___024root___ctor_var_reset(this);
}

void VFBA_ALU_tb___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VFBA_ALU_tb___024root::~VFBA_ALU_tb___024root() {
}
