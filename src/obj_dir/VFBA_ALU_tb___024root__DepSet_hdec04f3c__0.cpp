// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VFBA_ALU_tb.h for the primary calling header

#include "VFBA_ALU_tb__pch.h"
#include "VFBA_ALU_tb__Syms.h"
#include "VFBA_ALU_tb___024root.h"

VL_INLINE_OPT VlCoroutine VFBA_ALU_tb___024root___eval_initial__TOP__Vtiming__0(VFBA_ALU_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VFBA_ALU_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFBA_ALU_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Init
    IData/*31:0*/ FBA_ALU_tb__DOT____Vrepeat0;
    FBA_ALU_tb__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_FBA_ALU_tb__DOT__check__5__n;
    __Vtask_FBA_ALU_tb__DOT__check__5__n = 0;
    IData/*31:0*/ __Vtask_FBA_ALU_tb__DOT__bit_shift__6__n;
    __Vtask_FBA_ALU_tb__DOT__bit_shift__6__n = 0;
    CData/*7:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__7__Vfuncout;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__7__Vfuncout = 0;
    SData/*8:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__7__tmp;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__7__tmp = 0;
    SData/*8:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__7__tmp_and;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__7__tmp_and = 0;
    SData/*8:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__7__tmp_xor;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__7__tmp_xor = 0;
    CData/*7:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__8__Vfuncout;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__8__Vfuncout = 0;
    SData/*8:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__8__tmp;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__8__tmp = 0;
    SData/*8:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__8__tmp_and;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__8__tmp_and = 0;
    SData/*8:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__8__tmp_xor;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__8__tmp_xor = 0;
    IData/*31:0*/ __Vtask_FBA_ALU_tb__DOT__check__10__n;
    __Vtask_FBA_ALU_tb__DOT__check__10__n = 0;
    IData/*31:0*/ __Vtask_FBA_ALU_tb__DOT__bit_shift__11__n;
    __Vtask_FBA_ALU_tb__DOT__bit_shift__11__n = 0;
    CData/*7:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__12__Vfuncout;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__12__Vfuncout = 0;
    SData/*8:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__12__tmp;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__12__tmp = 0;
    SData/*8:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__12__tmp_and;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__12__tmp_and = 0;
    SData/*8:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__12__tmp_xor;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__12__tmp_xor = 0;
    CData/*7:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__13__Vfuncout;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__13__Vfuncout = 0;
    SData/*8:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__13__tmp;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__13__tmp = 0;
    SData/*8:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__13__tmp_and;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__13__tmp_and = 0;
    SData/*8:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__13__tmp_xor;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__13__tmp_xor = 0;
    IData/*31:0*/ __Vtask_FBA_ALU_tb__DOT__check__15__n;
    __Vtask_FBA_ALU_tb__DOT__check__15__n = 0;
    IData/*31:0*/ __Vtask_FBA_ALU_tb__DOT__bit_shift__16__n;
    __Vtask_FBA_ALU_tb__DOT__bit_shift__16__n = 0;
    CData/*7:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__17__Vfuncout;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__17__Vfuncout = 0;
    SData/*8:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__17__tmp;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__17__tmp = 0;
    SData/*8:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__17__tmp_and;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__17__tmp_and = 0;
    SData/*8:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__17__tmp_xor;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__17__tmp_xor = 0;
    CData/*7:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__18__Vfuncout;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__18__Vfuncout = 0;
    SData/*8:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__18__tmp;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__18__tmp = 0;
    SData/*8:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__18__tmp_and;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__18__tmp_and = 0;
    SData/*8:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__18__tmp_xor;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__18__tmp_xor = 0;
    IData/*31:0*/ __Vtask_FBA_ALU_tb__DOT__check__23__n;
    __Vtask_FBA_ALU_tb__DOT__check__23__n = 0;
    IData/*31:0*/ __Vtask_FBA_ALU_tb__DOT__bit_shift__24__n;
    __Vtask_FBA_ALU_tb__DOT__bit_shift__24__n = 0;
    CData/*7:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__25__Vfuncout;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__25__Vfuncout = 0;
    SData/*8:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__25__tmp;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__25__tmp = 0;
    SData/*8:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__25__tmp_and;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__25__tmp_and = 0;
    SData/*8:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__25__tmp_xor;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__25__tmp_xor = 0;
    CData/*7:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__26__Vfuncout;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__26__Vfuncout = 0;
    SData/*8:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__26__tmp;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__26__tmp = 0;
    SData/*8:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__26__tmp_and;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__26__tmp_and = 0;
    SData/*8:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__26__tmp_xor;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__26__tmp_xor = 0;
    IData/*31:0*/ __Vtask_FBA_ALU_tb__DOT__check__28__n;
    __Vtask_FBA_ALU_tb__DOT__check__28__n = 0;
    IData/*31:0*/ __Vtask_FBA_ALU_tb__DOT__bit_shift__29__n;
    __Vtask_FBA_ALU_tb__DOT__bit_shift__29__n = 0;
    CData/*7:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__30__Vfuncout;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__30__Vfuncout = 0;
    SData/*8:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__30__tmp;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__30__tmp = 0;
    SData/*8:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__30__tmp_and;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__30__tmp_and = 0;
    SData/*8:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__30__tmp_xor;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__30__tmp_xor = 0;
    CData/*7:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__31__Vfuncout;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__31__Vfuncout = 0;
    SData/*8:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__31__tmp;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__31__tmp = 0;
    SData/*8:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__31__tmp_and;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__31__tmp_and = 0;
    SData/*8:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__31__tmp_xor;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__31__tmp_xor = 0;
    IData/*31:0*/ __Vtask_FBA_ALU_tb__DOT__check__33__n;
    __Vtask_FBA_ALU_tb__DOT__check__33__n = 0;
    IData/*31:0*/ __Vtask_FBA_ALU_tb__DOT__bit_shift__34__n;
    __Vtask_FBA_ALU_tb__DOT__bit_shift__34__n = 0;
    CData/*7:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__35__Vfuncout;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__35__Vfuncout = 0;
    SData/*8:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__35__tmp;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__35__tmp = 0;
    SData/*8:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__35__tmp_and;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__35__tmp_and = 0;
    SData/*8:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__35__tmp_xor;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__35__tmp_xor = 0;
    CData/*7:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__36__Vfuncout;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__36__Vfuncout = 0;
    SData/*8:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__36__tmp;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__36__tmp = 0;
    SData/*8:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__36__tmp_and;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__36__tmp_and = 0;
    SData/*8:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__36__tmp_xor;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__36__tmp_xor = 0;
    IData/*31:0*/ __Vtask_FBA_ALU_tb__DOT__check__41__n;
    __Vtask_FBA_ALU_tb__DOT__check__41__n = 0;
    IData/*31:0*/ __Vtask_FBA_ALU_tb__DOT__bit_shift__42__n;
    __Vtask_FBA_ALU_tb__DOT__bit_shift__42__n = 0;
    CData/*7:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__43__Vfuncout;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__43__Vfuncout = 0;
    SData/*8:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__43__tmp;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__43__tmp = 0;
    SData/*8:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__43__tmp_and;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__43__tmp_and = 0;
    SData/*8:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__43__tmp_xor;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__43__tmp_xor = 0;
    CData/*7:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__44__Vfuncout;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__44__Vfuncout = 0;
    SData/*8:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__44__tmp;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__44__tmp = 0;
    SData/*8:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__44__tmp_and;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__44__tmp_and = 0;
    SData/*8:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__44__tmp_xor;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__44__tmp_xor = 0;
    IData/*31:0*/ __Vtask_FBA_ALU_tb__DOT__check__46__n;
    __Vtask_FBA_ALU_tb__DOT__check__46__n = 0;
    IData/*31:0*/ __Vtask_FBA_ALU_tb__DOT__bit_shift__47__n;
    __Vtask_FBA_ALU_tb__DOT__bit_shift__47__n = 0;
    CData/*7:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__48__Vfuncout;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__48__Vfuncout = 0;
    SData/*8:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__48__tmp;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__48__tmp = 0;
    SData/*8:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__48__tmp_and;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__48__tmp_and = 0;
    SData/*8:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__48__tmp_xor;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__48__tmp_xor = 0;
    CData/*7:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__49__Vfuncout;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__49__Vfuncout = 0;
    SData/*8:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__49__tmp;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__49__tmp = 0;
    SData/*8:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__49__tmp_and;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__49__tmp_and = 0;
    SData/*8:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__49__tmp_xor;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__49__tmp_xor = 0;
    IData/*31:0*/ __Vtask_FBA_ALU_tb__DOT__check__51__n;
    __Vtask_FBA_ALU_tb__DOT__check__51__n = 0;
    IData/*31:0*/ __Vtask_FBA_ALU_tb__DOT__bit_shift__52__n;
    __Vtask_FBA_ALU_tb__DOT__bit_shift__52__n = 0;
    CData/*7:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__53__Vfuncout;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__53__Vfuncout = 0;
    SData/*8:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__53__tmp;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__53__tmp = 0;
    SData/*8:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__53__tmp_and;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__53__tmp_and = 0;
    SData/*8:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__53__tmp_xor;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__53__tmp_xor = 0;
    CData/*7:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__54__Vfuncout;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__54__Vfuncout = 0;
    SData/*8:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__54__tmp;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__54__tmp = 0;
    SData/*8:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__54__tmp_and;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__54__tmp_and = 0;
    SData/*8:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__54__tmp_xor;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__54__tmp_xor = 0;
    IData/*31:0*/ __Vtask_FBA_ALU_tb__DOT__check__59__n;
    __Vtask_FBA_ALU_tb__DOT__check__59__n = 0;
    IData/*31:0*/ __Vtask_FBA_ALU_tb__DOT__bit_shift__60__n;
    __Vtask_FBA_ALU_tb__DOT__bit_shift__60__n = 0;
    CData/*7:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__61__Vfuncout;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__61__Vfuncout = 0;
    SData/*8:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__61__tmp;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__61__tmp = 0;
    SData/*8:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__61__tmp_and;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__61__tmp_and = 0;
    SData/*8:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__61__tmp_xor;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__61__tmp_xor = 0;
    CData/*7:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__62__Vfuncout;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__62__Vfuncout = 0;
    SData/*8:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__62__tmp;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__62__tmp = 0;
    SData/*8:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__62__tmp_and;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__62__tmp_and = 0;
    SData/*8:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__62__tmp_xor;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__62__tmp_xor = 0;
    IData/*31:0*/ __Vtask_FBA_ALU_tb__DOT__check__64__n;
    __Vtask_FBA_ALU_tb__DOT__check__64__n = 0;
    IData/*31:0*/ __Vtask_FBA_ALU_tb__DOT__bit_shift__65__n;
    __Vtask_FBA_ALU_tb__DOT__bit_shift__65__n = 0;
    CData/*7:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__66__Vfuncout;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__66__Vfuncout = 0;
    SData/*8:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__66__tmp;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__66__tmp = 0;
    SData/*8:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__66__tmp_and;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__66__tmp_and = 0;
    SData/*8:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__66__tmp_xor;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__66__tmp_xor = 0;
    CData/*7:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__67__Vfuncout;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__67__Vfuncout = 0;
    SData/*8:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__67__tmp;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__67__tmp = 0;
    SData/*8:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__67__tmp_and;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__67__tmp_and = 0;
    SData/*8:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__67__tmp_xor;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__67__tmp_xor = 0;
    IData/*31:0*/ __Vtask_FBA_ALU_tb__DOT__check__69__n;
    __Vtask_FBA_ALU_tb__DOT__check__69__n = 0;
    IData/*31:0*/ __Vtask_FBA_ALU_tb__DOT__bit_shift__70__n;
    __Vtask_FBA_ALU_tb__DOT__bit_shift__70__n = 0;
    CData/*7:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__71__Vfuncout;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__71__Vfuncout = 0;
    SData/*8:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__71__tmp;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__71__tmp = 0;
    SData/*8:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__71__tmp_and;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__71__tmp_and = 0;
    SData/*8:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__71__tmp_xor;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__71__tmp_xor = 0;
    CData/*7:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__72__Vfuncout;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__72__Vfuncout = 0;
    SData/*8:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__72__tmp;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__72__tmp = 0;
    SData/*8:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__72__tmp_and;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__72__tmp_and = 0;
    SData/*8:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__72__tmp_xor;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__72__tmp_xor = 0;
    IData/*31:0*/ __Vtask_FBA_ALU_tb__DOT__check__77__n;
    __Vtask_FBA_ALU_tb__DOT__check__77__n = 0;
    IData/*31:0*/ __Vtask_FBA_ALU_tb__DOT__bit_shift__78__n;
    __Vtask_FBA_ALU_tb__DOT__bit_shift__78__n = 0;
    CData/*7:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__79__Vfuncout;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__79__Vfuncout = 0;
    SData/*8:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__79__tmp;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__79__tmp = 0;
    SData/*8:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__79__tmp_and;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__79__tmp_and = 0;
    SData/*8:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__79__tmp_xor;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__79__tmp_xor = 0;
    CData/*7:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__80__Vfuncout;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__80__Vfuncout = 0;
    SData/*8:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__80__tmp;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__80__tmp = 0;
    SData/*8:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__80__tmp_and;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__80__tmp_and = 0;
    SData/*8:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__80__tmp_xor;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__80__tmp_xor = 0;
    IData/*31:0*/ __Vtask_FBA_ALU_tb__DOT__check__82__n;
    __Vtask_FBA_ALU_tb__DOT__check__82__n = 0;
    IData/*31:0*/ __Vtask_FBA_ALU_tb__DOT__bit_shift__83__n;
    __Vtask_FBA_ALU_tb__DOT__bit_shift__83__n = 0;
    CData/*7:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__84__Vfuncout;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__84__Vfuncout = 0;
    SData/*8:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__84__tmp;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__84__tmp = 0;
    SData/*8:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__84__tmp_and;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__84__tmp_and = 0;
    SData/*8:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__84__tmp_xor;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__84__tmp_xor = 0;
    CData/*7:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__85__Vfuncout;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__85__Vfuncout = 0;
    SData/*8:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__85__tmp;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__85__tmp = 0;
    SData/*8:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__85__tmp_and;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__85__tmp_and = 0;
    SData/*8:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__85__tmp_xor;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__85__tmp_xor = 0;
    IData/*31:0*/ __Vtask_FBA_ALU_tb__DOT__check__87__n;
    __Vtask_FBA_ALU_tb__DOT__check__87__n = 0;
    IData/*31:0*/ __Vtask_FBA_ALU_tb__DOT__bit_shift__88__n;
    __Vtask_FBA_ALU_tb__DOT__bit_shift__88__n = 0;
    CData/*7:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__89__Vfuncout;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__89__Vfuncout = 0;
    SData/*8:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__89__tmp;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__89__tmp = 0;
    SData/*8:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__89__tmp_and;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__89__tmp_and = 0;
    SData/*8:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__89__tmp_xor;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__89__tmp_xor = 0;
    CData/*7:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__90__Vfuncout;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__90__Vfuncout = 0;
    SData/*8:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__90__tmp;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__90__tmp = 0;
    SData/*8:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__90__tmp_and;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__90__tmp_and = 0;
    SData/*8:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__90__tmp_xor;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__90__tmp_xor = 0;
    IData/*31:0*/ __Vtask_FBA_ALU_tb__DOT__check__95__n;
    __Vtask_FBA_ALU_tb__DOT__check__95__n = 0;
    IData/*31:0*/ __Vtask_FBA_ALU_tb__DOT__bit_shift__96__n;
    __Vtask_FBA_ALU_tb__DOT__bit_shift__96__n = 0;
    CData/*7:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__97__Vfuncout;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__97__Vfuncout = 0;
    SData/*8:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__97__tmp;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__97__tmp = 0;
    SData/*8:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__97__tmp_and;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__97__tmp_and = 0;
    SData/*8:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__97__tmp_xor;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__97__tmp_xor = 0;
    CData/*7:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__98__Vfuncout;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__98__Vfuncout = 0;
    SData/*8:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__98__tmp;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__98__tmp = 0;
    SData/*8:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__98__tmp_and;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__98__tmp_and = 0;
    SData/*8:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__98__tmp_xor;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__98__tmp_xor = 0;
    IData/*31:0*/ __Vtask_FBA_ALU_tb__DOT__check__100__n;
    __Vtask_FBA_ALU_tb__DOT__check__100__n = 0;
    IData/*31:0*/ __Vtask_FBA_ALU_tb__DOT__bit_shift__101__n;
    __Vtask_FBA_ALU_tb__DOT__bit_shift__101__n = 0;
    CData/*7:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__102__Vfuncout;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__102__Vfuncout = 0;
    SData/*8:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__102__tmp;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__102__tmp = 0;
    SData/*8:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__102__tmp_and;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__102__tmp_and = 0;
    SData/*8:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__102__tmp_xor;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__102__tmp_xor = 0;
    CData/*7:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__103__Vfuncout;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__103__Vfuncout = 0;
    SData/*8:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__103__tmp;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__103__tmp = 0;
    SData/*8:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__103__tmp_and;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__103__tmp_and = 0;
    SData/*8:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__103__tmp_xor;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__103__tmp_xor = 0;
    IData/*31:0*/ __Vtask_FBA_ALU_tb__DOT__check__105__n;
    __Vtask_FBA_ALU_tb__DOT__check__105__n = 0;
    IData/*31:0*/ __Vtask_FBA_ALU_tb__DOT__bit_shift__106__n;
    __Vtask_FBA_ALU_tb__DOT__bit_shift__106__n = 0;
    CData/*7:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__107__Vfuncout;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__107__Vfuncout = 0;
    SData/*8:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__107__tmp;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__107__tmp = 0;
    SData/*8:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__107__tmp_and;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__107__tmp_and = 0;
    SData/*8:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__107__tmp_xor;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__107__tmp_xor = 0;
    CData/*7:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__108__Vfuncout;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__108__Vfuncout = 0;
    SData/*8:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__108__tmp;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__108__tmp = 0;
    SData/*8:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__108__tmp_and;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__108__tmp_and = 0;
    SData/*8:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__108__tmp_xor;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__108__tmp_xor = 0;
    IData/*31:0*/ __Vtask_FBA_ALU_tb__DOT__check__113__n;
    __Vtask_FBA_ALU_tb__DOT__check__113__n = 0;
    IData/*31:0*/ __Vtask_FBA_ALU_tb__DOT__bit_shift__114__n;
    __Vtask_FBA_ALU_tb__DOT__bit_shift__114__n = 0;
    CData/*7:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__115__Vfuncout;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__115__Vfuncout = 0;
    SData/*8:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__115__tmp;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__115__tmp = 0;
    SData/*8:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__115__tmp_and;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__115__tmp_and = 0;
    SData/*8:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__115__tmp_xor;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__115__tmp_xor = 0;
    CData/*7:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__116__Vfuncout;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__116__Vfuncout = 0;
    SData/*8:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__116__tmp;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__116__tmp = 0;
    SData/*8:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__116__tmp_and;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__116__tmp_and = 0;
    SData/*8:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__116__tmp_xor;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__116__tmp_xor = 0;
    IData/*31:0*/ __Vtask_FBA_ALU_tb__DOT__check__118__n;
    __Vtask_FBA_ALU_tb__DOT__check__118__n = 0;
    IData/*31:0*/ __Vtask_FBA_ALU_tb__DOT__bit_shift__119__n;
    __Vtask_FBA_ALU_tb__DOT__bit_shift__119__n = 0;
    CData/*7:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__120__Vfuncout;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__120__Vfuncout = 0;
    SData/*8:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__120__tmp;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__120__tmp = 0;
    SData/*8:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__120__tmp_and;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__120__tmp_and = 0;
    SData/*8:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__120__tmp_xor;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__120__tmp_xor = 0;
    CData/*7:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__121__Vfuncout;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__121__Vfuncout = 0;
    SData/*8:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__121__tmp;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__121__tmp = 0;
    SData/*8:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__121__tmp_and;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__121__tmp_and = 0;
    SData/*8:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__121__tmp_xor;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__121__tmp_xor = 0;
    IData/*31:0*/ __Vtask_FBA_ALU_tb__DOT__check__123__n;
    __Vtask_FBA_ALU_tb__DOT__check__123__n = 0;
    IData/*31:0*/ __Vtask_FBA_ALU_tb__DOT__bit_shift__124__n;
    __Vtask_FBA_ALU_tb__DOT__bit_shift__124__n = 0;
    CData/*7:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__125__Vfuncout;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__125__Vfuncout = 0;
    SData/*8:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__125__tmp;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__125__tmp = 0;
    SData/*8:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__125__tmp_and;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__125__tmp_and = 0;
    SData/*8:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__125__tmp_xor;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__125__tmp_xor = 0;
    CData/*7:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__126__Vfuncout;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__126__Vfuncout = 0;
    SData/*8:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__126__tmp;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__126__tmp = 0;
    SData/*8:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__126__tmp_and;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__126__tmp_and = 0;
    SData/*8:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__126__tmp_xor;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__126__tmp_xor = 0;
    IData/*31:0*/ __Vtask_FBA_ALU_tb__DOT__check__131__n;
    __Vtask_FBA_ALU_tb__DOT__check__131__n = 0;
    IData/*31:0*/ __Vtask_FBA_ALU_tb__DOT__bit_shift__132__n;
    __Vtask_FBA_ALU_tb__DOT__bit_shift__132__n = 0;
    CData/*7:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__133__Vfuncout;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__133__Vfuncout = 0;
    SData/*8:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__133__tmp;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__133__tmp = 0;
    SData/*8:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__133__tmp_and;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__133__tmp_and = 0;
    SData/*8:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__133__tmp_xor;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__133__tmp_xor = 0;
    CData/*7:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__134__Vfuncout;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__134__Vfuncout = 0;
    SData/*8:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__134__tmp;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__134__tmp = 0;
    SData/*8:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__134__tmp_and;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__134__tmp_and = 0;
    SData/*8:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__134__tmp_xor;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__134__tmp_xor = 0;
    IData/*31:0*/ __Vtask_FBA_ALU_tb__DOT__check__137__n;
    __Vtask_FBA_ALU_tb__DOT__check__137__n = 0;
    IData/*31:0*/ __Vtask_FBA_ALU_tb__DOT__bit_shift__138__n;
    __Vtask_FBA_ALU_tb__DOT__bit_shift__138__n = 0;
    CData/*7:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__139__Vfuncout;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__139__Vfuncout = 0;
    SData/*8:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__139__tmp;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__139__tmp = 0;
    SData/*8:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__139__tmp_and;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__139__tmp_and = 0;
    SData/*8:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__139__tmp_xor;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__139__tmp_xor = 0;
    CData/*7:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__140__Vfuncout;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__140__Vfuncout = 0;
    SData/*8:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__140__tmp;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__140__tmp = 0;
    SData/*8:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__140__tmp_and;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__140__tmp_and = 0;
    SData/*8:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__140__tmp_xor;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__140__tmp_xor = 0;
    IData/*31:0*/ __Vtask_FBA_ALU_tb__DOT__check__143__n;
    __Vtask_FBA_ALU_tb__DOT__check__143__n = 0;
    IData/*31:0*/ __Vtask_FBA_ALU_tb__DOT__bit_shift__144__n;
    __Vtask_FBA_ALU_tb__DOT__bit_shift__144__n = 0;
    CData/*7:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__145__Vfuncout;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__145__Vfuncout = 0;
    SData/*8:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__145__tmp;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__145__tmp = 0;
    SData/*8:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__145__tmp_and;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__145__tmp_and = 0;
    SData/*8:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__145__tmp_xor;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__145__tmp_xor = 0;
    CData/*7:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__146__Vfuncout;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__146__Vfuncout = 0;
    SData/*8:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__146__tmp;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__146__tmp = 0;
    SData/*8:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__146__tmp_and;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__146__tmp_and = 0;
    SData/*8:0*/ __Vfunc_FBA_ALU_tb__DOT__compt_carries__146__tmp_xor;
    __Vfunc_FBA_ALU_tb__DOT__compt_carries__146__tmp_xor = 0;
    // Body
    vlSymsp->_vm_contextp__->dumpfile(std::string{"test.vcd"});
    vlSymsp->_traceDumpOpen();
    vlSelf->FBA_ALU_tb__DOT__clk = 0U;
    vlSelf->FBA_ALU_tb__DOT__rst = 0U;
    vlSelf->FBA_ALU_tb__DOT__load_shift = 0U;
    vlSelf->FBA_ALU_tb__DOT__output_enable = 0U;
    vlSelf->FBA_ALU_tb__DOT__serial_in_A = 0U;
    vlSelf->FBA_ALU_tb__DOT__serial_in_B = 0U;
    vlSelf->FBA_ALU_tb__DOT__reg_A = 0U;
    vlSelf->FBA_ALU_tb__DOT__reg_B = 0U;
    vlSelf->FBA_ALU_tb__DOT__reg_Out = 0U;
    vlSelf->FBA_ALU_tb__DOT__func_sel = 0U;
    co_await vlSelf->__VdlySched.delay(2ULL, nullptr, 
                                       "FBA_ALU_tb.sv", 
                                       57);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->FBA_ALU_tb__DOT__rst = 1U;
    VL_WRITEF_NX("====================\n\n",0);
    vlSelf->FBA_ALU_tb__DOT__reg_A = 0U;
    vlSelf->FBA_ALU_tb__DOT__reg_B = 0U;
    vlSelf->FBA_ALU_tb__DOT__reg_Out = 0U;
    vlSelf->FBA_ALU_tb__DOT__rst = 0U;
    co_await vlSelf->__VdlySched.delay(2ULL, nullptr, 
                                       "FBA_ALU_tb.sv", 
                                       70);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->FBA_ALU_tb__DOT__rst = 1U;
    vlSelf->FBA_ALU_tb__DOT__func_sel = 0U;
    vlSelf->FBA_ALU_tb__DOT__load_shift = 0U;
    vlSelf->FBA_ALU_tb__DOT__reg_A = 0U;
    vlSelf->FBA_ALU_tb__DOT__reg_B = 0U;
    co_await vlSelf->__VdlySched.delay(2ULL, nullptr, 
                                       "FBA_ALU_tb.sv", 
                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_FBA_ALU_tb__DOT__check__5__n = 8U;
    __Vtask_FBA_ALU_tb__DOT__bit_shift__6__n = __Vtask_FBA_ALU_tb__DOT__check__5__n;
    vlSelf->FBA_ALU_tb__DOT__load_shift = 1U;
    FBA_ALU_tb__DOT____Vrepeat0 = __Vtask_FBA_ALU_tb__DOT__bit_shift__6__n;
    while (VL_LTS_III(32, 0U, FBA_ALU_tb__DOT____Vrepeat0)) {
        co_await vlSelf->__VdlySched.delay(2ULL, nullptr, 
                                           "FBA_ALU_tb.sv", 
                                           180);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        FBA_ALU_tb__DOT____Vrepeat0 = (FBA_ALU_tb__DOT____Vrepeat0 
                                       - (IData)(1U));
    }
    if ((4U & (IData)(vlSelf->FBA_ALU_tb__DOT__func_sel))) {
        if ((2U & (IData)(vlSelf->FBA_ALU_tb__DOT__func_sel))) {
            if ((1U & (IData)(vlSelf->FBA_ALU_tb__DOT__func_sel))) {
                if (VL_UNLIKELY(((0xffU & (VL_LTS_III(32, 8U, __Vtask_FBA_ALU_tb__DOT__check__5__n)
                                            ? VL_SHIFTR_III(8,8,32, (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A), 
                                                            (__Vtask_FBA_ALU_tb__DOT__check__5__n 
                                                             - (IData)(8U)))
                                            : VL_SHIFTL_III(8,8,32, (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A), 
                                                            ((IData)(8U) 
                                                             - __Vtask_FBA_ALU_tb__DOT__check__5__n)))) 
                                 != (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out)))) {
                    VL_WRITEF_NX("A shifted %b\n[%0t] %%Error: FBA_ALU_tb.sv:231: Assertion failed in %NFBA_ALU_tb.check: Error, Buffer failed A: %b, Out: %b, N shift: %11d\n",0,
                                 8,(0xffU & (VL_LTS_III(32, 8U, __Vtask_FBA_ALU_tb__DOT__check__5__n)
                                              ? VL_SHIFTR_III(8,8,32, (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A), 
                                                              (__Vtask_FBA_ALU_tb__DOT__check__5__n 
                                                               - (IData)(8U)))
                                              : VL_SHIFTL_III(8,8,32, (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A), 
                                                              ((IData)(8U) 
                                                               - __Vtask_FBA_ALU_tb__DOT__check__5__n)))),
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                                 8,vlSelf->FBA_ALU_tb__DOT__reg_Out,
                                 32,__Vtask_FBA_ALU_tb__DOT__check__5__n);
                    VL_STOP_MT("FBA_ALU_tb.sv", 231, "");
                }
            } else if (VL_UNLIKELY((([&]() {
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__7__tmp = 0U;
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__7__tmp_and 
                                    = (((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                                        & (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)) 
                                       << 1U);
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__7__tmp_xor 
                                    = (((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                                        ^ (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)) 
                                       << 1U);
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__7__tmp_and) 
                                              >> 1U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__7__tmp_xor) 
                                                 >> 1U) 
                                                & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__7__tmp))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__7__tmp 
                                    = ((0x1fdU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__7__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 1U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__7__tmp_and) 
                                              >> 2U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__7__tmp_xor) 
                                                 >> 2U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__7__tmp) 
                                                   >> 1U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__7__tmp 
                                    = ((0x1fbU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__7__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 2U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__7__tmp_and) 
                                              >> 3U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__7__tmp_xor) 
                                                 >> 3U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__7__tmp) 
                                                   >> 2U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__7__tmp 
                                    = ((0x1f7U & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__7__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 3U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__7__tmp_and) 
                                              >> 4U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__7__tmp_xor) 
                                                 >> 4U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__7__tmp) 
                                                   >> 3U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__7__tmp 
                                    = ((0x1efU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__7__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 4U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__7__tmp_and) 
                                              >> 5U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__7__tmp_xor) 
                                                 >> 5U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__7__tmp) 
                                                   >> 4U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__7__tmp 
                                    = ((0x1dfU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__7__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 5U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__7__tmp_and) 
                                              >> 6U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__7__tmp_xor) 
                                                 >> 6U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__7__tmp) 
                                                   >> 5U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__7__tmp 
                                    = ((0x1bfU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__7__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 6U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__7__tmp_and) 
                                              >> 7U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__7__tmp_xor) 
                                                 >> 7U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__7__tmp) 
                                                   >> 6U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__7__tmp 
                                    = ((0x17fU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__7__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 7U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__7__tmp_and) 
                                              >> 8U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__7__tmp_xor) 
                                                 >> 8U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__7__tmp) 
                                                   >> 7U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__7__tmp 
                                    = ((0xffU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__7__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 8U));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__7__Vfuncout 
                                    = (0xffU & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__7__tmp) 
                                                >> 1U));
                            }(), (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__7__Vfuncout)) 
                                    != (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out)))) {
                VL_WRITEF_NX("Computed carries: %b\n",0,
                             8,([&]() {
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__8__tmp = 0U;
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__8__tmp_and 
                                    = (((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                                        & (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)) 
                                       << 1U);
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__8__tmp_xor 
                                    = (((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                                        ^ (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)) 
                                       << 1U);
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__8__tmp_and) 
                                              >> 1U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__8__tmp_xor) 
                                                 >> 1U) 
                                                & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__8__tmp))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__8__tmp 
                                    = ((0x1fdU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__8__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 1U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__8__tmp_and) 
                                              >> 2U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__8__tmp_xor) 
                                                 >> 2U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__8__tmp) 
                                                   >> 1U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__8__tmp 
                                    = ((0x1fbU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__8__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 2U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__8__tmp_and) 
                                              >> 3U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__8__tmp_xor) 
                                                 >> 3U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__8__tmp) 
                                                   >> 2U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__8__tmp 
                                    = ((0x1f7U & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__8__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 3U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__8__tmp_and) 
                                              >> 4U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__8__tmp_xor) 
                                                 >> 4U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__8__tmp) 
                                                   >> 3U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__8__tmp 
                                    = ((0x1efU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__8__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 4U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__8__tmp_and) 
                                              >> 5U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__8__tmp_xor) 
                                                 >> 5U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__8__tmp) 
                                                   >> 4U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__8__tmp 
                                    = ((0x1dfU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__8__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 5U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__8__tmp_and) 
                                              >> 6U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__8__tmp_xor) 
                                                 >> 6U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__8__tmp) 
                                                   >> 5U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__8__tmp 
                                    = ((0x1bfU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__8__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 6U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__8__tmp_and) 
                                              >> 7U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__8__tmp_xor) 
                                                 >> 7U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__8__tmp) 
                                                   >> 6U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__8__tmp 
                                    = ((0x17fU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__8__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 7U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__8__tmp_and) 
                                              >> 8U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__8__tmp_xor) 
                                                 >> 8U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__8__tmp) 
                                                   >> 7U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__8__tmp 
                                    = ((0xffU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__8__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 8U));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__8__Vfuncout 
                                    = (0xffU & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__8__tmp) 
                                                >> 1U));
                            }(), (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__8__Vfuncout)));
                VL_WRITEF_NX("[%0t] %%Error: FBA_ALU_tb.sv:226: Assertion failed in %NFBA_ALU_tb.check: Error, Carry failed A: %b, B: %b, Out: %b\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),8,
                             (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                             8,vlSelf->FBA_ALU_tb__DOT__reg_B,
                             8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out));
                VL_STOP_MT("FBA_ALU_tb.sv", 226, "");
            }
        } else if ((1U & (IData)(vlSelf->FBA_ALU_tb__DOT__func_sel))) {
            if (VL_UNLIKELY((((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                              | (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)) 
                             != (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out)))) {
                VL_WRITEF_NX("[%0t] %%Error: FBA_ALU_tb.sv:222: Assertion failed in %NFBA_ALU_tb.check: Error, Or failed A: %b, B: %b, Out: %b\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),8,
                             (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                             8,vlSelf->FBA_ALU_tb__DOT__reg_B,
                             8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out));
                VL_STOP_MT("FBA_ALU_tb.sv", 222, "");
            }
        } else if (VL_UNLIKELY((((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                                 & (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)) 
                                != (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out)))) {
            VL_WRITEF_NX("[%0t] %%Error: FBA_ALU_tb.sv:219: Assertion failed in %NFBA_ALU_tb.check: Error, And failed A: %b, B: %b, Out: %b\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                         8,vlSelf->FBA_ALU_tb__DOT__reg_B,
                         8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out));
            VL_STOP_MT("FBA_ALU_tb.sv", 219, "");
        }
    } else if ((2U & (IData)(vlSelf->FBA_ALU_tb__DOT__func_sel))) {
        if ((1U & (IData)(vlSelf->FBA_ALU_tb__DOT__func_sel))) {
            if (VL_UNLIKELY(((0xffU & (~ (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A))) 
                             != (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out)))) {
                VL_WRITEF_NX("[%0t] %%Error: FBA_ALU_tb.sv:216: Assertion failed in %NFBA_ALU_tb.check: Error, Not failed A: %b, Out: %b\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),8,
                             (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                             8,vlSelf->FBA_ALU_tb__DOT__reg_Out);
                VL_STOP_MT("FBA_ALU_tb.sv", 216, "");
            }
        } else if (VL_UNLIKELY(((0x1ffU & ((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                                           + (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B))) 
                                != (((IData)(vlSelf->FBA_ALU_tb__DOT__ALU__DOT__c_reg) 
                                     << 8U) | (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out))))) {
            VL_WRITEF_NX("[%0t] %%Error: FBA_ALU_tb.sv:213: Assertion failed in %NFBA_ALU_tb.check: Error, Addition failed A: %b, B: %b, Out: c%b %b\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                         8,vlSelf->FBA_ALU_tb__DOT__reg_B,
                         1,(IData)(vlSelf->FBA_ALU_tb__DOT__ALU__DOT__c_reg),
                         8,vlSelf->FBA_ALU_tb__DOT__reg_Out);
            VL_STOP_MT("FBA_ALU_tb.sv", 213, "");
        }
    } else if ((1U & (IData)(vlSelf->FBA_ALU_tb__DOT__func_sel))) {
        if (VL_UNLIKELY(((0xffU & (~ ((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                                      ^ (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)))) 
                         != (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out)))) {
            VL_WRITEF_NX("[%0t] %%Error: FBA_ALU_tb.sv:210: Assertion failed in %NFBA_ALU_tb.check: Error, Xnor failed A: %b, B: %b, Out: %b\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                         8,vlSelf->FBA_ALU_tb__DOT__reg_B,
                         8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out));
            VL_STOP_MT("FBA_ALU_tb.sv", 210, "");
        }
    } else if (VL_UNLIKELY((((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                             ^ (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)) 
                            != (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out)))) {
        VL_WRITEF_NX("[%0t] %%Error: FBA_ALU_tb.sv:207: Assertion failed in %NFBA_ALU_tb.check: Error, Xor failed A: %b, B: %b, Out: %b\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                     8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                     8,vlSelf->FBA_ALU_tb__DOT__reg_B,
                     8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out));
        VL_STOP_MT("FBA_ALU_tb.sv", 207, "");
    }
    vlSelf->FBA_ALU_tb__DOT__load_shift = 0U;
    vlSelf->FBA_ALU_tb__DOT__reg_A = 0xffU;
    vlSelf->FBA_ALU_tb__DOT__reg_B = 0xffU;
    co_await vlSelf->__VdlySched.delay(2ULL, nullptr, 
                                       "FBA_ALU_tb.sv", 
                                       86);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_FBA_ALU_tb__DOT__check__10__n = 8U;
    __Vtask_FBA_ALU_tb__DOT__bit_shift__11__n = __Vtask_FBA_ALU_tb__DOT__check__10__n;
    vlSelf->FBA_ALU_tb__DOT__load_shift = 1U;
    FBA_ALU_tb__DOT____Vrepeat0 = __Vtask_FBA_ALU_tb__DOT__bit_shift__11__n;
    while (VL_LTS_III(32, 0U, FBA_ALU_tb__DOT____Vrepeat0)) {
        co_await vlSelf->__VdlySched.delay(2ULL, nullptr, 
                                           "FBA_ALU_tb.sv", 
                                           180);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        FBA_ALU_tb__DOT____Vrepeat0 = (FBA_ALU_tb__DOT____Vrepeat0 
                                       - (IData)(1U));
    }
    if ((4U & (IData)(vlSelf->FBA_ALU_tb__DOT__func_sel))) {
        if ((2U & (IData)(vlSelf->FBA_ALU_tb__DOT__func_sel))) {
            if ((1U & (IData)(vlSelf->FBA_ALU_tb__DOT__func_sel))) {
                if (VL_UNLIKELY(((0xffU & (VL_LTS_III(32, 8U, __Vtask_FBA_ALU_tb__DOT__check__10__n)
                                            ? VL_SHIFTR_III(8,8,32, (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A), 
                                                            (__Vtask_FBA_ALU_tb__DOT__check__10__n 
                                                             - (IData)(8U)))
                                            : VL_SHIFTL_III(8,8,32, (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A), 
                                                            ((IData)(8U) 
                                                             - __Vtask_FBA_ALU_tb__DOT__check__10__n)))) 
                                 != (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out)))) {
                    VL_WRITEF_NX("A shifted %b\n[%0t] %%Error: FBA_ALU_tb.sv:231: Assertion failed in %NFBA_ALU_tb.check: Error, Buffer failed A: %b, Out: %b, N shift: %11d\n",0,
                                 8,(0xffU & (VL_LTS_III(32, 8U, __Vtask_FBA_ALU_tb__DOT__check__10__n)
                                              ? VL_SHIFTR_III(8,8,32, (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A), 
                                                              (__Vtask_FBA_ALU_tb__DOT__check__10__n 
                                                               - (IData)(8U)))
                                              : VL_SHIFTL_III(8,8,32, (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A), 
                                                              ((IData)(8U) 
                                                               - __Vtask_FBA_ALU_tb__DOT__check__10__n)))),
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                                 8,vlSelf->FBA_ALU_tb__DOT__reg_Out,
                                 32,__Vtask_FBA_ALU_tb__DOT__check__10__n);
                    VL_STOP_MT("FBA_ALU_tb.sv", 231, "");
                }
            } else if (VL_UNLIKELY((([&]() {
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__12__tmp = 0U;
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__12__tmp_and 
                                    = (((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                                        & (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)) 
                                       << 1U);
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__12__tmp_xor 
                                    = (((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                                        ^ (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)) 
                                       << 1U);
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__12__tmp_and) 
                                              >> 1U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__12__tmp_xor) 
                                                 >> 1U) 
                                                & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__12__tmp))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__12__tmp 
                                    = ((0x1fdU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__12__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 1U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__12__tmp_and) 
                                              >> 2U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__12__tmp_xor) 
                                                 >> 2U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__12__tmp) 
                                                   >> 1U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__12__tmp 
                                    = ((0x1fbU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__12__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 2U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__12__tmp_and) 
                                              >> 3U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__12__tmp_xor) 
                                                 >> 3U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__12__tmp) 
                                                   >> 2U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__12__tmp 
                                    = ((0x1f7U & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__12__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 3U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__12__tmp_and) 
                                              >> 4U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__12__tmp_xor) 
                                                 >> 4U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__12__tmp) 
                                                   >> 3U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__12__tmp 
                                    = ((0x1efU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__12__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 4U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__12__tmp_and) 
                                              >> 5U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__12__tmp_xor) 
                                                 >> 5U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__12__tmp) 
                                                   >> 4U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__12__tmp 
                                    = ((0x1dfU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__12__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 5U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__12__tmp_and) 
                                              >> 6U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__12__tmp_xor) 
                                                 >> 6U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__12__tmp) 
                                                   >> 5U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__12__tmp 
                                    = ((0x1bfU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__12__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 6U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__12__tmp_and) 
                                              >> 7U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__12__tmp_xor) 
                                                 >> 7U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__12__tmp) 
                                                   >> 6U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__12__tmp 
                                    = ((0x17fU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__12__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 7U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__12__tmp_and) 
                                              >> 8U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__12__tmp_xor) 
                                                 >> 8U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__12__tmp) 
                                                   >> 7U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__12__tmp 
                                    = ((0xffU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__12__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 8U));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__12__Vfuncout 
                                    = (0xffU & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__12__tmp) 
                                                >> 1U));
                            }(), (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__12__Vfuncout)) 
                                    != (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out)))) {
                VL_WRITEF_NX("Computed carries: %b\n",0,
                             8,([&]() {
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__13__tmp = 0U;
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__13__tmp_and 
                                    = (((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                                        & (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)) 
                                       << 1U);
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__13__tmp_xor 
                                    = (((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                                        ^ (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)) 
                                       << 1U);
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__13__tmp_and) 
                                              >> 1U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__13__tmp_xor) 
                                                 >> 1U) 
                                                & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__13__tmp))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__13__tmp 
                                    = ((0x1fdU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__13__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 1U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__13__tmp_and) 
                                              >> 2U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__13__tmp_xor) 
                                                 >> 2U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__13__tmp) 
                                                   >> 1U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__13__tmp 
                                    = ((0x1fbU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__13__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 2U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__13__tmp_and) 
                                              >> 3U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__13__tmp_xor) 
                                                 >> 3U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__13__tmp) 
                                                   >> 2U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__13__tmp 
                                    = ((0x1f7U & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__13__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 3U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__13__tmp_and) 
                                              >> 4U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__13__tmp_xor) 
                                                 >> 4U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__13__tmp) 
                                                   >> 3U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__13__tmp 
                                    = ((0x1efU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__13__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 4U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__13__tmp_and) 
                                              >> 5U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__13__tmp_xor) 
                                                 >> 5U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__13__tmp) 
                                                   >> 4U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__13__tmp 
                                    = ((0x1dfU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__13__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 5U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__13__tmp_and) 
                                              >> 6U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__13__tmp_xor) 
                                                 >> 6U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__13__tmp) 
                                                   >> 5U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__13__tmp 
                                    = ((0x1bfU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__13__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 6U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__13__tmp_and) 
                                              >> 7U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__13__tmp_xor) 
                                                 >> 7U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__13__tmp) 
                                                   >> 6U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__13__tmp 
                                    = ((0x17fU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__13__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 7U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__13__tmp_and) 
                                              >> 8U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__13__tmp_xor) 
                                                 >> 8U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__13__tmp) 
                                                   >> 7U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__13__tmp 
                                    = ((0xffU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__13__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 8U));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__13__Vfuncout 
                                    = (0xffU & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__13__tmp) 
                                                >> 1U));
                            }(), (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__13__Vfuncout)));
                VL_WRITEF_NX("[%0t] %%Error: FBA_ALU_tb.sv:226: Assertion failed in %NFBA_ALU_tb.check: Error, Carry failed A: %b, B: %b, Out: %b\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),8,
                             (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                             8,vlSelf->FBA_ALU_tb__DOT__reg_B,
                             8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out));
                VL_STOP_MT("FBA_ALU_tb.sv", 226, "");
            }
        } else if ((1U & (IData)(vlSelf->FBA_ALU_tb__DOT__func_sel))) {
            if (VL_UNLIKELY((((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                              | (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)) 
                             != (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out)))) {
                VL_WRITEF_NX("[%0t] %%Error: FBA_ALU_tb.sv:222: Assertion failed in %NFBA_ALU_tb.check: Error, Or failed A: %b, B: %b, Out: %b\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),8,
                             (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                             8,vlSelf->FBA_ALU_tb__DOT__reg_B,
                             8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out));
                VL_STOP_MT("FBA_ALU_tb.sv", 222, "");
            }
        } else if (VL_UNLIKELY((((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                                 & (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)) 
                                != (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out)))) {
            VL_WRITEF_NX("[%0t] %%Error: FBA_ALU_tb.sv:219: Assertion failed in %NFBA_ALU_tb.check: Error, And failed A: %b, B: %b, Out: %b\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                         8,vlSelf->FBA_ALU_tb__DOT__reg_B,
                         8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out));
            VL_STOP_MT("FBA_ALU_tb.sv", 219, "");
        }
    } else if ((2U & (IData)(vlSelf->FBA_ALU_tb__DOT__func_sel))) {
        if ((1U & (IData)(vlSelf->FBA_ALU_tb__DOT__func_sel))) {
            if (VL_UNLIKELY(((0xffU & (~ (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A))) 
                             != (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out)))) {
                VL_WRITEF_NX("[%0t] %%Error: FBA_ALU_tb.sv:216: Assertion failed in %NFBA_ALU_tb.check: Error, Not failed A: %b, Out: %b\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),8,
                             (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                             8,vlSelf->FBA_ALU_tb__DOT__reg_Out);
                VL_STOP_MT("FBA_ALU_tb.sv", 216, "");
            }
        } else if (VL_UNLIKELY(((0x1ffU & ((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                                           + (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B))) 
                                != (((IData)(vlSelf->FBA_ALU_tb__DOT__ALU__DOT__c_reg) 
                                     << 8U) | (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out))))) {
            VL_WRITEF_NX("[%0t] %%Error: FBA_ALU_tb.sv:213: Assertion failed in %NFBA_ALU_tb.check: Error, Addition failed A: %b, B: %b, Out: c%b %b\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                         8,vlSelf->FBA_ALU_tb__DOT__reg_B,
                         1,(IData)(vlSelf->FBA_ALU_tb__DOT__ALU__DOT__c_reg),
                         8,vlSelf->FBA_ALU_tb__DOT__reg_Out);
            VL_STOP_MT("FBA_ALU_tb.sv", 213, "");
        }
    } else if ((1U & (IData)(vlSelf->FBA_ALU_tb__DOT__func_sel))) {
        if (VL_UNLIKELY(((0xffU & (~ ((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                                      ^ (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)))) 
                         != (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out)))) {
            VL_WRITEF_NX("[%0t] %%Error: FBA_ALU_tb.sv:210: Assertion failed in %NFBA_ALU_tb.check: Error, Xnor failed A: %b, B: %b, Out: %b\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                         8,vlSelf->FBA_ALU_tb__DOT__reg_B,
                         8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out));
            VL_STOP_MT("FBA_ALU_tb.sv", 210, "");
        }
    } else if (VL_UNLIKELY((((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                             ^ (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)) 
                            != (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out)))) {
        VL_WRITEF_NX("[%0t] %%Error: FBA_ALU_tb.sv:207: Assertion failed in %NFBA_ALU_tb.check: Error, Xor failed A: %b, B: %b, Out: %b\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                     8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                     8,vlSelf->FBA_ALU_tb__DOT__reg_B,
                     8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out));
        VL_STOP_MT("FBA_ALU_tb.sv", 207, "");
    }
    vlSelf->FBA_ALU_tb__DOT__load_shift = 0U;
    vlSelf->FBA_ALU_tb__DOT__reg_A = (0xffU & VL_RANDOM_I());
    vlSelf->FBA_ALU_tb__DOT__reg_B = (0xffU & VL_RANDOM_I());
    co_await vlSelf->__VdlySched.delay(2ULL, nullptr, 
                                       "FBA_ALU_tb.sv", 
                                       94);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_FBA_ALU_tb__DOT__check__15__n = 8U;
    __Vtask_FBA_ALU_tb__DOT__bit_shift__16__n = __Vtask_FBA_ALU_tb__DOT__check__15__n;
    vlSelf->FBA_ALU_tb__DOT__load_shift = 1U;
    FBA_ALU_tb__DOT____Vrepeat0 = __Vtask_FBA_ALU_tb__DOT__bit_shift__16__n;
    while (VL_LTS_III(32, 0U, FBA_ALU_tb__DOT____Vrepeat0)) {
        co_await vlSelf->__VdlySched.delay(2ULL, nullptr, 
                                           "FBA_ALU_tb.sv", 
                                           180);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        FBA_ALU_tb__DOT____Vrepeat0 = (FBA_ALU_tb__DOT____Vrepeat0 
                                       - (IData)(1U));
    }
    if ((4U & (IData)(vlSelf->FBA_ALU_tb__DOT__func_sel))) {
        if ((2U & (IData)(vlSelf->FBA_ALU_tb__DOT__func_sel))) {
            if ((1U & (IData)(vlSelf->FBA_ALU_tb__DOT__func_sel))) {
                if (VL_UNLIKELY(((0xffU & (VL_LTS_III(32, 8U, __Vtask_FBA_ALU_tb__DOT__check__15__n)
                                            ? VL_SHIFTR_III(8,8,32, (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A), 
                                                            (__Vtask_FBA_ALU_tb__DOT__check__15__n 
                                                             - (IData)(8U)))
                                            : VL_SHIFTL_III(8,8,32, (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A), 
                                                            ((IData)(8U) 
                                                             - __Vtask_FBA_ALU_tb__DOT__check__15__n)))) 
                                 != (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out)))) {
                    VL_WRITEF_NX("A shifted %b\n[%0t] %%Error: FBA_ALU_tb.sv:231: Assertion failed in %NFBA_ALU_tb.check: Error, Buffer failed A: %b, Out: %b, N shift: %11d\n",0,
                                 8,(0xffU & (VL_LTS_III(32, 8U, __Vtask_FBA_ALU_tb__DOT__check__15__n)
                                              ? VL_SHIFTR_III(8,8,32, (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A), 
                                                              (__Vtask_FBA_ALU_tb__DOT__check__15__n 
                                                               - (IData)(8U)))
                                              : VL_SHIFTL_III(8,8,32, (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A), 
                                                              ((IData)(8U) 
                                                               - __Vtask_FBA_ALU_tb__DOT__check__15__n)))),
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                                 8,vlSelf->FBA_ALU_tb__DOT__reg_Out,
                                 32,__Vtask_FBA_ALU_tb__DOT__check__15__n);
                    VL_STOP_MT("FBA_ALU_tb.sv", 231, "");
                }
            } else if (VL_UNLIKELY((([&]() {
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__17__tmp = 0U;
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__17__tmp_and 
                                    = (((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                                        & (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)) 
                                       << 1U);
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__17__tmp_xor 
                                    = (((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                                        ^ (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)) 
                                       << 1U);
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__17__tmp_and) 
                                              >> 1U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__17__tmp_xor) 
                                                 >> 1U) 
                                                & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__17__tmp))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__17__tmp 
                                    = ((0x1fdU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__17__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 1U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__17__tmp_and) 
                                              >> 2U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__17__tmp_xor) 
                                                 >> 2U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__17__tmp) 
                                                   >> 1U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__17__tmp 
                                    = ((0x1fbU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__17__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 2U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__17__tmp_and) 
                                              >> 3U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__17__tmp_xor) 
                                                 >> 3U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__17__tmp) 
                                                   >> 2U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__17__tmp 
                                    = ((0x1f7U & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__17__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 3U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__17__tmp_and) 
                                              >> 4U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__17__tmp_xor) 
                                                 >> 4U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__17__tmp) 
                                                   >> 3U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__17__tmp 
                                    = ((0x1efU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__17__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 4U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__17__tmp_and) 
                                              >> 5U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__17__tmp_xor) 
                                                 >> 5U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__17__tmp) 
                                                   >> 4U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__17__tmp 
                                    = ((0x1dfU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__17__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 5U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__17__tmp_and) 
                                              >> 6U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__17__tmp_xor) 
                                                 >> 6U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__17__tmp) 
                                                   >> 5U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__17__tmp 
                                    = ((0x1bfU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__17__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 6U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__17__tmp_and) 
                                              >> 7U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__17__tmp_xor) 
                                                 >> 7U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__17__tmp) 
                                                   >> 6U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__17__tmp 
                                    = ((0x17fU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__17__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 7U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__17__tmp_and) 
                                              >> 8U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__17__tmp_xor) 
                                                 >> 8U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__17__tmp) 
                                                   >> 7U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__17__tmp 
                                    = ((0xffU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__17__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 8U));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__17__Vfuncout 
                                    = (0xffU & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__17__tmp) 
                                                >> 1U));
                            }(), (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__17__Vfuncout)) 
                                    != (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out)))) {
                VL_WRITEF_NX("Computed carries: %b\n",0,
                             8,([&]() {
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__18__tmp = 0U;
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__18__tmp_and 
                                    = (((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                                        & (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)) 
                                       << 1U);
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__18__tmp_xor 
                                    = (((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                                        ^ (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)) 
                                       << 1U);
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__18__tmp_and) 
                                              >> 1U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__18__tmp_xor) 
                                                 >> 1U) 
                                                & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__18__tmp))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__18__tmp 
                                    = ((0x1fdU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__18__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 1U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__18__tmp_and) 
                                              >> 2U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__18__tmp_xor) 
                                                 >> 2U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__18__tmp) 
                                                   >> 1U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__18__tmp 
                                    = ((0x1fbU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__18__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 2U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__18__tmp_and) 
                                              >> 3U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__18__tmp_xor) 
                                                 >> 3U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__18__tmp) 
                                                   >> 2U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__18__tmp 
                                    = ((0x1f7U & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__18__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 3U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__18__tmp_and) 
                                              >> 4U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__18__tmp_xor) 
                                                 >> 4U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__18__tmp) 
                                                   >> 3U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__18__tmp 
                                    = ((0x1efU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__18__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 4U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__18__tmp_and) 
                                              >> 5U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__18__tmp_xor) 
                                                 >> 5U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__18__tmp) 
                                                   >> 4U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__18__tmp 
                                    = ((0x1dfU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__18__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 5U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__18__tmp_and) 
                                              >> 6U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__18__tmp_xor) 
                                                 >> 6U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__18__tmp) 
                                                   >> 5U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__18__tmp 
                                    = ((0x1bfU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__18__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 6U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__18__tmp_and) 
                                              >> 7U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__18__tmp_xor) 
                                                 >> 7U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__18__tmp) 
                                                   >> 6U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__18__tmp 
                                    = ((0x17fU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__18__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 7U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__18__tmp_and) 
                                              >> 8U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__18__tmp_xor) 
                                                 >> 8U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__18__tmp) 
                                                   >> 7U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__18__tmp 
                                    = ((0xffU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__18__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 8U));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__18__Vfuncout 
                                    = (0xffU & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__18__tmp) 
                                                >> 1U));
                            }(), (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__18__Vfuncout)));
                VL_WRITEF_NX("[%0t] %%Error: FBA_ALU_tb.sv:226: Assertion failed in %NFBA_ALU_tb.check: Error, Carry failed A: %b, B: %b, Out: %b\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),8,
                             (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                             8,vlSelf->FBA_ALU_tb__DOT__reg_B,
                             8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out));
                VL_STOP_MT("FBA_ALU_tb.sv", 226, "");
            }
        } else if ((1U & (IData)(vlSelf->FBA_ALU_tb__DOT__func_sel))) {
            if (VL_UNLIKELY((((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                              | (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)) 
                             != (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out)))) {
                VL_WRITEF_NX("[%0t] %%Error: FBA_ALU_tb.sv:222: Assertion failed in %NFBA_ALU_tb.check: Error, Or failed A: %b, B: %b, Out: %b\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),8,
                             (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                             8,vlSelf->FBA_ALU_tb__DOT__reg_B,
                             8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out));
                VL_STOP_MT("FBA_ALU_tb.sv", 222, "");
            }
        } else if (VL_UNLIKELY((((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                                 & (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)) 
                                != (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out)))) {
            VL_WRITEF_NX("[%0t] %%Error: FBA_ALU_tb.sv:219: Assertion failed in %NFBA_ALU_tb.check: Error, And failed A: %b, B: %b, Out: %b\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                         8,vlSelf->FBA_ALU_tb__DOT__reg_B,
                         8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out));
            VL_STOP_MT("FBA_ALU_tb.sv", 219, "");
        }
    } else if ((2U & (IData)(vlSelf->FBA_ALU_tb__DOT__func_sel))) {
        if ((1U & (IData)(vlSelf->FBA_ALU_tb__DOT__func_sel))) {
            if (VL_UNLIKELY(((0xffU & (~ (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A))) 
                             != (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out)))) {
                VL_WRITEF_NX("[%0t] %%Error: FBA_ALU_tb.sv:216: Assertion failed in %NFBA_ALU_tb.check: Error, Not failed A: %b, Out: %b\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),8,
                             (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                             8,vlSelf->FBA_ALU_tb__DOT__reg_Out);
                VL_STOP_MT("FBA_ALU_tb.sv", 216, "");
            }
        } else if (VL_UNLIKELY(((0x1ffU & ((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                                           + (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B))) 
                                != (((IData)(vlSelf->FBA_ALU_tb__DOT__ALU__DOT__c_reg) 
                                     << 8U) | (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out))))) {
            VL_WRITEF_NX("[%0t] %%Error: FBA_ALU_tb.sv:213: Assertion failed in %NFBA_ALU_tb.check: Error, Addition failed A: %b, B: %b, Out: c%b %b\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                         8,vlSelf->FBA_ALU_tb__DOT__reg_B,
                         1,(IData)(vlSelf->FBA_ALU_tb__DOT__ALU__DOT__c_reg),
                         8,vlSelf->FBA_ALU_tb__DOT__reg_Out);
            VL_STOP_MT("FBA_ALU_tb.sv", 213, "");
        }
    } else if ((1U & (IData)(vlSelf->FBA_ALU_tb__DOT__func_sel))) {
        if (VL_UNLIKELY(((0xffU & (~ ((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                                      ^ (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)))) 
                         != (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out)))) {
            VL_WRITEF_NX("[%0t] %%Error: FBA_ALU_tb.sv:210: Assertion failed in %NFBA_ALU_tb.check: Error, Xnor failed A: %b, B: %b, Out: %b\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                         8,vlSelf->FBA_ALU_tb__DOT__reg_B,
                         8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out));
            VL_STOP_MT("FBA_ALU_tb.sv", 210, "");
        }
    } else if (VL_UNLIKELY((((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                             ^ (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)) 
                            != (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out)))) {
        VL_WRITEF_NX("[%0t] %%Error: FBA_ALU_tb.sv:207: Assertion failed in %NFBA_ALU_tb.check: Error, Xor failed A: %b, B: %b, Out: %b\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                     8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                     8,vlSelf->FBA_ALU_tb__DOT__reg_B,
                     8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out));
        VL_STOP_MT("FBA_ALU_tb.sv", 207, "");
    }
    VL_WRITEF_NX("Success: Xor test\n",0);
    vlSelf->FBA_ALU_tb__DOT__reg_A = 0U;
    vlSelf->FBA_ALU_tb__DOT__reg_B = 0U;
    vlSelf->FBA_ALU_tb__DOT__reg_Out = 0U;
    vlSelf->FBA_ALU_tb__DOT__rst = 0U;
    co_await vlSelf->__VdlySched.delay(2ULL, nullptr, 
                                       "FBA_ALU_tb.sv", 
                                       70);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->FBA_ALU_tb__DOT__rst = 1U;
    vlSelf->FBA_ALU_tb__DOT__func_sel = 1U;
    vlSelf->FBA_ALU_tb__DOT__load_shift = 0U;
    vlSelf->FBA_ALU_tb__DOT__reg_A = 0U;
    vlSelf->FBA_ALU_tb__DOT__reg_B = 0U;
    co_await vlSelf->__VdlySched.delay(2ULL, nullptr, 
                                       "FBA_ALU_tb.sv", 
                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_FBA_ALU_tb__DOT__check__23__n = 8U;
    __Vtask_FBA_ALU_tb__DOT__bit_shift__24__n = __Vtask_FBA_ALU_tb__DOT__check__23__n;
    vlSelf->FBA_ALU_tb__DOT__load_shift = 1U;
    FBA_ALU_tb__DOT____Vrepeat0 = __Vtask_FBA_ALU_tb__DOT__bit_shift__24__n;
    while (VL_LTS_III(32, 0U, FBA_ALU_tb__DOT____Vrepeat0)) {
        co_await vlSelf->__VdlySched.delay(2ULL, nullptr, 
                                           "FBA_ALU_tb.sv", 
                                           180);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        FBA_ALU_tb__DOT____Vrepeat0 = (FBA_ALU_tb__DOT____Vrepeat0 
                                       - (IData)(1U));
    }
    if ((4U & (IData)(vlSelf->FBA_ALU_tb__DOT__func_sel))) {
        if ((2U & (IData)(vlSelf->FBA_ALU_tb__DOT__func_sel))) {
            if ((1U & (IData)(vlSelf->FBA_ALU_tb__DOT__func_sel))) {
                if (VL_UNLIKELY(((0xffU & (VL_LTS_III(32, 8U, __Vtask_FBA_ALU_tb__DOT__check__23__n)
                                            ? VL_SHIFTR_III(8,8,32, (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A), 
                                                            (__Vtask_FBA_ALU_tb__DOT__check__23__n 
                                                             - (IData)(8U)))
                                            : VL_SHIFTL_III(8,8,32, (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A), 
                                                            ((IData)(8U) 
                                                             - __Vtask_FBA_ALU_tb__DOT__check__23__n)))) 
                                 != (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out)))) {
                    VL_WRITEF_NX("A shifted %b\n[%0t] %%Error: FBA_ALU_tb.sv:231: Assertion failed in %NFBA_ALU_tb.check: Error, Buffer failed A: %b, Out: %b, N shift: %11d\n",0,
                                 8,(0xffU & (VL_LTS_III(32, 8U, __Vtask_FBA_ALU_tb__DOT__check__23__n)
                                              ? VL_SHIFTR_III(8,8,32, (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A), 
                                                              (__Vtask_FBA_ALU_tb__DOT__check__23__n 
                                                               - (IData)(8U)))
                                              : VL_SHIFTL_III(8,8,32, (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A), 
                                                              ((IData)(8U) 
                                                               - __Vtask_FBA_ALU_tb__DOT__check__23__n)))),
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                                 8,vlSelf->FBA_ALU_tb__DOT__reg_Out,
                                 32,__Vtask_FBA_ALU_tb__DOT__check__23__n);
                    VL_STOP_MT("FBA_ALU_tb.sv", 231, "");
                }
            } else if (VL_UNLIKELY((([&]() {
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__25__tmp = 0U;
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__25__tmp_and 
                                    = (((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                                        & (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)) 
                                       << 1U);
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__25__tmp_xor 
                                    = (((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                                        ^ (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)) 
                                       << 1U);
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__25__tmp_and) 
                                              >> 1U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__25__tmp_xor) 
                                                 >> 1U) 
                                                & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__25__tmp))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__25__tmp 
                                    = ((0x1fdU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__25__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 1U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__25__tmp_and) 
                                              >> 2U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__25__tmp_xor) 
                                                 >> 2U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__25__tmp) 
                                                   >> 1U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__25__tmp 
                                    = ((0x1fbU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__25__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 2U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__25__tmp_and) 
                                              >> 3U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__25__tmp_xor) 
                                                 >> 3U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__25__tmp) 
                                                   >> 2U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__25__tmp 
                                    = ((0x1f7U & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__25__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 3U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__25__tmp_and) 
                                              >> 4U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__25__tmp_xor) 
                                                 >> 4U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__25__tmp) 
                                                   >> 3U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__25__tmp 
                                    = ((0x1efU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__25__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 4U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__25__tmp_and) 
                                              >> 5U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__25__tmp_xor) 
                                                 >> 5U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__25__tmp) 
                                                   >> 4U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__25__tmp 
                                    = ((0x1dfU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__25__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 5U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__25__tmp_and) 
                                              >> 6U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__25__tmp_xor) 
                                                 >> 6U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__25__tmp) 
                                                   >> 5U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__25__tmp 
                                    = ((0x1bfU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__25__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 6U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__25__tmp_and) 
                                              >> 7U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__25__tmp_xor) 
                                                 >> 7U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__25__tmp) 
                                                   >> 6U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__25__tmp 
                                    = ((0x17fU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__25__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 7U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__25__tmp_and) 
                                              >> 8U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__25__tmp_xor) 
                                                 >> 8U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__25__tmp) 
                                                   >> 7U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__25__tmp 
                                    = ((0xffU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__25__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 8U));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__25__Vfuncout 
                                    = (0xffU & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__25__tmp) 
                                                >> 1U));
                            }(), (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__25__Vfuncout)) 
                                    != (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out)))) {
                VL_WRITEF_NX("Computed carries: %b\n",0,
                             8,([&]() {
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__26__tmp = 0U;
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__26__tmp_and 
                                    = (((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                                        & (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)) 
                                       << 1U);
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__26__tmp_xor 
                                    = (((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                                        ^ (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)) 
                                       << 1U);
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__26__tmp_and) 
                                              >> 1U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__26__tmp_xor) 
                                                 >> 1U) 
                                                & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__26__tmp))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__26__tmp 
                                    = ((0x1fdU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__26__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 1U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__26__tmp_and) 
                                              >> 2U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__26__tmp_xor) 
                                                 >> 2U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__26__tmp) 
                                                   >> 1U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__26__tmp 
                                    = ((0x1fbU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__26__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 2U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__26__tmp_and) 
                                              >> 3U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__26__tmp_xor) 
                                                 >> 3U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__26__tmp) 
                                                   >> 2U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__26__tmp 
                                    = ((0x1f7U & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__26__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 3U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__26__tmp_and) 
                                              >> 4U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__26__tmp_xor) 
                                                 >> 4U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__26__tmp) 
                                                   >> 3U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__26__tmp 
                                    = ((0x1efU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__26__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 4U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__26__tmp_and) 
                                              >> 5U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__26__tmp_xor) 
                                                 >> 5U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__26__tmp) 
                                                   >> 4U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__26__tmp 
                                    = ((0x1dfU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__26__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 5U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__26__tmp_and) 
                                              >> 6U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__26__tmp_xor) 
                                                 >> 6U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__26__tmp) 
                                                   >> 5U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__26__tmp 
                                    = ((0x1bfU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__26__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 6U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__26__tmp_and) 
                                              >> 7U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__26__tmp_xor) 
                                                 >> 7U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__26__tmp) 
                                                   >> 6U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__26__tmp 
                                    = ((0x17fU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__26__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 7U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__26__tmp_and) 
                                              >> 8U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__26__tmp_xor) 
                                                 >> 8U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__26__tmp) 
                                                   >> 7U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__26__tmp 
                                    = ((0xffU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__26__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 8U));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__26__Vfuncout 
                                    = (0xffU & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__26__tmp) 
                                                >> 1U));
                            }(), (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__26__Vfuncout)));
                VL_WRITEF_NX("[%0t] %%Error: FBA_ALU_tb.sv:226: Assertion failed in %NFBA_ALU_tb.check: Error, Carry failed A: %b, B: %b, Out: %b\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),8,
                             (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                             8,vlSelf->FBA_ALU_tb__DOT__reg_B,
                             8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out));
                VL_STOP_MT("FBA_ALU_tb.sv", 226, "");
            }
        } else if ((1U & (IData)(vlSelf->FBA_ALU_tb__DOT__func_sel))) {
            if (VL_UNLIKELY((((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                              | (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)) 
                             != (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out)))) {
                VL_WRITEF_NX("[%0t] %%Error: FBA_ALU_tb.sv:222: Assertion failed in %NFBA_ALU_tb.check: Error, Or failed A: %b, B: %b, Out: %b\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),8,
                             (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                             8,vlSelf->FBA_ALU_tb__DOT__reg_B,
                             8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out));
                VL_STOP_MT("FBA_ALU_tb.sv", 222, "");
            }
        } else if (VL_UNLIKELY((((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                                 & (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)) 
                                != (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out)))) {
            VL_WRITEF_NX("[%0t] %%Error: FBA_ALU_tb.sv:219: Assertion failed in %NFBA_ALU_tb.check: Error, And failed A: %b, B: %b, Out: %b\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                         8,vlSelf->FBA_ALU_tb__DOT__reg_B,
                         8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out));
            VL_STOP_MT("FBA_ALU_tb.sv", 219, "");
        }
    } else if ((2U & (IData)(vlSelf->FBA_ALU_tb__DOT__func_sel))) {
        if ((1U & (IData)(vlSelf->FBA_ALU_tb__DOT__func_sel))) {
            if (VL_UNLIKELY(((0xffU & (~ (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A))) 
                             != (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out)))) {
                VL_WRITEF_NX("[%0t] %%Error: FBA_ALU_tb.sv:216: Assertion failed in %NFBA_ALU_tb.check: Error, Not failed A: %b, Out: %b\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),8,
                             (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                             8,vlSelf->FBA_ALU_tb__DOT__reg_Out);
                VL_STOP_MT("FBA_ALU_tb.sv", 216, "");
            }
        } else if (VL_UNLIKELY(((0x1ffU & ((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                                           + (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B))) 
                                != (((IData)(vlSelf->FBA_ALU_tb__DOT__ALU__DOT__c_reg) 
                                     << 8U) | (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out))))) {
            VL_WRITEF_NX("[%0t] %%Error: FBA_ALU_tb.sv:213: Assertion failed in %NFBA_ALU_tb.check: Error, Addition failed A: %b, B: %b, Out: c%b %b\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                         8,vlSelf->FBA_ALU_tb__DOT__reg_B,
                         1,(IData)(vlSelf->FBA_ALU_tb__DOT__ALU__DOT__c_reg),
                         8,vlSelf->FBA_ALU_tb__DOT__reg_Out);
            VL_STOP_MT("FBA_ALU_tb.sv", 213, "");
        }
    } else if ((1U & (IData)(vlSelf->FBA_ALU_tb__DOT__func_sel))) {
        if (VL_UNLIKELY(((0xffU & (~ ((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                                      ^ (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)))) 
                         != (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out)))) {
            VL_WRITEF_NX("[%0t] %%Error: FBA_ALU_tb.sv:210: Assertion failed in %NFBA_ALU_tb.check: Error, Xnor failed A: %b, B: %b, Out: %b\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                         8,vlSelf->FBA_ALU_tb__DOT__reg_B,
                         8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out));
            VL_STOP_MT("FBA_ALU_tb.sv", 210, "");
        }
    } else if (VL_UNLIKELY((((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                             ^ (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)) 
                            != (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out)))) {
        VL_WRITEF_NX("[%0t] %%Error: FBA_ALU_tb.sv:207: Assertion failed in %NFBA_ALU_tb.check: Error, Xor failed A: %b, B: %b, Out: %b\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                     8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                     8,vlSelf->FBA_ALU_tb__DOT__reg_B,
                     8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out));
        VL_STOP_MT("FBA_ALU_tb.sv", 207, "");
    }
    vlSelf->FBA_ALU_tb__DOT__load_shift = 0U;
    vlSelf->FBA_ALU_tb__DOT__reg_A = 0xffU;
    vlSelf->FBA_ALU_tb__DOT__reg_B = 0xffU;
    co_await vlSelf->__VdlySched.delay(2ULL, nullptr, 
                                       "FBA_ALU_tb.sv", 
                                       86);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_FBA_ALU_tb__DOT__check__28__n = 8U;
    __Vtask_FBA_ALU_tb__DOT__bit_shift__29__n = __Vtask_FBA_ALU_tb__DOT__check__28__n;
    vlSelf->FBA_ALU_tb__DOT__load_shift = 1U;
    FBA_ALU_tb__DOT____Vrepeat0 = __Vtask_FBA_ALU_tb__DOT__bit_shift__29__n;
    while (VL_LTS_III(32, 0U, FBA_ALU_tb__DOT____Vrepeat0)) {
        co_await vlSelf->__VdlySched.delay(2ULL, nullptr, 
                                           "FBA_ALU_tb.sv", 
                                           180);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        FBA_ALU_tb__DOT____Vrepeat0 = (FBA_ALU_tb__DOT____Vrepeat0 
                                       - (IData)(1U));
    }
    if ((4U & (IData)(vlSelf->FBA_ALU_tb__DOT__func_sel))) {
        if ((2U & (IData)(vlSelf->FBA_ALU_tb__DOT__func_sel))) {
            if ((1U & (IData)(vlSelf->FBA_ALU_tb__DOT__func_sel))) {
                if (VL_UNLIKELY(((0xffU & (VL_LTS_III(32, 8U, __Vtask_FBA_ALU_tb__DOT__check__28__n)
                                            ? VL_SHIFTR_III(8,8,32, (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A), 
                                                            (__Vtask_FBA_ALU_tb__DOT__check__28__n 
                                                             - (IData)(8U)))
                                            : VL_SHIFTL_III(8,8,32, (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A), 
                                                            ((IData)(8U) 
                                                             - __Vtask_FBA_ALU_tb__DOT__check__28__n)))) 
                                 != (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out)))) {
                    VL_WRITEF_NX("A shifted %b\n[%0t] %%Error: FBA_ALU_tb.sv:231: Assertion failed in %NFBA_ALU_tb.check: Error, Buffer failed A: %b, Out: %b, N shift: %11d\n",0,
                                 8,(0xffU & (VL_LTS_III(32, 8U, __Vtask_FBA_ALU_tb__DOT__check__28__n)
                                              ? VL_SHIFTR_III(8,8,32, (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A), 
                                                              (__Vtask_FBA_ALU_tb__DOT__check__28__n 
                                                               - (IData)(8U)))
                                              : VL_SHIFTL_III(8,8,32, (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A), 
                                                              ((IData)(8U) 
                                                               - __Vtask_FBA_ALU_tb__DOT__check__28__n)))),
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                                 8,vlSelf->FBA_ALU_tb__DOT__reg_Out,
                                 32,__Vtask_FBA_ALU_tb__DOT__check__28__n);
                    VL_STOP_MT("FBA_ALU_tb.sv", 231, "");
                }
            } else if (VL_UNLIKELY((([&]() {
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__30__tmp = 0U;
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__30__tmp_and 
                                    = (((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                                        & (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)) 
                                       << 1U);
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__30__tmp_xor 
                                    = (((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                                        ^ (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)) 
                                       << 1U);
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__30__tmp_and) 
                                              >> 1U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__30__tmp_xor) 
                                                 >> 1U) 
                                                & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__30__tmp))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__30__tmp 
                                    = ((0x1fdU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__30__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 1U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__30__tmp_and) 
                                              >> 2U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__30__tmp_xor) 
                                                 >> 2U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__30__tmp) 
                                                   >> 1U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__30__tmp 
                                    = ((0x1fbU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__30__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 2U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__30__tmp_and) 
                                              >> 3U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__30__tmp_xor) 
                                                 >> 3U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__30__tmp) 
                                                   >> 2U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__30__tmp 
                                    = ((0x1f7U & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__30__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 3U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__30__tmp_and) 
                                              >> 4U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__30__tmp_xor) 
                                                 >> 4U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__30__tmp) 
                                                   >> 3U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__30__tmp 
                                    = ((0x1efU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__30__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 4U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__30__tmp_and) 
                                              >> 5U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__30__tmp_xor) 
                                                 >> 5U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__30__tmp) 
                                                   >> 4U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__30__tmp 
                                    = ((0x1dfU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__30__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 5U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__30__tmp_and) 
                                              >> 6U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__30__tmp_xor) 
                                                 >> 6U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__30__tmp) 
                                                   >> 5U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__30__tmp 
                                    = ((0x1bfU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__30__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 6U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__30__tmp_and) 
                                              >> 7U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__30__tmp_xor) 
                                                 >> 7U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__30__tmp) 
                                                   >> 6U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__30__tmp 
                                    = ((0x17fU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__30__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 7U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__30__tmp_and) 
                                              >> 8U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__30__tmp_xor) 
                                                 >> 8U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__30__tmp) 
                                                   >> 7U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__30__tmp 
                                    = ((0xffU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__30__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 8U));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__30__Vfuncout 
                                    = (0xffU & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__30__tmp) 
                                                >> 1U));
                            }(), (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__30__Vfuncout)) 
                                    != (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out)))) {
                VL_WRITEF_NX("Computed carries: %b\n",0,
                             8,([&]() {
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__31__tmp = 0U;
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__31__tmp_and 
                                    = (((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                                        & (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)) 
                                       << 1U);
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__31__tmp_xor 
                                    = (((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                                        ^ (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)) 
                                       << 1U);
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__31__tmp_and) 
                                              >> 1U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__31__tmp_xor) 
                                                 >> 1U) 
                                                & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__31__tmp))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__31__tmp 
                                    = ((0x1fdU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__31__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 1U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__31__tmp_and) 
                                              >> 2U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__31__tmp_xor) 
                                                 >> 2U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__31__tmp) 
                                                   >> 1U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__31__tmp 
                                    = ((0x1fbU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__31__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 2U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__31__tmp_and) 
                                              >> 3U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__31__tmp_xor) 
                                                 >> 3U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__31__tmp) 
                                                   >> 2U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__31__tmp 
                                    = ((0x1f7U & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__31__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 3U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__31__tmp_and) 
                                              >> 4U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__31__tmp_xor) 
                                                 >> 4U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__31__tmp) 
                                                   >> 3U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__31__tmp 
                                    = ((0x1efU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__31__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 4U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__31__tmp_and) 
                                              >> 5U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__31__tmp_xor) 
                                                 >> 5U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__31__tmp) 
                                                   >> 4U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__31__tmp 
                                    = ((0x1dfU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__31__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 5U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__31__tmp_and) 
                                              >> 6U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__31__tmp_xor) 
                                                 >> 6U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__31__tmp) 
                                                   >> 5U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__31__tmp 
                                    = ((0x1bfU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__31__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 6U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__31__tmp_and) 
                                              >> 7U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__31__tmp_xor) 
                                                 >> 7U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__31__tmp) 
                                                   >> 6U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__31__tmp 
                                    = ((0x17fU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__31__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 7U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__31__tmp_and) 
                                              >> 8U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__31__tmp_xor) 
                                                 >> 8U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__31__tmp) 
                                                   >> 7U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__31__tmp 
                                    = ((0xffU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__31__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 8U));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__31__Vfuncout 
                                    = (0xffU & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__31__tmp) 
                                                >> 1U));
                            }(), (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__31__Vfuncout)));
                VL_WRITEF_NX("[%0t] %%Error: FBA_ALU_tb.sv:226: Assertion failed in %NFBA_ALU_tb.check: Error, Carry failed A: %b, B: %b, Out: %b\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),8,
                             (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                             8,vlSelf->FBA_ALU_tb__DOT__reg_B,
                             8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out));
                VL_STOP_MT("FBA_ALU_tb.sv", 226, "");
            }
        } else if ((1U & (IData)(vlSelf->FBA_ALU_tb__DOT__func_sel))) {
            if (VL_UNLIKELY((((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                              | (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)) 
                             != (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out)))) {
                VL_WRITEF_NX("[%0t] %%Error: FBA_ALU_tb.sv:222: Assertion failed in %NFBA_ALU_tb.check: Error, Or failed A: %b, B: %b, Out: %b\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),8,
                             (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                             8,vlSelf->FBA_ALU_tb__DOT__reg_B,
                             8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out));
                VL_STOP_MT("FBA_ALU_tb.sv", 222, "");
            }
        } else if (VL_UNLIKELY((((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                                 & (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)) 
                                != (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out)))) {
            VL_WRITEF_NX("[%0t] %%Error: FBA_ALU_tb.sv:219: Assertion failed in %NFBA_ALU_tb.check: Error, And failed A: %b, B: %b, Out: %b\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                         8,vlSelf->FBA_ALU_tb__DOT__reg_B,
                         8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out));
            VL_STOP_MT("FBA_ALU_tb.sv", 219, "");
        }
    } else if ((2U & (IData)(vlSelf->FBA_ALU_tb__DOT__func_sel))) {
        if ((1U & (IData)(vlSelf->FBA_ALU_tb__DOT__func_sel))) {
            if (VL_UNLIKELY(((0xffU & (~ (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A))) 
                             != (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out)))) {
                VL_WRITEF_NX("[%0t] %%Error: FBA_ALU_tb.sv:216: Assertion failed in %NFBA_ALU_tb.check: Error, Not failed A: %b, Out: %b\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),8,
                             (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                             8,vlSelf->FBA_ALU_tb__DOT__reg_Out);
                VL_STOP_MT("FBA_ALU_tb.sv", 216, "");
            }
        } else if (VL_UNLIKELY(((0x1ffU & ((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                                           + (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B))) 
                                != (((IData)(vlSelf->FBA_ALU_tb__DOT__ALU__DOT__c_reg) 
                                     << 8U) | (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out))))) {
            VL_WRITEF_NX("[%0t] %%Error: FBA_ALU_tb.sv:213: Assertion failed in %NFBA_ALU_tb.check: Error, Addition failed A: %b, B: %b, Out: c%b %b\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                         8,vlSelf->FBA_ALU_tb__DOT__reg_B,
                         1,(IData)(vlSelf->FBA_ALU_tb__DOT__ALU__DOT__c_reg),
                         8,vlSelf->FBA_ALU_tb__DOT__reg_Out);
            VL_STOP_MT("FBA_ALU_tb.sv", 213, "");
        }
    } else if ((1U & (IData)(vlSelf->FBA_ALU_tb__DOT__func_sel))) {
        if (VL_UNLIKELY(((0xffU & (~ ((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                                      ^ (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)))) 
                         != (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out)))) {
            VL_WRITEF_NX("[%0t] %%Error: FBA_ALU_tb.sv:210: Assertion failed in %NFBA_ALU_tb.check: Error, Xnor failed A: %b, B: %b, Out: %b\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                         8,vlSelf->FBA_ALU_tb__DOT__reg_B,
                         8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out));
            VL_STOP_MT("FBA_ALU_tb.sv", 210, "");
        }
    } else if (VL_UNLIKELY((((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                             ^ (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)) 
                            != (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out)))) {
        VL_WRITEF_NX("[%0t] %%Error: FBA_ALU_tb.sv:207: Assertion failed in %NFBA_ALU_tb.check: Error, Xor failed A: %b, B: %b, Out: %b\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                     8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                     8,vlSelf->FBA_ALU_tb__DOT__reg_B,
                     8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out));
        VL_STOP_MT("FBA_ALU_tb.sv", 207, "");
    }
    vlSelf->FBA_ALU_tb__DOT__load_shift = 0U;
    vlSelf->FBA_ALU_tb__DOT__reg_A = (0xffU & VL_RANDOM_I());
    vlSelf->FBA_ALU_tb__DOT__reg_B = (0xffU & VL_RANDOM_I());
    co_await vlSelf->__VdlySched.delay(2ULL, nullptr, 
                                       "FBA_ALU_tb.sv", 
                                       94);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_FBA_ALU_tb__DOT__check__33__n = 8U;
    __Vtask_FBA_ALU_tb__DOT__bit_shift__34__n = __Vtask_FBA_ALU_tb__DOT__check__33__n;
    vlSelf->FBA_ALU_tb__DOT__load_shift = 1U;
    FBA_ALU_tb__DOT____Vrepeat0 = __Vtask_FBA_ALU_tb__DOT__bit_shift__34__n;
    while (VL_LTS_III(32, 0U, FBA_ALU_tb__DOT____Vrepeat0)) {
        co_await vlSelf->__VdlySched.delay(2ULL, nullptr, 
                                           "FBA_ALU_tb.sv", 
                                           180);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        FBA_ALU_tb__DOT____Vrepeat0 = (FBA_ALU_tb__DOT____Vrepeat0 
                                       - (IData)(1U));
    }
    if ((4U & (IData)(vlSelf->FBA_ALU_tb__DOT__func_sel))) {
        if ((2U & (IData)(vlSelf->FBA_ALU_tb__DOT__func_sel))) {
            if ((1U & (IData)(vlSelf->FBA_ALU_tb__DOT__func_sel))) {
                if (VL_UNLIKELY(((0xffU & (VL_LTS_III(32, 8U, __Vtask_FBA_ALU_tb__DOT__check__33__n)
                                            ? VL_SHIFTR_III(8,8,32, (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A), 
                                                            (__Vtask_FBA_ALU_tb__DOT__check__33__n 
                                                             - (IData)(8U)))
                                            : VL_SHIFTL_III(8,8,32, (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A), 
                                                            ((IData)(8U) 
                                                             - __Vtask_FBA_ALU_tb__DOT__check__33__n)))) 
                                 != (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out)))) {
                    VL_WRITEF_NX("A shifted %b\n[%0t] %%Error: FBA_ALU_tb.sv:231: Assertion failed in %NFBA_ALU_tb.check: Error, Buffer failed A: %b, Out: %b, N shift: %11d\n",0,
                                 8,(0xffU & (VL_LTS_III(32, 8U, __Vtask_FBA_ALU_tb__DOT__check__33__n)
                                              ? VL_SHIFTR_III(8,8,32, (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A), 
                                                              (__Vtask_FBA_ALU_tb__DOT__check__33__n 
                                                               - (IData)(8U)))
                                              : VL_SHIFTL_III(8,8,32, (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A), 
                                                              ((IData)(8U) 
                                                               - __Vtask_FBA_ALU_tb__DOT__check__33__n)))),
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                                 8,vlSelf->FBA_ALU_tb__DOT__reg_Out,
                                 32,__Vtask_FBA_ALU_tb__DOT__check__33__n);
                    VL_STOP_MT("FBA_ALU_tb.sv", 231, "");
                }
            } else if (VL_UNLIKELY((([&]() {
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__35__tmp = 0U;
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__35__tmp_and 
                                    = (((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                                        & (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)) 
                                       << 1U);
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__35__tmp_xor 
                                    = (((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                                        ^ (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)) 
                                       << 1U);
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__35__tmp_and) 
                                              >> 1U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__35__tmp_xor) 
                                                 >> 1U) 
                                                & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__35__tmp))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__35__tmp 
                                    = ((0x1fdU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__35__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 1U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__35__tmp_and) 
                                              >> 2U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__35__tmp_xor) 
                                                 >> 2U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__35__tmp) 
                                                   >> 1U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__35__tmp 
                                    = ((0x1fbU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__35__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 2U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__35__tmp_and) 
                                              >> 3U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__35__tmp_xor) 
                                                 >> 3U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__35__tmp) 
                                                   >> 2U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__35__tmp 
                                    = ((0x1f7U & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__35__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 3U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__35__tmp_and) 
                                              >> 4U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__35__tmp_xor) 
                                                 >> 4U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__35__tmp) 
                                                   >> 3U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__35__tmp 
                                    = ((0x1efU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__35__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 4U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__35__tmp_and) 
                                              >> 5U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__35__tmp_xor) 
                                                 >> 5U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__35__tmp) 
                                                   >> 4U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__35__tmp 
                                    = ((0x1dfU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__35__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 5U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__35__tmp_and) 
                                              >> 6U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__35__tmp_xor) 
                                                 >> 6U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__35__tmp) 
                                                   >> 5U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__35__tmp 
                                    = ((0x1bfU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__35__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 6U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__35__tmp_and) 
                                              >> 7U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__35__tmp_xor) 
                                                 >> 7U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__35__tmp) 
                                                   >> 6U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__35__tmp 
                                    = ((0x17fU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__35__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 7U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__35__tmp_and) 
                                              >> 8U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__35__tmp_xor) 
                                                 >> 8U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__35__tmp) 
                                                   >> 7U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__35__tmp 
                                    = ((0xffU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__35__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 8U));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__35__Vfuncout 
                                    = (0xffU & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__35__tmp) 
                                                >> 1U));
                            }(), (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__35__Vfuncout)) 
                                    != (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out)))) {
                VL_WRITEF_NX("Computed carries: %b\n",0,
                             8,([&]() {
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__36__tmp = 0U;
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__36__tmp_and 
                                    = (((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                                        & (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)) 
                                       << 1U);
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__36__tmp_xor 
                                    = (((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                                        ^ (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)) 
                                       << 1U);
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__36__tmp_and) 
                                              >> 1U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__36__tmp_xor) 
                                                 >> 1U) 
                                                & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__36__tmp))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__36__tmp 
                                    = ((0x1fdU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__36__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 1U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__36__tmp_and) 
                                              >> 2U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__36__tmp_xor) 
                                                 >> 2U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__36__tmp) 
                                                   >> 1U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__36__tmp 
                                    = ((0x1fbU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__36__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 2U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__36__tmp_and) 
                                              >> 3U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__36__tmp_xor) 
                                                 >> 3U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__36__tmp) 
                                                   >> 2U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__36__tmp 
                                    = ((0x1f7U & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__36__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 3U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__36__tmp_and) 
                                              >> 4U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__36__tmp_xor) 
                                                 >> 4U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__36__tmp) 
                                                   >> 3U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__36__tmp 
                                    = ((0x1efU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__36__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 4U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__36__tmp_and) 
                                              >> 5U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__36__tmp_xor) 
                                                 >> 5U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__36__tmp) 
                                                   >> 4U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__36__tmp 
                                    = ((0x1dfU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__36__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 5U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__36__tmp_and) 
                                              >> 6U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__36__tmp_xor) 
                                                 >> 6U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__36__tmp) 
                                                   >> 5U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__36__tmp 
                                    = ((0x1bfU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__36__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 6U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__36__tmp_and) 
                                              >> 7U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__36__tmp_xor) 
                                                 >> 7U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__36__tmp) 
                                                   >> 6U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__36__tmp 
                                    = ((0x17fU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__36__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 7U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__36__tmp_and) 
                                              >> 8U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__36__tmp_xor) 
                                                 >> 8U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__36__tmp) 
                                                   >> 7U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__36__tmp 
                                    = ((0xffU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__36__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 8U));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__36__Vfuncout 
                                    = (0xffU & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__36__tmp) 
                                                >> 1U));
                            }(), (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__36__Vfuncout)));
                VL_WRITEF_NX("[%0t] %%Error: FBA_ALU_tb.sv:226: Assertion failed in %NFBA_ALU_tb.check: Error, Carry failed A: %b, B: %b, Out: %b\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),8,
                             (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                             8,vlSelf->FBA_ALU_tb__DOT__reg_B,
                             8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out));
                VL_STOP_MT("FBA_ALU_tb.sv", 226, "");
            }
        } else if ((1U & (IData)(vlSelf->FBA_ALU_tb__DOT__func_sel))) {
            if (VL_UNLIKELY((((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                              | (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)) 
                             != (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out)))) {
                VL_WRITEF_NX("[%0t] %%Error: FBA_ALU_tb.sv:222: Assertion failed in %NFBA_ALU_tb.check: Error, Or failed A: %b, B: %b, Out: %b\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),8,
                             (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                             8,vlSelf->FBA_ALU_tb__DOT__reg_B,
                             8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out));
                VL_STOP_MT("FBA_ALU_tb.sv", 222, "");
            }
        } else if (VL_UNLIKELY((((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                                 & (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)) 
                                != (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out)))) {
            VL_WRITEF_NX("[%0t] %%Error: FBA_ALU_tb.sv:219: Assertion failed in %NFBA_ALU_tb.check: Error, And failed A: %b, B: %b, Out: %b\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                         8,vlSelf->FBA_ALU_tb__DOT__reg_B,
                         8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out));
            VL_STOP_MT("FBA_ALU_tb.sv", 219, "");
        }
    } else if ((2U & (IData)(vlSelf->FBA_ALU_tb__DOT__func_sel))) {
        if ((1U & (IData)(vlSelf->FBA_ALU_tb__DOT__func_sel))) {
            if (VL_UNLIKELY(((0xffU & (~ (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A))) 
                             != (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out)))) {
                VL_WRITEF_NX("[%0t] %%Error: FBA_ALU_tb.sv:216: Assertion failed in %NFBA_ALU_tb.check: Error, Not failed A: %b, Out: %b\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),8,
                             (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                             8,vlSelf->FBA_ALU_tb__DOT__reg_Out);
                VL_STOP_MT("FBA_ALU_tb.sv", 216, "");
            }
        } else if (VL_UNLIKELY(((0x1ffU & ((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                                           + (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B))) 
                                != (((IData)(vlSelf->FBA_ALU_tb__DOT__ALU__DOT__c_reg) 
                                     << 8U) | (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out))))) {
            VL_WRITEF_NX("[%0t] %%Error: FBA_ALU_tb.sv:213: Assertion failed in %NFBA_ALU_tb.check: Error, Addition failed A: %b, B: %b, Out: c%b %b\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                         8,vlSelf->FBA_ALU_tb__DOT__reg_B,
                         1,(IData)(vlSelf->FBA_ALU_tb__DOT__ALU__DOT__c_reg),
                         8,vlSelf->FBA_ALU_tb__DOT__reg_Out);
            VL_STOP_MT("FBA_ALU_tb.sv", 213, "");
        }
    } else if ((1U & (IData)(vlSelf->FBA_ALU_tb__DOT__func_sel))) {
        if (VL_UNLIKELY(((0xffU & (~ ((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                                      ^ (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)))) 
                         != (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out)))) {
            VL_WRITEF_NX("[%0t] %%Error: FBA_ALU_tb.sv:210: Assertion failed in %NFBA_ALU_tb.check: Error, Xnor failed A: %b, B: %b, Out: %b\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                         8,vlSelf->FBA_ALU_tb__DOT__reg_B,
                         8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out));
            VL_STOP_MT("FBA_ALU_tb.sv", 210, "");
        }
    } else if (VL_UNLIKELY((((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                             ^ (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)) 
                            != (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out)))) {
        VL_WRITEF_NX("[%0t] %%Error: FBA_ALU_tb.sv:207: Assertion failed in %NFBA_ALU_tb.check: Error, Xor failed A: %b, B: %b, Out: %b\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                     8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                     8,vlSelf->FBA_ALU_tb__DOT__reg_B,
                     8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out));
        VL_STOP_MT("FBA_ALU_tb.sv", 207, "");
    }
    VL_WRITEF_NX("Success: Xnor test\n",0);
    vlSelf->FBA_ALU_tb__DOT__reg_A = 0U;
    vlSelf->FBA_ALU_tb__DOT__reg_B = 0U;
    vlSelf->FBA_ALU_tb__DOT__reg_Out = 0U;
    vlSelf->FBA_ALU_tb__DOT__rst = 0U;
    co_await vlSelf->__VdlySched.delay(2ULL, nullptr, 
                                       "FBA_ALU_tb.sv", 
                                       70);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->FBA_ALU_tb__DOT__rst = 1U;
    vlSelf->FBA_ALU_tb__DOT__func_sel = 2U;
    vlSelf->FBA_ALU_tb__DOT__load_shift = 0U;
    vlSelf->FBA_ALU_tb__DOT__reg_A = 0U;
    vlSelf->FBA_ALU_tb__DOT__reg_B = 0U;
    co_await vlSelf->__VdlySched.delay(2ULL, nullptr, 
                                       "FBA_ALU_tb.sv", 
                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_FBA_ALU_tb__DOT__check__41__n = 8U;
    __Vtask_FBA_ALU_tb__DOT__bit_shift__42__n = __Vtask_FBA_ALU_tb__DOT__check__41__n;
    vlSelf->FBA_ALU_tb__DOT__load_shift = 1U;
    FBA_ALU_tb__DOT____Vrepeat0 = __Vtask_FBA_ALU_tb__DOT__bit_shift__42__n;
    while (VL_LTS_III(32, 0U, FBA_ALU_tb__DOT____Vrepeat0)) {
        co_await vlSelf->__VdlySched.delay(2ULL, nullptr, 
                                           "FBA_ALU_tb.sv", 
                                           180);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        FBA_ALU_tb__DOT____Vrepeat0 = (FBA_ALU_tb__DOT____Vrepeat0 
                                       - (IData)(1U));
    }
    if ((4U & (IData)(vlSelf->FBA_ALU_tb__DOT__func_sel))) {
        if ((2U & (IData)(vlSelf->FBA_ALU_tb__DOT__func_sel))) {
            if ((1U & (IData)(vlSelf->FBA_ALU_tb__DOT__func_sel))) {
                if (VL_UNLIKELY(((0xffU & (VL_LTS_III(32, 8U, __Vtask_FBA_ALU_tb__DOT__check__41__n)
                                            ? VL_SHIFTR_III(8,8,32, (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A), 
                                                            (__Vtask_FBA_ALU_tb__DOT__check__41__n 
                                                             - (IData)(8U)))
                                            : VL_SHIFTL_III(8,8,32, (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A), 
                                                            ((IData)(8U) 
                                                             - __Vtask_FBA_ALU_tb__DOT__check__41__n)))) 
                                 != (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out)))) {
                    VL_WRITEF_NX("A shifted %b\n[%0t] %%Error: FBA_ALU_tb.sv:231: Assertion failed in %NFBA_ALU_tb.check: Error, Buffer failed A: %b, Out: %b, N shift: %11d\n",0,
                                 8,(0xffU & (VL_LTS_III(32, 8U, __Vtask_FBA_ALU_tb__DOT__check__41__n)
                                              ? VL_SHIFTR_III(8,8,32, (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A), 
                                                              (__Vtask_FBA_ALU_tb__DOT__check__41__n 
                                                               - (IData)(8U)))
                                              : VL_SHIFTL_III(8,8,32, (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A), 
                                                              ((IData)(8U) 
                                                               - __Vtask_FBA_ALU_tb__DOT__check__41__n)))),
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                                 8,vlSelf->FBA_ALU_tb__DOT__reg_Out,
                                 32,__Vtask_FBA_ALU_tb__DOT__check__41__n);
                    VL_STOP_MT("FBA_ALU_tb.sv", 231, "");
                }
            } else if (VL_UNLIKELY((([&]() {
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__43__tmp = 0U;
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__43__tmp_and 
                                    = (((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                                        & (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)) 
                                       << 1U);
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__43__tmp_xor 
                                    = (((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                                        ^ (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)) 
                                       << 1U);
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__43__tmp_and) 
                                              >> 1U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__43__tmp_xor) 
                                                 >> 1U) 
                                                & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__43__tmp))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__43__tmp 
                                    = ((0x1fdU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__43__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 1U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__43__tmp_and) 
                                              >> 2U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__43__tmp_xor) 
                                                 >> 2U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__43__tmp) 
                                                   >> 1U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__43__tmp 
                                    = ((0x1fbU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__43__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 2U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__43__tmp_and) 
                                              >> 3U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__43__tmp_xor) 
                                                 >> 3U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__43__tmp) 
                                                   >> 2U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__43__tmp 
                                    = ((0x1f7U & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__43__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 3U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__43__tmp_and) 
                                              >> 4U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__43__tmp_xor) 
                                                 >> 4U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__43__tmp) 
                                                   >> 3U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__43__tmp 
                                    = ((0x1efU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__43__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 4U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__43__tmp_and) 
                                              >> 5U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__43__tmp_xor) 
                                                 >> 5U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__43__tmp) 
                                                   >> 4U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__43__tmp 
                                    = ((0x1dfU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__43__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 5U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__43__tmp_and) 
                                              >> 6U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__43__tmp_xor) 
                                                 >> 6U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__43__tmp) 
                                                   >> 5U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__43__tmp 
                                    = ((0x1bfU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__43__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 6U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__43__tmp_and) 
                                              >> 7U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__43__tmp_xor) 
                                                 >> 7U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__43__tmp) 
                                                   >> 6U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__43__tmp 
                                    = ((0x17fU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__43__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 7U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__43__tmp_and) 
                                              >> 8U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__43__tmp_xor) 
                                                 >> 8U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__43__tmp) 
                                                   >> 7U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__43__tmp 
                                    = ((0xffU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__43__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 8U));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__43__Vfuncout 
                                    = (0xffU & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__43__tmp) 
                                                >> 1U));
                            }(), (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__43__Vfuncout)) 
                                    != (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out)))) {
                VL_WRITEF_NX("Computed carries: %b\n",0,
                             8,([&]() {
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__44__tmp = 0U;
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__44__tmp_and 
                                    = (((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                                        & (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)) 
                                       << 1U);
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__44__tmp_xor 
                                    = (((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                                        ^ (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)) 
                                       << 1U);
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__44__tmp_and) 
                                              >> 1U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__44__tmp_xor) 
                                                 >> 1U) 
                                                & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__44__tmp))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__44__tmp 
                                    = ((0x1fdU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__44__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 1U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__44__tmp_and) 
                                              >> 2U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__44__tmp_xor) 
                                                 >> 2U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__44__tmp) 
                                                   >> 1U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__44__tmp 
                                    = ((0x1fbU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__44__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 2U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__44__tmp_and) 
                                              >> 3U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__44__tmp_xor) 
                                                 >> 3U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__44__tmp) 
                                                   >> 2U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__44__tmp 
                                    = ((0x1f7U & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__44__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 3U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__44__tmp_and) 
                                              >> 4U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__44__tmp_xor) 
                                                 >> 4U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__44__tmp) 
                                                   >> 3U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__44__tmp 
                                    = ((0x1efU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__44__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 4U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__44__tmp_and) 
                                              >> 5U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__44__tmp_xor) 
                                                 >> 5U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__44__tmp) 
                                                   >> 4U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__44__tmp 
                                    = ((0x1dfU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__44__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 5U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__44__tmp_and) 
                                              >> 6U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__44__tmp_xor) 
                                                 >> 6U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__44__tmp) 
                                                   >> 5U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__44__tmp 
                                    = ((0x1bfU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__44__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 6U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__44__tmp_and) 
                                              >> 7U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__44__tmp_xor) 
                                                 >> 7U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__44__tmp) 
                                                   >> 6U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__44__tmp 
                                    = ((0x17fU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__44__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 7U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__44__tmp_and) 
                                              >> 8U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__44__tmp_xor) 
                                                 >> 8U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__44__tmp) 
                                                   >> 7U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__44__tmp 
                                    = ((0xffU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__44__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 8U));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__44__Vfuncout 
                                    = (0xffU & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__44__tmp) 
                                                >> 1U));
                            }(), (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__44__Vfuncout)));
                VL_WRITEF_NX("[%0t] %%Error: FBA_ALU_tb.sv:226: Assertion failed in %NFBA_ALU_tb.check: Error, Carry failed A: %b, B: %b, Out: %b\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),8,
                             (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                             8,vlSelf->FBA_ALU_tb__DOT__reg_B,
                             8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out));
                VL_STOP_MT("FBA_ALU_tb.sv", 226, "");
            }
        } else if ((1U & (IData)(vlSelf->FBA_ALU_tb__DOT__func_sel))) {
            if (VL_UNLIKELY((((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                              | (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)) 
                             != (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out)))) {
                VL_WRITEF_NX("[%0t] %%Error: FBA_ALU_tb.sv:222: Assertion failed in %NFBA_ALU_tb.check: Error, Or failed A: %b, B: %b, Out: %b\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),8,
                             (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                             8,vlSelf->FBA_ALU_tb__DOT__reg_B,
                             8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out));
                VL_STOP_MT("FBA_ALU_tb.sv", 222, "");
            }
        } else if (VL_UNLIKELY((((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                                 & (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)) 
                                != (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out)))) {
            VL_WRITEF_NX("[%0t] %%Error: FBA_ALU_tb.sv:219: Assertion failed in %NFBA_ALU_tb.check: Error, And failed A: %b, B: %b, Out: %b\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                         8,vlSelf->FBA_ALU_tb__DOT__reg_B,
                         8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out));
            VL_STOP_MT("FBA_ALU_tb.sv", 219, "");
        }
    } else if ((2U & (IData)(vlSelf->FBA_ALU_tb__DOT__func_sel))) {
        if ((1U & (IData)(vlSelf->FBA_ALU_tb__DOT__func_sel))) {
            if (VL_UNLIKELY(((0xffU & (~ (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A))) 
                             != (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out)))) {
                VL_WRITEF_NX("[%0t] %%Error: FBA_ALU_tb.sv:216: Assertion failed in %NFBA_ALU_tb.check: Error, Not failed A: %b, Out: %b\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),8,
                             (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                             8,vlSelf->FBA_ALU_tb__DOT__reg_Out);
                VL_STOP_MT("FBA_ALU_tb.sv", 216, "");
            }
        } else if (VL_UNLIKELY(((0x1ffU & ((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                                           + (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B))) 
                                != (((IData)(vlSelf->FBA_ALU_tb__DOT__ALU__DOT__c_reg) 
                                     << 8U) | (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out))))) {
            VL_WRITEF_NX("[%0t] %%Error: FBA_ALU_tb.sv:213: Assertion failed in %NFBA_ALU_tb.check: Error, Addition failed A: %b, B: %b, Out: c%b %b\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                         8,vlSelf->FBA_ALU_tb__DOT__reg_B,
                         1,(IData)(vlSelf->FBA_ALU_tb__DOT__ALU__DOT__c_reg),
                         8,vlSelf->FBA_ALU_tb__DOT__reg_Out);
            VL_STOP_MT("FBA_ALU_tb.sv", 213, "");
        }
    } else if ((1U & (IData)(vlSelf->FBA_ALU_tb__DOT__func_sel))) {
        if (VL_UNLIKELY(((0xffU & (~ ((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                                      ^ (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)))) 
                         != (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out)))) {
            VL_WRITEF_NX("[%0t] %%Error: FBA_ALU_tb.sv:210: Assertion failed in %NFBA_ALU_tb.check: Error, Xnor failed A: %b, B: %b, Out: %b\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                         8,vlSelf->FBA_ALU_tb__DOT__reg_B,
                         8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out));
            VL_STOP_MT("FBA_ALU_tb.sv", 210, "");
        }
    } else if (VL_UNLIKELY((((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                             ^ (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)) 
                            != (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out)))) {
        VL_WRITEF_NX("[%0t] %%Error: FBA_ALU_tb.sv:207: Assertion failed in %NFBA_ALU_tb.check: Error, Xor failed A: %b, B: %b, Out: %b\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                     8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                     8,vlSelf->FBA_ALU_tb__DOT__reg_B,
                     8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out));
        VL_STOP_MT("FBA_ALU_tb.sv", 207, "");
    }
    vlSelf->FBA_ALU_tb__DOT__load_shift = 0U;
    vlSelf->FBA_ALU_tb__DOT__reg_A = 0xffU;
    vlSelf->FBA_ALU_tb__DOT__reg_B = 0xffU;
    co_await vlSelf->__VdlySched.delay(2ULL, nullptr, 
                                       "FBA_ALU_tb.sv", 
                                       86);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_FBA_ALU_tb__DOT__check__46__n = 8U;
    __Vtask_FBA_ALU_tb__DOT__bit_shift__47__n = __Vtask_FBA_ALU_tb__DOT__check__46__n;
    vlSelf->FBA_ALU_tb__DOT__load_shift = 1U;
    FBA_ALU_tb__DOT____Vrepeat0 = __Vtask_FBA_ALU_tb__DOT__bit_shift__47__n;
    while (VL_LTS_III(32, 0U, FBA_ALU_tb__DOT____Vrepeat0)) {
        co_await vlSelf->__VdlySched.delay(2ULL, nullptr, 
                                           "FBA_ALU_tb.sv", 
                                           180);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        FBA_ALU_tb__DOT____Vrepeat0 = (FBA_ALU_tb__DOT____Vrepeat0 
                                       - (IData)(1U));
    }
    if ((4U & (IData)(vlSelf->FBA_ALU_tb__DOT__func_sel))) {
        if ((2U & (IData)(vlSelf->FBA_ALU_tb__DOT__func_sel))) {
            if ((1U & (IData)(vlSelf->FBA_ALU_tb__DOT__func_sel))) {
                if (VL_UNLIKELY(((0xffU & (VL_LTS_III(32, 8U, __Vtask_FBA_ALU_tb__DOT__check__46__n)
                                            ? VL_SHIFTR_III(8,8,32, (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A), 
                                                            (__Vtask_FBA_ALU_tb__DOT__check__46__n 
                                                             - (IData)(8U)))
                                            : VL_SHIFTL_III(8,8,32, (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A), 
                                                            ((IData)(8U) 
                                                             - __Vtask_FBA_ALU_tb__DOT__check__46__n)))) 
                                 != (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out)))) {
                    VL_WRITEF_NX("A shifted %b\n[%0t] %%Error: FBA_ALU_tb.sv:231: Assertion failed in %NFBA_ALU_tb.check: Error, Buffer failed A: %b, Out: %b, N shift: %11d\n",0,
                                 8,(0xffU & (VL_LTS_III(32, 8U, __Vtask_FBA_ALU_tb__DOT__check__46__n)
                                              ? VL_SHIFTR_III(8,8,32, (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A), 
                                                              (__Vtask_FBA_ALU_tb__DOT__check__46__n 
                                                               - (IData)(8U)))
                                              : VL_SHIFTL_III(8,8,32, (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A), 
                                                              ((IData)(8U) 
                                                               - __Vtask_FBA_ALU_tb__DOT__check__46__n)))),
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                                 8,vlSelf->FBA_ALU_tb__DOT__reg_Out,
                                 32,__Vtask_FBA_ALU_tb__DOT__check__46__n);
                    VL_STOP_MT("FBA_ALU_tb.sv", 231, "");
                }
            } else if (VL_UNLIKELY((([&]() {
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__48__tmp = 0U;
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__48__tmp_and 
                                    = (((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                                        & (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)) 
                                       << 1U);
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__48__tmp_xor 
                                    = (((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                                        ^ (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)) 
                                       << 1U);
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__48__tmp_and) 
                                              >> 1U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__48__tmp_xor) 
                                                 >> 1U) 
                                                & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__48__tmp))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__48__tmp 
                                    = ((0x1fdU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__48__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 1U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__48__tmp_and) 
                                              >> 2U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__48__tmp_xor) 
                                                 >> 2U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__48__tmp) 
                                                   >> 1U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__48__tmp 
                                    = ((0x1fbU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__48__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 2U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__48__tmp_and) 
                                              >> 3U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__48__tmp_xor) 
                                                 >> 3U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__48__tmp) 
                                                   >> 2U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__48__tmp 
                                    = ((0x1f7U & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__48__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 3U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__48__tmp_and) 
                                              >> 4U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__48__tmp_xor) 
                                                 >> 4U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__48__tmp) 
                                                   >> 3U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__48__tmp 
                                    = ((0x1efU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__48__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 4U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__48__tmp_and) 
                                              >> 5U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__48__tmp_xor) 
                                                 >> 5U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__48__tmp) 
                                                   >> 4U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__48__tmp 
                                    = ((0x1dfU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__48__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 5U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__48__tmp_and) 
                                              >> 6U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__48__tmp_xor) 
                                                 >> 6U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__48__tmp) 
                                                   >> 5U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__48__tmp 
                                    = ((0x1bfU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__48__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 6U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__48__tmp_and) 
                                              >> 7U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__48__tmp_xor) 
                                                 >> 7U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__48__tmp) 
                                                   >> 6U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__48__tmp 
                                    = ((0x17fU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__48__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 7U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__48__tmp_and) 
                                              >> 8U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__48__tmp_xor) 
                                                 >> 8U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__48__tmp) 
                                                   >> 7U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__48__tmp 
                                    = ((0xffU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__48__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 8U));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__48__Vfuncout 
                                    = (0xffU & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__48__tmp) 
                                                >> 1U));
                            }(), (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__48__Vfuncout)) 
                                    != (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out)))) {
                VL_WRITEF_NX("Computed carries: %b\n",0,
                             8,([&]() {
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__49__tmp = 0U;
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__49__tmp_and 
                                    = (((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                                        & (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)) 
                                       << 1U);
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__49__tmp_xor 
                                    = (((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                                        ^ (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)) 
                                       << 1U);
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__49__tmp_and) 
                                              >> 1U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__49__tmp_xor) 
                                                 >> 1U) 
                                                & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__49__tmp))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__49__tmp 
                                    = ((0x1fdU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__49__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 1U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__49__tmp_and) 
                                              >> 2U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__49__tmp_xor) 
                                                 >> 2U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__49__tmp) 
                                                   >> 1U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__49__tmp 
                                    = ((0x1fbU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__49__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 2U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__49__tmp_and) 
                                              >> 3U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__49__tmp_xor) 
                                                 >> 3U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__49__tmp) 
                                                   >> 2U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__49__tmp 
                                    = ((0x1f7U & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__49__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 3U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__49__tmp_and) 
                                              >> 4U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__49__tmp_xor) 
                                                 >> 4U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__49__tmp) 
                                                   >> 3U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__49__tmp 
                                    = ((0x1efU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__49__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 4U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__49__tmp_and) 
                                              >> 5U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__49__tmp_xor) 
                                                 >> 5U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__49__tmp) 
                                                   >> 4U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__49__tmp 
                                    = ((0x1dfU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__49__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 5U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__49__tmp_and) 
                                              >> 6U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__49__tmp_xor) 
                                                 >> 6U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__49__tmp) 
                                                   >> 5U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__49__tmp 
                                    = ((0x1bfU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__49__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 6U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__49__tmp_and) 
                                              >> 7U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__49__tmp_xor) 
                                                 >> 7U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__49__tmp) 
                                                   >> 6U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__49__tmp 
                                    = ((0x17fU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__49__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 7U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__49__tmp_and) 
                                              >> 8U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__49__tmp_xor) 
                                                 >> 8U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__49__tmp) 
                                                   >> 7U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__49__tmp 
                                    = ((0xffU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__49__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 8U));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__49__Vfuncout 
                                    = (0xffU & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__49__tmp) 
                                                >> 1U));
                            }(), (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__49__Vfuncout)));
                VL_WRITEF_NX("[%0t] %%Error: FBA_ALU_tb.sv:226: Assertion failed in %NFBA_ALU_tb.check: Error, Carry failed A: %b, B: %b, Out: %b\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),8,
                             (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                             8,vlSelf->FBA_ALU_tb__DOT__reg_B,
                             8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out));
                VL_STOP_MT("FBA_ALU_tb.sv", 226, "");
            }
        } else if ((1U & (IData)(vlSelf->FBA_ALU_tb__DOT__func_sel))) {
            if (VL_UNLIKELY((((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                              | (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)) 
                             != (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out)))) {
                VL_WRITEF_NX("[%0t] %%Error: FBA_ALU_tb.sv:222: Assertion failed in %NFBA_ALU_tb.check: Error, Or failed A: %b, B: %b, Out: %b\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),8,
                             (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                             8,vlSelf->FBA_ALU_tb__DOT__reg_B,
                             8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out));
                VL_STOP_MT("FBA_ALU_tb.sv", 222, "");
            }
        } else if (VL_UNLIKELY((((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                                 & (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)) 
                                != (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out)))) {
            VL_WRITEF_NX("[%0t] %%Error: FBA_ALU_tb.sv:219: Assertion failed in %NFBA_ALU_tb.check: Error, And failed A: %b, B: %b, Out: %b\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                         8,vlSelf->FBA_ALU_tb__DOT__reg_B,
                         8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out));
            VL_STOP_MT("FBA_ALU_tb.sv", 219, "");
        }
    } else if ((2U & (IData)(vlSelf->FBA_ALU_tb__DOT__func_sel))) {
        if ((1U & (IData)(vlSelf->FBA_ALU_tb__DOT__func_sel))) {
            if (VL_UNLIKELY(((0xffU & (~ (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A))) 
                             != (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out)))) {
                VL_WRITEF_NX("[%0t] %%Error: FBA_ALU_tb.sv:216: Assertion failed in %NFBA_ALU_tb.check: Error, Not failed A: %b, Out: %b\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),8,
                             (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                             8,vlSelf->FBA_ALU_tb__DOT__reg_Out);
                VL_STOP_MT("FBA_ALU_tb.sv", 216, "");
            }
        } else if (VL_UNLIKELY(((0x1ffU & ((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                                           + (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B))) 
                                != (((IData)(vlSelf->FBA_ALU_tb__DOT__ALU__DOT__c_reg) 
                                     << 8U) | (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out))))) {
            VL_WRITEF_NX("[%0t] %%Error: FBA_ALU_tb.sv:213: Assertion failed in %NFBA_ALU_tb.check: Error, Addition failed A: %b, B: %b, Out: c%b %b\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                         8,vlSelf->FBA_ALU_tb__DOT__reg_B,
                         1,(IData)(vlSelf->FBA_ALU_tb__DOT__ALU__DOT__c_reg),
                         8,vlSelf->FBA_ALU_tb__DOT__reg_Out);
            VL_STOP_MT("FBA_ALU_tb.sv", 213, "");
        }
    } else if ((1U & (IData)(vlSelf->FBA_ALU_tb__DOT__func_sel))) {
        if (VL_UNLIKELY(((0xffU & (~ ((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                                      ^ (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)))) 
                         != (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out)))) {
            VL_WRITEF_NX("[%0t] %%Error: FBA_ALU_tb.sv:210: Assertion failed in %NFBA_ALU_tb.check: Error, Xnor failed A: %b, B: %b, Out: %b\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                         8,vlSelf->FBA_ALU_tb__DOT__reg_B,
                         8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out));
            VL_STOP_MT("FBA_ALU_tb.sv", 210, "");
        }
    } else if (VL_UNLIKELY((((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                             ^ (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)) 
                            != (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out)))) {
        VL_WRITEF_NX("[%0t] %%Error: FBA_ALU_tb.sv:207: Assertion failed in %NFBA_ALU_tb.check: Error, Xor failed A: %b, B: %b, Out: %b\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                     8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                     8,vlSelf->FBA_ALU_tb__DOT__reg_B,
                     8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out));
        VL_STOP_MT("FBA_ALU_tb.sv", 207, "");
    }
    vlSelf->FBA_ALU_tb__DOT__load_shift = 0U;
    vlSelf->FBA_ALU_tb__DOT__reg_A = (0xffU & VL_RANDOM_I());
    vlSelf->FBA_ALU_tb__DOT__reg_B = (0xffU & VL_RANDOM_I());
    co_await vlSelf->__VdlySched.delay(2ULL, nullptr, 
                                       "FBA_ALU_tb.sv", 
                                       94);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_FBA_ALU_tb__DOT__check__51__n = 8U;
    __Vtask_FBA_ALU_tb__DOT__bit_shift__52__n = __Vtask_FBA_ALU_tb__DOT__check__51__n;
    vlSelf->FBA_ALU_tb__DOT__load_shift = 1U;
    FBA_ALU_tb__DOT____Vrepeat0 = __Vtask_FBA_ALU_tb__DOT__bit_shift__52__n;
    while (VL_LTS_III(32, 0U, FBA_ALU_tb__DOT____Vrepeat0)) {
        co_await vlSelf->__VdlySched.delay(2ULL, nullptr, 
                                           "FBA_ALU_tb.sv", 
                                           180);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        FBA_ALU_tb__DOT____Vrepeat0 = (FBA_ALU_tb__DOT____Vrepeat0 
                                       - (IData)(1U));
    }
    if ((4U & (IData)(vlSelf->FBA_ALU_tb__DOT__func_sel))) {
        if ((2U & (IData)(vlSelf->FBA_ALU_tb__DOT__func_sel))) {
            if ((1U & (IData)(vlSelf->FBA_ALU_tb__DOT__func_sel))) {
                if (VL_UNLIKELY(((0xffU & (VL_LTS_III(32, 8U, __Vtask_FBA_ALU_tb__DOT__check__51__n)
                                            ? VL_SHIFTR_III(8,8,32, (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A), 
                                                            (__Vtask_FBA_ALU_tb__DOT__check__51__n 
                                                             - (IData)(8U)))
                                            : VL_SHIFTL_III(8,8,32, (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A), 
                                                            ((IData)(8U) 
                                                             - __Vtask_FBA_ALU_tb__DOT__check__51__n)))) 
                                 != (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out)))) {
                    VL_WRITEF_NX("A shifted %b\n[%0t] %%Error: FBA_ALU_tb.sv:231: Assertion failed in %NFBA_ALU_tb.check: Error, Buffer failed A: %b, Out: %b, N shift: %11d\n",0,
                                 8,(0xffU & (VL_LTS_III(32, 8U, __Vtask_FBA_ALU_tb__DOT__check__51__n)
                                              ? VL_SHIFTR_III(8,8,32, (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A), 
                                                              (__Vtask_FBA_ALU_tb__DOT__check__51__n 
                                                               - (IData)(8U)))
                                              : VL_SHIFTL_III(8,8,32, (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A), 
                                                              ((IData)(8U) 
                                                               - __Vtask_FBA_ALU_tb__DOT__check__51__n)))),
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                                 8,vlSelf->FBA_ALU_tb__DOT__reg_Out,
                                 32,__Vtask_FBA_ALU_tb__DOT__check__51__n);
                    VL_STOP_MT("FBA_ALU_tb.sv", 231, "");
                }
            } else if (VL_UNLIKELY((([&]() {
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__53__tmp = 0U;
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__53__tmp_and 
                                    = (((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                                        & (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)) 
                                       << 1U);
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__53__tmp_xor 
                                    = (((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                                        ^ (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)) 
                                       << 1U);
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__53__tmp_and) 
                                              >> 1U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__53__tmp_xor) 
                                                 >> 1U) 
                                                & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__53__tmp))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__53__tmp 
                                    = ((0x1fdU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__53__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 1U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__53__tmp_and) 
                                              >> 2U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__53__tmp_xor) 
                                                 >> 2U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__53__tmp) 
                                                   >> 1U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__53__tmp 
                                    = ((0x1fbU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__53__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 2U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__53__tmp_and) 
                                              >> 3U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__53__tmp_xor) 
                                                 >> 3U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__53__tmp) 
                                                   >> 2U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__53__tmp 
                                    = ((0x1f7U & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__53__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 3U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__53__tmp_and) 
                                              >> 4U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__53__tmp_xor) 
                                                 >> 4U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__53__tmp) 
                                                   >> 3U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__53__tmp 
                                    = ((0x1efU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__53__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 4U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__53__tmp_and) 
                                              >> 5U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__53__tmp_xor) 
                                                 >> 5U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__53__tmp) 
                                                   >> 4U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__53__tmp 
                                    = ((0x1dfU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__53__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 5U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__53__tmp_and) 
                                              >> 6U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__53__tmp_xor) 
                                                 >> 6U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__53__tmp) 
                                                   >> 5U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__53__tmp 
                                    = ((0x1bfU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__53__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 6U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__53__tmp_and) 
                                              >> 7U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__53__tmp_xor) 
                                                 >> 7U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__53__tmp) 
                                                   >> 6U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__53__tmp 
                                    = ((0x17fU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__53__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 7U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__53__tmp_and) 
                                              >> 8U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__53__tmp_xor) 
                                                 >> 8U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__53__tmp) 
                                                   >> 7U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__53__tmp 
                                    = ((0xffU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__53__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 8U));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__53__Vfuncout 
                                    = (0xffU & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__53__tmp) 
                                                >> 1U));
                            }(), (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__53__Vfuncout)) 
                                    != (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out)))) {
                VL_WRITEF_NX("Computed carries: %b\n",0,
                             8,([&]() {
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__54__tmp = 0U;
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__54__tmp_and 
                                    = (((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                                        & (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)) 
                                       << 1U);
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__54__tmp_xor 
                                    = (((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                                        ^ (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)) 
                                       << 1U);
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__54__tmp_and) 
                                              >> 1U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__54__tmp_xor) 
                                                 >> 1U) 
                                                & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__54__tmp))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__54__tmp 
                                    = ((0x1fdU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__54__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 1U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__54__tmp_and) 
                                              >> 2U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__54__tmp_xor) 
                                                 >> 2U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__54__tmp) 
                                                   >> 1U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__54__tmp 
                                    = ((0x1fbU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__54__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 2U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__54__tmp_and) 
                                              >> 3U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__54__tmp_xor) 
                                                 >> 3U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__54__tmp) 
                                                   >> 2U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__54__tmp 
                                    = ((0x1f7U & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__54__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 3U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__54__tmp_and) 
                                              >> 4U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__54__tmp_xor) 
                                                 >> 4U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__54__tmp) 
                                                   >> 3U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__54__tmp 
                                    = ((0x1efU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__54__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 4U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__54__tmp_and) 
                                              >> 5U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__54__tmp_xor) 
                                                 >> 5U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__54__tmp) 
                                                   >> 4U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__54__tmp 
                                    = ((0x1dfU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__54__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 5U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__54__tmp_and) 
                                              >> 6U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__54__tmp_xor) 
                                                 >> 6U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__54__tmp) 
                                                   >> 5U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__54__tmp 
                                    = ((0x1bfU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__54__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 6U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__54__tmp_and) 
                                              >> 7U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__54__tmp_xor) 
                                                 >> 7U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__54__tmp) 
                                                   >> 6U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__54__tmp 
                                    = ((0x17fU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__54__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 7U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__54__tmp_and) 
                                              >> 8U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__54__tmp_xor) 
                                                 >> 8U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__54__tmp) 
                                                   >> 7U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__54__tmp 
                                    = ((0xffU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__54__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 8U));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__54__Vfuncout 
                                    = (0xffU & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__54__tmp) 
                                                >> 1U));
                            }(), (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__54__Vfuncout)));
                VL_WRITEF_NX("[%0t] %%Error: FBA_ALU_tb.sv:226: Assertion failed in %NFBA_ALU_tb.check: Error, Carry failed A: %b, B: %b, Out: %b\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),8,
                             (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                             8,vlSelf->FBA_ALU_tb__DOT__reg_B,
                             8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out));
                VL_STOP_MT("FBA_ALU_tb.sv", 226, "");
            }
        } else if ((1U & (IData)(vlSelf->FBA_ALU_tb__DOT__func_sel))) {
            if (VL_UNLIKELY((((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                              | (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)) 
                             != (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out)))) {
                VL_WRITEF_NX("[%0t] %%Error: FBA_ALU_tb.sv:222: Assertion failed in %NFBA_ALU_tb.check: Error, Or failed A: %b, B: %b, Out: %b\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),8,
                             (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                             8,vlSelf->FBA_ALU_tb__DOT__reg_B,
                             8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out));
                VL_STOP_MT("FBA_ALU_tb.sv", 222, "");
            }
        } else if (VL_UNLIKELY((((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                                 & (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)) 
                                != (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out)))) {
            VL_WRITEF_NX("[%0t] %%Error: FBA_ALU_tb.sv:219: Assertion failed in %NFBA_ALU_tb.check: Error, And failed A: %b, B: %b, Out: %b\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                         8,vlSelf->FBA_ALU_tb__DOT__reg_B,
                         8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out));
            VL_STOP_MT("FBA_ALU_tb.sv", 219, "");
        }
    } else if ((2U & (IData)(vlSelf->FBA_ALU_tb__DOT__func_sel))) {
        if ((1U & (IData)(vlSelf->FBA_ALU_tb__DOT__func_sel))) {
            if (VL_UNLIKELY(((0xffU & (~ (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A))) 
                             != (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out)))) {
                VL_WRITEF_NX("[%0t] %%Error: FBA_ALU_tb.sv:216: Assertion failed in %NFBA_ALU_tb.check: Error, Not failed A: %b, Out: %b\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),8,
                             (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                             8,vlSelf->FBA_ALU_tb__DOT__reg_Out);
                VL_STOP_MT("FBA_ALU_tb.sv", 216, "");
            }
        } else if (VL_UNLIKELY(((0x1ffU & ((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                                           + (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B))) 
                                != (((IData)(vlSelf->FBA_ALU_tb__DOT__ALU__DOT__c_reg) 
                                     << 8U) | (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out))))) {
            VL_WRITEF_NX("[%0t] %%Error: FBA_ALU_tb.sv:213: Assertion failed in %NFBA_ALU_tb.check: Error, Addition failed A: %b, B: %b, Out: c%b %b\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                         8,vlSelf->FBA_ALU_tb__DOT__reg_B,
                         1,(IData)(vlSelf->FBA_ALU_tb__DOT__ALU__DOT__c_reg),
                         8,vlSelf->FBA_ALU_tb__DOT__reg_Out);
            VL_STOP_MT("FBA_ALU_tb.sv", 213, "");
        }
    } else if ((1U & (IData)(vlSelf->FBA_ALU_tb__DOT__func_sel))) {
        if (VL_UNLIKELY(((0xffU & (~ ((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                                      ^ (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)))) 
                         != (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out)))) {
            VL_WRITEF_NX("[%0t] %%Error: FBA_ALU_tb.sv:210: Assertion failed in %NFBA_ALU_tb.check: Error, Xnor failed A: %b, B: %b, Out: %b\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                         8,vlSelf->FBA_ALU_tb__DOT__reg_B,
                         8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out));
            VL_STOP_MT("FBA_ALU_tb.sv", 210, "");
        }
    } else if (VL_UNLIKELY((((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                             ^ (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)) 
                            != (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out)))) {
        VL_WRITEF_NX("[%0t] %%Error: FBA_ALU_tb.sv:207: Assertion failed in %NFBA_ALU_tb.check: Error, Xor failed A: %b, B: %b, Out: %b\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                     8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                     8,vlSelf->FBA_ALU_tb__DOT__reg_B,
                     8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out));
        VL_STOP_MT("FBA_ALU_tb.sv", 207, "");
    }
    VL_WRITEF_NX("Success: Sum test\n",0);
    vlSelf->FBA_ALU_tb__DOT__reg_A = 0U;
    vlSelf->FBA_ALU_tb__DOT__reg_B = 0U;
    vlSelf->FBA_ALU_tb__DOT__reg_Out = 0U;
    vlSelf->FBA_ALU_tb__DOT__rst = 0U;
    co_await vlSelf->__VdlySched.delay(2ULL, nullptr, 
                                       "FBA_ALU_tb.sv", 
                                       70);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->FBA_ALU_tb__DOT__rst = 1U;
    vlSelf->FBA_ALU_tb__DOT__func_sel = 3U;
    vlSelf->FBA_ALU_tb__DOT__load_shift = 0U;
    vlSelf->FBA_ALU_tb__DOT__reg_A = 0U;
    vlSelf->FBA_ALU_tb__DOT__reg_B = 0U;
    co_await vlSelf->__VdlySched.delay(2ULL, nullptr, 
                                       "FBA_ALU_tb.sv", 
                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_FBA_ALU_tb__DOT__check__59__n = 8U;
    __Vtask_FBA_ALU_tb__DOT__bit_shift__60__n = __Vtask_FBA_ALU_tb__DOT__check__59__n;
    vlSelf->FBA_ALU_tb__DOT__load_shift = 1U;
    FBA_ALU_tb__DOT____Vrepeat0 = __Vtask_FBA_ALU_tb__DOT__bit_shift__60__n;
    while (VL_LTS_III(32, 0U, FBA_ALU_tb__DOT____Vrepeat0)) {
        co_await vlSelf->__VdlySched.delay(2ULL, nullptr, 
                                           "FBA_ALU_tb.sv", 
                                           180);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        FBA_ALU_tb__DOT____Vrepeat0 = (FBA_ALU_tb__DOT____Vrepeat0 
                                       - (IData)(1U));
    }
    if ((4U & (IData)(vlSelf->FBA_ALU_tb__DOT__func_sel))) {
        if ((2U & (IData)(vlSelf->FBA_ALU_tb__DOT__func_sel))) {
            if ((1U & (IData)(vlSelf->FBA_ALU_tb__DOT__func_sel))) {
                if (VL_UNLIKELY(((0xffU & (VL_LTS_III(32, 8U, __Vtask_FBA_ALU_tb__DOT__check__59__n)
                                            ? VL_SHIFTR_III(8,8,32, (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A), 
                                                            (__Vtask_FBA_ALU_tb__DOT__check__59__n 
                                                             - (IData)(8U)))
                                            : VL_SHIFTL_III(8,8,32, (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A), 
                                                            ((IData)(8U) 
                                                             - __Vtask_FBA_ALU_tb__DOT__check__59__n)))) 
                                 != (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out)))) {
                    VL_WRITEF_NX("A shifted %b\n[%0t] %%Error: FBA_ALU_tb.sv:231: Assertion failed in %NFBA_ALU_tb.check: Error, Buffer failed A: %b, Out: %b, N shift: %11d\n",0,
                                 8,(0xffU & (VL_LTS_III(32, 8U, __Vtask_FBA_ALU_tb__DOT__check__59__n)
                                              ? VL_SHIFTR_III(8,8,32, (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A), 
                                                              (__Vtask_FBA_ALU_tb__DOT__check__59__n 
                                                               - (IData)(8U)))
                                              : VL_SHIFTL_III(8,8,32, (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A), 
                                                              ((IData)(8U) 
                                                               - __Vtask_FBA_ALU_tb__DOT__check__59__n)))),
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                                 8,vlSelf->FBA_ALU_tb__DOT__reg_Out,
                                 32,__Vtask_FBA_ALU_tb__DOT__check__59__n);
                    VL_STOP_MT("FBA_ALU_tb.sv", 231, "");
                }
            } else if (VL_UNLIKELY((([&]() {
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__61__tmp = 0U;
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__61__tmp_and 
                                    = (((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                                        & (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)) 
                                       << 1U);
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__61__tmp_xor 
                                    = (((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                                        ^ (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)) 
                                       << 1U);
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__61__tmp_and) 
                                              >> 1U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__61__tmp_xor) 
                                                 >> 1U) 
                                                & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__61__tmp))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__61__tmp 
                                    = ((0x1fdU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__61__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 1U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__61__tmp_and) 
                                              >> 2U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__61__tmp_xor) 
                                                 >> 2U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__61__tmp) 
                                                   >> 1U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__61__tmp 
                                    = ((0x1fbU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__61__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 2U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__61__tmp_and) 
                                              >> 3U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__61__tmp_xor) 
                                                 >> 3U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__61__tmp) 
                                                   >> 2U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__61__tmp 
                                    = ((0x1f7U & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__61__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 3U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__61__tmp_and) 
                                              >> 4U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__61__tmp_xor) 
                                                 >> 4U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__61__tmp) 
                                                   >> 3U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__61__tmp 
                                    = ((0x1efU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__61__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 4U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__61__tmp_and) 
                                              >> 5U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__61__tmp_xor) 
                                                 >> 5U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__61__tmp) 
                                                   >> 4U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__61__tmp 
                                    = ((0x1dfU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__61__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 5U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__61__tmp_and) 
                                              >> 6U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__61__tmp_xor) 
                                                 >> 6U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__61__tmp) 
                                                   >> 5U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__61__tmp 
                                    = ((0x1bfU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__61__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 6U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__61__tmp_and) 
                                              >> 7U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__61__tmp_xor) 
                                                 >> 7U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__61__tmp) 
                                                   >> 6U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__61__tmp 
                                    = ((0x17fU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__61__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 7U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__61__tmp_and) 
                                              >> 8U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__61__tmp_xor) 
                                                 >> 8U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__61__tmp) 
                                                   >> 7U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__61__tmp 
                                    = ((0xffU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__61__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 8U));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__61__Vfuncout 
                                    = (0xffU & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__61__tmp) 
                                                >> 1U));
                            }(), (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__61__Vfuncout)) 
                                    != (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out)))) {
                VL_WRITEF_NX("Computed carries: %b\n",0,
                             8,([&]() {
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__62__tmp = 0U;
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__62__tmp_and 
                                    = (((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                                        & (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)) 
                                       << 1U);
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__62__tmp_xor 
                                    = (((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                                        ^ (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)) 
                                       << 1U);
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__62__tmp_and) 
                                              >> 1U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__62__tmp_xor) 
                                                 >> 1U) 
                                                & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__62__tmp))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__62__tmp 
                                    = ((0x1fdU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__62__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 1U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__62__tmp_and) 
                                              >> 2U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__62__tmp_xor) 
                                                 >> 2U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__62__tmp) 
                                                   >> 1U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__62__tmp 
                                    = ((0x1fbU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__62__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 2U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__62__tmp_and) 
                                              >> 3U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__62__tmp_xor) 
                                                 >> 3U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__62__tmp) 
                                                   >> 2U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__62__tmp 
                                    = ((0x1f7U & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__62__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 3U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__62__tmp_and) 
                                              >> 4U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__62__tmp_xor) 
                                                 >> 4U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__62__tmp) 
                                                   >> 3U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__62__tmp 
                                    = ((0x1efU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__62__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 4U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__62__tmp_and) 
                                              >> 5U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__62__tmp_xor) 
                                                 >> 5U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__62__tmp) 
                                                   >> 4U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__62__tmp 
                                    = ((0x1dfU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__62__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 5U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__62__tmp_and) 
                                              >> 6U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__62__tmp_xor) 
                                                 >> 6U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__62__tmp) 
                                                   >> 5U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__62__tmp 
                                    = ((0x1bfU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__62__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 6U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__62__tmp_and) 
                                              >> 7U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__62__tmp_xor) 
                                                 >> 7U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__62__tmp) 
                                                   >> 6U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__62__tmp 
                                    = ((0x17fU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__62__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 7U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__62__tmp_and) 
                                              >> 8U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__62__tmp_xor) 
                                                 >> 8U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__62__tmp) 
                                                   >> 7U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__62__tmp 
                                    = ((0xffU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__62__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 8U));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__62__Vfuncout 
                                    = (0xffU & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__62__tmp) 
                                                >> 1U));
                            }(), (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__62__Vfuncout)));
                VL_WRITEF_NX("[%0t] %%Error: FBA_ALU_tb.sv:226: Assertion failed in %NFBA_ALU_tb.check: Error, Carry failed A: %b, B: %b, Out: %b\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),8,
                             (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                             8,vlSelf->FBA_ALU_tb__DOT__reg_B,
                             8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out));
                VL_STOP_MT("FBA_ALU_tb.sv", 226, "");
            }
        } else if ((1U & (IData)(vlSelf->FBA_ALU_tb__DOT__func_sel))) {
            if (VL_UNLIKELY((((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                              | (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)) 
                             != (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out)))) {
                VL_WRITEF_NX("[%0t] %%Error: FBA_ALU_tb.sv:222: Assertion failed in %NFBA_ALU_tb.check: Error, Or failed A: %b, B: %b, Out: %b\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),8,
                             (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                             8,vlSelf->FBA_ALU_tb__DOT__reg_B,
                             8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out));
                VL_STOP_MT("FBA_ALU_tb.sv", 222, "");
            }
        } else if (VL_UNLIKELY((((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                                 & (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)) 
                                != (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out)))) {
            VL_WRITEF_NX("[%0t] %%Error: FBA_ALU_tb.sv:219: Assertion failed in %NFBA_ALU_tb.check: Error, And failed A: %b, B: %b, Out: %b\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                         8,vlSelf->FBA_ALU_tb__DOT__reg_B,
                         8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out));
            VL_STOP_MT("FBA_ALU_tb.sv", 219, "");
        }
    } else if ((2U & (IData)(vlSelf->FBA_ALU_tb__DOT__func_sel))) {
        if ((1U & (IData)(vlSelf->FBA_ALU_tb__DOT__func_sel))) {
            if (VL_UNLIKELY(((0xffU & (~ (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A))) 
                             != (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out)))) {
                VL_WRITEF_NX("[%0t] %%Error: FBA_ALU_tb.sv:216: Assertion failed in %NFBA_ALU_tb.check: Error, Not failed A: %b, Out: %b\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),8,
                             (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                             8,vlSelf->FBA_ALU_tb__DOT__reg_Out);
                VL_STOP_MT("FBA_ALU_tb.sv", 216, "");
            }
        } else if (VL_UNLIKELY(((0x1ffU & ((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                                           + (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B))) 
                                != (((IData)(vlSelf->FBA_ALU_tb__DOT__ALU__DOT__c_reg) 
                                     << 8U) | (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out))))) {
            VL_WRITEF_NX("[%0t] %%Error: FBA_ALU_tb.sv:213: Assertion failed in %NFBA_ALU_tb.check: Error, Addition failed A: %b, B: %b, Out: c%b %b\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                         8,vlSelf->FBA_ALU_tb__DOT__reg_B,
                         1,(IData)(vlSelf->FBA_ALU_tb__DOT__ALU__DOT__c_reg),
                         8,vlSelf->FBA_ALU_tb__DOT__reg_Out);
            VL_STOP_MT("FBA_ALU_tb.sv", 213, "");
        }
    } else if ((1U & (IData)(vlSelf->FBA_ALU_tb__DOT__func_sel))) {
        if (VL_UNLIKELY(((0xffU & (~ ((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                                      ^ (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)))) 
                         != (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out)))) {
            VL_WRITEF_NX("[%0t] %%Error: FBA_ALU_tb.sv:210: Assertion failed in %NFBA_ALU_tb.check: Error, Xnor failed A: %b, B: %b, Out: %b\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                         8,vlSelf->FBA_ALU_tb__DOT__reg_B,
                         8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out));
            VL_STOP_MT("FBA_ALU_tb.sv", 210, "");
        }
    } else if (VL_UNLIKELY((((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                             ^ (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)) 
                            != (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out)))) {
        VL_WRITEF_NX("[%0t] %%Error: FBA_ALU_tb.sv:207: Assertion failed in %NFBA_ALU_tb.check: Error, Xor failed A: %b, B: %b, Out: %b\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                     8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                     8,vlSelf->FBA_ALU_tb__DOT__reg_B,
                     8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out));
        VL_STOP_MT("FBA_ALU_tb.sv", 207, "");
    }
    vlSelf->FBA_ALU_tb__DOT__load_shift = 0U;
    vlSelf->FBA_ALU_tb__DOT__reg_A = 0xffU;
    vlSelf->FBA_ALU_tb__DOT__reg_B = 0xffU;
    co_await vlSelf->__VdlySched.delay(2ULL, nullptr, 
                                       "FBA_ALU_tb.sv", 
                                       86);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_FBA_ALU_tb__DOT__check__64__n = 8U;
    __Vtask_FBA_ALU_tb__DOT__bit_shift__65__n = __Vtask_FBA_ALU_tb__DOT__check__64__n;
    vlSelf->FBA_ALU_tb__DOT__load_shift = 1U;
    FBA_ALU_tb__DOT____Vrepeat0 = __Vtask_FBA_ALU_tb__DOT__bit_shift__65__n;
    while (VL_LTS_III(32, 0U, FBA_ALU_tb__DOT____Vrepeat0)) {
        co_await vlSelf->__VdlySched.delay(2ULL, nullptr, 
                                           "FBA_ALU_tb.sv", 
                                           180);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        FBA_ALU_tb__DOT____Vrepeat0 = (FBA_ALU_tb__DOT____Vrepeat0 
                                       - (IData)(1U));
    }
    if ((4U & (IData)(vlSelf->FBA_ALU_tb__DOT__func_sel))) {
        if ((2U & (IData)(vlSelf->FBA_ALU_tb__DOT__func_sel))) {
            if ((1U & (IData)(vlSelf->FBA_ALU_tb__DOT__func_sel))) {
                if (VL_UNLIKELY(((0xffU & (VL_LTS_III(32, 8U, __Vtask_FBA_ALU_tb__DOT__check__64__n)
                                            ? VL_SHIFTR_III(8,8,32, (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A), 
                                                            (__Vtask_FBA_ALU_tb__DOT__check__64__n 
                                                             - (IData)(8U)))
                                            : VL_SHIFTL_III(8,8,32, (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A), 
                                                            ((IData)(8U) 
                                                             - __Vtask_FBA_ALU_tb__DOT__check__64__n)))) 
                                 != (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out)))) {
                    VL_WRITEF_NX("A shifted %b\n[%0t] %%Error: FBA_ALU_tb.sv:231: Assertion failed in %NFBA_ALU_tb.check: Error, Buffer failed A: %b, Out: %b, N shift: %11d\n",0,
                                 8,(0xffU & (VL_LTS_III(32, 8U, __Vtask_FBA_ALU_tb__DOT__check__64__n)
                                              ? VL_SHIFTR_III(8,8,32, (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A), 
                                                              (__Vtask_FBA_ALU_tb__DOT__check__64__n 
                                                               - (IData)(8U)))
                                              : VL_SHIFTL_III(8,8,32, (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A), 
                                                              ((IData)(8U) 
                                                               - __Vtask_FBA_ALU_tb__DOT__check__64__n)))),
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                                 8,vlSelf->FBA_ALU_tb__DOT__reg_Out,
                                 32,__Vtask_FBA_ALU_tb__DOT__check__64__n);
                    VL_STOP_MT("FBA_ALU_tb.sv", 231, "");
                }
            } else if (VL_UNLIKELY((([&]() {
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__66__tmp = 0U;
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__66__tmp_and 
                                    = (((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                                        & (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)) 
                                       << 1U);
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__66__tmp_xor 
                                    = (((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                                        ^ (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)) 
                                       << 1U);
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__66__tmp_and) 
                                              >> 1U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__66__tmp_xor) 
                                                 >> 1U) 
                                                & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__66__tmp))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__66__tmp 
                                    = ((0x1fdU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__66__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 1U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__66__tmp_and) 
                                              >> 2U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__66__tmp_xor) 
                                                 >> 2U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__66__tmp) 
                                                   >> 1U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__66__tmp 
                                    = ((0x1fbU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__66__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 2U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__66__tmp_and) 
                                              >> 3U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__66__tmp_xor) 
                                                 >> 3U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__66__tmp) 
                                                   >> 2U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__66__tmp 
                                    = ((0x1f7U & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__66__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 3U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__66__tmp_and) 
                                              >> 4U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__66__tmp_xor) 
                                                 >> 4U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__66__tmp) 
                                                   >> 3U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__66__tmp 
                                    = ((0x1efU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__66__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 4U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__66__tmp_and) 
                                              >> 5U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__66__tmp_xor) 
                                                 >> 5U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__66__tmp) 
                                                   >> 4U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__66__tmp 
                                    = ((0x1dfU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__66__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 5U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__66__tmp_and) 
                                              >> 6U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__66__tmp_xor) 
                                                 >> 6U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__66__tmp) 
                                                   >> 5U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__66__tmp 
                                    = ((0x1bfU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__66__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 6U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__66__tmp_and) 
                                              >> 7U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__66__tmp_xor) 
                                                 >> 7U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__66__tmp) 
                                                   >> 6U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__66__tmp 
                                    = ((0x17fU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__66__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 7U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__66__tmp_and) 
                                              >> 8U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__66__tmp_xor) 
                                                 >> 8U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__66__tmp) 
                                                   >> 7U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__66__tmp 
                                    = ((0xffU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__66__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 8U));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__66__Vfuncout 
                                    = (0xffU & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__66__tmp) 
                                                >> 1U));
                            }(), (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__66__Vfuncout)) 
                                    != (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out)))) {
                VL_WRITEF_NX("Computed carries: %b\n",0,
                             8,([&]() {
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__67__tmp = 0U;
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__67__tmp_and 
                                    = (((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                                        & (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)) 
                                       << 1U);
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__67__tmp_xor 
                                    = (((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                                        ^ (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)) 
                                       << 1U);
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__67__tmp_and) 
                                              >> 1U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__67__tmp_xor) 
                                                 >> 1U) 
                                                & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__67__tmp))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__67__tmp 
                                    = ((0x1fdU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__67__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 1U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__67__tmp_and) 
                                              >> 2U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__67__tmp_xor) 
                                                 >> 2U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__67__tmp) 
                                                   >> 1U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__67__tmp 
                                    = ((0x1fbU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__67__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 2U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__67__tmp_and) 
                                              >> 3U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__67__tmp_xor) 
                                                 >> 3U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__67__tmp) 
                                                   >> 2U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__67__tmp 
                                    = ((0x1f7U & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__67__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 3U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__67__tmp_and) 
                                              >> 4U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__67__tmp_xor) 
                                                 >> 4U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__67__tmp) 
                                                   >> 3U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__67__tmp 
                                    = ((0x1efU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__67__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 4U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__67__tmp_and) 
                                              >> 5U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__67__tmp_xor) 
                                                 >> 5U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__67__tmp) 
                                                   >> 4U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__67__tmp 
                                    = ((0x1dfU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__67__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 5U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__67__tmp_and) 
                                              >> 6U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__67__tmp_xor) 
                                                 >> 6U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__67__tmp) 
                                                   >> 5U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__67__tmp 
                                    = ((0x1bfU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__67__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 6U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__67__tmp_and) 
                                              >> 7U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__67__tmp_xor) 
                                                 >> 7U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__67__tmp) 
                                                   >> 6U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__67__tmp 
                                    = ((0x17fU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__67__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 7U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__67__tmp_and) 
                                              >> 8U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__67__tmp_xor) 
                                                 >> 8U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__67__tmp) 
                                                   >> 7U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__67__tmp 
                                    = ((0xffU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__67__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 8U));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__67__Vfuncout 
                                    = (0xffU & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__67__tmp) 
                                                >> 1U));
                            }(), (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__67__Vfuncout)));
                VL_WRITEF_NX("[%0t] %%Error: FBA_ALU_tb.sv:226: Assertion failed in %NFBA_ALU_tb.check: Error, Carry failed A: %b, B: %b, Out: %b\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),8,
                             (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                             8,vlSelf->FBA_ALU_tb__DOT__reg_B,
                             8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out));
                VL_STOP_MT("FBA_ALU_tb.sv", 226, "");
            }
        } else if ((1U & (IData)(vlSelf->FBA_ALU_tb__DOT__func_sel))) {
            if (VL_UNLIKELY((((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                              | (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)) 
                             != (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out)))) {
                VL_WRITEF_NX("[%0t] %%Error: FBA_ALU_tb.sv:222: Assertion failed in %NFBA_ALU_tb.check: Error, Or failed A: %b, B: %b, Out: %b\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),8,
                             (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                             8,vlSelf->FBA_ALU_tb__DOT__reg_B,
                             8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out));
                VL_STOP_MT("FBA_ALU_tb.sv", 222, "");
            }
        } else if (VL_UNLIKELY((((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                                 & (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)) 
                                != (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out)))) {
            VL_WRITEF_NX("[%0t] %%Error: FBA_ALU_tb.sv:219: Assertion failed in %NFBA_ALU_tb.check: Error, And failed A: %b, B: %b, Out: %b\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                         8,vlSelf->FBA_ALU_tb__DOT__reg_B,
                         8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out));
            VL_STOP_MT("FBA_ALU_tb.sv", 219, "");
        }
    } else if ((2U & (IData)(vlSelf->FBA_ALU_tb__DOT__func_sel))) {
        if ((1U & (IData)(vlSelf->FBA_ALU_tb__DOT__func_sel))) {
            if (VL_UNLIKELY(((0xffU & (~ (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A))) 
                             != (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out)))) {
                VL_WRITEF_NX("[%0t] %%Error: FBA_ALU_tb.sv:216: Assertion failed in %NFBA_ALU_tb.check: Error, Not failed A: %b, Out: %b\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),8,
                             (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                             8,vlSelf->FBA_ALU_tb__DOT__reg_Out);
                VL_STOP_MT("FBA_ALU_tb.sv", 216, "");
            }
        } else if (VL_UNLIKELY(((0x1ffU & ((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                                           + (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B))) 
                                != (((IData)(vlSelf->FBA_ALU_tb__DOT__ALU__DOT__c_reg) 
                                     << 8U) | (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out))))) {
            VL_WRITEF_NX("[%0t] %%Error: FBA_ALU_tb.sv:213: Assertion failed in %NFBA_ALU_tb.check: Error, Addition failed A: %b, B: %b, Out: c%b %b\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                         8,vlSelf->FBA_ALU_tb__DOT__reg_B,
                         1,(IData)(vlSelf->FBA_ALU_tb__DOT__ALU__DOT__c_reg),
                         8,vlSelf->FBA_ALU_tb__DOT__reg_Out);
            VL_STOP_MT("FBA_ALU_tb.sv", 213, "");
        }
    } else if ((1U & (IData)(vlSelf->FBA_ALU_tb__DOT__func_sel))) {
        if (VL_UNLIKELY(((0xffU & (~ ((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                                      ^ (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)))) 
                         != (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out)))) {
            VL_WRITEF_NX("[%0t] %%Error: FBA_ALU_tb.sv:210: Assertion failed in %NFBA_ALU_tb.check: Error, Xnor failed A: %b, B: %b, Out: %b\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                         8,vlSelf->FBA_ALU_tb__DOT__reg_B,
                         8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out));
            VL_STOP_MT("FBA_ALU_tb.sv", 210, "");
        }
    } else if (VL_UNLIKELY((((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                             ^ (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)) 
                            != (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out)))) {
        VL_WRITEF_NX("[%0t] %%Error: FBA_ALU_tb.sv:207: Assertion failed in %NFBA_ALU_tb.check: Error, Xor failed A: %b, B: %b, Out: %b\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                     8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                     8,vlSelf->FBA_ALU_tb__DOT__reg_B,
                     8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out));
        VL_STOP_MT("FBA_ALU_tb.sv", 207, "");
    }
    vlSelf->FBA_ALU_tb__DOT__load_shift = 0U;
    vlSelf->FBA_ALU_tb__DOT__reg_A = (0xffU & VL_RANDOM_I());
    vlSelf->FBA_ALU_tb__DOT__reg_B = (0xffU & VL_RANDOM_I());
    co_await vlSelf->__VdlySched.delay(2ULL, nullptr, 
                                       "FBA_ALU_tb.sv", 
                                       94);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_FBA_ALU_tb__DOT__check__69__n = 8U;
    __Vtask_FBA_ALU_tb__DOT__bit_shift__70__n = __Vtask_FBA_ALU_tb__DOT__check__69__n;
    vlSelf->FBA_ALU_tb__DOT__load_shift = 1U;
    FBA_ALU_tb__DOT____Vrepeat0 = __Vtask_FBA_ALU_tb__DOT__bit_shift__70__n;
    while (VL_LTS_III(32, 0U, FBA_ALU_tb__DOT____Vrepeat0)) {
        co_await vlSelf->__VdlySched.delay(2ULL, nullptr, 
                                           "FBA_ALU_tb.sv", 
                                           180);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        FBA_ALU_tb__DOT____Vrepeat0 = (FBA_ALU_tb__DOT____Vrepeat0 
                                       - (IData)(1U));
    }
    if ((4U & (IData)(vlSelf->FBA_ALU_tb__DOT__func_sel))) {
        if ((2U & (IData)(vlSelf->FBA_ALU_tb__DOT__func_sel))) {
            if ((1U & (IData)(vlSelf->FBA_ALU_tb__DOT__func_sel))) {
                if (VL_UNLIKELY(((0xffU & (VL_LTS_III(32, 8U, __Vtask_FBA_ALU_tb__DOT__check__69__n)
                                            ? VL_SHIFTR_III(8,8,32, (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A), 
                                                            (__Vtask_FBA_ALU_tb__DOT__check__69__n 
                                                             - (IData)(8U)))
                                            : VL_SHIFTL_III(8,8,32, (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A), 
                                                            ((IData)(8U) 
                                                             - __Vtask_FBA_ALU_tb__DOT__check__69__n)))) 
                                 != (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out)))) {
                    VL_WRITEF_NX("A shifted %b\n[%0t] %%Error: FBA_ALU_tb.sv:231: Assertion failed in %NFBA_ALU_tb.check: Error, Buffer failed A: %b, Out: %b, N shift: %11d\n",0,
                                 8,(0xffU & (VL_LTS_III(32, 8U, __Vtask_FBA_ALU_tb__DOT__check__69__n)
                                              ? VL_SHIFTR_III(8,8,32, (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A), 
                                                              (__Vtask_FBA_ALU_tb__DOT__check__69__n 
                                                               - (IData)(8U)))
                                              : VL_SHIFTL_III(8,8,32, (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A), 
                                                              ((IData)(8U) 
                                                               - __Vtask_FBA_ALU_tb__DOT__check__69__n)))),
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                                 8,vlSelf->FBA_ALU_tb__DOT__reg_Out,
                                 32,__Vtask_FBA_ALU_tb__DOT__check__69__n);
                    VL_STOP_MT("FBA_ALU_tb.sv", 231, "");
                }
            } else if (VL_UNLIKELY((([&]() {
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__71__tmp = 0U;
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__71__tmp_and 
                                    = (((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                                        & (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)) 
                                       << 1U);
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__71__tmp_xor 
                                    = (((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                                        ^ (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)) 
                                       << 1U);
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__71__tmp_and) 
                                              >> 1U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__71__tmp_xor) 
                                                 >> 1U) 
                                                & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__71__tmp))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__71__tmp 
                                    = ((0x1fdU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__71__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 1U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__71__tmp_and) 
                                              >> 2U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__71__tmp_xor) 
                                                 >> 2U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__71__tmp) 
                                                   >> 1U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__71__tmp 
                                    = ((0x1fbU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__71__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 2U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__71__tmp_and) 
                                              >> 3U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__71__tmp_xor) 
                                                 >> 3U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__71__tmp) 
                                                   >> 2U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__71__tmp 
                                    = ((0x1f7U & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__71__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 3U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__71__tmp_and) 
                                              >> 4U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__71__tmp_xor) 
                                                 >> 4U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__71__tmp) 
                                                   >> 3U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__71__tmp 
                                    = ((0x1efU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__71__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 4U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__71__tmp_and) 
                                              >> 5U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__71__tmp_xor) 
                                                 >> 5U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__71__tmp) 
                                                   >> 4U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__71__tmp 
                                    = ((0x1dfU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__71__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 5U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__71__tmp_and) 
                                              >> 6U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__71__tmp_xor) 
                                                 >> 6U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__71__tmp) 
                                                   >> 5U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__71__tmp 
                                    = ((0x1bfU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__71__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 6U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__71__tmp_and) 
                                              >> 7U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__71__tmp_xor) 
                                                 >> 7U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__71__tmp) 
                                                   >> 6U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__71__tmp 
                                    = ((0x17fU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__71__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 7U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__71__tmp_and) 
                                              >> 8U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__71__tmp_xor) 
                                                 >> 8U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__71__tmp) 
                                                   >> 7U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__71__tmp 
                                    = ((0xffU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__71__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 8U));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__71__Vfuncout 
                                    = (0xffU & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__71__tmp) 
                                                >> 1U));
                            }(), (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__71__Vfuncout)) 
                                    != (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out)))) {
                VL_WRITEF_NX("Computed carries: %b\n",0,
                             8,([&]() {
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__72__tmp = 0U;
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__72__tmp_and 
                                    = (((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                                        & (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)) 
                                       << 1U);
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__72__tmp_xor 
                                    = (((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                                        ^ (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)) 
                                       << 1U);
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__72__tmp_and) 
                                              >> 1U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__72__tmp_xor) 
                                                 >> 1U) 
                                                & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__72__tmp))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__72__tmp 
                                    = ((0x1fdU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__72__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 1U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__72__tmp_and) 
                                              >> 2U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__72__tmp_xor) 
                                                 >> 2U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__72__tmp) 
                                                   >> 1U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__72__tmp 
                                    = ((0x1fbU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__72__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 2U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__72__tmp_and) 
                                              >> 3U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__72__tmp_xor) 
                                                 >> 3U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__72__tmp) 
                                                   >> 2U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__72__tmp 
                                    = ((0x1f7U & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__72__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 3U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__72__tmp_and) 
                                              >> 4U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__72__tmp_xor) 
                                                 >> 4U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__72__tmp) 
                                                   >> 3U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__72__tmp 
                                    = ((0x1efU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__72__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 4U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__72__tmp_and) 
                                              >> 5U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__72__tmp_xor) 
                                                 >> 5U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__72__tmp) 
                                                   >> 4U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__72__tmp 
                                    = ((0x1dfU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__72__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 5U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__72__tmp_and) 
                                              >> 6U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__72__tmp_xor) 
                                                 >> 6U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__72__tmp) 
                                                   >> 5U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__72__tmp 
                                    = ((0x1bfU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__72__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 6U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__72__tmp_and) 
                                              >> 7U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__72__tmp_xor) 
                                                 >> 7U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__72__tmp) 
                                                   >> 6U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__72__tmp 
                                    = ((0x17fU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__72__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 7U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__72__tmp_and) 
                                              >> 8U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__72__tmp_xor) 
                                                 >> 8U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__72__tmp) 
                                                   >> 7U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__72__tmp 
                                    = ((0xffU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__72__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 8U));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__72__Vfuncout 
                                    = (0xffU & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__72__tmp) 
                                                >> 1U));
                            }(), (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__72__Vfuncout)));
                VL_WRITEF_NX("[%0t] %%Error: FBA_ALU_tb.sv:226: Assertion failed in %NFBA_ALU_tb.check: Error, Carry failed A: %b, B: %b, Out: %b\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),8,
                             (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                             8,vlSelf->FBA_ALU_tb__DOT__reg_B,
                             8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out));
                VL_STOP_MT("FBA_ALU_tb.sv", 226, "");
            }
        } else if ((1U & (IData)(vlSelf->FBA_ALU_tb__DOT__func_sel))) {
            if (VL_UNLIKELY((((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                              | (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)) 
                             != (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out)))) {
                VL_WRITEF_NX("[%0t] %%Error: FBA_ALU_tb.sv:222: Assertion failed in %NFBA_ALU_tb.check: Error, Or failed A: %b, B: %b, Out: %b\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),8,
                             (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                             8,vlSelf->FBA_ALU_tb__DOT__reg_B,
                             8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out));
                VL_STOP_MT("FBA_ALU_tb.sv", 222, "");
            }
        } else if (VL_UNLIKELY((((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                                 & (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)) 
                                != (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out)))) {
            VL_WRITEF_NX("[%0t] %%Error: FBA_ALU_tb.sv:219: Assertion failed in %NFBA_ALU_tb.check: Error, And failed A: %b, B: %b, Out: %b\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                         8,vlSelf->FBA_ALU_tb__DOT__reg_B,
                         8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out));
            VL_STOP_MT("FBA_ALU_tb.sv", 219, "");
        }
    } else if ((2U & (IData)(vlSelf->FBA_ALU_tb__DOT__func_sel))) {
        if ((1U & (IData)(vlSelf->FBA_ALU_tb__DOT__func_sel))) {
            if (VL_UNLIKELY(((0xffU & (~ (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A))) 
                             != (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out)))) {
                VL_WRITEF_NX("[%0t] %%Error: FBA_ALU_tb.sv:216: Assertion failed in %NFBA_ALU_tb.check: Error, Not failed A: %b, Out: %b\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),8,
                             (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                             8,vlSelf->FBA_ALU_tb__DOT__reg_Out);
                VL_STOP_MT("FBA_ALU_tb.sv", 216, "");
            }
        } else if (VL_UNLIKELY(((0x1ffU & ((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                                           + (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B))) 
                                != (((IData)(vlSelf->FBA_ALU_tb__DOT__ALU__DOT__c_reg) 
                                     << 8U) | (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out))))) {
            VL_WRITEF_NX("[%0t] %%Error: FBA_ALU_tb.sv:213: Assertion failed in %NFBA_ALU_tb.check: Error, Addition failed A: %b, B: %b, Out: c%b %b\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                         8,vlSelf->FBA_ALU_tb__DOT__reg_B,
                         1,(IData)(vlSelf->FBA_ALU_tb__DOT__ALU__DOT__c_reg),
                         8,vlSelf->FBA_ALU_tb__DOT__reg_Out);
            VL_STOP_MT("FBA_ALU_tb.sv", 213, "");
        }
    } else if ((1U & (IData)(vlSelf->FBA_ALU_tb__DOT__func_sel))) {
        if (VL_UNLIKELY(((0xffU & (~ ((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                                      ^ (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)))) 
                         != (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out)))) {
            VL_WRITEF_NX("[%0t] %%Error: FBA_ALU_tb.sv:210: Assertion failed in %NFBA_ALU_tb.check: Error, Xnor failed A: %b, B: %b, Out: %b\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                         8,vlSelf->FBA_ALU_tb__DOT__reg_B,
                         8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out));
            VL_STOP_MT("FBA_ALU_tb.sv", 210, "");
        }
    } else if (VL_UNLIKELY((((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                             ^ (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)) 
                            != (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out)))) {
        VL_WRITEF_NX("[%0t] %%Error: FBA_ALU_tb.sv:207: Assertion failed in %NFBA_ALU_tb.check: Error, Xor failed A: %b, B: %b, Out: %b\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                     8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                     8,vlSelf->FBA_ALU_tb__DOT__reg_B,
                     8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out));
        VL_STOP_MT("FBA_ALU_tb.sv", 207, "");
    }
    VL_WRITEF_NX("Success: Not test\n",0);
    vlSelf->FBA_ALU_tb__DOT__reg_A = 0U;
    vlSelf->FBA_ALU_tb__DOT__reg_B = 0U;
    vlSelf->FBA_ALU_tb__DOT__reg_Out = 0U;
    vlSelf->FBA_ALU_tb__DOT__rst = 0U;
    co_await vlSelf->__VdlySched.delay(2ULL, nullptr, 
                                       "FBA_ALU_tb.sv", 
                                       70);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->FBA_ALU_tb__DOT__rst = 1U;
    vlSelf->FBA_ALU_tb__DOT__func_sel = 4U;
    vlSelf->FBA_ALU_tb__DOT__load_shift = 0U;
    vlSelf->FBA_ALU_tb__DOT__reg_A = 0U;
    vlSelf->FBA_ALU_tb__DOT__reg_B = 0U;
    co_await vlSelf->__VdlySched.delay(2ULL, nullptr, 
                                       "FBA_ALU_tb.sv", 
                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_FBA_ALU_tb__DOT__check__77__n = 8U;
    __Vtask_FBA_ALU_tb__DOT__bit_shift__78__n = __Vtask_FBA_ALU_tb__DOT__check__77__n;
    vlSelf->FBA_ALU_tb__DOT__load_shift = 1U;
    FBA_ALU_tb__DOT____Vrepeat0 = __Vtask_FBA_ALU_tb__DOT__bit_shift__78__n;
    while (VL_LTS_III(32, 0U, FBA_ALU_tb__DOT____Vrepeat0)) {
        co_await vlSelf->__VdlySched.delay(2ULL, nullptr, 
                                           "FBA_ALU_tb.sv", 
                                           180);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        FBA_ALU_tb__DOT____Vrepeat0 = (FBA_ALU_tb__DOT____Vrepeat0 
                                       - (IData)(1U));
    }
    if ((4U & (IData)(vlSelf->FBA_ALU_tb__DOT__func_sel))) {
        if ((2U & (IData)(vlSelf->FBA_ALU_tb__DOT__func_sel))) {
            if ((1U & (IData)(vlSelf->FBA_ALU_tb__DOT__func_sel))) {
                if (VL_UNLIKELY(((0xffU & (VL_LTS_III(32, 8U, __Vtask_FBA_ALU_tb__DOT__check__77__n)
                                            ? VL_SHIFTR_III(8,8,32, (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A), 
                                                            (__Vtask_FBA_ALU_tb__DOT__check__77__n 
                                                             - (IData)(8U)))
                                            : VL_SHIFTL_III(8,8,32, (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A), 
                                                            ((IData)(8U) 
                                                             - __Vtask_FBA_ALU_tb__DOT__check__77__n)))) 
                                 != (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out)))) {
                    VL_WRITEF_NX("A shifted %b\n[%0t] %%Error: FBA_ALU_tb.sv:231: Assertion failed in %NFBA_ALU_tb.check: Error, Buffer failed A: %b, Out: %b, N shift: %11d\n",0,
                                 8,(0xffU & (VL_LTS_III(32, 8U, __Vtask_FBA_ALU_tb__DOT__check__77__n)
                                              ? VL_SHIFTR_III(8,8,32, (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A), 
                                                              (__Vtask_FBA_ALU_tb__DOT__check__77__n 
                                                               - (IData)(8U)))
                                              : VL_SHIFTL_III(8,8,32, (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A), 
                                                              ((IData)(8U) 
                                                               - __Vtask_FBA_ALU_tb__DOT__check__77__n)))),
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                                 8,vlSelf->FBA_ALU_tb__DOT__reg_Out,
                                 32,__Vtask_FBA_ALU_tb__DOT__check__77__n);
                    VL_STOP_MT("FBA_ALU_tb.sv", 231, "");
                }
            } else if (VL_UNLIKELY((([&]() {
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__79__tmp = 0U;
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__79__tmp_and 
                                    = (((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                                        & (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)) 
                                       << 1U);
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__79__tmp_xor 
                                    = (((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                                        ^ (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)) 
                                       << 1U);
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__79__tmp_and) 
                                              >> 1U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__79__tmp_xor) 
                                                 >> 1U) 
                                                & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__79__tmp))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__79__tmp 
                                    = ((0x1fdU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__79__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 1U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__79__tmp_and) 
                                              >> 2U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__79__tmp_xor) 
                                                 >> 2U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__79__tmp) 
                                                   >> 1U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__79__tmp 
                                    = ((0x1fbU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__79__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 2U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__79__tmp_and) 
                                              >> 3U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__79__tmp_xor) 
                                                 >> 3U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__79__tmp) 
                                                   >> 2U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__79__tmp 
                                    = ((0x1f7U & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__79__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 3U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__79__tmp_and) 
                                              >> 4U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__79__tmp_xor) 
                                                 >> 4U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__79__tmp) 
                                                   >> 3U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__79__tmp 
                                    = ((0x1efU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__79__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 4U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__79__tmp_and) 
                                              >> 5U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__79__tmp_xor) 
                                                 >> 5U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__79__tmp) 
                                                   >> 4U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__79__tmp 
                                    = ((0x1dfU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__79__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 5U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__79__tmp_and) 
                                              >> 6U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__79__tmp_xor) 
                                                 >> 6U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__79__tmp) 
                                                   >> 5U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__79__tmp 
                                    = ((0x1bfU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__79__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 6U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__79__tmp_and) 
                                              >> 7U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__79__tmp_xor) 
                                                 >> 7U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__79__tmp) 
                                                   >> 6U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__79__tmp 
                                    = ((0x17fU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__79__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 7U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__79__tmp_and) 
                                              >> 8U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__79__tmp_xor) 
                                                 >> 8U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__79__tmp) 
                                                   >> 7U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__79__tmp 
                                    = ((0xffU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__79__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 8U));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__79__Vfuncout 
                                    = (0xffU & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__79__tmp) 
                                                >> 1U));
                            }(), (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__79__Vfuncout)) 
                                    != (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out)))) {
                VL_WRITEF_NX("Computed carries: %b\n",0,
                             8,([&]() {
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__80__tmp = 0U;
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__80__tmp_and 
                                    = (((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                                        & (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)) 
                                       << 1U);
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__80__tmp_xor 
                                    = (((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                                        ^ (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)) 
                                       << 1U);
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__80__tmp_and) 
                                              >> 1U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__80__tmp_xor) 
                                                 >> 1U) 
                                                & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__80__tmp))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__80__tmp 
                                    = ((0x1fdU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__80__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 1U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__80__tmp_and) 
                                              >> 2U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__80__tmp_xor) 
                                                 >> 2U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__80__tmp) 
                                                   >> 1U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__80__tmp 
                                    = ((0x1fbU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__80__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 2U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__80__tmp_and) 
                                              >> 3U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__80__tmp_xor) 
                                                 >> 3U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__80__tmp) 
                                                   >> 2U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__80__tmp 
                                    = ((0x1f7U & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__80__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 3U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__80__tmp_and) 
                                              >> 4U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__80__tmp_xor) 
                                                 >> 4U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__80__tmp) 
                                                   >> 3U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__80__tmp 
                                    = ((0x1efU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__80__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 4U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__80__tmp_and) 
                                              >> 5U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__80__tmp_xor) 
                                                 >> 5U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__80__tmp) 
                                                   >> 4U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__80__tmp 
                                    = ((0x1dfU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__80__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 5U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__80__tmp_and) 
                                              >> 6U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__80__tmp_xor) 
                                                 >> 6U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__80__tmp) 
                                                   >> 5U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__80__tmp 
                                    = ((0x1bfU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__80__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 6U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__80__tmp_and) 
                                              >> 7U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__80__tmp_xor) 
                                                 >> 7U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__80__tmp) 
                                                   >> 6U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__80__tmp 
                                    = ((0x17fU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__80__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 7U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__80__tmp_and) 
                                              >> 8U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__80__tmp_xor) 
                                                 >> 8U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__80__tmp) 
                                                   >> 7U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__80__tmp 
                                    = ((0xffU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__80__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 8U));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__80__Vfuncout 
                                    = (0xffU & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__80__tmp) 
                                                >> 1U));
                            }(), (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__80__Vfuncout)));
                VL_WRITEF_NX("[%0t] %%Error: FBA_ALU_tb.sv:226: Assertion failed in %NFBA_ALU_tb.check: Error, Carry failed A: %b, B: %b, Out: %b\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),8,
                             (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                             8,vlSelf->FBA_ALU_tb__DOT__reg_B,
                             8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out));
                VL_STOP_MT("FBA_ALU_tb.sv", 226, "");
            }
        } else if ((1U & (IData)(vlSelf->FBA_ALU_tb__DOT__func_sel))) {
            if (VL_UNLIKELY((((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                              | (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)) 
                             != (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out)))) {
                VL_WRITEF_NX("[%0t] %%Error: FBA_ALU_tb.sv:222: Assertion failed in %NFBA_ALU_tb.check: Error, Or failed A: %b, B: %b, Out: %b\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),8,
                             (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                             8,vlSelf->FBA_ALU_tb__DOT__reg_B,
                             8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out));
                VL_STOP_MT("FBA_ALU_tb.sv", 222, "");
            }
        } else if (VL_UNLIKELY((((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                                 & (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)) 
                                != (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out)))) {
            VL_WRITEF_NX("[%0t] %%Error: FBA_ALU_tb.sv:219: Assertion failed in %NFBA_ALU_tb.check: Error, And failed A: %b, B: %b, Out: %b\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                         8,vlSelf->FBA_ALU_tb__DOT__reg_B,
                         8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out));
            VL_STOP_MT("FBA_ALU_tb.sv", 219, "");
        }
    } else if ((2U & (IData)(vlSelf->FBA_ALU_tb__DOT__func_sel))) {
        if ((1U & (IData)(vlSelf->FBA_ALU_tb__DOT__func_sel))) {
            if (VL_UNLIKELY(((0xffU & (~ (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A))) 
                             != (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out)))) {
                VL_WRITEF_NX("[%0t] %%Error: FBA_ALU_tb.sv:216: Assertion failed in %NFBA_ALU_tb.check: Error, Not failed A: %b, Out: %b\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),8,
                             (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                             8,vlSelf->FBA_ALU_tb__DOT__reg_Out);
                VL_STOP_MT("FBA_ALU_tb.sv", 216, "");
            }
        } else if (VL_UNLIKELY(((0x1ffU & ((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                                           + (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B))) 
                                != (((IData)(vlSelf->FBA_ALU_tb__DOT__ALU__DOT__c_reg) 
                                     << 8U) | (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out))))) {
            VL_WRITEF_NX("[%0t] %%Error: FBA_ALU_tb.sv:213: Assertion failed in %NFBA_ALU_tb.check: Error, Addition failed A: %b, B: %b, Out: c%b %b\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                         8,vlSelf->FBA_ALU_tb__DOT__reg_B,
                         1,(IData)(vlSelf->FBA_ALU_tb__DOT__ALU__DOT__c_reg),
                         8,vlSelf->FBA_ALU_tb__DOT__reg_Out);
            VL_STOP_MT("FBA_ALU_tb.sv", 213, "");
        }
    } else if ((1U & (IData)(vlSelf->FBA_ALU_tb__DOT__func_sel))) {
        if (VL_UNLIKELY(((0xffU & (~ ((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                                      ^ (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)))) 
                         != (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out)))) {
            VL_WRITEF_NX("[%0t] %%Error: FBA_ALU_tb.sv:210: Assertion failed in %NFBA_ALU_tb.check: Error, Xnor failed A: %b, B: %b, Out: %b\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                         8,vlSelf->FBA_ALU_tb__DOT__reg_B,
                         8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out));
            VL_STOP_MT("FBA_ALU_tb.sv", 210, "");
        }
    } else if (VL_UNLIKELY((((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                             ^ (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)) 
                            != (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out)))) {
        VL_WRITEF_NX("[%0t] %%Error: FBA_ALU_tb.sv:207: Assertion failed in %NFBA_ALU_tb.check: Error, Xor failed A: %b, B: %b, Out: %b\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                     8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                     8,vlSelf->FBA_ALU_tb__DOT__reg_B,
                     8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out));
        VL_STOP_MT("FBA_ALU_tb.sv", 207, "");
    }
    vlSelf->FBA_ALU_tb__DOT__load_shift = 0U;
    vlSelf->FBA_ALU_tb__DOT__reg_A = 0xffU;
    vlSelf->FBA_ALU_tb__DOT__reg_B = 0xffU;
    co_await vlSelf->__VdlySched.delay(2ULL, nullptr, 
                                       "FBA_ALU_tb.sv", 
                                       86);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_FBA_ALU_tb__DOT__check__82__n = 8U;
    __Vtask_FBA_ALU_tb__DOT__bit_shift__83__n = __Vtask_FBA_ALU_tb__DOT__check__82__n;
    vlSelf->FBA_ALU_tb__DOT__load_shift = 1U;
    FBA_ALU_tb__DOT____Vrepeat0 = __Vtask_FBA_ALU_tb__DOT__bit_shift__83__n;
    while (VL_LTS_III(32, 0U, FBA_ALU_tb__DOT____Vrepeat0)) {
        co_await vlSelf->__VdlySched.delay(2ULL, nullptr, 
                                           "FBA_ALU_tb.sv", 
                                           180);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        FBA_ALU_tb__DOT____Vrepeat0 = (FBA_ALU_tb__DOT____Vrepeat0 
                                       - (IData)(1U));
    }
    if ((4U & (IData)(vlSelf->FBA_ALU_tb__DOT__func_sel))) {
        if ((2U & (IData)(vlSelf->FBA_ALU_tb__DOT__func_sel))) {
            if ((1U & (IData)(vlSelf->FBA_ALU_tb__DOT__func_sel))) {
                if (VL_UNLIKELY(((0xffU & (VL_LTS_III(32, 8U, __Vtask_FBA_ALU_tb__DOT__check__82__n)
                                            ? VL_SHIFTR_III(8,8,32, (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A), 
                                                            (__Vtask_FBA_ALU_tb__DOT__check__82__n 
                                                             - (IData)(8U)))
                                            : VL_SHIFTL_III(8,8,32, (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A), 
                                                            ((IData)(8U) 
                                                             - __Vtask_FBA_ALU_tb__DOT__check__82__n)))) 
                                 != (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out)))) {
                    VL_WRITEF_NX("A shifted %b\n[%0t] %%Error: FBA_ALU_tb.sv:231: Assertion failed in %NFBA_ALU_tb.check: Error, Buffer failed A: %b, Out: %b, N shift: %11d\n",0,
                                 8,(0xffU & (VL_LTS_III(32, 8U, __Vtask_FBA_ALU_tb__DOT__check__82__n)
                                              ? VL_SHIFTR_III(8,8,32, (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A), 
                                                              (__Vtask_FBA_ALU_tb__DOT__check__82__n 
                                                               - (IData)(8U)))
                                              : VL_SHIFTL_III(8,8,32, (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A), 
                                                              ((IData)(8U) 
                                                               - __Vtask_FBA_ALU_tb__DOT__check__82__n)))),
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                                 8,vlSelf->FBA_ALU_tb__DOT__reg_Out,
                                 32,__Vtask_FBA_ALU_tb__DOT__check__82__n);
                    VL_STOP_MT("FBA_ALU_tb.sv", 231, "");
                }
            } else if (VL_UNLIKELY((([&]() {
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__84__tmp = 0U;
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__84__tmp_and 
                                    = (((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                                        & (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)) 
                                       << 1U);
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__84__tmp_xor 
                                    = (((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                                        ^ (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)) 
                                       << 1U);
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__84__tmp_and) 
                                              >> 1U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__84__tmp_xor) 
                                                 >> 1U) 
                                                & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__84__tmp))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__84__tmp 
                                    = ((0x1fdU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__84__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 1U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__84__tmp_and) 
                                              >> 2U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__84__tmp_xor) 
                                                 >> 2U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__84__tmp) 
                                                   >> 1U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__84__tmp 
                                    = ((0x1fbU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__84__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 2U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__84__tmp_and) 
                                              >> 3U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__84__tmp_xor) 
                                                 >> 3U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__84__tmp) 
                                                   >> 2U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__84__tmp 
                                    = ((0x1f7U & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__84__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 3U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__84__tmp_and) 
                                              >> 4U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__84__tmp_xor) 
                                                 >> 4U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__84__tmp) 
                                                   >> 3U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__84__tmp 
                                    = ((0x1efU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__84__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 4U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__84__tmp_and) 
                                              >> 5U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__84__tmp_xor) 
                                                 >> 5U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__84__tmp) 
                                                   >> 4U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__84__tmp 
                                    = ((0x1dfU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__84__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 5U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__84__tmp_and) 
                                              >> 6U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__84__tmp_xor) 
                                                 >> 6U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__84__tmp) 
                                                   >> 5U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__84__tmp 
                                    = ((0x1bfU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__84__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 6U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__84__tmp_and) 
                                              >> 7U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__84__tmp_xor) 
                                                 >> 7U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__84__tmp) 
                                                   >> 6U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__84__tmp 
                                    = ((0x17fU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__84__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 7U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__84__tmp_and) 
                                              >> 8U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__84__tmp_xor) 
                                                 >> 8U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__84__tmp) 
                                                   >> 7U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__84__tmp 
                                    = ((0xffU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__84__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 8U));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__84__Vfuncout 
                                    = (0xffU & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__84__tmp) 
                                                >> 1U));
                            }(), (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__84__Vfuncout)) 
                                    != (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out)))) {
                VL_WRITEF_NX("Computed carries: %b\n",0,
                             8,([&]() {
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__85__tmp = 0U;
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__85__tmp_and 
                                    = (((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                                        & (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)) 
                                       << 1U);
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__85__tmp_xor 
                                    = (((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                                        ^ (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)) 
                                       << 1U);
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__85__tmp_and) 
                                              >> 1U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__85__tmp_xor) 
                                                 >> 1U) 
                                                & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__85__tmp))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__85__tmp 
                                    = ((0x1fdU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__85__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 1U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__85__tmp_and) 
                                              >> 2U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__85__tmp_xor) 
                                                 >> 2U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__85__tmp) 
                                                   >> 1U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__85__tmp 
                                    = ((0x1fbU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__85__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 2U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__85__tmp_and) 
                                              >> 3U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__85__tmp_xor) 
                                                 >> 3U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__85__tmp) 
                                                   >> 2U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__85__tmp 
                                    = ((0x1f7U & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__85__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 3U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__85__tmp_and) 
                                              >> 4U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__85__tmp_xor) 
                                                 >> 4U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__85__tmp) 
                                                   >> 3U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__85__tmp 
                                    = ((0x1efU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__85__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 4U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__85__tmp_and) 
                                              >> 5U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__85__tmp_xor) 
                                                 >> 5U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__85__tmp) 
                                                   >> 4U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__85__tmp 
                                    = ((0x1dfU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__85__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 5U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__85__tmp_and) 
                                              >> 6U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__85__tmp_xor) 
                                                 >> 6U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__85__tmp) 
                                                   >> 5U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__85__tmp 
                                    = ((0x1bfU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__85__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 6U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__85__tmp_and) 
                                              >> 7U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__85__tmp_xor) 
                                                 >> 7U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__85__tmp) 
                                                   >> 6U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__85__tmp 
                                    = ((0x17fU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__85__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 7U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__85__tmp_and) 
                                              >> 8U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__85__tmp_xor) 
                                                 >> 8U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__85__tmp) 
                                                   >> 7U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__85__tmp 
                                    = ((0xffU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__85__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 8U));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__85__Vfuncout 
                                    = (0xffU & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__85__tmp) 
                                                >> 1U));
                            }(), (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__85__Vfuncout)));
                VL_WRITEF_NX("[%0t] %%Error: FBA_ALU_tb.sv:226: Assertion failed in %NFBA_ALU_tb.check: Error, Carry failed A: %b, B: %b, Out: %b\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),8,
                             (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                             8,vlSelf->FBA_ALU_tb__DOT__reg_B,
                             8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out));
                VL_STOP_MT("FBA_ALU_tb.sv", 226, "");
            }
        } else if ((1U & (IData)(vlSelf->FBA_ALU_tb__DOT__func_sel))) {
            if (VL_UNLIKELY((((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                              | (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)) 
                             != (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out)))) {
                VL_WRITEF_NX("[%0t] %%Error: FBA_ALU_tb.sv:222: Assertion failed in %NFBA_ALU_tb.check: Error, Or failed A: %b, B: %b, Out: %b\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),8,
                             (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                             8,vlSelf->FBA_ALU_tb__DOT__reg_B,
                             8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out));
                VL_STOP_MT("FBA_ALU_tb.sv", 222, "");
            }
        } else if (VL_UNLIKELY((((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                                 & (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)) 
                                != (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out)))) {
            VL_WRITEF_NX("[%0t] %%Error: FBA_ALU_tb.sv:219: Assertion failed in %NFBA_ALU_tb.check: Error, And failed A: %b, B: %b, Out: %b\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                         8,vlSelf->FBA_ALU_tb__DOT__reg_B,
                         8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out));
            VL_STOP_MT("FBA_ALU_tb.sv", 219, "");
        }
    } else if ((2U & (IData)(vlSelf->FBA_ALU_tb__DOT__func_sel))) {
        if ((1U & (IData)(vlSelf->FBA_ALU_tb__DOT__func_sel))) {
            if (VL_UNLIKELY(((0xffU & (~ (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A))) 
                             != (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out)))) {
                VL_WRITEF_NX("[%0t] %%Error: FBA_ALU_tb.sv:216: Assertion failed in %NFBA_ALU_tb.check: Error, Not failed A: %b, Out: %b\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),8,
                             (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                             8,vlSelf->FBA_ALU_tb__DOT__reg_Out);
                VL_STOP_MT("FBA_ALU_tb.sv", 216, "");
            }
        } else if (VL_UNLIKELY(((0x1ffU & ((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                                           + (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B))) 
                                != (((IData)(vlSelf->FBA_ALU_tb__DOT__ALU__DOT__c_reg) 
                                     << 8U) | (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out))))) {
            VL_WRITEF_NX("[%0t] %%Error: FBA_ALU_tb.sv:213: Assertion failed in %NFBA_ALU_tb.check: Error, Addition failed A: %b, B: %b, Out: c%b %b\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                         8,vlSelf->FBA_ALU_tb__DOT__reg_B,
                         1,(IData)(vlSelf->FBA_ALU_tb__DOT__ALU__DOT__c_reg),
                         8,vlSelf->FBA_ALU_tb__DOT__reg_Out);
            VL_STOP_MT("FBA_ALU_tb.sv", 213, "");
        }
    } else if ((1U & (IData)(vlSelf->FBA_ALU_tb__DOT__func_sel))) {
        if (VL_UNLIKELY(((0xffU & (~ ((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                                      ^ (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)))) 
                         != (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out)))) {
            VL_WRITEF_NX("[%0t] %%Error: FBA_ALU_tb.sv:210: Assertion failed in %NFBA_ALU_tb.check: Error, Xnor failed A: %b, B: %b, Out: %b\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                         8,vlSelf->FBA_ALU_tb__DOT__reg_B,
                         8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out));
            VL_STOP_MT("FBA_ALU_tb.sv", 210, "");
        }
    } else if (VL_UNLIKELY((((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                             ^ (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)) 
                            != (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out)))) {
        VL_WRITEF_NX("[%0t] %%Error: FBA_ALU_tb.sv:207: Assertion failed in %NFBA_ALU_tb.check: Error, Xor failed A: %b, B: %b, Out: %b\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                     8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                     8,vlSelf->FBA_ALU_tb__DOT__reg_B,
                     8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out));
        VL_STOP_MT("FBA_ALU_tb.sv", 207, "");
    }
    vlSelf->FBA_ALU_tb__DOT__load_shift = 0U;
    vlSelf->FBA_ALU_tb__DOT__reg_A = (0xffU & VL_RANDOM_I());
    vlSelf->FBA_ALU_tb__DOT__reg_B = (0xffU & VL_RANDOM_I());
    co_await vlSelf->__VdlySched.delay(2ULL, nullptr, 
                                       "FBA_ALU_tb.sv", 
                                       94);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_FBA_ALU_tb__DOT__check__87__n = 8U;
    __Vtask_FBA_ALU_tb__DOT__bit_shift__88__n = __Vtask_FBA_ALU_tb__DOT__check__87__n;
    vlSelf->FBA_ALU_tb__DOT__load_shift = 1U;
    FBA_ALU_tb__DOT____Vrepeat0 = __Vtask_FBA_ALU_tb__DOT__bit_shift__88__n;
    while (VL_LTS_III(32, 0U, FBA_ALU_tb__DOT____Vrepeat0)) {
        co_await vlSelf->__VdlySched.delay(2ULL, nullptr, 
                                           "FBA_ALU_tb.sv", 
                                           180);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        FBA_ALU_tb__DOT____Vrepeat0 = (FBA_ALU_tb__DOT____Vrepeat0 
                                       - (IData)(1U));
    }
    if ((4U & (IData)(vlSelf->FBA_ALU_tb__DOT__func_sel))) {
        if ((2U & (IData)(vlSelf->FBA_ALU_tb__DOT__func_sel))) {
            if ((1U & (IData)(vlSelf->FBA_ALU_tb__DOT__func_sel))) {
                if (VL_UNLIKELY(((0xffU & (VL_LTS_III(32, 8U, __Vtask_FBA_ALU_tb__DOT__check__87__n)
                                            ? VL_SHIFTR_III(8,8,32, (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A), 
                                                            (__Vtask_FBA_ALU_tb__DOT__check__87__n 
                                                             - (IData)(8U)))
                                            : VL_SHIFTL_III(8,8,32, (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A), 
                                                            ((IData)(8U) 
                                                             - __Vtask_FBA_ALU_tb__DOT__check__87__n)))) 
                                 != (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out)))) {
                    VL_WRITEF_NX("A shifted %b\n[%0t] %%Error: FBA_ALU_tb.sv:231: Assertion failed in %NFBA_ALU_tb.check: Error, Buffer failed A: %b, Out: %b, N shift: %11d\n",0,
                                 8,(0xffU & (VL_LTS_III(32, 8U, __Vtask_FBA_ALU_tb__DOT__check__87__n)
                                              ? VL_SHIFTR_III(8,8,32, (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A), 
                                                              (__Vtask_FBA_ALU_tb__DOT__check__87__n 
                                                               - (IData)(8U)))
                                              : VL_SHIFTL_III(8,8,32, (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A), 
                                                              ((IData)(8U) 
                                                               - __Vtask_FBA_ALU_tb__DOT__check__87__n)))),
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                                 8,vlSelf->FBA_ALU_tb__DOT__reg_Out,
                                 32,__Vtask_FBA_ALU_tb__DOT__check__87__n);
                    VL_STOP_MT("FBA_ALU_tb.sv", 231, "");
                }
            } else if (VL_UNLIKELY((([&]() {
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__89__tmp = 0U;
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__89__tmp_and 
                                    = (((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                                        & (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)) 
                                       << 1U);
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__89__tmp_xor 
                                    = (((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                                        ^ (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)) 
                                       << 1U);
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__89__tmp_and) 
                                              >> 1U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__89__tmp_xor) 
                                                 >> 1U) 
                                                & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__89__tmp))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__89__tmp 
                                    = ((0x1fdU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__89__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 1U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__89__tmp_and) 
                                              >> 2U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__89__tmp_xor) 
                                                 >> 2U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__89__tmp) 
                                                   >> 1U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__89__tmp 
                                    = ((0x1fbU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__89__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 2U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__89__tmp_and) 
                                              >> 3U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__89__tmp_xor) 
                                                 >> 3U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__89__tmp) 
                                                   >> 2U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__89__tmp 
                                    = ((0x1f7U & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__89__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 3U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__89__tmp_and) 
                                              >> 4U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__89__tmp_xor) 
                                                 >> 4U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__89__tmp) 
                                                   >> 3U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__89__tmp 
                                    = ((0x1efU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__89__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 4U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__89__tmp_and) 
                                              >> 5U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__89__tmp_xor) 
                                                 >> 5U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__89__tmp) 
                                                   >> 4U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__89__tmp 
                                    = ((0x1dfU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__89__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 5U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__89__tmp_and) 
                                              >> 6U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__89__tmp_xor) 
                                                 >> 6U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__89__tmp) 
                                                   >> 5U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__89__tmp 
                                    = ((0x1bfU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__89__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 6U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__89__tmp_and) 
                                              >> 7U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__89__tmp_xor) 
                                                 >> 7U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__89__tmp) 
                                                   >> 6U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__89__tmp 
                                    = ((0x17fU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__89__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 7U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__89__tmp_and) 
                                              >> 8U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__89__tmp_xor) 
                                                 >> 8U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__89__tmp) 
                                                   >> 7U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__89__tmp 
                                    = ((0xffU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__89__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 8U));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__89__Vfuncout 
                                    = (0xffU & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__89__tmp) 
                                                >> 1U));
                            }(), (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__89__Vfuncout)) 
                                    != (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out)))) {
                VL_WRITEF_NX("Computed carries: %b\n",0,
                             8,([&]() {
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__90__tmp = 0U;
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__90__tmp_and 
                                    = (((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                                        & (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)) 
                                       << 1U);
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__90__tmp_xor 
                                    = (((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                                        ^ (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)) 
                                       << 1U);
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__90__tmp_and) 
                                              >> 1U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__90__tmp_xor) 
                                                 >> 1U) 
                                                & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__90__tmp))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__90__tmp 
                                    = ((0x1fdU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__90__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 1U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__90__tmp_and) 
                                              >> 2U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__90__tmp_xor) 
                                                 >> 2U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__90__tmp) 
                                                   >> 1U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__90__tmp 
                                    = ((0x1fbU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__90__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 2U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__90__tmp_and) 
                                              >> 3U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__90__tmp_xor) 
                                                 >> 3U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__90__tmp) 
                                                   >> 2U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__90__tmp 
                                    = ((0x1f7U & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__90__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 3U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__90__tmp_and) 
                                              >> 4U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__90__tmp_xor) 
                                                 >> 4U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__90__tmp) 
                                                   >> 3U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__90__tmp 
                                    = ((0x1efU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__90__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 4U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__90__tmp_and) 
                                              >> 5U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__90__tmp_xor) 
                                                 >> 5U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__90__tmp) 
                                                   >> 4U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__90__tmp 
                                    = ((0x1dfU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__90__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 5U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__90__tmp_and) 
                                              >> 6U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__90__tmp_xor) 
                                                 >> 6U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__90__tmp) 
                                                   >> 5U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__90__tmp 
                                    = ((0x1bfU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__90__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 6U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__90__tmp_and) 
                                              >> 7U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__90__tmp_xor) 
                                                 >> 7U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__90__tmp) 
                                                   >> 6U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__90__tmp 
                                    = ((0x17fU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__90__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 7U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__90__tmp_and) 
                                              >> 8U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__90__tmp_xor) 
                                                 >> 8U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__90__tmp) 
                                                   >> 7U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__90__tmp 
                                    = ((0xffU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__90__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 8U));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__90__Vfuncout 
                                    = (0xffU & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__90__tmp) 
                                                >> 1U));
                            }(), (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__90__Vfuncout)));
                VL_WRITEF_NX("[%0t] %%Error: FBA_ALU_tb.sv:226: Assertion failed in %NFBA_ALU_tb.check: Error, Carry failed A: %b, B: %b, Out: %b\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),8,
                             (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                             8,vlSelf->FBA_ALU_tb__DOT__reg_B,
                             8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out));
                VL_STOP_MT("FBA_ALU_tb.sv", 226, "");
            }
        } else if ((1U & (IData)(vlSelf->FBA_ALU_tb__DOT__func_sel))) {
            if (VL_UNLIKELY((((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                              | (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)) 
                             != (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out)))) {
                VL_WRITEF_NX("[%0t] %%Error: FBA_ALU_tb.sv:222: Assertion failed in %NFBA_ALU_tb.check: Error, Or failed A: %b, B: %b, Out: %b\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),8,
                             (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                             8,vlSelf->FBA_ALU_tb__DOT__reg_B,
                             8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out));
                VL_STOP_MT("FBA_ALU_tb.sv", 222, "");
            }
        } else if (VL_UNLIKELY((((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                                 & (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)) 
                                != (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out)))) {
            VL_WRITEF_NX("[%0t] %%Error: FBA_ALU_tb.sv:219: Assertion failed in %NFBA_ALU_tb.check: Error, And failed A: %b, B: %b, Out: %b\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                         8,vlSelf->FBA_ALU_tb__DOT__reg_B,
                         8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out));
            VL_STOP_MT("FBA_ALU_tb.sv", 219, "");
        }
    } else if ((2U & (IData)(vlSelf->FBA_ALU_tb__DOT__func_sel))) {
        if ((1U & (IData)(vlSelf->FBA_ALU_tb__DOT__func_sel))) {
            if (VL_UNLIKELY(((0xffU & (~ (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A))) 
                             != (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out)))) {
                VL_WRITEF_NX("[%0t] %%Error: FBA_ALU_tb.sv:216: Assertion failed in %NFBA_ALU_tb.check: Error, Not failed A: %b, Out: %b\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),8,
                             (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                             8,vlSelf->FBA_ALU_tb__DOT__reg_Out);
                VL_STOP_MT("FBA_ALU_tb.sv", 216, "");
            }
        } else if (VL_UNLIKELY(((0x1ffU & ((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                                           + (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B))) 
                                != (((IData)(vlSelf->FBA_ALU_tb__DOT__ALU__DOT__c_reg) 
                                     << 8U) | (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out))))) {
            VL_WRITEF_NX("[%0t] %%Error: FBA_ALU_tb.sv:213: Assertion failed in %NFBA_ALU_tb.check: Error, Addition failed A: %b, B: %b, Out: c%b %b\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                         8,vlSelf->FBA_ALU_tb__DOT__reg_B,
                         1,(IData)(vlSelf->FBA_ALU_tb__DOT__ALU__DOT__c_reg),
                         8,vlSelf->FBA_ALU_tb__DOT__reg_Out);
            VL_STOP_MT("FBA_ALU_tb.sv", 213, "");
        }
    } else if ((1U & (IData)(vlSelf->FBA_ALU_tb__DOT__func_sel))) {
        if (VL_UNLIKELY(((0xffU & (~ ((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                                      ^ (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)))) 
                         != (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out)))) {
            VL_WRITEF_NX("[%0t] %%Error: FBA_ALU_tb.sv:210: Assertion failed in %NFBA_ALU_tb.check: Error, Xnor failed A: %b, B: %b, Out: %b\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                         8,vlSelf->FBA_ALU_tb__DOT__reg_B,
                         8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out));
            VL_STOP_MT("FBA_ALU_tb.sv", 210, "");
        }
    } else if (VL_UNLIKELY((((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                             ^ (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)) 
                            != (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out)))) {
        VL_WRITEF_NX("[%0t] %%Error: FBA_ALU_tb.sv:207: Assertion failed in %NFBA_ALU_tb.check: Error, Xor failed A: %b, B: %b, Out: %b\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                     8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                     8,vlSelf->FBA_ALU_tb__DOT__reg_B,
                     8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out));
        VL_STOP_MT("FBA_ALU_tb.sv", 207, "");
    }
    VL_WRITEF_NX("Success: And test\n",0);
    vlSelf->FBA_ALU_tb__DOT__reg_A = 0U;
    vlSelf->FBA_ALU_tb__DOT__reg_B = 0U;
    vlSelf->FBA_ALU_tb__DOT__reg_Out = 0U;
    vlSelf->FBA_ALU_tb__DOT__rst = 0U;
    co_await vlSelf->__VdlySched.delay(2ULL, nullptr, 
                                       "FBA_ALU_tb.sv", 
                                       70);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->FBA_ALU_tb__DOT__rst = 1U;
    vlSelf->FBA_ALU_tb__DOT__func_sel = 5U;
    vlSelf->FBA_ALU_tb__DOT__load_shift = 0U;
    vlSelf->FBA_ALU_tb__DOT__reg_A = 0U;
    vlSelf->FBA_ALU_tb__DOT__reg_B = 0U;
    co_await vlSelf->__VdlySched.delay(2ULL, nullptr, 
                                       "FBA_ALU_tb.sv", 
                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_FBA_ALU_tb__DOT__check__95__n = 8U;
    __Vtask_FBA_ALU_tb__DOT__bit_shift__96__n = __Vtask_FBA_ALU_tb__DOT__check__95__n;
    vlSelf->FBA_ALU_tb__DOT__load_shift = 1U;
    FBA_ALU_tb__DOT____Vrepeat0 = __Vtask_FBA_ALU_tb__DOT__bit_shift__96__n;
    while (VL_LTS_III(32, 0U, FBA_ALU_tb__DOT____Vrepeat0)) {
        co_await vlSelf->__VdlySched.delay(2ULL, nullptr, 
                                           "FBA_ALU_tb.sv", 
                                           180);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        FBA_ALU_tb__DOT____Vrepeat0 = (FBA_ALU_tb__DOT____Vrepeat0 
                                       - (IData)(1U));
    }
    if ((4U & (IData)(vlSelf->FBA_ALU_tb__DOT__func_sel))) {
        if ((2U & (IData)(vlSelf->FBA_ALU_tb__DOT__func_sel))) {
            if ((1U & (IData)(vlSelf->FBA_ALU_tb__DOT__func_sel))) {
                if (VL_UNLIKELY(((0xffU & (VL_LTS_III(32, 8U, __Vtask_FBA_ALU_tb__DOT__check__95__n)
                                            ? VL_SHIFTR_III(8,8,32, (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A), 
                                                            (__Vtask_FBA_ALU_tb__DOT__check__95__n 
                                                             - (IData)(8U)))
                                            : VL_SHIFTL_III(8,8,32, (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A), 
                                                            ((IData)(8U) 
                                                             - __Vtask_FBA_ALU_tb__DOT__check__95__n)))) 
                                 != (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out)))) {
                    VL_WRITEF_NX("A shifted %b\n[%0t] %%Error: FBA_ALU_tb.sv:231: Assertion failed in %NFBA_ALU_tb.check: Error, Buffer failed A: %b, Out: %b, N shift: %11d\n",0,
                                 8,(0xffU & (VL_LTS_III(32, 8U, __Vtask_FBA_ALU_tb__DOT__check__95__n)
                                              ? VL_SHIFTR_III(8,8,32, (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A), 
                                                              (__Vtask_FBA_ALU_tb__DOT__check__95__n 
                                                               - (IData)(8U)))
                                              : VL_SHIFTL_III(8,8,32, (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A), 
                                                              ((IData)(8U) 
                                                               - __Vtask_FBA_ALU_tb__DOT__check__95__n)))),
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                                 8,vlSelf->FBA_ALU_tb__DOT__reg_Out,
                                 32,__Vtask_FBA_ALU_tb__DOT__check__95__n);
                    VL_STOP_MT("FBA_ALU_tb.sv", 231, "");
                }
            } else if (VL_UNLIKELY((([&]() {
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__97__tmp = 0U;
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__97__tmp_and 
                                    = (((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                                        & (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)) 
                                       << 1U);
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__97__tmp_xor 
                                    = (((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                                        ^ (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)) 
                                       << 1U);
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__97__tmp_and) 
                                              >> 1U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__97__tmp_xor) 
                                                 >> 1U) 
                                                & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__97__tmp))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__97__tmp 
                                    = ((0x1fdU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__97__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 1U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__97__tmp_and) 
                                              >> 2U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__97__tmp_xor) 
                                                 >> 2U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__97__tmp) 
                                                   >> 1U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__97__tmp 
                                    = ((0x1fbU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__97__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 2U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__97__tmp_and) 
                                              >> 3U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__97__tmp_xor) 
                                                 >> 3U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__97__tmp) 
                                                   >> 2U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__97__tmp 
                                    = ((0x1f7U & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__97__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 3U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__97__tmp_and) 
                                              >> 4U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__97__tmp_xor) 
                                                 >> 4U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__97__tmp) 
                                                   >> 3U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__97__tmp 
                                    = ((0x1efU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__97__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 4U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__97__tmp_and) 
                                              >> 5U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__97__tmp_xor) 
                                                 >> 5U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__97__tmp) 
                                                   >> 4U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__97__tmp 
                                    = ((0x1dfU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__97__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 5U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__97__tmp_and) 
                                              >> 6U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__97__tmp_xor) 
                                                 >> 6U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__97__tmp) 
                                                   >> 5U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__97__tmp 
                                    = ((0x1bfU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__97__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 6U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__97__tmp_and) 
                                              >> 7U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__97__tmp_xor) 
                                                 >> 7U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__97__tmp) 
                                                   >> 6U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__97__tmp 
                                    = ((0x17fU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__97__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 7U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__97__tmp_and) 
                                              >> 8U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__97__tmp_xor) 
                                                 >> 8U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__97__tmp) 
                                                   >> 7U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__97__tmp 
                                    = ((0xffU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__97__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 8U));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__97__Vfuncout 
                                    = (0xffU & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__97__tmp) 
                                                >> 1U));
                            }(), (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__97__Vfuncout)) 
                                    != (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out)))) {
                VL_WRITEF_NX("Computed carries: %b\n",0,
                             8,([&]() {
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__98__tmp = 0U;
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__98__tmp_and 
                                    = (((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                                        & (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)) 
                                       << 1U);
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__98__tmp_xor 
                                    = (((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                                        ^ (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)) 
                                       << 1U);
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__98__tmp_and) 
                                              >> 1U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__98__tmp_xor) 
                                                 >> 1U) 
                                                & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__98__tmp))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__98__tmp 
                                    = ((0x1fdU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__98__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 1U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__98__tmp_and) 
                                              >> 2U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__98__tmp_xor) 
                                                 >> 2U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__98__tmp) 
                                                   >> 1U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__98__tmp 
                                    = ((0x1fbU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__98__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 2U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__98__tmp_and) 
                                              >> 3U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__98__tmp_xor) 
                                                 >> 3U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__98__tmp) 
                                                   >> 2U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__98__tmp 
                                    = ((0x1f7U & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__98__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 3U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__98__tmp_and) 
                                              >> 4U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__98__tmp_xor) 
                                                 >> 4U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__98__tmp) 
                                                   >> 3U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__98__tmp 
                                    = ((0x1efU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__98__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 4U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__98__tmp_and) 
                                              >> 5U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__98__tmp_xor) 
                                                 >> 5U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__98__tmp) 
                                                   >> 4U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__98__tmp 
                                    = ((0x1dfU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__98__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 5U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__98__tmp_and) 
                                              >> 6U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__98__tmp_xor) 
                                                 >> 6U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__98__tmp) 
                                                   >> 5U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__98__tmp 
                                    = ((0x1bfU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__98__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 6U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__98__tmp_and) 
                                              >> 7U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__98__tmp_xor) 
                                                 >> 7U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__98__tmp) 
                                                   >> 6U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__98__tmp 
                                    = ((0x17fU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__98__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 7U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__98__tmp_and) 
                                              >> 8U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__98__tmp_xor) 
                                                 >> 8U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__98__tmp) 
                                                   >> 7U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__98__tmp 
                                    = ((0xffU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__98__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 8U));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__98__Vfuncout 
                                    = (0xffU & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__98__tmp) 
                                                >> 1U));
                            }(), (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__98__Vfuncout)));
                VL_WRITEF_NX("[%0t] %%Error: FBA_ALU_tb.sv:226: Assertion failed in %NFBA_ALU_tb.check: Error, Carry failed A: %b, B: %b, Out: %b\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),8,
                             (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                             8,vlSelf->FBA_ALU_tb__DOT__reg_B,
                             8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out));
                VL_STOP_MT("FBA_ALU_tb.sv", 226, "");
            }
        } else if ((1U & (IData)(vlSelf->FBA_ALU_tb__DOT__func_sel))) {
            if (VL_UNLIKELY((((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                              | (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)) 
                             != (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out)))) {
                VL_WRITEF_NX("[%0t] %%Error: FBA_ALU_tb.sv:222: Assertion failed in %NFBA_ALU_tb.check: Error, Or failed A: %b, B: %b, Out: %b\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),8,
                             (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                             8,vlSelf->FBA_ALU_tb__DOT__reg_B,
                             8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out));
                VL_STOP_MT("FBA_ALU_tb.sv", 222, "");
            }
        } else if (VL_UNLIKELY((((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                                 & (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)) 
                                != (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out)))) {
            VL_WRITEF_NX("[%0t] %%Error: FBA_ALU_tb.sv:219: Assertion failed in %NFBA_ALU_tb.check: Error, And failed A: %b, B: %b, Out: %b\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                         8,vlSelf->FBA_ALU_tb__DOT__reg_B,
                         8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out));
            VL_STOP_MT("FBA_ALU_tb.sv", 219, "");
        }
    } else if ((2U & (IData)(vlSelf->FBA_ALU_tb__DOT__func_sel))) {
        if ((1U & (IData)(vlSelf->FBA_ALU_tb__DOT__func_sel))) {
            if (VL_UNLIKELY(((0xffU & (~ (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A))) 
                             != (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out)))) {
                VL_WRITEF_NX("[%0t] %%Error: FBA_ALU_tb.sv:216: Assertion failed in %NFBA_ALU_tb.check: Error, Not failed A: %b, Out: %b\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),8,
                             (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                             8,vlSelf->FBA_ALU_tb__DOT__reg_Out);
                VL_STOP_MT("FBA_ALU_tb.sv", 216, "");
            }
        } else if (VL_UNLIKELY(((0x1ffU & ((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                                           + (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B))) 
                                != (((IData)(vlSelf->FBA_ALU_tb__DOT__ALU__DOT__c_reg) 
                                     << 8U) | (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out))))) {
            VL_WRITEF_NX("[%0t] %%Error: FBA_ALU_tb.sv:213: Assertion failed in %NFBA_ALU_tb.check: Error, Addition failed A: %b, B: %b, Out: c%b %b\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                         8,vlSelf->FBA_ALU_tb__DOT__reg_B,
                         1,(IData)(vlSelf->FBA_ALU_tb__DOT__ALU__DOT__c_reg),
                         8,vlSelf->FBA_ALU_tb__DOT__reg_Out);
            VL_STOP_MT("FBA_ALU_tb.sv", 213, "");
        }
    } else if ((1U & (IData)(vlSelf->FBA_ALU_tb__DOT__func_sel))) {
        if (VL_UNLIKELY(((0xffU & (~ ((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                                      ^ (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)))) 
                         != (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out)))) {
            VL_WRITEF_NX("[%0t] %%Error: FBA_ALU_tb.sv:210: Assertion failed in %NFBA_ALU_tb.check: Error, Xnor failed A: %b, B: %b, Out: %b\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                         8,vlSelf->FBA_ALU_tb__DOT__reg_B,
                         8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out));
            VL_STOP_MT("FBA_ALU_tb.sv", 210, "");
        }
    } else if (VL_UNLIKELY((((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                             ^ (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)) 
                            != (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out)))) {
        VL_WRITEF_NX("[%0t] %%Error: FBA_ALU_tb.sv:207: Assertion failed in %NFBA_ALU_tb.check: Error, Xor failed A: %b, B: %b, Out: %b\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                     8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                     8,vlSelf->FBA_ALU_tb__DOT__reg_B,
                     8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out));
        VL_STOP_MT("FBA_ALU_tb.sv", 207, "");
    }
    vlSelf->FBA_ALU_tb__DOT__load_shift = 0U;
    vlSelf->FBA_ALU_tb__DOT__reg_A = 0xffU;
    vlSelf->FBA_ALU_tb__DOT__reg_B = 0xffU;
    co_await vlSelf->__VdlySched.delay(2ULL, nullptr, 
                                       "FBA_ALU_tb.sv", 
                                       86);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_FBA_ALU_tb__DOT__check__100__n = 8U;
    __Vtask_FBA_ALU_tb__DOT__bit_shift__101__n = __Vtask_FBA_ALU_tb__DOT__check__100__n;
    vlSelf->FBA_ALU_tb__DOT__load_shift = 1U;
    FBA_ALU_tb__DOT____Vrepeat0 = __Vtask_FBA_ALU_tb__DOT__bit_shift__101__n;
    while (VL_LTS_III(32, 0U, FBA_ALU_tb__DOT____Vrepeat0)) {
        co_await vlSelf->__VdlySched.delay(2ULL, nullptr, 
                                           "FBA_ALU_tb.sv", 
                                           180);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        FBA_ALU_tb__DOT____Vrepeat0 = (FBA_ALU_tb__DOT____Vrepeat0 
                                       - (IData)(1U));
    }
    if ((4U & (IData)(vlSelf->FBA_ALU_tb__DOT__func_sel))) {
        if ((2U & (IData)(vlSelf->FBA_ALU_tb__DOT__func_sel))) {
            if ((1U & (IData)(vlSelf->FBA_ALU_tb__DOT__func_sel))) {
                if (VL_UNLIKELY(((0xffU & (VL_LTS_III(32, 8U, __Vtask_FBA_ALU_tb__DOT__check__100__n)
                                            ? VL_SHIFTR_III(8,8,32, (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A), 
                                                            (__Vtask_FBA_ALU_tb__DOT__check__100__n 
                                                             - (IData)(8U)))
                                            : VL_SHIFTL_III(8,8,32, (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A), 
                                                            ((IData)(8U) 
                                                             - __Vtask_FBA_ALU_tb__DOT__check__100__n)))) 
                                 != (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out)))) {
                    VL_WRITEF_NX("A shifted %b\n[%0t] %%Error: FBA_ALU_tb.sv:231: Assertion failed in %NFBA_ALU_tb.check: Error, Buffer failed A: %b, Out: %b, N shift: %11d\n",0,
                                 8,(0xffU & (VL_LTS_III(32, 8U, __Vtask_FBA_ALU_tb__DOT__check__100__n)
                                              ? VL_SHIFTR_III(8,8,32, (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A), 
                                                              (__Vtask_FBA_ALU_tb__DOT__check__100__n 
                                                               - (IData)(8U)))
                                              : VL_SHIFTL_III(8,8,32, (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A), 
                                                              ((IData)(8U) 
                                                               - __Vtask_FBA_ALU_tb__DOT__check__100__n)))),
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                                 8,vlSelf->FBA_ALU_tb__DOT__reg_Out,
                                 32,__Vtask_FBA_ALU_tb__DOT__check__100__n);
                    VL_STOP_MT("FBA_ALU_tb.sv", 231, "");
                }
            } else if (VL_UNLIKELY((([&]() {
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__102__tmp = 0U;
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__102__tmp_and 
                                    = (((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                                        & (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)) 
                                       << 1U);
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__102__tmp_xor 
                                    = (((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                                        ^ (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)) 
                                       << 1U);
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__102__tmp_and) 
                                              >> 1U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__102__tmp_xor) 
                                                 >> 1U) 
                                                & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__102__tmp))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__102__tmp 
                                    = ((0x1fdU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__102__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 1U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__102__tmp_and) 
                                              >> 2U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__102__tmp_xor) 
                                                 >> 2U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__102__tmp) 
                                                   >> 1U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__102__tmp 
                                    = ((0x1fbU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__102__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 2U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__102__tmp_and) 
                                              >> 3U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__102__tmp_xor) 
                                                 >> 3U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__102__tmp) 
                                                   >> 2U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__102__tmp 
                                    = ((0x1f7U & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__102__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 3U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__102__tmp_and) 
                                              >> 4U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__102__tmp_xor) 
                                                 >> 4U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__102__tmp) 
                                                   >> 3U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__102__tmp 
                                    = ((0x1efU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__102__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 4U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__102__tmp_and) 
                                              >> 5U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__102__tmp_xor) 
                                                 >> 5U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__102__tmp) 
                                                   >> 4U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__102__tmp 
                                    = ((0x1dfU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__102__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 5U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__102__tmp_and) 
                                              >> 6U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__102__tmp_xor) 
                                                 >> 6U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__102__tmp) 
                                                   >> 5U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__102__tmp 
                                    = ((0x1bfU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__102__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 6U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__102__tmp_and) 
                                              >> 7U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__102__tmp_xor) 
                                                 >> 7U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__102__tmp) 
                                                   >> 6U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__102__tmp 
                                    = ((0x17fU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__102__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 7U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__102__tmp_and) 
                                              >> 8U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__102__tmp_xor) 
                                                 >> 8U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__102__tmp) 
                                                   >> 7U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__102__tmp 
                                    = ((0xffU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__102__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 8U));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__102__Vfuncout 
                                    = (0xffU & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__102__tmp) 
                                                >> 1U));
                            }(), (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__102__Vfuncout)) 
                                    != (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out)))) {
                VL_WRITEF_NX("Computed carries: %b\n",0,
                             8,([&]() {
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__103__tmp = 0U;
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__103__tmp_and 
                                    = (((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                                        & (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)) 
                                       << 1U);
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__103__tmp_xor 
                                    = (((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                                        ^ (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)) 
                                       << 1U);
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__103__tmp_and) 
                                              >> 1U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__103__tmp_xor) 
                                                 >> 1U) 
                                                & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__103__tmp))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__103__tmp 
                                    = ((0x1fdU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__103__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 1U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__103__tmp_and) 
                                              >> 2U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__103__tmp_xor) 
                                                 >> 2U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__103__tmp) 
                                                   >> 1U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__103__tmp 
                                    = ((0x1fbU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__103__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 2U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__103__tmp_and) 
                                              >> 3U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__103__tmp_xor) 
                                                 >> 3U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__103__tmp) 
                                                   >> 2U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__103__tmp 
                                    = ((0x1f7U & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__103__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 3U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__103__tmp_and) 
                                              >> 4U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__103__tmp_xor) 
                                                 >> 4U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__103__tmp) 
                                                   >> 3U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__103__tmp 
                                    = ((0x1efU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__103__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 4U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__103__tmp_and) 
                                              >> 5U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__103__tmp_xor) 
                                                 >> 5U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__103__tmp) 
                                                   >> 4U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__103__tmp 
                                    = ((0x1dfU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__103__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 5U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__103__tmp_and) 
                                              >> 6U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__103__tmp_xor) 
                                                 >> 6U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__103__tmp) 
                                                   >> 5U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__103__tmp 
                                    = ((0x1bfU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__103__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 6U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__103__tmp_and) 
                                              >> 7U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__103__tmp_xor) 
                                                 >> 7U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__103__tmp) 
                                                   >> 6U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__103__tmp 
                                    = ((0x17fU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__103__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 7U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__103__tmp_and) 
                                              >> 8U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__103__tmp_xor) 
                                                 >> 8U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__103__tmp) 
                                                   >> 7U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__103__tmp 
                                    = ((0xffU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__103__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 8U));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__103__Vfuncout 
                                    = (0xffU & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__103__tmp) 
                                                >> 1U));
                            }(), (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__103__Vfuncout)));
                VL_WRITEF_NX("[%0t] %%Error: FBA_ALU_tb.sv:226: Assertion failed in %NFBA_ALU_tb.check: Error, Carry failed A: %b, B: %b, Out: %b\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),8,
                             (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                             8,vlSelf->FBA_ALU_tb__DOT__reg_B,
                             8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out));
                VL_STOP_MT("FBA_ALU_tb.sv", 226, "");
            }
        } else if ((1U & (IData)(vlSelf->FBA_ALU_tb__DOT__func_sel))) {
            if (VL_UNLIKELY((((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                              | (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)) 
                             != (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out)))) {
                VL_WRITEF_NX("[%0t] %%Error: FBA_ALU_tb.sv:222: Assertion failed in %NFBA_ALU_tb.check: Error, Or failed A: %b, B: %b, Out: %b\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),8,
                             (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                             8,vlSelf->FBA_ALU_tb__DOT__reg_B,
                             8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out));
                VL_STOP_MT("FBA_ALU_tb.sv", 222, "");
            }
        } else if (VL_UNLIKELY((((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                                 & (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)) 
                                != (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out)))) {
            VL_WRITEF_NX("[%0t] %%Error: FBA_ALU_tb.sv:219: Assertion failed in %NFBA_ALU_tb.check: Error, And failed A: %b, B: %b, Out: %b\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                         8,vlSelf->FBA_ALU_tb__DOT__reg_B,
                         8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out));
            VL_STOP_MT("FBA_ALU_tb.sv", 219, "");
        }
    } else if ((2U & (IData)(vlSelf->FBA_ALU_tb__DOT__func_sel))) {
        if ((1U & (IData)(vlSelf->FBA_ALU_tb__DOT__func_sel))) {
            if (VL_UNLIKELY(((0xffU & (~ (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A))) 
                             != (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out)))) {
                VL_WRITEF_NX("[%0t] %%Error: FBA_ALU_tb.sv:216: Assertion failed in %NFBA_ALU_tb.check: Error, Not failed A: %b, Out: %b\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),8,
                             (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                             8,vlSelf->FBA_ALU_tb__DOT__reg_Out);
                VL_STOP_MT("FBA_ALU_tb.sv", 216, "");
            }
        } else if (VL_UNLIKELY(((0x1ffU & ((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                                           + (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B))) 
                                != (((IData)(vlSelf->FBA_ALU_tb__DOT__ALU__DOT__c_reg) 
                                     << 8U) | (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out))))) {
            VL_WRITEF_NX("[%0t] %%Error: FBA_ALU_tb.sv:213: Assertion failed in %NFBA_ALU_tb.check: Error, Addition failed A: %b, B: %b, Out: c%b %b\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                         8,vlSelf->FBA_ALU_tb__DOT__reg_B,
                         1,(IData)(vlSelf->FBA_ALU_tb__DOT__ALU__DOT__c_reg),
                         8,vlSelf->FBA_ALU_tb__DOT__reg_Out);
            VL_STOP_MT("FBA_ALU_tb.sv", 213, "");
        }
    } else if ((1U & (IData)(vlSelf->FBA_ALU_tb__DOT__func_sel))) {
        if (VL_UNLIKELY(((0xffU & (~ ((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                                      ^ (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)))) 
                         != (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out)))) {
            VL_WRITEF_NX("[%0t] %%Error: FBA_ALU_tb.sv:210: Assertion failed in %NFBA_ALU_tb.check: Error, Xnor failed A: %b, B: %b, Out: %b\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                         8,vlSelf->FBA_ALU_tb__DOT__reg_B,
                         8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out));
            VL_STOP_MT("FBA_ALU_tb.sv", 210, "");
        }
    } else if (VL_UNLIKELY((((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                             ^ (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)) 
                            != (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out)))) {
        VL_WRITEF_NX("[%0t] %%Error: FBA_ALU_tb.sv:207: Assertion failed in %NFBA_ALU_tb.check: Error, Xor failed A: %b, B: %b, Out: %b\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                     8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                     8,vlSelf->FBA_ALU_tb__DOT__reg_B,
                     8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out));
        VL_STOP_MT("FBA_ALU_tb.sv", 207, "");
    }
    vlSelf->FBA_ALU_tb__DOT__load_shift = 0U;
    vlSelf->FBA_ALU_tb__DOT__reg_A = (0xffU & VL_RANDOM_I());
    vlSelf->FBA_ALU_tb__DOT__reg_B = (0xffU & VL_RANDOM_I());
    co_await vlSelf->__VdlySched.delay(2ULL, nullptr, 
                                       "FBA_ALU_tb.sv", 
                                       94);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_FBA_ALU_tb__DOT__check__105__n = 8U;
    __Vtask_FBA_ALU_tb__DOT__bit_shift__106__n = __Vtask_FBA_ALU_tb__DOT__check__105__n;
    vlSelf->FBA_ALU_tb__DOT__load_shift = 1U;
    FBA_ALU_tb__DOT____Vrepeat0 = __Vtask_FBA_ALU_tb__DOT__bit_shift__106__n;
    while (VL_LTS_III(32, 0U, FBA_ALU_tb__DOT____Vrepeat0)) {
        co_await vlSelf->__VdlySched.delay(2ULL, nullptr, 
                                           "FBA_ALU_tb.sv", 
                                           180);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        FBA_ALU_tb__DOT____Vrepeat0 = (FBA_ALU_tb__DOT____Vrepeat0 
                                       - (IData)(1U));
    }
    if ((4U & (IData)(vlSelf->FBA_ALU_tb__DOT__func_sel))) {
        if ((2U & (IData)(vlSelf->FBA_ALU_tb__DOT__func_sel))) {
            if ((1U & (IData)(vlSelf->FBA_ALU_tb__DOT__func_sel))) {
                if (VL_UNLIKELY(((0xffU & (VL_LTS_III(32, 8U, __Vtask_FBA_ALU_tb__DOT__check__105__n)
                                            ? VL_SHIFTR_III(8,8,32, (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A), 
                                                            (__Vtask_FBA_ALU_tb__DOT__check__105__n 
                                                             - (IData)(8U)))
                                            : VL_SHIFTL_III(8,8,32, (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A), 
                                                            ((IData)(8U) 
                                                             - __Vtask_FBA_ALU_tb__DOT__check__105__n)))) 
                                 != (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out)))) {
                    VL_WRITEF_NX("A shifted %b\n[%0t] %%Error: FBA_ALU_tb.sv:231: Assertion failed in %NFBA_ALU_tb.check: Error, Buffer failed A: %b, Out: %b, N shift: %11d\n",0,
                                 8,(0xffU & (VL_LTS_III(32, 8U, __Vtask_FBA_ALU_tb__DOT__check__105__n)
                                              ? VL_SHIFTR_III(8,8,32, (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A), 
                                                              (__Vtask_FBA_ALU_tb__DOT__check__105__n 
                                                               - (IData)(8U)))
                                              : VL_SHIFTL_III(8,8,32, (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A), 
                                                              ((IData)(8U) 
                                                               - __Vtask_FBA_ALU_tb__DOT__check__105__n)))),
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                                 8,vlSelf->FBA_ALU_tb__DOT__reg_Out,
                                 32,__Vtask_FBA_ALU_tb__DOT__check__105__n);
                    VL_STOP_MT("FBA_ALU_tb.sv", 231, "");
                }
            } else if (VL_UNLIKELY((([&]() {
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__107__tmp = 0U;
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__107__tmp_and 
                                    = (((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                                        & (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)) 
                                       << 1U);
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__107__tmp_xor 
                                    = (((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                                        ^ (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)) 
                                       << 1U);
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__107__tmp_and) 
                                              >> 1U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__107__tmp_xor) 
                                                 >> 1U) 
                                                & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__107__tmp))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__107__tmp 
                                    = ((0x1fdU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__107__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 1U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__107__tmp_and) 
                                              >> 2U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__107__tmp_xor) 
                                                 >> 2U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__107__tmp) 
                                                   >> 1U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__107__tmp 
                                    = ((0x1fbU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__107__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 2U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__107__tmp_and) 
                                              >> 3U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__107__tmp_xor) 
                                                 >> 3U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__107__tmp) 
                                                   >> 2U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__107__tmp 
                                    = ((0x1f7U & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__107__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 3U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__107__tmp_and) 
                                              >> 4U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__107__tmp_xor) 
                                                 >> 4U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__107__tmp) 
                                                   >> 3U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__107__tmp 
                                    = ((0x1efU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__107__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 4U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__107__tmp_and) 
                                              >> 5U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__107__tmp_xor) 
                                                 >> 5U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__107__tmp) 
                                                   >> 4U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__107__tmp 
                                    = ((0x1dfU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__107__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 5U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__107__tmp_and) 
                                              >> 6U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__107__tmp_xor) 
                                                 >> 6U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__107__tmp) 
                                                   >> 5U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__107__tmp 
                                    = ((0x1bfU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__107__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 6U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__107__tmp_and) 
                                              >> 7U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__107__tmp_xor) 
                                                 >> 7U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__107__tmp) 
                                                   >> 6U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__107__tmp 
                                    = ((0x17fU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__107__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 7U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__107__tmp_and) 
                                              >> 8U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__107__tmp_xor) 
                                                 >> 8U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__107__tmp) 
                                                   >> 7U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__107__tmp 
                                    = ((0xffU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__107__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 8U));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__107__Vfuncout 
                                    = (0xffU & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__107__tmp) 
                                                >> 1U));
                            }(), (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__107__Vfuncout)) 
                                    != (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out)))) {
                VL_WRITEF_NX("Computed carries: %b\n",0,
                             8,([&]() {
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__108__tmp = 0U;
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__108__tmp_and 
                                    = (((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                                        & (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)) 
                                       << 1U);
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__108__tmp_xor 
                                    = (((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                                        ^ (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)) 
                                       << 1U);
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__108__tmp_and) 
                                              >> 1U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__108__tmp_xor) 
                                                 >> 1U) 
                                                & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__108__tmp))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__108__tmp 
                                    = ((0x1fdU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__108__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 1U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__108__tmp_and) 
                                              >> 2U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__108__tmp_xor) 
                                                 >> 2U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__108__tmp) 
                                                   >> 1U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__108__tmp 
                                    = ((0x1fbU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__108__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 2U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__108__tmp_and) 
                                              >> 3U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__108__tmp_xor) 
                                                 >> 3U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__108__tmp) 
                                                   >> 2U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__108__tmp 
                                    = ((0x1f7U & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__108__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 3U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__108__tmp_and) 
                                              >> 4U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__108__tmp_xor) 
                                                 >> 4U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__108__tmp) 
                                                   >> 3U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__108__tmp 
                                    = ((0x1efU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__108__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 4U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__108__tmp_and) 
                                              >> 5U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__108__tmp_xor) 
                                                 >> 5U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__108__tmp) 
                                                   >> 4U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__108__tmp 
                                    = ((0x1dfU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__108__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 5U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__108__tmp_and) 
                                              >> 6U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__108__tmp_xor) 
                                                 >> 6U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__108__tmp) 
                                                   >> 5U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__108__tmp 
                                    = ((0x1bfU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__108__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 6U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__108__tmp_and) 
                                              >> 7U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__108__tmp_xor) 
                                                 >> 7U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__108__tmp) 
                                                   >> 6U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__108__tmp 
                                    = ((0x17fU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__108__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 7U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__108__tmp_and) 
                                              >> 8U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__108__tmp_xor) 
                                                 >> 8U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__108__tmp) 
                                                   >> 7U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__108__tmp 
                                    = ((0xffU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__108__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 8U));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__108__Vfuncout 
                                    = (0xffU & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__108__tmp) 
                                                >> 1U));
                            }(), (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__108__Vfuncout)));
                VL_WRITEF_NX("[%0t] %%Error: FBA_ALU_tb.sv:226: Assertion failed in %NFBA_ALU_tb.check: Error, Carry failed A: %b, B: %b, Out: %b\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),8,
                             (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                             8,vlSelf->FBA_ALU_tb__DOT__reg_B,
                             8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out));
                VL_STOP_MT("FBA_ALU_tb.sv", 226, "");
            }
        } else if ((1U & (IData)(vlSelf->FBA_ALU_tb__DOT__func_sel))) {
            if (VL_UNLIKELY((((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                              | (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)) 
                             != (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out)))) {
                VL_WRITEF_NX("[%0t] %%Error: FBA_ALU_tb.sv:222: Assertion failed in %NFBA_ALU_tb.check: Error, Or failed A: %b, B: %b, Out: %b\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),8,
                             (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                             8,vlSelf->FBA_ALU_tb__DOT__reg_B,
                             8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out));
                VL_STOP_MT("FBA_ALU_tb.sv", 222, "");
            }
        } else if (VL_UNLIKELY((((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                                 & (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)) 
                                != (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out)))) {
            VL_WRITEF_NX("[%0t] %%Error: FBA_ALU_tb.sv:219: Assertion failed in %NFBA_ALU_tb.check: Error, And failed A: %b, B: %b, Out: %b\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                         8,vlSelf->FBA_ALU_tb__DOT__reg_B,
                         8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out));
            VL_STOP_MT("FBA_ALU_tb.sv", 219, "");
        }
    } else if ((2U & (IData)(vlSelf->FBA_ALU_tb__DOT__func_sel))) {
        if ((1U & (IData)(vlSelf->FBA_ALU_tb__DOT__func_sel))) {
            if (VL_UNLIKELY(((0xffU & (~ (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A))) 
                             != (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out)))) {
                VL_WRITEF_NX("[%0t] %%Error: FBA_ALU_tb.sv:216: Assertion failed in %NFBA_ALU_tb.check: Error, Not failed A: %b, Out: %b\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),8,
                             (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                             8,vlSelf->FBA_ALU_tb__DOT__reg_Out);
                VL_STOP_MT("FBA_ALU_tb.sv", 216, "");
            }
        } else if (VL_UNLIKELY(((0x1ffU & ((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                                           + (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B))) 
                                != (((IData)(vlSelf->FBA_ALU_tb__DOT__ALU__DOT__c_reg) 
                                     << 8U) | (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out))))) {
            VL_WRITEF_NX("[%0t] %%Error: FBA_ALU_tb.sv:213: Assertion failed in %NFBA_ALU_tb.check: Error, Addition failed A: %b, B: %b, Out: c%b %b\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                         8,vlSelf->FBA_ALU_tb__DOT__reg_B,
                         1,(IData)(vlSelf->FBA_ALU_tb__DOT__ALU__DOT__c_reg),
                         8,vlSelf->FBA_ALU_tb__DOT__reg_Out);
            VL_STOP_MT("FBA_ALU_tb.sv", 213, "");
        }
    } else if ((1U & (IData)(vlSelf->FBA_ALU_tb__DOT__func_sel))) {
        if (VL_UNLIKELY(((0xffU & (~ ((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                                      ^ (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)))) 
                         != (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out)))) {
            VL_WRITEF_NX("[%0t] %%Error: FBA_ALU_tb.sv:210: Assertion failed in %NFBA_ALU_tb.check: Error, Xnor failed A: %b, B: %b, Out: %b\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                         8,vlSelf->FBA_ALU_tb__DOT__reg_B,
                         8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out));
            VL_STOP_MT("FBA_ALU_tb.sv", 210, "");
        }
    } else if (VL_UNLIKELY((((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                             ^ (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)) 
                            != (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out)))) {
        VL_WRITEF_NX("[%0t] %%Error: FBA_ALU_tb.sv:207: Assertion failed in %NFBA_ALU_tb.check: Error, Xor failed A: %b, B: %b, Out: %b\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                     8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                     8,vlSelf->FBA_ALU_tb__DOT__reg_B,
                     8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out));
        VL_STOP_MT("FBA_ALU_tb.sv", 207, "");
    }
    VL_WRITEF_NX("Success: Or test\n",0);
    vlSelf->FBA_ALU_tb__DOT__reg_A = 0U;
    vlSelf->FBA_ALU_tb__DOT__reg_B = 0U;
    vlSelf->FBA_ALU_tb__DOT__reg_Out = 0U;
    vlSelf->FBA_ALU_tb__DOT__rst = 0U;
    co_await vlSelf->__VdlySched.delay(2ULL, nullptr, 
                                       "FBA_ALU_tb.sv", 
                                       70);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->FBA_ALU_tb__DOT__rst = 1U;
    vlSelf->FBA_ALU_tb__DOT__func_sel = 6U;
    vlSelf->FBA_ALU_tb__DOT__load_shift = 0U;
    vlSelf->FBA_ALU_tb__DOT__reg_A = 0U;
    vlSelf->FBA_ALU_tb__DOT__reg_B = 0U;
    co_await vlSelf->__VdlySched.delay(2ULL, nullptr, 
                                       "FBA_ALU_tb.sv", 
                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_FBA_ALU_tb__DOT__check__113__n = 8U;
    __Vtask_FBA_ALU_tb__DOT__bit_shift__114__n = __Vtask_FBA_ALU_tb__DOT__check__113__n;
    vlSelf->FBA_ALU_tb__DOT__load_shift = 1U;
    FBA_ALU_tb__DOT____Vrepeat0 = __Vtask_FBA_ALU_tb__DOT__bit_shift__114__n;
    while (VL_LTS_III(32, 0U, FBA_ALU_tb__DOT____Vrepeat0)) {
        co_await vlSelf->__VdlySched.delay(2ULL, nullptr, 
                                           "FBA_ALU_tb.sv", 
                                           180);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        FBA_ALU_tb__DOT____Vrepeat0 = (FBA_ALU_tb__DOT____Vrepeat0 
                                       - (IData)(1U));
    }
    if ((4U & (IData)(vlSelf->FBA_ALU_tb__DOT__func_sel))) {
        if ((2U & (IData)(vlSelf->FBA_ALU_tb__DOT__func_sel))) {
            if ((1U & (IData)(vlSelf->FBA_ALU_tb__DOT__func_sel))) {
                if (VL_UNLIKELY(((0xffU & (VL_LTS_III(32, 8U, __Vtask_FBA_ALU_tb__DOT__check__113__n)
                                            ? VL_SHIFTR_III(8,8,32, (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A), 
                                                            (__Vtask_FBA_ALU_tb__DOT__check__113__n 
                                                             - (IData)(8U)))
                                            : VL_SHIFTL_III(8,8,32, (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A), 
                                                            ((IData)(8U) 
                                                             - __Vtask_FBA_ALU_tb__DOT__check__113__n)))) 
                                 != (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out)))) {
                    VL_WRITEF_NX("A shifted %b\n[%0t] %%Error: FBA_ALU_tb.sv:231: Assertion failed in %NFBA_ALU_tb.check: Error, Buffer failed A: %b, Out: %b, N shift: %11d\n",0,
                                 8,(0xffU & (VL_LTS_III(32, 8U, __Vtask_FBA_ALU_tb__DOT__check__113__n)
                                              ? VL_SHIFTR_III(8,8,32, (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A), 
                                                              (__Vtask_FBA_ALU_tb__DOT__check__113__n 
                                                               - (IData)(8U)))
                                              : VL_SHIFTL_III(8,8,32, (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A), 
                                                              ((IData)(8U) 
                                                               - __Vtask_FBA_ALU_tb__DOT__check__113__n)))),
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                                 8,vlSelf->FBA_ALU_tb__DOT__reg_Out,
                                 32,__Vtask_FBA_ALU_tb__DOT__check__113__n);
                    VL_STOP_MT("FBA_ALU_tb.sv", 231, "");
                }
            } else if (VL_UNLIKELY((([&]() {
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__115__tmp = 0U;
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__115__tmp_and 
                                    = (((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                                        & (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)) 
                                       << 1U);
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__115__tmp_xor 
                                    = (((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                                        ^ (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)) 
                                       << 1U);
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__115__tmp_and) 
                                              >> 1U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__115__tmp_xor) 
                                                 >> 1U) 
                                                & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__115__tmp))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__115__tmp 
                                    = ((0x1fdU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__115__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 1U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__115__tmp_and) 
                                              >> 2U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__115__tmp_xor) 
                                                 >> 2U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__115__tmp) 
                                                   >> 1U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__115__tmp 
                                    = ((0x1fbU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__115__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 2U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__115__tmp_and) 
                                              >> 3U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__115__tmp_xor) 
                                                 >> 3U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__115__tmp) 
                                                   >> 2U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__115__tmp 
                                    = ((0x1f7U & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__115__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 3U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__115__tmp_and) 
                                              >> 4U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__115__tmp_xor) 
                                                 >> 4U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__115__tmp) 
                                                   >> 3U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__115__tmp 
                                    = ((0x1efU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__115__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 4U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__115__tmp_and) 
                                              >> 5U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__115__tmp_xor) 
                                                 >> 5U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__115__tmp) 
                                                   >> 4U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__115__tmp 
                                    = ((0x1dfU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__115__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 5U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__115__tmp_and) 
                                              >> 6U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__115__tmp_xor) 
                                                 >> 6U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__115__tmp) 
                                                   >> 5U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__115__tmp 
                                    = ((0x1bfU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__115__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 6U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__115__tmp_and) 
                                              >> 7U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__115__tmp_xor) 
                                                 >> 7U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__115__tmp) 
                                                   >> 6U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__115__tmp 
                                    = ((0x17fU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__115__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 7U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__115__tmp_and) 
                                              >> 8U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__115__tmp_xor) 
                                                 >> 8U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__115__tmp) 
                                                   >> 7U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__115__tmp 
                                    = ((0xffU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__115__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 8U));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__115__Vfuncout 
                                    = (0xffU & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__115__tmp) 
                                                >> 1U));
                            }(), (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__115__Vfuncout)) 
                                    != (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out)))) {
                VL_WRITEF_NX("Computed carries: %b\n",0,
                             8,([&]() {
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__116__tmp = 0U;
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__116__tmp_and 
                                    = (((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                                        & (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)) 
                                       << 1U);
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__116__tmp_xor 
                                    = (((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                                        ^ (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)) 
                                       << 1U);
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__116__tmp_and) 
                                              >> 1U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__116__tmp_xor) 
                                                 >> 1U) 
                                                & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__116__tmp))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__116__tmp 
                                    = ((0x1fdU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__116__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 1U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__116__tmp_and) 
                                              >> 2U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__116__tmp_xor) 
                                                 >> 2U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__116__tmp) 
                                                   >> 1U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__116__tmp 
                                    = ((0x1fbU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__116__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 2U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__116__tmp_and) 
                                              >> 3U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__116__tmp_xor) 
                                                 >> 3U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__116__tmp) 
                                                   >> 2U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__116__tmp 
                                    = ((0x1f7U & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__116__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 3U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__116__tmp_and) 
                                              >> 4U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__116__tmp_xor) 
                                                 >> 4U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__116__tmp) 
                                                   >> 3U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__116__tmp 
                                    = ((0x1efU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__116__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 4U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__116__tmp_and) 
                                              >> 5U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__116__tmp_xor) 
                                                 >> 5U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__116__tmp) 
                                                   >> 4U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__116__tmp 
                                    = ((0x1dfU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__116__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 5U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__116__tmp_and) 
                                              >> 6U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__116__tmp_xor) 
                                                 >> 6U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__116__tmp) 
                                                   >> 5U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__116__tmp 
                                    = ((0x1bfU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__116__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 6U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__116__tmp_and) 
                                              >> 7U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__116__tmp_xor) 
                                                 >> 7U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__116__tmp) 
                                                   >> 6U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__116__tmp 
                                    = ((0x17fU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__116__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 7U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__116__tmp_and) 
                                              >> 8U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__116__tmp_xor) 
                                                 >> 8U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__116__tmp) 
                                                   >> 7U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__116__tmp 
                                    = ((0xffU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__116__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 8U));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__116__Vfuncout 
                                    = (0xffU & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__116__tmp) 
                                                >> 1U));
                            }(), (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__116__Vfuncout)));
                VL_WRITEF_NX("[%0t] %%Error: FBA_ALU_tb.sv:226: Assertion failed in %NFBA_ALU_tb.check: Error, Carry failed A: %b, B: %b, Out: %b\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),8,
                             (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                             8,vlSelf->FBA_ALU_tb__DOT__reg_B,
                             8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out));
                VL_STOP_MT("FBA_ALU_tb.sv", 226, "");
            }
        } else if ((1U & (IData)(vlSelf->FBA_ALU_tb__DOT__func_sel))) {
            if (VL_UNLIKELY((((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                              | (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)) 
                             != (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out)))) {
                VL_WRITEF_NX("[%0t] %%Error: FBA_ALU_tb.sv:222: Assertion failed in %NFBA_ALU_tb.check: Error, Or failed A: %b, B: %b, Out: %b\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),8,
                             (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                             8,vlSelf->FBA_ALU_tb__DOT__reg_B,
                             8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out));
                VL_STOP_MT("FBA_ALU_tb.sv", 222, "");
            }
        } else if (VL_UNLIKELY((((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                                 & (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)) 
                                != (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out)))) {
            VL_WRITEF_NX("[%0t] %%Error: FBA_ALU_tb.sv:219: Assertion failed in %NFBA_ALU_tb.check: Error, And failed A: %b, B: %b, Out: %b\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                         8,vlSelf->FBA_ALU_tb__DOT__reg_B,
                         8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out));
            VL_STOP_MT("FBA_ALU_tb.sv", 219, "");
        }
    } else if ((2U & (IData)(vlSelf->FBA_ALU_tb__DOT__func_sel))) {
        if ((1U & (IData)(vlSelf->FBA_ALU_tb__DOT__func_sel))) {
            if (VL_UNLIKELY(((0xffU & (~ (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A))) 
                             != (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out)))) {
                VL_WRITEF_NX("[%0t] %%Error: FBA_ALU_tb.sv:216: Assertion failed in %NFBA_ALU_tb.check: Error, Not failed A: %b, Out: %b\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),8,
                             (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                             8,vlSelf->FBA_ALU_tb__DOT__reg_Out);
                VL_STOP_MT("FBA_ALU_tb.sv", 216, "");
            }
        } else if (VL_UNLIKELY(((0x1ffU & ((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                                           + (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B))) 
                                != (((IData)(vlSelf->FBA_ALU_tb__DOT__ALU__DOT__c_reg) 
                                     << 8U) | (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out))))) {
            VL_WRITEF_NX("[%0t] %%Error: FBA_ALU_tb.sv:213: Assertion failed in %NFBA_ALU_tb.check: Error, Addition failed A: %b, B: %b, Out: c%b %b\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                         8,vlSelf->FBA_ALU_tb__DOT__reg_B,
                         1,(IData)(vlSelf->FBA_ALU_tb__DOT__ALU__DOT__c_reg),
                         8,vlSelf->FBA_ALU_tb__DOT__reg_Out);
            VL_STOP_MT("FBA_ALU_tb.sv", 213, "");
        }
    } else if ((1U & (IData)(vlSelf->FBA_ALU_tb__DOT__func_sel))) {
        if (VL_UNLIKELY(((0xffU & (~ ((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                                      ^ (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)))) 
                         != (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out)))) {
            VL_WRITEF_NX("[%0t] %%Error: FBA_ALU_tb.sv:210: Assertion failed in %NFBA_ALU_tb.check: Error, Xnor failed A: %b, B: %b, Out: %b\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                         8,vlSelf->FBA_ALU_tb__DOT__reg_B,
                         8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out));
            VL_STOP_MT("FBA_ALU_tb.sv", 210, "");
        }
    } else if (VL_UNLIKELY((((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                             ^ (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)) 
                            != (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out)))) {
        VL_WRITEF_NX("[%0t] %%Error: FBA_ALU_tb.sv:207: Assertion failed in %NFBA_ALU_tb.check: Error, Xor failed A: %b, B: %b, Out: %b\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                     8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                     8,vlSelf->FBA_ALU_tb__DOT__reg_B,
                     8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out));
        VL_STOP_MT("FBA_ALU_tb.sv", 207, "");
    }
    vlSelf->FBA_ALU_tb__DOT__load_shift = 0U;
    vlSelf->FBA_ALU_tb__DOT__reg_A = 0xffU;
    vlSelf->FBA_ALU_tb__DOT__reg_B = 0xffU;
    co_await vlSelf->__VdlySched.delay(2ULL, nullptr, 
                                       "FBA_ALU_tb.sv", 
                                       86);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_FBA_ALU_tb__DOT__check__118__n = 8U;
    __Vtask_FBA_ALU_tb__DOT__bit_shift__119__n = __Vtask_FBA_ALU_tb__DOT__check__118__n;
    vlSelf->FBA_ALU_tb__DOT__load_shift = 1U;
    FBA_ALU_tb__DOT____Vrepeat0 = __Vtask_FBA_ALU_tb__DOT__bit_shift__119__n;
    while (VL_LTS_III(32, 0U, FBA_ALU_tb__DOT____Vrepeat0)) {
        co_await vlSelf->__VdlySched.delay(2ULL, nullptr, 
                                           "FBA_ALU_tb.sv", 
                                           180);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        FBA_ALU_tb__DOT____Vrepeat0 = (FBA_ALU_tb__DOT____Vrepeat0 
                                       - (IData)(1U));
    }
    if ((4U & (IData)(vlSelf->FBA_ALU_tb__DOT__func_sel))) {
        if ((2U & (IData)(vlSelf->FBA_ALU_tb__DOT__func_sel))) {
            if ((1U & (IData)(vlSelf->FBA_ALU_tb__DOT__func_sel))) {
                if (VL_UNLIKELY(((0xffU & (VL_LTS_III(32, 8U, __Vtask_FBA_ALU_tb__DOT__check__118__n)
                                            ? VL_SHIFTR_III(8,8,32, (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A), 
                                                            (__Vtask_FBA_ALU_tb__DOT__check__118__n 
                                                             - (IData)(8U)))
                                            : VL_SHIFTL_III(8,8,32, (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A), 
                                                            ((IData)(8U) 
                                                             - __Vtask_FBA_ALU_tb__DOT__check__118__n)))) 
                                 != (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out)))) {
                    VL_WRITEF_NX("A shifted %b\n[%0t] %%Error: FBA_ALU_tb.sv:231: Assertion failed in %NFBA_ALU_tb.check: Error, Buffer failed A: %b, Out: %b, N shift: %11d\n",0,
                                 8,(0xffU & (VL_LTS_III(32, 8U, __Vtask_FBA_ALU_tb__DOT__check__118__n)
                                              ? VL_SHIFTR_III(8,8,32, (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A), 
                                                              (__Vtask_FBA_ALU_tb__DOT__check__118__n 
                                                               - (IData)(8U)))
                                              : VL_SHIFTL_III(8,8,32, (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A), 
                                                              ((IData)(8U) 
                                                               - __Vtask_FBA_ALU_tb__DOT__check__118__n)))),
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                                 8,vlSelf->FBA_ALU_tb__DOT__reg_Out,
                                 32,__Vtask_FBA_ALU_tb__DOT__check__118__n);
                    VL_STOP_MT("FBA_ALU_tb.sv", 231, "");
                }
            } else if (VL_UNLIKELY((([&]() {
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__120__tmp = 0U;
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__120__tmp_and 
                                    = (((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                                        & (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)) 
                                       << 1U);
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__120__tmp_xor 
                                    = (((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                                        ^ (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)) 
                                       << 1U);
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__120__tmp_and) 
                                              >> 1U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__120__tmp_xor) 
                                                 >> 1U) 
                                                & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__120__tmp))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__120__tmp 
                                    = ((0x1fdU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__120__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 1U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__120__tmp_and) 
                                              >> 2U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__120__tmp_xor) 
                                                 >> 2U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__120__tmp) 
                                                   >> 1U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__120__tmp 
                                    = ((0x1fbU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__120__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 2U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__120__tmp_and) 
                                              >> 3U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__120__tmp_xor) 
                                                 >> 3U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__120__tmp) 
                                                   >> 2U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__120__tmp 
                                    = ((0x1f7U & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__120__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 3U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__120__tmp_and) 
                                              >> 4U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__120__tmp_xor) 
                                                 >> 4U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__120__tmp) 
                                                   >> 3U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__120__tmp 
                                    = ((0x1efU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__120__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 4U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__120__tmp_and) 
                                              >> 5U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__120__tmp_xor) 
                                                 >> 5U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__120__tmp) 
                                                   >> 4U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__120__tmp 
                                    = ((0x1dfU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__120__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 5U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__120__tmp_and) 
                                              >> 6U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__120__tmp_xor) 
                                                 >> 6U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__120__tmp) 
                                                   >> 5U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__120__tmp 
                                    = ((0x1bfU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__120__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 6U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__120__tmp_and) 
                                              >> 7U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__120__tmp_xor) 
                                                 >> 7U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__120__tmp) 
                                                   >> 6U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__120__tmp 
                                    = ((0x17fU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__120__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 7U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__120__tmp_and) 
                                              >> 8U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__120__tmp_xor) 
                                                 >> 8U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__120__tmp) 
                                                   >> 7U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__120__tmp 
                                    = ((0xffU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__120__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 8U));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__120__Vfuncout 
                                    = (0xffU & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__120__tmp) 
                                                >> 1U));
                            }(), (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__120__Vfuncout)) 
                                    != (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out)))) {
                VL_WRITEF_NX("Computed carries: %b\n",0,
                             8,([&]() {
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__121__tmp = 0U;
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__121__tmp_and 
                                    = (((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                                        & (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)) 
                                       << 1U);
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__121__tmp_xor 
                                    = (((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                                        ^ (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)) 
                                       << 1U);
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__121__tmp_and) 
                                              >> 1U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__121__tmp_xor) 
                                                 >> 1U) 
                                                & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__121__tmp))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__121__tmp 
                                    = ((0x1fdU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__121__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 1U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__121__tmp_and) 
                                              >> 2U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__121__tmp_xor) 
                                                 >> 2U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__121__tmp) 
                                                   >> 1U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__121__tmp 
                                    = ((0x1fbU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__121__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 2U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__121__tmp_and) 
                                              >> 3U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__121__tmp_xor) 
                                                 >> 3U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__121__tmp) 
                                                   >> 2U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__121__tmp 
                                    = ((0x1f7U & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__121__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 3U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__121__tmp_and) 
                                              >> 4U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__121__tmp_xor) 
                                                 >> 4U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__121__tmp) 
                                                   >> 3U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__121__tmp 
                                    = ((0x1efU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__121__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 4U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__121__tmp_and) 
                                              >> 5U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__121__tmp_xor) 
                                                 >> 5U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__121__tmp) 
                                                   >> 4U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__121__tmp 
                                    = ((0x1dfU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__121__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 5U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__121__tmp_and) 
                                              >> 6U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__121__tmp_xor) 
                                                 >> 6U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__121__tmp) 
                                                   >> 5U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__121__tmp 
                                    = ((0x1bfU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__121__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 6U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__121__tmp_and) 
                                              >> 7U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__121__tmp_xor) 
                                                 >> 7U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__121__tmp) 
                                                   >> 6U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__121__tmp 
                                    = ((0x17fU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__121__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 7U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__121__tmp_and) 
                                              >> 8U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__121__tmp_xor) 
                                                 >> 8U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__121__tmp) 
                                                   >> 7U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__121__tmp 
                                    = ((0xffU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__121__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 8U));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__121__Vfuncout 
                                    = (0xffU & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__121__tmp) 
                                                >> 1U));
                            }(), (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__121__Vfuncout)));
                VL_WRITEF_NX("[%0t] %%Error: FBA_ALU_tb.sv:226: Assertion failed in %NFBA_ALU_tb.check: Error, Carry failed A: %b, B: %b, Out: %b\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),8,
                             (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                             8,vlSelf->FBA_ALU_tb__DOT__reg_B,
                             8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out));
                VL_STOP_MT("FBA_ALU_tb.sv", 226, "");
            }
        } else if ((1U & (IData)(vlSelf->FBA_ALU_tb__DOT__func_sel))) {
            if (VL_UNLIKELY((((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                              | (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)) 
                             != (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out)))) {
                VL_WRITEF_NX("[%0t] %%Error: FBA_ALU_tb.sv:222: Assertion failed in %NFBA_ALU_tb.check: Error, Or failed A: %b, B: %b, Out: %b\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),8,
                             (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                             8,vlSelf->FBA_ALU_tb__DOT__reg_B,
                             8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out));
                VL_STOP_MT("FBA_ALU_tb.sv", 222, "");
            }
        } else if (VL_UNLIKELY((((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                                 & (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)) 
                                != (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out)))) {
            VL_WRITEF_NX("[%0t] %%Error: FBA_ALU_tb.sv:219: Assertion failed in %NFBA_ALU_tb.check: Error, And failed A: %b, B: %b, Out: %b\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                         8,vlSelf->FBA_ALU_tb__DOT__reg_B,
                         8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out));
            VL_STOP_MT("FBA_ALU_tb.sv", 219, "");
        }
    } else if ((2U & (IData)(vlSelf->FBA_ALU_tb__DOT__func_sel))) {
        if ((1U & (IData)(vlSelf->FBA_ALU_tb__DOT__func_sel))) {
            if (VL_UNLIKELY(((0xffU & (~ (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A))) 
                             != (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out)))) {
                VL_WRITEF_NX("[%0t] %%Error: FBA_ALU_tb.sv:216: Assertion failed in %NFBA_ALU_tb.check: Error, Not failed A: %b, Out: %b\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),8,
                             (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                             8,vlSelf->FBA_ALU_tb__DOT__reg_Out);
                VL_STOP_MT("FBA_ALU_tb.sv", 216, "");
            }
        } else if (VL_UNLIKELY(((0x1ffU & ((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                                           + (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B))) 
                                != (((IData)(vlSelf->FBA_ALU_tb__DOT__ALU__DOT__c_reg) 
                                     << 8U) | (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out))))) {
            VL_WRITEF_NX("[%0t] %%Error: FBA_ALU_tb.sv:213: Assertion failed in %NFBA_ALU_tb.check: Error, Addition failed A: %b, B: %b, Out: c%b %b\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                         8,vlSelf->FBA_ALU_tb__DOT__reg_B,
                         1,(IData)(vlSelf->FBA_ALU_tb__DOT__ALU__DOT__c_reg),
                         8,vlSelf->FBA_ALU_tb__DOT__reg_Out);
            VL_STOP_MT("FBA_ALU_tb.sv", 213, "");
        }
    } else if ((1U & (IData)(vlSelf->FBA_ALU_tb__DOT__func_sel))) {
        if (VL_UNLIKELY(((0xffU & (~ ((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                                      ^ (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)))) 
                         != (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out)))) {
            VL_WRITEF_NX("[%0t] %%Error: FBA_ALU_tb.sv:210: Assertion failed in %NFBA_ALU_tb.check: Error, Xnor failed A: %b, B: %b, Out: %b\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                         8,vlSelf->FBA_ALU_tb__DOT__reg_B,
                         8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out));
            VL_STOP_MT("FBA_ALU_tb.sv", 210, "");
        }
    } else if (VL_UNLIKELY((((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                             ^ (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)) 
                            != (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out)))) {
        VL_WRITEF_NX("[%0t] %%Error: FBA_ALU_tb.sv:207: Assertion failed in %NFBA_ALU_tb.check: Error, Xor failed A: %b, B: %b, Out: %b\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                     8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                     8,vlSelf->FBA_ALU_tb__DOT__reg_B,
                     8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out));
        VL_STOP_MT("FBA_ALU_tb.sv", 207, "");
    }
    vlSelf->FBA_ALU_tb__DOT__load_shift = 0U;
    vlSelf->FBA_ALU_tb__DOT__reg_A = (0xffU & VL_RANDOM_I());
    vlSelf->FBA_ALU_tb__DOT__reg_B = (0xffU & VL_RANDOM_I());
    co_await vlSelf->__VdlySched.delay(2ULL, nullptr, 
                                       "FBA_ALU_tb.sv", 
                                       94);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_FBA_ALU_tb__DOT__check__123__n = 8U;
    __Vtask_FBA_ALU_tb__DOT__bit_shift__124__n = __Vtask_FBA_ALU_tb__DOT__check__123__n;
    vlSelf->FBA_ALU_tb__DOT__load_shift = 1U;
    FBA_ALU_tb__DOT____Vrepeat0 = __Vtask_FBA_ALU_tb__DOT__bit_shift__124__n;
    while (VL_LTS_III(32, 0U, FBA_ALU_tb__DOT____Vrepeat0)) {
        co_await vlSelf->__VdlySched.delay(2ULL, nullptr, 
                                           "FBA_ALU_tb.sv", 
                                           180);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        FBA_ALU_tb__DOT____Vrepeat0 = (FBA_ALU_tb__DOT____Vrepeat0 
                                       - (IData)(1U));
    }
    if ((4U & (IData)(vlSelf->FBA_ALU_tb__DOT__func_sel))) {
        if ((2U & (IData)(vlSelf->FBA_ALU_tb__DOT__func_sel))) {
            if ((1U & (IData)(vlSelf->FBA_ALU_tb__DOT__func_sel))) {
                if (VL_UNLIKELY(((0xffU & (VL_LTS_III(32, 8U, __Vtask_FBA_ALU_tb__DOT__check__123__n)
                                            ? VL_SHIFTR_III(8,8,32, (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A), 
                                                            (__Vtask_FBA_ALU_tb__DOT__check__123__n 
                                                             - (IData)(8U)))
                                            : VL_SHIFTL_III(8,8,32, (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A), 
                                                            ((IData)(8U) 
                                                             - __Vtask_FBA_ALU_tb__DOT__check__123__n)))) 
                                 != (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out)))) {
                    VL_WRITEF_NX("A shifted %b\n[%0t] %%Error: FBA_ALU_tb.sv:231: Assertion failed in %NFBA_ALU_tb.check: Error, Buffer failed A: %b, Out: %b, N shift: %11d\n",0,
                                 8,(0xffU & (VL_LTS_III(32, 8U, __Vtask_FBA_ALU_tb__DOT__check__123__n)
                                              ? VL_SHIFTR_III(8,8,32, (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A), 
                                                              (__Vtask_FBA_ALU_tb__DOT__check__123__n 
                                                               - (IData)(8U)))
                                              : VL_SHIFTL_III(8,8,32, (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A), 
                                                              ((IData)(8U) 
                                                               - __Vtask_FBA_ALU_tb__DOT__check__123__n)))),
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                                 8,vlSelf->FBA_ALU_tb__DOT__reg_Out,
                                 32,__Vtask_FBA_ALU_tb__DOT__check__123__n);
                    VL_STOP_MT("FBA_ALU_tb.sv", 231, "");
                }
            } else if (VL_UNLIKELY((([&]() {
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__125__tmp = 0U;
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__125__tmp_and 
                                    = (((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                                        & (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)) 
                                       << 1U);
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__125__tmp_xor 
                                    = (((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                                        ^ (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)) 
                                       << 1U);
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__125__tmp_and) 
                                              >> 1U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__125__tmp_xor) 
                                                 >> 1U) 
                                                & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__125__tmp))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__125__tmp 
                                    = ((0x1fdU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__125__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 1U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__125__tmp_and) 
                                              >> 2U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__125__tmp_xor) 
                                                 >> 2U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__125__tmp) 
                                                   >> 1U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__125__tmp 
                                    = ((0x1fbU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__125__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 2U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__125__tmp_and) 
                                              >> 3U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__125__tmp_xor) 
                                                 >> 3U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__125__tmp) 
                                                   >> 2U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__125__tmp 
                                    = ((0x1f7U & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__125__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 3U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__125__tmp_and) 
                                              >> 4U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__125__tmp_xor) 
                                                 >> 4U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__125__tmp) 
                                                   >> 3U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__125__tmp 
                                    = ((0x1efU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__125__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 4U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__125__tmp_and) 
                                              >> 5U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__125__tmp_xor) 
                                                 >> 5U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__125__tmp) 
                                                   >> 4U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__125__tmp 
                                    = ((0x1dfU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__125__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 5U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__125__tmp_and) 
                                              >> 6U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__125__tmp_xor) 
                                                 >> 6U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__125__tmp) 
                                                   >> 5U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__125__tmp 
                                    = ((0x1bfU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__125__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 6U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__125__tmp_and) 
                                              >> 7U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__125__tmp_xor) 
                                                 >> 7U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__125__tmp) 
                                                   >> 6U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__125__tmp 
                                    = ((0x17fU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__125__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 7U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__125__tmp_and) 
                                              >> 8U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__125__tmp_xor) 
                                                 >> 8U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__125__tmp) 
                                                   >> 7U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__125__tmp 
                                    = ((0xffU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__125__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 8U));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__125__Vfuncout 
                                    = (0xffU & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__125__tmp) 
                                                >> 1U));
                            }(), (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__125__Vfuncout)) 
                                    != (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out)))) {
                VL_WRITEF_NX("Computed carries: %b\n",0,
                             8,([&]() {
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__126__tmp = 0U;
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__126__tmp_and 
                                    = (((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                                        & (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)) 
                                       << 1U);
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__126__tmp_xor 
                                    = (((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                                        ^ (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)) 
                                       << 1U);
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__126__tmp_and) 
                                              >> 1U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__126__tmp_xor) 
                                                 >> 1U) 
                                                & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__126__tmp))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__126__tmp 
                                    = ((0x1fdU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__126__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 1U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__126__tmp_and) 
                                              >> 2U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__126__tmp_xor) 
                                                 >> 2U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__126__tmp) 
                                                   >> 1U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__126__tmp 
                                    = ((0x1fbU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__126__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 2U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__126__tmp_and) 
                                              >> 3U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__126__tmp_xor) 
                                                 >> 3U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__126__tmp) 
                                                   >> 2U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__126__tmp 
                                    = ((0x1f7U & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__126__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 3U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__126__tmp_and) 
                                              >> 4U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__126__tmp_xor) 
                                                 >> 4U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__126__tmp) 
                                                   >> 3U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__126__tmp 
                                    = ((0x1efU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__126__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 4U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__126__tmp_and) 
                                              >> 5U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__126__tmp_xor) 
                                                 >> 5U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__126__tmp) 
                                                   >> 4U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__126__tmp 
                                    = ((0x1dfU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__126__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 5U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__126__tmp_and) 
                                              >> 6U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__126__tmp_xor) 
                                                 >> 6U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__126__tmp) 
                                                   >> 5U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__126__tmp 
                                    = ((0x1bfU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__126__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 6U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__126__tmp_and) 
                                              >> 7U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__126__tmp_xor) 
                                                 >> 7U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__126__tmp) 
                                                   >> 6U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__126__tmp 
                                    = ((0x17fU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__126__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 7U));
                                vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                    = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__126__tmp_and) 
                                              >> 8U) 
                                             | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__126__tmp_xor) 
                                                 >> 8U) 
                                                & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__126__tmp) 
                                                   >> 7U))));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__126__tmp 
                                    = ((0xffU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__126__tmp)) 
                                       | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                          << 8U));
                                __Vfunc_FBA_ALU_tb__DOT__compt_carries__126__Vfuncout 
                                    = (0xffU & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__126__tmp) 
                                                >> 1U));
                            }(), (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__126__Vfuncout)));
                VL_WRITEF_NX("[%0t] %%Error: FBA_ALU_tb.sv:226: Assertion failed in %NFBA_ALU_tb.check: Error, Carry failed A: %b, B: %b, Out: %b\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),8,
                             (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                             8,vlSelf->FBA_ALU_tb__DOT__reg_B,
                             8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out));
                VL_STOP_MT("FBA_ALU_tb.sv", 226, "");
            }
        } else if ((1U & (IData)(vlSelf->FBA_ALU_tb__DOT__func_sel))) {
            if (VL_UNLIKELY((((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                              | (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)) 
                             != (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out)))) {
                VL_WRITEF_NX("[%0t] %%Error: FBA_ALU_tb.sv:222: Assertion failed in %NFBA_ALU_tb.check: Error, Or failed A: %b, B: %b, Out: %b\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),8,
                             (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                             8,vlSelf->FBA_ALU_tb__DOT__reg_B,
                             8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out));
                VL_STOP_MT("FBA_ALU_tb.sv", 222, "");
            }
        } else if (VL_UNLIKELY((((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                                 & (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)) 
                                != (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out)))) {
            VL_WRITEF_NX("[%0t] %%Error: FBA_ALU_tb.sv:219: Assertion failed in %NFBA_ALU_tb.check: Error, And failed A: %b, B: %b, Out: %b\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                         8,vlSelf->FBA_ALU_tb__DOT__reg_B,
                         8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out));
            VL_STOP_MT("FBA_ALU_tb.sv", 219, "");
        }
    } else if ((2U & (IData)(vlSelf->FBA_ALU_tb__DOT__func_sel))) {
        if ((1U & (IData)(vlSelf->FBA_ALU_tb__DOT__func_sel))) {
            if (VL_UNLIKELY(((0xffU & (~ (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A))) 
                             != (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out)))) {
                VL_WRITEF_NX("[%0t] %%Error: FBA_ALU_tb.sv:216: Assertion failed in %NFBA_ALU_tb.check: Error, Not failed A: %b, Out: %b\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),8,
                             (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                             8,vlSelf->FBA_ALU_tb__DOT__reg_Out);
                VL_STOP_MT("FBA_ALU_tb.sv", 216, "");
            }
        } else if (VL_UNLIKELY(((0x1ffU & ((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                                           + (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B))) 
                                != (((IData)(vlSelf->FBA_ALU_tb__DOT__ALU__DOT__c_reg) 
                                     << 8U) | (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out))))) {
            VL_WRITEF_NX("[%0t] %%Error: FBA_ALU_tb.sv:213: Assertion failed in %NFBA_ALU_tb.check: Error, Addition failed A: %b, B: %b, Out: c%b %b\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                         8,vlSelf->FBA_ALU_tb__DOT__reg_B,
                         1,(IData)(vlSelf->FBA_ALU_tb__DOT__ALU__DOT__c_reg),
                         8,vlSelf->FBA_ALU_tb__DOT__reg_Out);
            VL_STOP_MT("FBA_ALU_tb.sv", 213, "");
        }
    } else if ((1U & (IData)(vlSelf->FBA_ALU_tb__DOT__func_sel))) {
        if (VL_UNLIKELY(((0xffU & (~ ((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                                      ^ (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)))) 
                         != (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out)))) {
            VL_WRITEF_NX("[%0t] %%Error: FBA_ALU_tb.sv:210: Assertion failed in %NFBA_ALU_tb.check: Error, Xnor failed A: %b, B: %b, Out: %b\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                         8,vlSelf->FBA_ALU_tb__DOT__reg_B,
                         8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out));
            VL_STOP_MT("FBA_ALU_tb.sv", 210, "");
        }
    } else if (VL_UNLIKELY((((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                             ^ (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)) 
                            != (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out)))) {
        VL_WRITEF_NX("[%0t] %%Error: FBA_ALU_tb.sv:207: Assertion failed in %NFBA_ALU_tb.check: Error, Xor failed A: %b, B: %b, Out: %b\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                     8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                     8,vlSelf->FBA_ALU_tb__DOT__reg_B,
                     8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out));
        VL_STOP_MT("FBA_ALU_tb.sv", 207, "");
    }
    VL_WRITEF_NX("Success: Carry test\n",0);
    vlSelf->FBA_ALU_tb__DOT__reg_A = 0U;
    vlSelf->FBA_ALU_tb__DOT__reg_B = 0U;
    vlSelf->FBA_ALU_tb__DOT__reg_Out = 0U;
    vlSelf->FBA_ALU_tb__DOT__rst = 0U;
    co_await vlSelf->__VdlySched.delay(2ULL, nullptr, 
                                       "FBA_ALU_tb.sv", 
                                       70);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->FBA_ALU_tb__DOT__rst = 1U;
    vlSelf->FBA_ALU_tb__DOT__func_sel = 7U;
    vlSelf->FBA_ALU_tb__DOT__n_shift = 0U;
    while (VL_GTS_III(32, 0x10U, vlSelf->FBA_ALU_tb__DOT__n_shift)) {
        vlSelf->FBA_ALU_tb__DOT__reg_A = 0U;
        vlSelf->FBA_ALU_tb__DOT__reg_B = 0U;
        vlSelf->FBA_ALU_tb__DOT__reg_Out = 0U;
        vlSelf->FBA_ALU_tb__DOT__rst = 0U;
        co_await vlSelf->__VdlySched.delay(2ULL, nullptr, 
                                           "FBA_ALU_tb.sv", 
                                           70);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->FBA_ALU_tb__DOT__rst = 1U;
        vlSelf->FBA_ALU_tb__DOT__load_shift = 0U;
        vlSelf->FBA_ALU_tb__DOT__reg_A = 0U;
        vlSelf->FBA_ALU_tb__DOT__reg_B = 0U;
        co_await vlSelf->__VdlySched.delay(2ULL, nullptr, 
                                           "FBA_ALU_tb.sv", 
                                           78);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_FBA_ALU_tb__DOT__check__131__n = vlSelf->FBA_ALU_tb__DOT__n_shift;
        __Vtask_FBA_ALU_tb__DOT__bit_shift__132__n 
            = __Vtask_FBA_ALU_tb__DOT__check__131__n;
        vlSelf->FBA_ALU_tb__DOT__load_shift = 1U;
        FBA_ALU_tb__DOT____Vrepeat0 = __Vtask_FBA_ALU_tb__DOT__bit_shift__132__n;
        while (VL_LTS_III(32, 0U, FBA_ALU_tb__DOT____Vrepeat0)) {
            co_await vlSelf->__VdlySched.delay(2ULL, 
                                               nullptr, 
                                               "FBA_ALU_tb.sv", 
                                               180);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            FBA_ALU_tb__DOT____Vrepeat0 = (FBA_ALU_tb__DOT____Vrepeat0 
                                           - (IData)(1U));
        }
        if ((4U & (IData)(vlSelf->FBA_ALU_tb__DOT__func_sel))) {
            if ((2U & (IData)(vlSelf->FBA_ALU_tb__DOT__func_sel))) {
                if ((1U & (IData)(vlSelf->FBA_ALU_tb__DOT__func_sel))) {
                    if (VL_UNLIKELY(((0xffU & (VL_LTS_III(32, 8U, __Vtask_FBA_ALU_tb__DOT__check__131__n)
                                                ? VL_SHIFTR_III(8,8,32, (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A), 
                                                                (__Vtask_FBA_ALU_tb__DOT__check__131__n 
                                                                 - (IData)(8U)))
                                                : VL_SHIFTL_III(8,8,32, (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A), 
                                                                ((IData)(8U) 
                                                                 - __Vtask_FBA_ALU_tb__DOT__check__131__n)))) 
                                     != (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out)))) {
                        VL_WRITEF_NX("A shifted %b\n[%0t] %%Error: FBA_ALU_tb.sv:231: Assertion failed in %NFBA_ALU_tb.check: Error, Buffer failed A: %b, Out: %b, N shift: %11d\n",0,
                                     8,(0xffU & (VL_LTS_III(32, 8U, __Vtask_FBA_ALU_tb__DOT__check__131__n)
                                                  ? 
                                                 VL_SHIFTR_III(8,8,32, (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A), 
                                                               (__Vtask_FBA_ALU_tb__DOT__check__131__n 
                                                                - (IData)(8U)))
                                                  : 
                                                 VL_SHIFTL_III(8,8,32, (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A), 
                                                               ((IData)(8U) 
                                                                - __Vtask_FBA_ALU_tb__DOT__check__131__n)))),
                                     64,VL_TIME_UNITED_Q(1),
                                     -12,vlSymsp->name(),
                                     8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                                     8,vlSelf->FBA_ALU_tb__DOT__reg_Out,
                                     32,__Vtask_FBA_ALU_tb__DOT__check__131__n);
                        VL_STOP_MT("FBA_ALU_tb.sv", 231, "");
                    }
                } else if (VL_UNLIKELY((([&]() {
                                    __Vfunc_FBA_ALU_tb__DOT__compt_carries__133__tmp = 0U;
                                    __Vfunc_FBA_ALU_tb__DOT__compt_carries__133__tmp_and 
                                        = (((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                                            & (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)) 
                                           << 1U);
                                    __Vfunc_FBA_ALU_tb__DOT__compt_carries__133__tmp_xor 
                                        = (((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                                            ^ (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)) 
                                           << 1U);
                                    vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                        = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__133__tmp_and) 
                                                  >> 1U) 
                                                 | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__133__tmp_xor) 
                                                     >> 1U) 
                                                    & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__133__tmp))));
                                    __Vfunc_FBA_ALU_tb__DOT__compt_carries__133__tmp 
                                        = ((0x1fdU 
                                            & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__133__tmp)) 
                                           | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                              << 1U));
                                    vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                        = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__133__tmp_and) 
                                                  >> 2U) 
                                                 | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__133__tmp_xor) 
                                                     >> 2U) 
                                                    & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__133__tmp) 
                                                       >> 1U))));
                                    __Vfunc_FBA_ALU_tb__DOT__compt_carries__133__tmp 
                                        = ((0x1fbU 
                                            & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__133__tmp)) 
                                           | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                              << 2U));
                                    vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                        = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__133__tmp_and) 
                                                  >> 3U) 
                                                 | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__133__tmp_xor) 
                                                     >> 3U) 
                                                    & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__133__tmp) 
                                                       >> 2U))));
                                    __Vfunc_FBA_ALU_tb__DOT__compt_carries__133__tmp 
                                        = ((0x1f7U 
                                            & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__133__tmp)) 
                                           | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                              << 3U));
                                    vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                        = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__133__tmp_and) 
                                                  >> 4U) 
                                                 | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__133__tmp_xor) 
                                                     >> 4U) 
                                                    & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__133__tmp) 
                                                       >> 3U))));
                                    __Vfunc_FBA_ALU_tb__DOT__compt_carries__133__tmp 
                                        = ((0x1efU 
                                            & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__133__tmp)) 
                                           | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                              << 4U));
                                    vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                        = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__133__tmp_and) 
                                                  >> 5U) 
                                                 | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__133__tmp_xor) 
                                                     >> 5U) 
                                                    & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__133__tmp) 
                                                       >> 4U))));
                                    __Vfunc_FBA_ALU_tb__DOT__compt_carries__133__tmp 
                                        = ((0x1dfU 
                                            & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__133__tmp)) 
                                           | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                              << 5U));
                                    vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                        = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__133__tmp_and) 
                                                  >> 6U) 
                                                 | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__133__tmp_xor) 
                                                     >> 6U) 
                                                    & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__133__tmp) 
                                                       >> 5U))));
                                    __Vfunc_FBA_ALU_tb__DOT__compt_carries__133__tmp 
                                        = ((0x1bfU 
                                            & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__133__tmp)) 
                                           | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                              << 6U));
                                    vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                        = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__133__tmp_and) 
                                                  >> 7U) 
                                                 | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__133__tmp_xor) 
                                                     >> 7U) 
                                                    & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__133__tmp) 
                                                       >> 6U))));
                                    __Vfunc_FBA_ALU_tb__DOT__compt_carries__133__tmp 
                                        = ((0x17fU 
                                            & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__133__tmp)) 
                                           | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                              << 7U));
                                    vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                        = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__133__tmp_and) 
                                                  >> 8U) 
                                                 | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__133__tmp_xor) 
                                                     >> 8U) 
                                                    & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__133__tmp) 
                                                       >> 7U))));
                                    __Vfunc_FBA_ALU_tb__DOT__compt_carries__133__tmp 
                                        = ((0xffU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__133__tmp)) 
                                           | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                              << 8U));
                                    __Vfunc_FBA_ALU_tb__DOT__compt_carries__133__Vfuncout 
                                        = (0xffU & 
                                           ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__133__tmp) 
                                            >> 1U));
                                }(), (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__133__Vfuncout)) 
                                        != (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out)))) {
                    VL_WRITEF_NX("Computed carries: %b\n",0,
                                 8,([&]() {
                                    __Vfunc_FBA_ALU_tb__DOT__compt_carries__134__tmp = 0U;
                                    __Vfunc_FBA_ALU_tb__DOT__compt_carries__134__tmp_and 
                                        = (((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                                            & (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)) 
                                           << 1U);
                                    __Vfunc_FBA_ALU_tb__DOT__compt_carries__134__tmp_xor 
                                        = (((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                                            ^ (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)) 
                                           << 1U);
                                    vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                        = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__134__tmp_and) 
                                                  >> 1U) 
                                                 | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__134__tmp_xor) 
                                                     >> 1U) 
                                                    & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__134__tmp))));
                                    __Vfunc_FBA_ALU_tb__DOT__compt_carries__134__tmp 
                                        = ((0x1fdU 
                                            & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__134__tmp)) 
                                           | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                              << 1U));
                                    vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                        = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__134__tmp_and) 
                                                  >> 2U) 
                                                 | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__134__tmp_xor) 
                                                     >> 2U) 
                                                    & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__134__tmp) 
                                                       >> 1U))));
                                    __Vfunc_FBA_ALU_tb__DOT__compt_carries__134__tmp 
                                        = ((0x1fbU 
                                            & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__134__tmp)) 
                                           | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                              << 2U));
                                    vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                        = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__134__tmp_and) 
                                                  >> 3U) 
                                                 | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__134__tmp_xor) 
                                                     >> 3U) 
                                                    & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__134__tmp) 
                                                       >> 2U))));
                                    __Vfunc_FBA_ALU_tb__DOT__compt_carries__134__tmp 
                                        = ((0x1f7U 
                                            & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__134__tmp)) 
                                           | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                              << 3U));
                                    vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                        = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__134__tmp_and) 
                                                  >> 4U) 
                                                 | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__134__tmp_xor) 
                                                     >> 4U) 
                                                    & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__134__tmp) 
                                                       >> 3U))));
                                    __Vfunc_FBA_ALU_tb__DOT__compt_carries__134__tmp 
                                        = ((0x1efU 
                                            & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__134__tmp)) 
                                           | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                              << 4U));
                                    vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                        = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__134__tmp_and) 
                                                  >> 5U) 
                                                 | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__134__tmp_xor) 
                                                     >> 5U) 
                                                    & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__134__tmp) 
                                                       >> 4U))));
                                    __Vfunc_FBA_ALU_tb__DOT__compt_carries__134__tmp 
                                        = ((0x1dfU 
                                            & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__134__tmp)) 
                                           | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                              << 5U));
                                    vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                        = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__134__tmp_and) 
                                                  >> 6U) 
                                                 | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__134__tmp_xor) 
                                                     >> 6U) 
                                                    & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__134__tmp) 
                                                       >> 5U))));
                                    __Vfunc_FBA_ALU_tb__DOT__compt_carries__134__tmp 
                                        = ((0x1bfU 
                                            & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__134__tmp)) 
                                           | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                              << 6U));
                                    vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                        = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__134__tmp_and) 
                                                  >> 7U) 
                                                 | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__134__tmp_xor) 
                                                     >> 7U) 
                                                    & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__134__tmp) 
                                                       >> 6U))));
                                    __Vfunc_FBA_ALU_tb__DOT__compt_carries__134__tmp 
                                        = ((0x17fU 
                                            & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__134__tmp)) 
                                           | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                              << 7U));
                                    vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                        = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__134__tmp_and) 
                                                  >> 8U) 
                                                 | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__134__tmp_xor) 
                                                     >> 8U) 
                                                    & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__134__tmp) 
                                                       >> 7U))));
                                    __Vfunc_FBA_ALU_tb__DOT__compt_carries__134__tmp 
                                        = ((0xffU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__134__tmp)) 
                                           | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                              << 8U));
                                    __Vfunc_FBA_ALU_tb__DOT__compt_carries__134__Vfuncout 
                                        = (0xffU & 
                                           ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__134__tmp) 
                                            >> 1U));
                                }(), (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__134__Vfuncout)));
                    VL_WRITEF_NX("[%0t] %%Error: FBA_ALU_tb.sv:226: Assertion failed in %NFBA_ALU_tb.check: Error, Carry failed A: %b, B: %b, Out: %b\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                                 8,vlSelf->FBA_ALU_tb__DOT__reg_B,
                                 8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out));
                    VL_STOP_MT("FBA_ALU_tb.sv", 226, "");
                }
            } else if ((1U & (IData)(vlSelf->FBA_ALU_tb__DOT__func_sel))) {
                if (VL_UNLIKELY((((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                                  | (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)) 
                                 != (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out)))) {
                    VL_WRITEF_NX("[%0t] %%Error: FBA_ALU_tb.sv:222: Assertion failed in %NFBA_ALU_tb.check: Error, Or failed A: %b, B: %b, Out: %b\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                                 8,vlSelf->FBA_ALU_tb__DOT__reg_B,
                                 8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out));
                    VL_STOP_MT("FBA_ALU_tb.sv", 222, "");
                }
            } else if (VL_UNLIKELY((((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                                     & (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)) 
                                    != (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out)))) {
                VL_WRITEF_NX("[%0t] %%Error: FBA_ALU_tb.sv:219: Assertion failed in %NFBA_ALU_tb.check: Error, And failed A: %b, B: %b, Out: %b\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),8,
                             (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                             8,vlSelf->FBA_ALU_tb__DOT__reg_B,
                             8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out));
                VL_STOP_MT("FBA_ALU_tb.sv", 219, "");
            }
        } else if ((2U & (IData)(vlSelf->FBA_ALU_tb__DOT__func_sel))) {
            if ((1U & (IData)(vlSelf->FBA_ALU_tb__DOT__func_sel))) {
                if (VL_UNLIKELY(((0xffU & (~ (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A))) 
                                 != (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out)))) {
                    VL_WRITEF_NX("[%0t] %%Error: FBA_ALU_tb.sv:216: Assertion failed in %NFBA_ALU_tb.check: Error, Not failed A: %b, Out: %b\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                                 8,vlSelf->FBA_ALU_tb__DOT__reg_Out);
                    VL_STOP_MT("FBA_ALU_tb.sv", 216, "");
                }
            } else if (VL_UNLIKELY(((0x1ffU & ((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                                               + (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B))) 
                                    != (((IData)(vlSelf->FBA_ALU_tb__DOT__ALU__DOT__c_reg) 
                                         << 8U) | (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out))))) {
                VL_WRITEF_NX("[%0t] %%Error: FBA_ALU_tb.sv:213: Assertion failed in %NFBA_ALU_tb.check: Error, Addition failed A: %b, B: %b, Out: c%b %b\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),8,
                             (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                             8,vlSelf->FBA_ALU_tb__DOT__reg_B,
                             1,(IData)(vlSelf->FBA_ALU_tb__DOT__ALU__DOT__c_reg),
                             8,vlSelf->FBA_ALU_tb__DOT__reg_Out);
                VL_STOP_MT("FBA_ALU_tb.sv", 213, "");
            }
        } else if ((1U & (IData)(vlSelf->FBA_ALU_tb__DOT__func_sel))) {
            if (VL_UNLIKELY(((0xffU & (~ ((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                                          ^ (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)))) 
                             != (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out)))) {
                VL_WRITEF_NX("[%0t] %%Error: FBA_ALU_tb.sv:210: Assertion failed in %NFBA_ALU_tb.check: Error, Xnor failed A: %b, B: %b, Out: %b\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),8,
                             (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                             8,vlSelf->FBA_ALU_tb__DOT__reg_B,
                             8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out));
                VL_STOP_MT("FBA_ALU_tb.sv", 210, "");
            }
        } else if (VL_UNLIKELY((((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                                 ^ (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)) 
                                != (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out)))) {
            VL_WRITEF_NX("[%0t] %%Error: FBA_ALU_tb.sv:207: Assertion failed in %NFBA_ALU_tb.check: Error, Xor failed A: %b, B: %b, Out: %b\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                         8,vlSelf->FBA_ALU_tb__DOT__reg_B,
                         8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out));
            VL_STOP_MT("FBA_ALU_tb.sv", 207, "");
        }
        vlSelf->FBA_ALU_tb__DOT__reg_A = 0U;
        vlSelf->FBA_ALU_tb__DOT__reg_B = 0U;
        vlSelf->FBA_ALU_tb__DOT__reg_Out = 0U;
        vlSelf->FBA_ALU_tb__DOT__rst = 0U;
        co_await vlSelf->__VdlySched.delay(2ULL, nullptr, 
                                           "FBA_ALU_tb.sv", 
                                           70);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->FBA_ALU_tb__DOT__rst = 1U;
        vlSelf->FBA_ALU_tb__DOT__load_shift = 0U;
        vlSelf->FBA_ALU_tb__DOT__reg_A = 0xffU;
        vlSelf->FBA_ALU_tb__DOT__reg_B = 0xffU;
        co_await vlSelf->__VdlySched.delay(2ULL, nullptr, 
                                           "FBA_ALU_tb.sv", 
                                           86);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_FBA_ALU_tb__DOT__check__137__n = vlSelf->FBA_ALU_tb__DOT__n_shift;
        __Vtask_FBA_ALU_tb__DOT__bit_shift__138__n 
            = __Vtask_FBA_ALU_tb__DOT__check__137__n;
        vlSelf->FBA_ALU_tb__DOT__load_shift = 1U;
        FBA_ALU_tb__DOT____Vrepeat0 = __Vtask_FBA_ALU_tb__DOT__bit_shift__138__n;
        while (VL_LTS_III(32, 0U, FBA_ALU_tb__DOT____Vrepeat0)) {
            co_await vlSelf->__VdlySched.delay(2ULL, 
                                               nullptr, 
                                               "FBA_ALU_tb.sv", 
                                               180);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            FBA_ALU_tb__DOT____Vrepeat0 = (FBA_ALU_tb__DOT____Vrepeat0 
                                           - (IData)(1U));
        }
        if ((4U & (IData)(vlSelf->FBA_ALU_tb__DOT__func_sel))) {
            if ((2U & (IData)(vlSelf->FBA_ALU_tb__DOT__func_sel))) {
                if ((1U & (IData)(vlSelf->FBA_ALU_tb__DOT__func_sel))) {
                    if (VL_UNLIKELY(((0xffU & (VL_LTS_III(32, 8U, __Vtask_FBA_ALU_tb__DOT__check__137__n)
                                                ? VL_SHIFTR_III(8,8,32, (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A), 
                                                                (__Vtask_FBA_ALU_tb__DOT__check__137__n 
                                                                 - (IData)(8U)))
                                                : VL_SHIFTL_III(8,8,32, (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A), 
                                                                ((IData)(8U) 
                                                                 - __Vtask_FBA_ALU_tb__DOT__check__137__n)))) 
                                     != (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out)))) {
                        VL_WRITEF_NX("A shifted %b\n[%0t] %%Error: FBA_ALU_tb.sv:231: Assertion failed in %NFBA_ALU_tb.check: Error, Buffer failed A: %b, Out: %b, N shift: %11d\n",0,
                                     8,(0xffU & (VL_LTS_III(32, 8U, __Vtask_FBA_ALU_tb__DOT__check__137__n)
                                                  ? 
                                                 VL_SHIFTR_III(8,8,32, (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A), 
                                                               (__Vtask_FBA_ALU_tb__DOT__check__137__n 
                                                                - (IData)(8U)))
                                                  : 
                                                 VL_SHIFTL_III(8,8,32, (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A), 
                                                               ((IData)(8U) 
                                                                - __Vtask_FBA_ALU_tb__DOT__check__137__n)))),
                                     64,VL_TIME_UNITED_Q(1),
                                     -12,vlSymsp->name(),
                                     8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                                     8,vlSelf->FBA_ALU_tb__DOT__reg_Out,
                                     32,__Vtask_FBA_ALU_tb__DOT__check__137__n);
                        VL_STOP_MT("FBA_ALU_tb.sv", 231, "");
                    }
                } else if (VL_UNLIKELY((([&]() {
                                    __Vfunc_FBA_ALU_tb__DOT__compt_carries__139__tmp = 0U;
                                    __Vfunc_FBA_ALU_tb__DOT__compt_carries__139__tmp_and 
                                        = (((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                                            & (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)) 
                                           << 1U);
                                    __Vfunc_FBA_ALU_tb__DOT__compt_carries__139__tmp_xor 
                                        = (((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                                            ^ (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)) 
                                           << 1U);
                                    vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                        = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__139__tmp_and) 
                                                  >> 1U) 
                                                 | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__139__tmp_xor) 
                                                     >> 1U) 
                                                    & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__139__tmp))));
                                    __Vfunc_FBA_ALU_tb__DOT__compt_carries__139__tmp 
                                        = ((0x1fdU 
                                            & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__139__tmp)) 
                                           | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                              << 1U));
                                    vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                        = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__139__tmp_and) 
                                                  >> 2U) 
                                                 | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__139__tmp_xor) 
                                                     >> 2U) 
                                                    & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__139__tmp) 
                                                       >> 1U))));
                                    __Vfunc_FBA_ALU_tb__DOT__compt_carries__139__tmp 
                                        = ((0x1fbU 
                                            & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__139__tmp)) 
                                           | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                              << 2U));
                                    vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                        = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__139__tmp_and) 
                                                  >> 3U) 
                                                 | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__139__tmp_xor) 
                                                     >> 3U) 
                                                    & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__139__tmp) 
                                                       >> 2U))));
                                    __Vfunc_FBA_ALU_tb__DOT__compt_carries__139__tmp 
                                        = ((0x1f7U 
                                            & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__139__tmp)) 
                                           | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                              << 3U));
                                    vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                        = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__139__tmp_and) 
                                                  >> 4U) 
                                                 | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__139__tmp_xor) 
                                                     >> 4U) 
                                                    & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__139__tmp) 
                                                       >> 3U))));
                                    __Vfunc_FBA_ALU_tb__DOT__compt_carries__139__tmp 
                                        = ((0x1efU 
                                            & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__139__tmp)) 
                                           | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                              << 4U));
                                    vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                        = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__139__tmp_and) 
                                                  >> 5U) 
                                                 | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__139__tmp_xor) 
                                                     >> 5U) 
                                                    & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__139__tmp) 
                                                       >> 4U))));
                                    __Vfunc_FBA_ALU_tb__DOT__compt_carries__139__tmp 
                                        = ((0x1dfU 
                                            & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__139__tmp)) 
                                           | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                              << 5U));
                                    vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                        = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__139__tmp_and) 
                                                  >> 6U) 
                                                 | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__139__tmp_xor) 
                                                     >> 6U) 
                                                    & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__139__tmp) 
                                                       >> 5U))));
                                    __Vfunc_FBA_ALU_tb__DOT__compt_carries__139__tmp 
                                        = ((0x1bfU 
                                            & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__139__tmp)) 
                                           | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                              << 6U));
                                    vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                        = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__139__tmp_and) 
                                                  >> 7U) 
                                                 | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__139__tmp_xor) 
                                                     >> 7U) 
                                                    & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__139__tmp) 
                                                       >> 6U))));
                                    __Vfunc_FBA_ALU_tb__DOT__compt_carries__139__tmp 
                                        = ((0x17fU 
                                            & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__139__tmp)) 
                                           | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                              << 7U));
                                    vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                        = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__139__tmp_and) 
                                                  >> 8U) 
                                                 | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__139__tmp_xor) 
                                                     >> 8U) 
                                                    & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__139__tmp) 
                                                       >> 7U))));
                                    __Vfunc_FBA_ALU_tb__DOT__compt_carries__139__tmp 
                                        = ((0xffU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__139__tmp)) 
                                           | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                              << 8U));
                                    __Vfunc_FBA_ALU_tb__DOT__compt_carries__139__Vfuncout 
                                        = (0xffU & 
                                           ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__139__tmp) 
                                            >> 1U));
                                }(), (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__139__Vfuncout)) 
                                        != (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out)))) {
                    VL_WRITEF_NX("Computed carries: %b\n",0,
                                 8,([&]() {
                                    __Vfunc_FBA_ALU_tb__DOT__compt_carries__140__tmp = 0U;
                                    __Vfunc_FBA_ALU_tb__DOT__compt_carries__140__tmp_and 
                                        = (((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                                            & (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)) 
                                           << 1U);
                                    __Vfunc_FBA_ALU_tb__DOT__compt_carries__140__tmp_xor 
                                        = (((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                                            ^ (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)) 
                                           << 1U);
                                    vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                        = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__140__tmp_and) 
                                                  >> 1U) 
                                                 | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__140__tmp_xor) 
                                                     >> 1U) 
                                                    & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__140__tmp))));
                                    __Vfunc_FBA_ALU_tb__DOT__compt_carries__140__tmp 
                                        = ((0x1fdU 
                                            & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__140__tmp)) 
                                           | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                              << 1U));
                                    vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                        = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__140__tmp_and) 
                                                  >> 2U) 
                                                 | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__140__tmp_xor) 
                                                     >> 2U) 
                                                    & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__140__tmp) 
                                                       >> 1U))));
                                    __Vfunc_FBA_ALU_tb__DOT__compt_carries__140__tmp 
                                        = ((0x1fbU 
                                            & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__140__tmp)) 
                                           | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                              << 2U));
                                    vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                        = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__140__tmp_and) 
                                                  >> 3U) 
                                                 | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__140__tmp_xor) 
                                                     >> 3U) 
                                                    & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__140__tmp) 
                                                       >> 2U))));
                                    __Vfunc_FBA_ALU_tb__DOT__compt_carries__140__tmp 
                                        = ((0x1f7U 
                                            & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__140__tmp)) 
                                           | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                              << 3U));
                                    vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                        = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__140__tmp_and) 
                                                  >> 4U) 
                                                 | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__140__tmp_xor) 
                                                     >> 4U) 
                                                    & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__140__tmp) 
                                                       >> 3U))));
                                    __Vfunc_FBA_ALU_tb__DOT__compt_carries__140__tmp 
                                        = ((0x1efU 
                                            & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__140__tmp)) 
                                           | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                              << 4U));
                                    vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                        = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__140__tmp_and) 
                                                  >> 5U) 
                                                 | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__140__tmp_xor) 
                                                     >> 5U) 
                                                    & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__140__tmp) 
                                                       >> 4U))));
                                    __Vfunc_FBA_ALU_tb__DOT__compt_carries__140__tmp 
                                        = ((0x1dfU 
                                            & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__140__tmp)) 
                                           | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                              << 5U));
                                    vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                        = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__140__tmp_and) 
                                                  >> 6U) 
                                                 | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__140__tmp_xor) 
                                                     >> 6U) 
                                                    & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__140__tmp) 
                                                       >> 5U))));
                                    __Vfunc_FBA_ALU_tb__DOT__compt_carries__140__tmp 
                                        = ((0x1bfU 
                                            & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__140__tmp)) 
                                           | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                              << 6U));
                                    vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                        = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__140__tmp_and) 
                                                  >> 7U) 
                                                 | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__140__tmp_xor) 
                                                     >> 7U) 
                                                    & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__140__tmp) 
                                                       >> 6U))));
                                    __Vfunc_FBA_ALU_tb__DOT__compt_carries__140__tmp 
                                        = ((0x17fU 
                                            & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__140__tmp)) 
                                           | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                              << 7U));
                                    vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                        = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__140__tmp_and) 
                                                  >> 8U) 
                                                 | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__140__tmp_xor) 
                                                     >> 8U) 
                                                    & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__140__tmp) 
                                                       >> 7U))));
                                    __Vfunc_FBA_ALU_tb__DOT__compt_carries__140__tmp 
                                        = ((0xffU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__140__tmp)) 
                                           | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                              << 8U));
                                    __Vfunc_FBA_ALU_tb__DOT__compt_carries__140__Vfuncout 
                                        = (0xffU & 
                                           ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__140__tmp) 
                                            >> 1U));
                                }(), (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__140__Vfuncout)));
                    VL_WRITEF_NX("[%0t] %%Error: FBA_ALU_tb.sv:226: Assertion failed in %NFBA_ALU_tb.check: Error, Carry failed A: %b, B: %b, Out: %b\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                                 8,vlSelf->FBA_ALU_tb__DOT__reg_B,
                                 8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out));
                    VL_STOP_MT("FBA_ALU_tb.sv", 226, "");
                }
            } else if ((1U & (IData)(vlSelf->FBA_ALU_tb__DOT__func_sel))) {
                if (VL_UNLIKELY((((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                                  | (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)) 
                                 != (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out)))) {
                    VL_WRITEF_NX("[%0t] %%Error: FBA_ALU_tb.sv:222: Assertion failed in %NFBA_ALU_tb.check: Error, Or failed A: %b, B: %b, Out: %b\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                                 8,vlSelf->FBA_ALU_tb__DOT__reg_B,
                                 8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out));
                    VL_STOP_MT("FBA_ALU_tb.sv", 222, "");
                }
            } else if (VL_UNLIKELY((((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                                     & (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)) 
                                    != (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out)))) {
                VL_WRITEF_NX("[%0t] %%Error: FBA_ALU_tb.sv:219: Assertion failed in %NFBA_ALU_tb.check: Error, And failed A: %b, B: %b, Out: %b\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),8,
                             (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                             8,vlSelf->FBA_ALU_tb__DOT__reg_B,
                             8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out));
                VL_STOP_MT("FBA_ALU_tb.sv", 219, "");
            }
        } else if ((2U & (IData)(vlSelf->FBA_ALU_tb__DOT__func_sel))) {
            if ((1U & (IData)(vlSelf->FBA_ALU_tb__DOT__func_sel))) {
                if (VL_UNLIKELY(((0xffU & (~ (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A))) 
                                 != (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out)))) {
                    VL_WRITEF_NX("[%0t] %%Error: FBA_ALU_tb.sv:216: Assertion failed in %NFBA_ALU_tb.check: Error, Not failed A: %b, Out: %b\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                                 8,vlSelf->FBA_ALU_tb__DOT__reg_Out);
                    VL_STOP_MT("FBA_ALU_tb.sv", 216, "");
                }
            } else if (VL_UNLIKELY(((0x1ffU & ((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                                               + (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B))) 
                                    != (((IData)(vlSelf->FBA_ALU_tb__DOT__ALU__DOT__c_reg) 
                                         << 8U) | (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out))))) {
                VL_WRITEF_NX("[%0t] %%Error: FBA_ALU_tb.sv:213: Assertion failed in %NFBA_ALU_tb.check: Error, Addition failed A: %b, B: %b, Out: c%b %b\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),8,
                             (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                             8,vlSelf->FBA_ALU_tb__DOT__reg_B,
                             1,(IData)(vlSelf->FBA_ALU_tb__DOT__ALU__DOT__c_reg),
                             8,vlSelf->FBA_ALU_tb__DOT__reg_Out);
                VL_STOP_MT("FBA_ALU_tb.sv", 213, "");
            }
        } else if ((1U & (IData)(vlSelf->FBA_ALU_tb__DOT__func_sel))) {
            if (VL_UNLIKELY(((0xffU & (~ ((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                                          ^ (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)))) 
                             != (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out)))) {
                VL_WRITEF_NX("[%0t] %%Error: FBA_ALU_tb.sv:210: Assertion failed in %NFBA_ALU_tb.check: Error, Xnor failed A: %b, B: %b, Out: %b\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),8,
                             (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                             8,vlSelf->FBA_ALU_tb__DOT__reg_B,
                             8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out));
                VL_STOP_MT("FBA_ALU_tb.sv", 210, "");
            }
        } else if (VL_UNLIKELY((((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                                 ^ (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)) 
                                != (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out)))) {
            VL_WRITEF_NX("[%0t] %%Error: FBA_ALU_tb.sv:207: Assertion failed in %NFBA_ALU_tb.check: Error, Xor failed A: %b, B: %b, Out: %b\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                         8,vlSelf->FBA_ALU_tb__DOT__reg_B,
                         8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out));
            VL_STOP_MT("FBA_ALU_tb.sv", 207, "");
        }
        vlSelf->FBA_ALU_tb__DOT__reg_A = 0U;
        vlSelf->FBA_ALU_tb__DOT__reg_B = 0U;
        vlSelf->FBA_ALU_tb__DOT__reg_Out = 0U;
        vlSelf->FBA_ALU_tb__DOT__rst = 0U;
        co_await vlSelf->__VdlySched.delay(2ULL, nullptr, 
                                           "FBA_ALU_tb.sv", 
                                           70);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->FBA_ALU_tb__DOT__rst = 1U;
        vlSelf->FBA_ALU_tb__DOT__load_shift = 0U;
        vlSelf->FBA_ALU_tb__DOT__reg_A = (0xffU & VL_RANDOM_I());
        vlSelf->FBA_ALU_tb__DOT__reg_B = (0xffU & VL_RANDOM_I());
        co_await vlSelf->__VdlySched.delay(2ULL, nullptr, 
                                           "FBA_ALU_tb.sv", 
                                           94);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_FBA_ALU_tb__DOT__check__143__n = vlSelf->FBA_ALU_tb__DOT__n_shift;
        __Vtask_FBA_ALU_tb__DOT__bit_shift__144__n 
            = __Vtask_FBA_ALU_tb__DOT__check__143__n;
        vlSelf->FBA_ALU_tb__DOT__load_shift = 1U;
        FBA_ALU_tb__DOT____Vrepeat0 = __Vtask_FBA_ALU_tb__DOT__bit_shift__144__n;
        while (VL_LTS_III(32, 0U, FBA_ALU_tb__DOT____Vrepeat0)) {
            co_await vlSelf->__VdlySched.delay(2ULL, 
                                               nullptr, 
                                               "FBA_ALU_tb.sv", 
                                               180);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            FBA_ALU_tb__DOT____Vrepeat0 = (FBA_ALU_tb__DOT____Vrepeat0 
                                           - (IData)(1U));
        }
        if ((4U & (IData)(vlSelf->FBA_ALU_tb__DOT__func_sel))) {
            if ((2U & (IData)(vlSelf->FBA_ALU_tb__DOT__func_sel))) {
                if ((1U & (IData)(vlSelf->FBA_ALU_tb__DOT__func_sel))) {
                    if (VL_UNLIKELY(((0xffU & (VL_LTS_III(32, 8U, __Vtask_FBA_ALU_tb__DOT__check__143__n)
                                                ? VL_SHIFTR_III(8,8,32, (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A), 
                                                                (__Vtask_FBA_ALU_tb__DOT__check__143__n 
                                                                 - (IData)(8U)))
                                                : VL_SHIFTL_III(8,8,32, (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A), 
                                                                ((IData)(8U) 
                                                                 - __Vtask_FBA_ALU_tb__DOT__check__143__n)))) 
                                     != (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out)))) {
                        VL_WRITEF_NX("A shifted %b\n[%0t] %%Error: FBA_ALU_tb.sv:231: Assertion failed in %NFBA_ALU_tb.check: Error, Buffer failed A: %b, Out: %b, N shift: %11d\n",0,
                                     8,(0xffU & (VL_LTS_III(32, 8U, __Vtask_FBA_ALU_tb__DOT__check__143__n)
                                                  ? 
                                                 VL_SHIFTR_III(8,8,32, (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A), 
                                                               (__Vtask_FBA_ALU_tb__DOT__check__143__n 
                                                                - (IData)(8U)))
                                                  : 
                                                 VL_SHIFTL_III(8,8,32, (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A), 
                                                               ((IData)(8U) 
                                                                - __Vtask_FBA_ALU_tb__DOT__check__143__n)))),
                                     64,VL_TIME_UNITED_Q(1),
                                     -12,vlSymsp->name(),
                                     8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                                     8,vlSelf->FBA_ALU_tb__DOT__reg_Out,
                                     32,__Vtask_FBA_ALU_tb__DOT__check__143__n);
                        VL_STOP_MT("FBA_ALU_tb.sv", 231, "");
                    }
                } else if (VL_UNLIKELY((([&]() {
                                    __Vfunc_FBA_ALU_tb__DOT__compt_carries__145__tmp = 0U;
                                    __Vfunc_FBA_ALU_tb__DOT__compt_carries__145__tmp_and 
                                        = (((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                                            & (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)) 
                                           << 1U);
                                    __Vfunc_FBA_ALU_tb__DOT__compt_carries__145__tmp_xor 
                                        = (((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                                            ^ (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)) 
                                           << 1U);
                                    vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                        = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__145__tmp_and) 
                                                  >> 1U) 
                                                 | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__145__tmp_xor) 
                                                     >> 1U) 
                                                    & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__145__tmp))));
                                    __Vfunc_FBA_ALU_tb__DOT__compt_carries__145__tmp 
                                        = ((0x1fdU 
                                            & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__145__tmp)) 
                                           | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                              << 1U));
                                    vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                        = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__145__tmp_and) 
                                                  >> 2U) 
                                                 | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__145__tmp_xor) 
                                                     >> 2U) 
                                                    & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__145__tmp) 
                                                       >> 1U))));
                                    __Vfunc_FBA_ALU_tb__DOT__compt_carries__145__tmp 
                                        = ((0x1fbU 
                                            & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__145__tmp)) 
                                           | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                              << 2U));
                                    vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                        = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__145__tmp_and) 
                                                  >> 3U) 
                                                 | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__145__tmp_xor) 
                                                     >> 3U) 
                                                    & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__145__tmp) 
                                                       >> 2U))));
                                    __Vfunc_FBA_ALU_tb__DOT__compt_carries__145__tmp 
                                        = ((0x1f7U 
                                            & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__145__tmp)) 
                                           | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                              << 3U));
                                    vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                        = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__145__tmp_and) 
                                                  >> 4U) 
                                                 | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__145__tmp_xor) 
                                                     >> 4U) 
                                                    & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__145__tmp) 
                                                       >> 3U))));
                                    __Vfunc_FBA_ALU_tb__DOT__compt_carries__145__tmp 
                                        = ((0x1efU 
                                            & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__145__tmp)) 
                                           | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                              << 4U));
                                    vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                        = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__145__tmp_and) 
                                                  >> 5U) 
                                                 | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__145__tmp_xor) 
                                                     >> 5U) 
                                                    & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__145__tmp) 
                                                       >> 4U))));
                                    __Vfunc_FBA_ALU_tb__DOT__compt_carries__145__tmp 
                                        = ((0x1dfU 
                                            & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__145__tmp)) 
                                           | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                              << 5U));
                                    vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                        = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__145__tmp_and) 
                                                  >> 6U) 
                                                 | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__145__tmp_xor) 
                                                     >> 6U) 
                                                    & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__145__tmp) 
                                                       >> 5U))));
                                    __Vfunc_FBA_ALU_tb__DOT__compt_carries__145__tmp 
                                        = ((0x1bfU 
                                            & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__145__tmp)) 
                                           | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                              << 6U));
                                    vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                        = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__145__tmp_and) 
                                                  >> 7U) 
                                                 | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__145__tmp_xor) 
                                                     >> 7U) 
                                                    & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__145__tmp) 
                                                       >> 6U))));
                                    __Vfunc_FBA_ALU_tb__DOT__compt_carries__145__tmp 
                                        = ((0x17fU 
                                            & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__145__tmp)) 
                                           | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                              << 7U));
                                    vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                        = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__145__tmp_and) 
                                                  >> 8U) 
                                                 | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__145__tmp_xor) 
                                                     >> 8U) 
                                                    & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__145__tmp) 
                                                       >> 7U))));
                                    __Vfunc_FBA_ALU_tb__DOT__compt_carries__145__tmp 
                                        = ((0xffU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__145__tmp)) 
                                           | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                              << 8U));
                                    __Vfunc_FBA_ALU_tb__DOT__compt_carries__145__Vfuncout 
                                        = (0xffU & 
                                           ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__145__tmp) 
                                            >> 1U));
                                }(), (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__145__Vfuncout)) 
                                        != (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out)))) {
                    VL_WRITEF_NX("Computed carries: %b\n",0,
                                 8,([&]() {
                                    __Vfunc_FBA_ALU_tb__DOT__compt_carries__146__tmp = 0U;
                                    __Vfunc_FBA_ALU_tb__DOT__compt_carries__146__tmp_and 
                                        = (((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                                            & (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)) 
                                           << 1U);
                                    __Vfunc_FBA_ALU_tb__DOT__compt_carries__146__tmp_xor 
                                        = (((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                                            ^ (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)) 
                                           << 1U);
                                    vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                        = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__146__tmp_and) 
                                                  >> 1U) 
                                                 | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__146__tmp_xor) 
                                                     >> 1U) 
                                                    & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__146__tmp))));
                                    __Vfunc_FBA_ALU_tb__DOT__compt_carries__146__tmp 
                                        = ((0x1fdU 
                                            & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__146__tmp)) 
                                           | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                              << 1U));
                                    vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                        = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__146__tmp_and) 
                                                  >> 2U) 
                                                 | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__146__tmp_xor) 
                                                     >> 2U) 
                                                    & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__146__tmp) 
                                                       >> 1U))));
                                    __Vfunc_FBA_ALU_tb__DOT__compt_carries__146__tmp 
                                        = ((0x1fbU 
                                            & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__146__tmp)) 
                                           | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                              << 2U));
                                    vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                        = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__146__tmp_and) 
                                                  >> 3U) 
                                                 | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__146__tmp_xor) 
                                                     >> 3U) 
                                                    & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__146__tmp) 
                                                       >> 2U))));
                                    __Vfunc_FBA_ALU_tb__DOT__compt_carries__146__tmp 
                                        = ((0x1f7U 
                                            & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__146__tmp)) 
                                           | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                              << 3U));
                                    vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                        = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__146__tmp_and) 
                                                  >> 4U) 
                                                 | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__146__tmp_xor) 
                                                     >> 4U) 
                                                    & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__146__tmp) 
                                                       >> 3U))));
                                    __Vfunc_FBA_ALU_tb__DOT__compt_carries__146__tmp 
                                        = ((0x1efU 
                                            & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__146__tmp)) 
                                           | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                              << 4U));
                                    vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                        = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__146__tmp_and) 
                                                  >> 5U) 
                                                 | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__146__tmp_xor) 
                                                     >> 5U) 
                                                    & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__146__tmp) 
                                                       >> 4U))));
                                    __Vfunc_FBA_ALU_tb__DOT__compt_carries__146__tmp 
                                        = ((0x1dfU 
                                            & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__146__tmp)) 
                                           | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                              << 5U));
                                    vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                        = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__146__tmp_and) 
                                                  >> 6U) 
                                                 | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__146__tmp_xor) 
                                                     >> 6U) 
                                                    & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__146__tmp) 
                                                       >> 5U))));
                                    __Vfunc_FBA_ALU_tb__DOT__compt_carries__146__tmp 
                                        = ((0x1bfU 
                                            & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__146__tmp)) 
                                           | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                              << 6U));
                                    vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                        = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__146__tmp_and) 
                                                  >> 7U) 
                                                 | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__146__tmp_xor) 
                                                     >> 7U) 
                                                    & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__146__tmp) 
                                                       >> 6U))));
                                    __Vfunc_FBA_ALU_tb__DOT__compt_carries__146__tmp 
                                        = ((0x17fU 
                                            & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__146__tmp)) 
                                           | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                              << 7U));
                                    vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0 
                                        = (1U & (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__146__tmp_and) 
                                                  >> 8U) 
                                                 | (((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__146__tmp_xor) 
                                                     >> 8U) 
                                                    & ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__146__tmp) 
                                                       >> 7U))));
                                    __Vfunc_FBA_ALU_tb__DOT__compt_carries__146__tmp 
                                        = ((0xffU & (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__146__tmp)) 
                                           | ((IData)(vlSelf->FBA_ALU_tb__DOT____Vlvbound_h9f8a8b08__0) 
                                              << 8U));
                                    __Vfunc_FBA_ALU_tb__DOT__compt_carries__146__Vfuncout 
                                        = (0xffU & 
                                           ((IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__146__tmp) 
                                            >> 1U));
                                }(), (IData)(__Vfunc_FBA_ALU_tb__DOT__compt_carries__146__Vfuncout)));
                    VL_WRITEF_NX("[%0t] %%Error: FBA_ALU_tb.sv:226: Assertion failed in %NFBA_ALU_tb.check: Error, Carry failed A: %b, B: %b, Out: %b\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                                 8,vlSelf->FBA_ALU_tb__DOT__reg_B,
                                 8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out));
                    VL_STOP_MT("FBA_ALU_tb.sv", 226, "");
                }
            } else if ((1U & (IData)(vlSelf->FBA_ALU_tb__DOT__func_sel))) {
                if (VL_UNLIKELY((((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                                  | (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)) 
                                 != (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out)))) {
                    VL_WRITEF_NX("[%0t] %%Error: FBA_ALU_tb.sv:222: Assertion failed in %NFBA_ALU_tb.check: Error, Or failed A: %b, B: %b, Out: %b\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                                 8,vlSelf->FBA_ALU_tb__DOT__reg_B,
                                 8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out));
                    VL_STOP_MT("FBA_ALU_tb.sv", 222, "");
                }
            } else if (VL_UNLIKELY((((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                                     & (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)) 
                                    != (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out)))) {
                VL_WRITEF_NX("[%0t] %%Error: FBA_ALU_tb.sv:219: Assertion failed in %NFBA_ALU_tb.check: Error, And failed A: %b, B: %b, Out: %b\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),8,
                             (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                             8,vlSelf->FBA_ALU_tb__DOT__reg_B,
                             8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out));
                VL_STOP_MT("FBA_ALU_tb.sv", 219, "");
            }
        } else if ((2U & (IData)(vlSelf->FBA_ALU_tb__DOT__func_sel))) {
            if ((1U & (IData)(vlSelf->FBA_ALU_tb__DOT__func_sel))) {
                if (VL_UNLIKELY(((0xffU & (~ (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A))) 
                                 != (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out)))) {
                    VL_WRITEF_NX("[%0t] %%Error: FBA_ALU_tb.sv:216: Assertion failed in %NFBA_ALU_tb.check: Error, Not failed A: %b, Out: %b\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                                 8,vlSelf->FBA_ALU_tb__DOT__reg_Out);
                    VL_STOP_MT("FBA_ALU_tb.sv", 216, "");
                }
            } else if (VL_UNLIKELY(((0x1ffU & ((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                                               + (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B))) 
                                    != (((IData)(vlSelf->FBA_ALU_tb__DOT__ALU__DOT__c_reg) 
                                         << 8U) | (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out))))) {
                VL_WRITEF_NX("[%0t] %%Error: FBA_ALU_tb.sv:213: Assertion failed in %NFBA_ALU_tb.check: Error, Addition failed A: %b, B: %b, Out: c%b %b\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),8,
                             (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                             8,vlSelf->FBA_ALU_tb__DOT__reg_B,
                             1,(IData)(vlSelf->FBA_ALU_tb__DOT__ALU__DOT__c_reg),
                             8,vlSelf->FBA_ALU_tb__DOT__reg_Out);
                VL_STOP_MT("FBA_ALU_tb.sv", 213, "");
            }
        } else if ((1U & (IData)(vlSelf->FBA_ALU_tb__DOT__func_sel))) {
            if (VL_UNLIKELY(((0xffU & (~ ((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                                          ^ (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)))) 
                             != (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out)))) {
                VL_WRITEF_NX("[%0t] %%Error: FBA_ALU_tb.sv:210: Assertion failed in %NFBA_ALU_tb.check: Error, Xnor failed A: %b, B: %b, Out: %b\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),8,
                             (IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                             8,vlSelf->FBA_ALU_tb__DOT__reg_B,
                             8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out));
                VL_STOP_MT("FBA_ALU_tb.sv", 210, "");
            }
        } else if (VL_UNLIKELY((((IData)(vlSelf->FBA_ALU_tb__DOT__reg_A) 
                                 ^ (IData)(vlSelf->FBA_ALU_tb__DOT__reg_B)) 
                                != (IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out)))) {
            VL_WRITEF_NX("[%0t] %%Error: FBA_ALU_tb.sv:207: Assertion failed in %NFBA_ALU_tb.check: Error, Xor failed A: %b, B: %b, Out: %b\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_A),
                         8,vlSelf->FBA_ALU_tb__DOT__reg_B,
                         8,(IData)(vlSelf->FBA_ALU_tb__DOT__reg_Out));
            VL_STOP_MT("FBA_ALU_tb.sv", 207, "");
        }
        vlSelf->FBA_ALU_tb__DOT__n_shift = ((IData)(1U) 
                                            + vlSelf->FBA_ALU_tb__DOT__n_shift);
    }
    VL_WRITEF_NX("Success: Buffer test\n\n~~ SUCCESS ~~\n====================\n",0);
    VL_FINISH_MT("FBA_ALU_tb.sv", 279, "");
    vlSelf->__Vm_traceActivity[2U] = 1U;
}
