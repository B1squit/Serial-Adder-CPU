// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VFBA_ALU_tb.h for the primary calling header

#include "VFBA_ALU_tb__pch.h"
#include "VFBA_ALU_tb___024root.h"

VL_ATTR_COLD void VFBA_ALU_tb___024root___eval_static(VFBA_ALU_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VFBA_ALU_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFBA_ALU_tb___024root___eval_static\n"); );
}

VL_ATTR_COLD void VFBA_ALU_tb___024root___eval_final(VFBA_ALU_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VFBA_ALU_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFBA_ALU_tb___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VFBA_ALU_tb___024root___dump_triggers__stl(VFBA_ALU_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VFBA_ALU_tb___024root___eval_phase__stl(VFBA_ALU_tb___024root* vlSelf);

VL_ATTR_COLD void VFBA_ALU_tb___024root___eval_settle(VFBA_ALU_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VFBA_ALU_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFBA_ALU_tb___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            VFBA_ALU_tb___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("FBA_ALU_tb.sv", 4, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VFBA_ALU_tb___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VFBA_ALU_tb___024root___dump_triggers__stl(VFBA_ALU_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VFBA_ALU_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFBA_ALU_tb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ vlSelf->__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void VFBA_ALU_tb___024root___act_sequent__TOP__0(VFBA_ALU_tb___024root* vlSelf);

VL_ATTR_COLD void VFBA_ALU_tb___024root___eval_stl(VFBA_ALU_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VFBA_ALU_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFBA_ALU_tb___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VFBA_ALU_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void VFBA_ALU_tb___024root___eval_triggers__stl(VFBA_ALU_tb___024root* vlSelf);

VL_ATTR_COLD bool VFBA_ALU_tb___024root___eval_phase__stl(VFBA_ALU_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VFBA_ALU_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFBA_ALU_tb___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VFBA_ALU_tb___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        VFBA_ALU_tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VFBA_ALU_tb___024root___dump_triggers__act(VFBA_ALU_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VFBA_ALU_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFBA_ALU_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ vlSelf->__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge FBA_ALU_tb.clk)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VFBA_ALU_tb___024root___dump_triggers__nba(VFBA_ALU_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VFBA_ALU_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFBA_ALU_tb___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ vlSelf->__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge FBA_ALU_tb.clk)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VFBA_ALU_tb___024root___ctor_var_reset(VFBA_ALU_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VFBA_ALU_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFBA_ALU_tb___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->FBA_ALU_tb__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->FBA_ALU_tb__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->FBA_ALU_tb__DOT__load_shift = VL_RAND_RESET_I(1);
    vlSelf->FBA_ALU_tb__DOT__output_enable = VL_RAND_RESET_I(1);
    vlSelf->FBA_ALU_tb__DOT__serial_in_A = VL_RAND_RESET_I(1);
    vlSelf->FBA_ALU_tb__DOT__serial_in_B = VL_RAND_RESET_I(1);
    vlSelf->FBA_ALU_tb__DOT__reg_A = VL_RAND_RESET_I(8);
    vlSelf->FBA_ALU_tb__DOT__reg_B = VL_RAND_RESET_I(8);
    vlSelf->FBA_ALU_tb__DOT__reg_Out = VL_RAND_RESET_I(8);
    vlSelf->FBA_ALU_tb__DOT__func_sel = 0;
    vlSelf->FBA_ALU_tb__DOT__n_shift = VL_RAND_RESET_I(32);
    vlSelf->FBA_ALU_tb__DOT__p_out__en0 = 0;
    vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 = VL_RAND_RESET_I(1);
    vlSelf->FBA_ALU_tb__DOT__ALU__DOT__c_in = VL_RAND_RESET_I(1);
    vlSelf->FBA_ALU_tb__DOT__ALU__DOT__b_buffer = VL_RAND_RESET_I(1);
    vlSelf->FBA_ALU_tb__DOT__ALU__DOT__c_reg = VL_RAND_RESET_I(1);
    vlSelf->FBA_ALU_tb__DOT__ALU__DOT__FBA__DOT__partial_sum1 = VL_RAND_RESET_I(1);
    vlSelf->FBA_ALU_tb__DOT__A__DOT__p_tmp = VL_RAND_RESET_I(8);
    vlSelf->FBA_ALU_tb__DOT__B__DOT__p_tmp = VL_RAND_RESET_I(8);
    vlSelf->FBA_ALU_tb__DOT__ALU_output__DOT__s_out = VL_RAND_RESET_I(1);
    vlSelf->FBA_ALU_tb__DOT__ALU_output__DOT__p_tmp = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__FBA_ALU_tb__DOT__clk__v0 = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__FBA_ALU_tb__DOT__clk__v0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__FBA_ALU_tb__DOT__clk__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
