// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VFBA_ALU_tb__Syms.h"


void VFBA_ALU_tb___024root__trace_chg_0_sub_0(VFBA_ALU_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VFBA_ALU_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFBA_ALU_tb___024root__trace_chg_0\n"); );
    // Init
    VFBA_ALU_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VFBA_ALU_tb___024root*>(voidSelf);
    VFBA_ALU_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VFBA_ALU_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VFBA_ALU_tb___024root__trace_chg_0_sub_0(VFBA_ALU_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    VFBA_ALU_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFBA_ALU_tb___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+0,(vlSelf->FBA_ALU_tb__DOT__rst));
        bufp->chgBit(oldp+1,(vlSelf->FBA_ALU_tb__DOT__load_shift));
        bufp->chgBit(oldp+2,(vlSelf->FBA_ALU_tb__DOT__output_enable));
        bufp->chgBit(oldp+3,(vlSelf->FBA_ALU_tb__DOT__serial_in_A));
        bufp->chgBit(oldp+4,(vlSelf->FBA_ALU_tb__DOT__serial_in_B));
        bufp->chgCData(oldp+5,(vlSelf->FBA_ALU_tb__DOT__reg_A),8);
        bufp->chgCData(oldp+6,(vlSelf->FBA_ALU_tb__DOT__reg_B),8);
        bufp->chgCData(oldp+7,(vlSelf->FBA_ALU_tb__DOT__func_sel),3);
        bufp->chgIData(oldp+8,(vlSelf->FBA_ALU_tb__DOT__n_shift),32);
        bufp->chgBit(oldp+9,((1U & ((IData)(vlSelf->FBA_ALU_tb__DOT__func_sel) 
                                    >> 2U))));
        bufp->chgBit(oldp+10,((1U & ((IData)(vlSelf->FBA_ALU_tb__DOT__func_sel) 
                                     >> 1U))));
        bufp->chgBit(oldp+11,((1U & (IData)(vlSelf->FBA_ALU_tb__DOT__func_sel))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgBit(oldp+12,((1U & (IData)(vlSelf->FBA_ALU_tb__DOT__A__DOT__p_tmp))));
        bufp->chgBit(oldp+13,((1U & (IData)(vlSelf->FBA_ALU_tb__DOT__B__DOT__p_tmp))));
        bufp->chgBit(oldp+14,(vlSelf->FBA_ALU_tb__DOT__ALU__DOT__c_reg));
        bufp->chgCData(oldp+15,(vlSelf->FBA_ALU_tb__DOT__A__DOT__p_tmp),8);
        bufp->chgBit(oldp+16,(vlSelf->FBA_ALU_tb__DOT__ALU_output__DOT__s_out));
        bufp->chgCData(oldp+17,(vlSelf->FBA_ALU_tb__DOT__ALU_output__DOT__p_tmp),8);
        bufp->chgCData(oldp+18,(vlSelf->FBA_ALU_tb__DOT__B__DOT__p_tmp),8);
    }
    bufp->chgBit(oldp+19,(vlSelf->FBA_ALU_tb__DOT__clk));
    bufp->chgBit(oldp+20,((1U & ((4U & (IData)(vlSelf->FBA_ALU_tb__DOT__func_sel))
                                  ? (IData)(vlSelf->FBA_ALU_tb__DOT__ALU__DOT__c_in)
                                  : ((IData)(vlSelf->FBA_ALU_tb__DOT__A__DOT__p_tmp) 
                                     ^ (IData)(vlSelf->FBA_ALU_tb__DOT__ALU__DOT__FBA__DOT__partial_sum1))))));
    bufp->chgCData(oldp+21,(vlSelf->FBA_ALU_tb__DOT__reg_Out),8);
    bufp->chgBit(oldp+22,(vlSelf->FBA_ALU_tb__DOT__ALU__DOT__c_in));
    bufp->chgBit(oldp+23,(vlSelf->FBA_ALU_tb__DOT__ALU__DOT__b_buffer));
    bufp->chgBit(oldp+24,((1U & ((IData)(vlSelf->FBA_ALU_tb__DOT__A__DOT__p_tmp) 
                                 ^ (IData)(vlSelf->FBA_ALU_tb__DOT__ALU__DOT__FBA__DOT__partial_sum1)))));
    bufp->chgBit(oldp+25,(vlSelf->FBA_ALU_tb__DOT__ALU__DOT__FBA__DOT__partial_sum1));
    bufp->chgBit(oldp+26,(((IData)(vlSelf->FBA_ALU_tb__DOT__ALU__DOT__b_buffer) 
                           & (IData)(vlSelf->FBA_ALU_tb__DOT__ALU__DOT__c_reg))));
    bufp->chgBit(oldp+27,(((IData)(vlSelf->FBA_ALU_tb__DOT__A__DOT__p_tmp) 
                           & (IData)(vlSelf->FBA_ALU_tb__DOT__ALU__DOT__FBA__DOT__partial_sum1))));
}

void VFBA_ALU_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFBA_ALU_tb___024root__trace_cleanup\n"); );
    // Init
    VFBA_ALU_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VFBA_ALU_tb___024root*>(voidSelf);
    VFBA_ALU_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
