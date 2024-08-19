// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VFBA_ALU_tb.h for the primary calling header

#include "VFBA_ALU_tb__pch.h"
#include "VFBA_ALU_tb___024root.h"

VlCoroutine VFBA_ALU_tb___024root___eval_initial__TOP__Vtiming__0(VFBA_ALU_tb___024root* vlSelf);
VlCoroutine VFBA_ALU_tb___024root___eval_initial__TOP__Vtiming__1(VFBA_ALU_tb___024root* vlSelf);

void VFBA_ALU_tb___024root___eval_initial(VFBA_ALU_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VFBA_ALU_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFBA_ALU_tb___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vm_traceActivity[1U] = 1U;
    VFBA_ALU_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    VFBA_ALU_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__FBA_ALU_tb__DOT__clk__0 
        = vlSelf->FBA_ALU_tb__DOT__clk;
}

VL_INLINE_OPT VlCoroutine VFBA_ALU_tb___024root___eval_initial__TOP__Vtiming__1(VFBA_ALU_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VFBA_ALU_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFBA_ALU_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                           "FBA_ALU_tb.sv", 
                                           61);
        vlSelf->__VdlyVal__FBA_ALU_tb__DOT__clk__v0 
            = (1U & (~ (IData)(vlSelf->FBA_ALU_tb__DOT__clk)));
        vlSelf->__VdlySet__FBA_ALU_tb__DOT__clk__v0 = 1U;
    }
}

void VFBA_ALU_tb___024root___act_sequent__TOP__0(VFBA_ALU_tb___024root* vlSelf);

void VFBA_ALU_tb___024root___eval_act(VFBA_ALU_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VFBA_ALU_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFBA_ALU_tb___024root___eval_act\n"); );
    // Body
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VFBA_ALU_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void VFBA_ALU_tb___024root___act_sequent__TOP__0(VFBA_ALU_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VFBA_ALU_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFBA_ALU_tb___024root___act_sequent__TOP__0\n"); );
    // Body
    vlSelf->FBA_ALU_tb__DOT__p_out__en0 = ((IData)(vlSelf->FBA_ALU_tb__DOT__rst)
                                            ? ((IData)(vlSelf->FBA_ALU_tb__DOT__output_enable)
                                                ? 0U
                                                : 0xffU)
                                            : 0xffU);
    vlSelf->FBA_ALU_tb__DOT__ALU__DOT__b_buffer = (1U 
                                                   & ((~ 
                                                       (((IData)(vlSelf->FBA_ALU_tb__DOT__func_sel) 
                                                         >> 1U) 
                                                        & (IData)(vlSelf->FBA_ALU_tb__DOT__func_sel))) 
                                                      & (IData)(vlSelf->FBA_ALU_tb__DOT__B__DOT__p_tmp)));
    vlSelf->FBA_ALU_tb__DOT__reg_Out = ((IData)(vlSelf->FBA_ALU_tb__DOT__p_out__en0) 
                                        & (((IData)(vlSelf->FBA_ALU_tb__DOT__rst)
                                             ? ((IData)(vlSelf->FBA_ALU_tb__DOT__output_enable)
                                                 ? 0U
                                                 : (IData)(vlSelf->FBA_ALU_tb__DOT__ALU_output__DOT__p_tmp))
                                             : 0U) 
                                           & (IData)(vlSelf->FBA_ALU_tb__DOT__p_out__en0)));
    vlSelf->FBA_ALU_tb__DOT__ALU__DOT__FBA__DOT__partial_sum1 
        = ((IData)(vlSelf->FBA_ALU_tb__DOT__ALU__DOT__b_buffer) 
           ^ (IData)(vlSelf->FBA_ALU_tb__DOT__ALU__DOT__c_reg));
    vlSelf->FBA_ALU_tb__DOT__ALU__DOT__c_in = (((IData)(vlSelf->FBA_ALU_tb__DOT__ALU__DOT__b_buffer) 
                                                & (IData)(vlSelf->FBA_ALU_tb__DOT__ALU__DOT__c_reg)) 
                                               | ((IData)(vlSelf->FBA_ALU_tb__DOT__A__DOT__p_tmp) 
                                                  & (IData)(vlSelf->FBA_ALU_tb__DOT__ALU__DOT__FBA__DOT__partial_sum1)));
}

void VFBA_ALU_tb___024root___nba_sequent__TOP__0(VFBA_ALU_tb___024root* vlSelf);
void VFBA_ALU_tb___024root___nba_sequent__TOP__1(VFBA_ALU_tb___024root* vlSelf);
void VFBA_ALU_tb___024root___nba_comb__TOP__0(VFBA_ALU_tb___024root* vlSelf);

void VFBA_ALU_tb___024root___eval_nba(VFBA_ALU_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VFBA_ALU_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFBA_ALU_tb___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VFBA_ALU_tb___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VFBA_ALU_tb___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((3ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VFBA_ALU_tb___024root___nba_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void VFBA_ALU_tb___024root___nba_sequent__TOP__0(VFBA_ALU_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VFBA_ALU_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFBA_ALU_tb___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*7:0*/ __Vdly__FBA_ALU_tb__DOT__A__DOT__p_tmp;
    __Vdly__FBA_ALU_tb__DOT__A__DOT__p_tmp = 0;
    CData/*7:0*/ __Vdly__FBA_ALU_tb__DOT__ALU_output__DOT__p_tmp;
    __Vdly__FBA_ALU_tb__DOT__ALU_output__DOT__p_tmp = 0;
    // Body
    __Vdly__FBA_ALU_tb__DOT__A__DOT__p_tmp = vlSelf->FBA_ALU_tb__DOT__A__DOT__p_tmp;
    __Vdly__FBA_ALU_tb__DOT__ALU_output__DOT__p_tmp 
        = vlSelf->FBA_ALU_tb__DOT__ALU_output__DOT__p_tmp;
    if (vlSelf->FBA_ALU_tb__DOT__rst) {
        if (vlSelf->FBA_ALU_tb__DOT__load_shift) {
            __Vdly__FBA_ALU_tb__DOT__A__DOT__p_tmp 
                = (((IData)(vlSelf->FBA_ALU_tb__DOT__serial_in_A) 
                    << 7U) | (0x7fU & ((IData)(vlSelf->FBA_ALU_tb__DOT__A__DOT__p_tmp) 
                                       >> 1U)));
            vlSelf->FBA_ALU_tb__DOT__B__DOT__p_tmp 
                = (((IData)(vlSelf->FBA_ALU_tb__DOT__serial_in_B) 
                    << 7U) | (0x7fU & ((IData)(vlSelf->FBA_ALU_tb__DOT__B__DOT__p_tmp) 
                                       >> 1U)));
        } else {
            __Vdly__FBA_ALU_tb__DOT__A__DOT__p_tmp 
                = vlSelf->FBA_ALU_tb__DOT__reg_A;
            vlSelf->FBA_ALU_tb__DOT__B__DOT__p_tmp 
                = vlSelf->FBA_ALU_tb__DOT__reg_B;
        }
        __Vdly__FBA_ALU_tb__DOT__ALU_output__DOT__p_tmp 
            = ((0x80U & (((4U & (IData)(vlSelf->FBA_ALU_tb__DOT__func_sel))
                           ? (IData)(vlSelf->FBA_ALU_tb__DOT__ALU__DOT__c_in)
                           : ((IData)(vlSelf->FBA_ALU_tb__DOT__A__DOT__p_tmp) 
                              ^ (IData)(vlSelf->FBA_ALU_tb__DOT__ALU__DOT__FBA__DOT__partial_sum1))) 
                         << 7U)) | (0x7fU & ((IData)(vlSelf->FBA_ALU_tb__DOT__ALU_output__DOT__p_tmp) 
                                             >> 1U)));
        vlSelf->FBA_ALU_tb__DOT__ALU_output__DOT__s_out 
            = (1U & (IData)(vlSelf->FBA_ALU_tb__DOT__ALU_output__DOT__p_tmp));
        vlSelf->FBA_ALU_tb__DOT__ALU__DOT__c_reg = 
            (1U & (((IData)(vlSelf->FBA_ALU_tb__DOT__ALU__DOT__c_in) 
                    & ((IData)(vlSelf->FBA_ALU_tb__DOT__func_sel) 
                       >> 1U)) | (IData)(vlSelf->FBA_ALU_tb__DOT__func_sel)));
    } else {
        __Vdly__FBA_ALU_tb__DOT__A__DOT__p_tmp = 0U;
        vlSelf->FBA_ALU_tb__DOT__B__DOT__p_tmp = 0U;
        __Vdly__FBA_ALU_tb__DOT__ALU_output__DOT__p_tmp = 0U;
        vlSelf->FBA_ALU_tb__DOT__ALU_output__DOT__s_out = 0U;
        vlSelf->FBA_ALU_tb__DOT__ALU__DOT__c_reg = 0U;
    }
    vlSelf->FBA_ALU_tb__DOT__A__DOT__p_tmp = __Vdly__FBA_ALU_tb__DOT__A__DOT__p_tmp;
    vlSelf->FBA_ALU_tb__DOT__ALU_output__DOT__p_tmp 
        = __Vdly__FBA_ALU_tb__DOT__ALU_output__DOT__p_tmp;
}

VL_INLINE_OPT void VFBA_ALU_tb___024root___nba_sequent__TOP__1(VFBA_ALU_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VFBA_ALU_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFBA_ALU_tb___024root___nba_sequent__TOP__1\n"); );
    // Body
    if (vlSelf->__VdlySet__FBA_ALU_tb__DOT__clk__v0) {
        vlSelf->__VdlySet__FBA_ALU_tb__DOT__clk__v0 = 0U;
        vlSelf->FBA_ALU_tb__DOT__clk = vlSelf->__VdlyVal__FBA_ALU_tb__DOT__clk__v0;
    }
    vlSelf->FBA_ALU_tb__DOT__p_out__en0 = ((IData)(vlSelf->FBA_ALU_tb__DOT__rst)
                                            ? ((IData)(vlSelf->FBA_ALU_tb__DOT__output_enable)
                                                ? 0U
                                                : 0xffU)
                                            : 0xffU);
}

VL_INLINE_OPT void VFBA_ALU_tb___024root___nba_comb__TOP__0(VFBA_ALU_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VFBA_ALU_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFBA_ALU_tb___024root___nba_comb__TOP__0\n"); );
    // Body
    vlSelf->FBA_ALU_tb__DOT__ALU__DOT__b_buffer = (1U 
                                                   & ((~ 
                                                       (((IData)(vlSelf->FBA_ALU_tb__DOT__func_sel) 
                                                         >> 1U) 
                                                        & (IData)(vlSelf->FBA_ALU_tb__DOT__func_sel))) 
                                                      & (IData)(vlSelf->FBA_ALU_tb__DOT__B__DOT__p_tmp)));
    vlSelf->FBA_ALU_tb__DOT__reg_Out = ((IData)(vlSelf->FBA_ALU_tb__DOT__p_out__en0) 
                                        & (((IData)(vlSelf->FBA_ALU_tb__DOT__rst)
                                             ? ((IData)(vlSelf->FBA_ALU_tb__DOT__output_enable)
                                                 ? 0U
                                                 : (IData)(vlSelf->FBA_ALU_tb__DOT__ALU_output__DOT__p_tmp))
                                             : 0U) 
                                           & (IData)(vlSelf->FBA_ALU_tb__DOT__p_out__en0)));
    vlSelf->FBA_ALU_tb__DOT__ALU__DOT__FBA__DOT__partial_sum1 
        = ((IData)(vlSelf->FBA_ALU_tb__DOT__ALU__DOT__b_buffer) 
           ^ (IData)(vlSelf->FBA_ALU_tb__DOT__ALU__DOT__c_reg));
    vlSelf->FBA_ALU_tb__DOT__ALU__DOT__c_in = (((IData)(vlSelf->FBA_ALU_tb__DOT__ALU__DOT__b_buffer) 
                                                & (IData)(vlSelf->FBA_ALU_tb__DOT__ALU__DOT__c_reg)) 
                                               | ((IData)(vlSelf->FBA_ALU_tb__DOT__A__DOT__p_tmp) 
                                                  & (IData)(vlSelf->FBA_ALU_tb__DOT__ALU__DOT__FBA__DOT__partial_sum1)));
}

void VFBA_ALU_tb___024root___timing_resume(VFBA_ALU_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VFBA_ALU_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFBA_ALU_tb___024root___timing_resume\n"); );
    // Body
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void VFBA_ALU_tb___024root___eval_triggers__act(VFBA_ALU_tb___024root* vlSelf);

bool VFBA_ALU_tb___024root___eval_phase__act(VFBA_ALU_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VFBA_ALU_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFBA_ALU_tb___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VFBA_ALU_tb___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        VFBA_ALU_tb___024root___timing_resume(vlSelf);
        VFBA_ALU_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VFBA_ALU_tb___024root___eval_phase__nba(VFBA_ALU_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VFBA_ALU_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFBA_ALU_tb___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        VFBA_ALU_tb___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VFBA_ALU_tb___024root___dump_triggers__nba(VFBA_ALU_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VFBA_ALU_tb___024root___dump_triggers__act(VFBA_ALU_tb___024root* vlSelf);
#endif  // VL_DEBUG

void VFBA_ALU_tb___024root___eval(VFBA_ALU_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VFBA_ALU_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFBA_ALU_tb___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VFBA_ALU_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("FBA_ALU_tb.sv", 4, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                VFBA_ALU_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("FBA_ALU_tb.sv", 4, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (VFBA_ALU_tb___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (VFBA_ALU_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VFBA_ALU_tb___024root___eval_debug_assertions(VFBA_ALU_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VFBA_ALU_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFBA_ALU_tb___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
