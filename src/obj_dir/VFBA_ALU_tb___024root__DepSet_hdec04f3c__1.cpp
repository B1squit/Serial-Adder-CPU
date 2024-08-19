// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VFBA_ALU_tb.h for the primary calling header

#include "VFBA_ALU_tb__pch.h"
#include "VFBA_ALU_tb__Syms.h"
#include "VFBA_ALU_tb___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VFBA_ALU_tb___024root___dump_triggers__act(VFBA_ALU_tb___024root* vlSelf);
#endif  // VL_DEBUG

void VFBA_ALU_tb___024root___eval_triggers__act(VFBA_ALU_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VFBA_ALU_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFBA_ALU_tb___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->FBA_ALU_tb__DOT__clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__FBA_ALU_tb__DOT__clk__0))));
    vlSelf->__VactTriggered.set(1U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__Vtrigprevexpr___TOP__FBA_ALU_tb__DOT__clk__0 
        = vlSelf->FBA_ALU_tb__DOT__clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VFBA_ALU_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
