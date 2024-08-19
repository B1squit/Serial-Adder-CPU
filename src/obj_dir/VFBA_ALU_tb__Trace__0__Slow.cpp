// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VFBA_ALU_tb__Syms.h"


VL_ATTR_COLD void VFBA_ALU_tb___024root__trace_init_sub__TOP__0(VFBA_ALU_tb___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    VFBA_ALU_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFBA_ALU_tb___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("FBA_ALU_tb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+29,0,"clk_half_prd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+30,0,"clk_prd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+31,0,"p_width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+20,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"load_shift",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"output_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+13,0,"ser_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"serial_in_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14,0,"ser_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"serial_in_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+15,0,"carry_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+6,0,"reg_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+7,0,"reg_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+22,0,"reg_Out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+8,0,"func_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::BIT, false,-1, 2,0);
    tracep->declBus(c+9,0,"n_shift",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->pushPrefix("A", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+31,0,"P_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+20,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"l_s",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"s_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+6,0,"p_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+13,0,"s_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+16,0,"p_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("ALU", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+20,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+13,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+8,0,"func",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+21,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+15,0,"c_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+23,0,"c_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+24,0,"b_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+25,0,"s_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+15,0,"c_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"func_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"carry_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"logic_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("FBA", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+13,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+24,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+15,0,"C_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+25,0,"Sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+23,0,"C_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+26,0,"partial_sum1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+27,0,"partial_carry1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"partial_carry2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("ALU_output", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+31,0,"P_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+20,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"oe",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"s_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+22,0,"p_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+17,0,"s_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+18,0,"p_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("B", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+31,0,"P_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+20,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"l_s",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"s_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+7,0,"p_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+14,0,"s_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+19,0,"p_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void VFBA_ALU_tb___024root__trace_init_top(VFBA_ALU_tb___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    VFBA_ALU_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFBA_ALU_tb___024root__trace_init_top\n"); );
    // Body
    VFBA_ALU_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VFBA_ALU_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void VFBA_ALU_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VFBA_ALU_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VFBA_ALU_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VFBA_ALU_tb___024root__trace_register(VFBA_ALU_tb___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    VFBA_ALU_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFBA_ALU_tb___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&VFBA_ALU_tb___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&VFBA_ALU_tb___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&VFBA_ALU_tb___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&VFBA_ALU_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VFBA_ALU_tb___024root__trace_const_0_sub_0(VFBA_ALU_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VFBA_ALU_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFBA_ALU_tb___024root__trace_const_0\n"); );
    // Init
    VFBA_ALU_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VFBA_ALU_tb___024root*>(voidSelf);
    VFBA_ALU_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VFBA_ALU_tb___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VFBA_ALU_tb___024root__trace_const_0_sub_0(VFBA_ALU_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    VFBA_ALU_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFBA_ALU_tb___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+29,(1U),32);
    bufp->fullIData(oldp+30,(2U),32);
    bufp->fullIData(oldp+31,(8U),32);
}

VL_ATTR_COLD void VFBA_ALU_tb___024root__trace_full_0_sub_0(VFBA_ALU_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VFBA_ALU_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFBA_ALU_tb___024root__trace_full_0\n"); );
    // Init
    VFBA_ALU_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VFBA_ALU_tb___024root*>(voidSelf);
    VFBA_ALU_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VFBA_ALU_tb___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VFBA_ALU_tb___024root__trace_full_0_sub_0(VFBA_ALU_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    VFBA_ALU_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFBA_ALU_tb___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->FBA_ALU_tb__DOT__rst));
    bufp->fullBit(oldp+2,(vlSelf->FBA_ALU_tb__DOT__load_shift));
    bufp->fullBit(oldp+3,(vlSelf->FBA_ALU_tb__DOT__output_enable));
    bufp->fullBit(oldp+4,(vlSelf->FBA_ALU_tb__DOT__serial_in_A));
    bufp->fullBit(oldp+5,(vlSelf->FBA_ALU_tb__DOT__serial_in_B));
    bufp->fullCData(oldp+6,(vlSelf->FBA_ALU_tb__DOT__reg_A),8);
    bufp->fullCData(oldp+7,(vlSelf->FBA_ALU_tb__DOT__reg_B),8);
    bufp->fullCData(oldp+8,(vlSelf->FBA_ALU_tb__DOT__func_sel),3);
    bufp->fullIData(oldp+9,(vlSelf->FBA_ALU_tb__DOT__n_shift),32);
    bufp->fullBit(oldp+10,((1U & ((IData)(vlSelf->FBA_ALU_tb__DOT__func_sel) 
                                  >> 2U))));
    bufp->fullBit(oldp+11,((1U & ((IData)(vlSelf->FBA_ALU_tb__DOT__func_sel) 
                                  >> 1U))));
    bufp->fullBit(oldp+12,((1U & (IData)(vlSelf->FBA_ALU_tb__DOT__func_sel))));
    bufp->fullBit(oldp+13,((1U & (IData)(vlSelf->FBA_ALU_tb__DOT__A__DOT__p_tmp))));
    bufp->fullBit(oldp+14,((1U & (IData)(vlSelf->FBA_ALU_tb__DOT__B__DOT__p_tmp))));
    bufp->fullBit(oldp+15,(vlSelf->FBA_ALU_tb__DOT__ALU__DOT__c_reg));
    bufp->fullCData(oldp+16,(vlSelf->FBA_ALU_tb__DOT__A__DOT__p_tmp),8);
    bufp->fullBit(oldp+17,(vlSelf->FBA_ALU_tb__DOT__ALU_output__DOT__s_out));
    bufp->fullCData(oldp+18,(vlSelf->FBA_ALU_tb__DOT__ALU_output__DOT__p_tmp),8);
    bufp->fullCData(oldp+19,(vlSelf->FBA_ALU_tb__DOT__B__DOT__p_tmp),8);
    bufp->fullBit(oldp+20,(vlSelf->FBA_ALU_tb__DOT__clk));
    bufp->fullBit(oldp+21,((1U & ((4U & (IData)(vlSelf->FBA_ALU_tb__DOT__func_sel))
                                   ? (IData)(vlSelf->FBA_ALU_tb__DOT__ALU__DOT__c_in)
                                   : ((IData)(vlSelf->FBA_ALU_tb__DOT__A__DOT__p_tmp) 
                                      ^ (IData)(vlSelf->FBA_ALU_tb__DOT__ALU__DOT__FBA__DOT__partial_sum1))))));
    bufp->fullCData(oldp+22,(vlSelf->FBA_ALU_tb__DOT__reg_Out),8);
    bufp->fullBit(oldp+23,(vlSelf->FBA_ALU_tb__DOT__ALU__DOT__c_in));
    bufp->fullBit(oldp+24,(vlSelf->FBA_ALU_tb__DOT__ALU__DOT__b_buffer));
    bufp->fullBit(oldp+25,((1U & ((IData)(vlSelf->FBA_ALU_tb__DOT__A__DOT__p_tmp) 
                                  ^ (IData)(vlSelf->FBA_ALU_tb__DOT__ALU__DOT__FBA__DOT__partial_sum1)))));
    bufp->fullBit(oldp+26,(vlSelf->FBA_ALU_tb__DOT__ALU__DOT__FBA__DOT__partial_sum1));
    bufp->fullBit(oldp+27,(((IData)(vlSelf->FBA_ALU_tb__DOT__ALU__DOT__b_buffer) 
                            & (IData)(vlSelf->FBA_ALU_tb__DOT__ALU__DOT__c_reg))));
    bufp->fullBit(oldp+28,(((IData)(vlSelf->FBA_ALU_tb__DOT__A__DOT__p_tmp) 
                            & (IData)(vlSelf->FBA_ALU_tb__DOT__ALU__DOT__FBA__DOT__partial_sum1))));
}
