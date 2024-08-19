// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VFBA_ALU_tb.h for the primary calling header

#ifndef VERILATED_VFBA_ALU_TB___024ROOT_H_
#define VERILATED_VFBA_ALU_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class VFBA_ALU_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) VFBA_ALU_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ FBA_ALU_tb__DOT__clk;
    CData/*0:0*/ FBA_ALU_tb__DOT__rst;
    CData/*0:0*/ FBA_ALU_tb__DOT__load_shift;
    CData/*0:0*/ FBA_ALU_tb__DOT__output_enable;
    CData/*0:0*/ FBA_ALU_tb__DOT__serial_in_A;
    CData/*0:0*/ FBA_ALU_tb__DOT__serial_in_B;
    CData/*7:0*/ FBA_ALU_tb__DOT__reg_A;
    CData/*7:0*/ FBA_ALU_tb__DOT__reg_B;
    CData/*7:0*/ FBA_ALU_tb__DOT__reg_Out;
    CData/*2:0*/ FBA_ALU_tb__DOT__func_sel;
    CData/*7:0*/ FBA_ALU_tb__DOT__p_out__en0;
    CData/*0:0*/ FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0;
    CData/*0:0*/ FBA_ALU_tb__DOT__ALU__DOT__c_in;
    CData/*0:0*/ FBA_ALU_tb__DOT__ALU__DOT__b_buffer;
    CData/*0:0*/ FBA_ALU_tb__DOT__ALU__DOT__c_reg;
    CData/*0:0*/ FBA_ALU_tb__DOT__ALU__DOT__FBA__DOT__partial_sum1;
    CData/*7:0*/ FBA_ALU_tb__DOT__A__DOT__p_tmp;
    CData/*7:0*/ FBA_ALU_tb__DOT__B__DOT__p_tmp;
    CData/*0:0*/ FBA_ALU_tb__DOT__ALU_output__DOT__s_out;
    CData/*7:0*/ FBA_ALU_tb__DOT__ALU_output__DOT__p_tmp;
    CData/*0:0*/ __VdlyVal__FBA_ALU_tb__DOT__clk__v0;
    CData/*0:0*/ __VdlySet__FBA_ALU_tb__DOT__clk__v0;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__FBA_ALU_tb__DOT__clk__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ FBA_ALU_tb__DOT__n_shift;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    VFBA_ALU_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    VFBA_ALU_tb___024root(VFBA_ALU_tb__Syms* symsp, const char* v__name);
    ~VFBA_ALU_tb___024root();
    VL_UNCOPYABLE(VFBA_ALU_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
