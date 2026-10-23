// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSA_tb.h for the primary calling header

#include "VSA_tb__pch.h"

VlCoroutine VSA_tb___024root___eval_initial__TOP__Vtiming__0(VSA_tb___024root* vlSelf);
VlCoroutine VSA_tb___024root___eval_initial__TOP__Vtiming__1(VSA_tb___024root* vlSelf);

void VSA_tb___024root___eval_initial(VSA_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSA_tb___024root___eval_initial\n"); );
    VSA_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_initial__TOP
        vlSymsp->_vm_contextp__->dumpfile("dump.vcd"s);
        vlSymsp->_traceDumpOpen();
    }
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VSA_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    VSA_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

void VSA_tb___024root___eval_sample(VSA_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSA_tb___024root___eval_sample\n"); );
    VSA_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VSA_tb___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool VSA_tb___024root___eval_ico(VSA_tb___024root* vlSelf, CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSA_tb___024root___eval_ico\n"); );
    VSA_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | (IData)((IData)(firstIteration)));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VSA_tb___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    return (0U);
}

void VSA_tb___024root___timing_ready(VSA_tb___024root* vlSelf);
void VSA_tb___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in);
#ifdef VL_DEBUG
VL_ATTR_COLD void VSA_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
bool VSA_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);
void VSA_tb___024root___timing_resume(VSA_tb___024root* vlSelf);
void VSA_tb___024root___act_comb__TOP__0(VSA_tb___024root* vlSelf);

bool VSA_tb___024root___eval_act(VSA_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSA_tb___024root___eval_act\n"); );
    VSA_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__act
        vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                        ((((~ (IData)(vlSelfRef.SA_tb__DOT__clk)) 
                                                           & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__SA_tb__DOT__clk__0)) 
                                                          << 2U) 
                                                         | ((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                             << 1U) 
                                                            | ((IData)(vlSelfRef.SA_tb__DOT__clk) 
                                                               & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__SA_tb__DOT__clk__0)))))));
        vlSelfRef.__Vtrigprevexpr___TOP__SA_tb__DOT__clk__0 
            = vlSelfRef.SA_tb__DOT__clk;
    }
    VSA_tb___024root___timing_ready(vlSelf);
    VSA_tb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VSA_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    VSA_tb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = VSA_tb___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        VSA_tb___024root___timing_resume(vlSelf);
        {
            // Inlined CFunc: _eval_body__act
            if ((7ULL & vlSelfRef.__VactTriggered[0U])) {
                VSA_tb___024root___act_comb__TOP__0(vlSelf);
                vlSelfRef.__Vm_traceActivity[3U] = 1U;
            }
        }
    }
    return (__VactExecute);
}

bool VSA_tb___024root___eval_inact(VSA_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSA_tb___024root___eval_inact\n"); );
    VSA_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("SA_tb.sv", 3, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void VSA_tb___024root___nba_sequent__TOP__0(VSA_tb___024root* vlSelf);
void VSA_tb___024root___nba_comb__TOP__0(VSA_tb___024root* vlSelf);
void VSA_tb___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out);

bool VSA_tb___024root___eval_nba(VSA_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSA_tb___024root___eval_nba\n"); );
    VSA_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = VSA_tb___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        {
            // Inlined CFunc: _eval_body__nba
            if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
                VSA_tb___024root___nba_sequent__TOP__0(vlSelf);
                vlSelfRef.__Vm_traceActivity[4U] = 1U;
            }
            if ((7ULL & vlSelfRef.__VnbaTriggered[0U])) {
                VSA_tb___024root___nba_comb__TOP__0(vlSelf);
                vlSelfRef.__Vm_traceActivity[5U] = 1U;
            }
        }
        VSA_tb___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

bool VSA_tb___024root___eval_obs(VSA_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSA_tb___024root___eval_obs\n"); );
    VSA_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

bool VSA_tb___024root___eval_react(VSA_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSA_tb___024root___eval_react\n"); );
    VSA_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

void VSA_tb___024root___eval_postponed(VSA_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSA_tb___024root___eval_postponed\n"); );
    VSA_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VlCoroutine VSA_tb___024root___eval_initial__TOP__Vtiming__0(VSA_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSA_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    VSA_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.SA_tb__DOT__clk = 0U;
    while (true) {
        co_await vlSelfRef.__VdlySched.delay(0x0000000000001388ULL, 
                                             nullptr, 
                                             "SA_tb.sv", 
                                             13);
        vlSelfRef.SA_tb__DOT__clk = (1U & (~ (IData)(vlSelfRef.SA_tb__DOT__clk)));
    }
    co_return;
}

void VSA_tb___024root____VbeforeTrig_h81bc4b78__0(VSA_tb___024root* vlSelf, const char* __VeventDescription);
void VSA_tb___024root____VbeforeTrig_h81bc4bb7__0(VSA_tb___024root* vlSelf, const char* __VeventDescription);

VlCoroutine VSA_tb___024root___eval_initial__TOP__Vtiming__1(VSA_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSA_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    VSA_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ SA_tb__DOT__unnamedblk1_1__DOT____Vrepeat0;
    SA_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ SA_tb__DOT__unnamedblk3__DOT__t;
    SA_tb__DOT__unnamedblk3__DOT__t = 0;
    IData/*31:0*/ SA_tb__DOT__unnamedblk1_2__DOT____Vrepeat1;
    SA_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    IData/*31:0*/ SA_tb__DOT__unnamedblk1_3__DOT____Vrepeat2;
    SA_tb__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0;
    IData/*31:0*/ SA_tb__DOT__unnamedblk1_4__DOT____Vrepeat3;
    SA_tb__DOT__unnamedblk1_4__DOT____Vrepeat3 = 0;
    IData/*31:0*/ SA_tb__DOT__unnamedblk20__DOT__k;
    SA_tb__DOT__unnamedblk20__DOT__k = 0;
    IData/*31:0*/ SA_tb__DOT__unnamedblk1_5__DOT____Vrepeat4;
    SA_tb__DOT__unnamedblk1_5__DOT____Vrepeat4 = 0;
    IData/*31:0*/ SA_tb__DOT__unnamedblk1_6__DOT____Vrepeat5;
    SA_tb__DOT__unnamedblk1_6__DOT____Vrepeat5 = 0;
    IData/*31:0*/ SA_tb__DOT__unnamedblk1_7__DOT____Vrepeat6;
    SA_tb__DOT__unnamedblk1_7__DOT____Vrepeat6 = 0;
    IData/*31:0*/ SA_tb__DOT__unnamedblk32__DOT__k;
    SA_tb__DOT__unnamedblk32__DOT__k = 0;
    IData/*31:0*/ SA_tb__DOT__unnamedblk1_8__DOT____Vrepeat7;
    SA_tb__DOT__unnamedblk1_8__DOT____Vrepeat7 = 0;
    IData/*31:0*/ SA_tb__DOT__unnamedblk1_9__DOT____Vrepeat8;
    SA_tb__DOT__unnamedblk1_9__DOT____Vrepeat8 = 0;
    IData/*31:0*/ SA_tb__DOT__unnamedblk40__DOT__k;
    SA_tb__DOT__unnamedblk40__DOT__k = 0;
    IData/*31:0*/ SA_tb__DOT__unnamedblk1_10__DOT____Vrepeat9;
    SA_tb__DOT__unnamedblk1_10__DOT____Vrepeat9 = 0;
    IData/*31:0*/ SA_tb__DOT__unnamedblk47__DOT__k;
    SA_tb__DOT__unnamedblk47__DOT__k = 0;
    IData/*31:0*/ SA_tb__DOT__unnamedblk1_11__DOT____Vrepeat10;
    SA_tb__DOT__unnamedblk1_11__DOT____Vrepeat10 = 0;
    IData/*31:0*/ SA_tb__DOT__unnamedblk55__DOT__k;
    SA_tb__DOT__unnamedblk55__DOT__k = 0;
    // Body
    vlSelfRef.SA_tb__DOT__test_errors = vlSelfRef.SA_tb__DOT__errors;
    vlSelfRef.SA_tb__DOT__rst_n = 0U;
    vlSelfRef.SA_tb__DOT__en = 0U;
    vlSelfRef.SA_tb__DOT__in_valid = 0U;
    vlSelfRef.SA_tb__DOT__load_slot = 0U;
    vlSelfRef.SA_tb__DOT__compute_slot = 0U;
    vlSelfRef.SA_tb__DOT__a_in[0U] = 0U;
    vlSelfRef.SA_tb__DOT__a_in[1U] = 0U;
    vlSelfRef.SA_tb__DOT__a_in[2U] = 0U;
    vlSelfRef.SA_tb__DOT__b_in[0U][0U] = 0U;
    vlSelfRef.SA_tb__DOT__b_in[0U][1U] = 0U;
    vlSelfRef.SA_tb__DOT__b_in[0U][2U] = 0U;
    vlSelfRef.SA_tb__DOT__b_in[1U][0U] = 0U;
    vlSelfRef.SA_tb__DOT__b_in[1U][1U] = 0U;
    vlSelfRef.SA_tb__DOT__b_in[1U][2U] = 0U;
    vlSelfRef.SA_tb__DOT__b_in[2U][0U] = 0U;
    vlSelfRef.SA_tb__DOT__b_in[2U][1U] = 0U;
    vlSelfRef.SA_tb__DOT__b_in[2U][2U] = 0U;
    VSA_tb___024root____VbeforeTrig_h81bc4b78__0(vlSelf, 
                                                 "@(negedge SA_tb.clk)");
    co_await vlSelfRef.__VtrigSched_h81bc4b78__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge SA_tb.clk)", 
                                                         "SA_tb.sv", 
                                                         68);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.SA_tb__DOT__test_num = ((IData)(1U) + vlSelfRef.SA_tb__DOT__test_num);
    vlSelfRef.SA_tb__DOT__rst_n = 1U;
    vlSelfRef.SA_tb__DOT__en = 1U;
    vlSelfRef.SA_tb__DOT__in_valid = 0U;
    vlSelfRef.SA_tb__DOT__load_slot = 1U;
    vlSelfRef.SA_tb__DOT__compute_slot = 0U;
    vlSelfRef.SA_tb__DOT__a_in[0U] = 0U;
    vlSelfRef.SA_tb__DOT__a_in[1U] = 0U;
    vlSelfRef.SA_tb__DOT__a_in[2U] = 0U;
    SA_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 3U;
    while (VL_LTS_III(32, 0U, SA_tb__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        VSA_tb___024root____VbeforeTrig_h81bc4b78__0(vlSelf, 
                                                     "@(negedge SA_tb.clk)");
        co_await vlSelfRef.__VtrigSched_h81bc4b78__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge SA_tb.clk)", 
                                                             "SA_tb.sv", 
                                                             78);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        SA_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (SA_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.SA_tb__DOT__checks = ((IData)(1U) + vlSelfRef.SA_tb__DOT__checks);
    if (VL_UNLIKELY(((0U != vlSelfRef.SA_tb__DOT__pe_a[0U][0U])))) {
        vlSelfRef.SA_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.SA_tb__DOT__errors);
        VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:84: Assertion failed in %m: [%0t] PE[0][0].a: expected 0, got %0d\n",5, 'M',vlSymsp->name(),"SA_tb.unnamedblk1.unnamedblk2", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',4,vlSelfRef.SA_tb__DOT__pe_a[0U][0U]);
        VL_STOP_MT("SA_tb.sv", 84, "");
    }
    vlSelfRef.SA_tb__DOT__checks = ((IData)(1U) + vlSelfRef.SA_tb__DOT__checks);
    if (VL_UNLIKELY(((0U != vlSelfRef.SA_tb__DOT__pe_a[0U][1U])))) {
        vlSelfRef.SA_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.SA_tb__DOT__errors);
        VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:84: Assertion failed in %m: [%0t] PE[0][1].a: expected 0, got %0d\n",5, 'M',vlSymsp->name(),"SA_tb.unnamedblk1.unnamedblk2", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',4,vlSelfRef.SA_tb__DOT__pe_a[0U][1U]);
        VL_STOP_MT("SA_tb.sv", 84, "");
    }
    vlSelfRef.SA_tb__DOT__checks = ((IData)(1U) + vlSelfRef.SA_tb__DOT__checks);
    if (VL_UNLIKELY(((0U != vlSelfRef.SA_tb__DOT__pe_a[0U][2U])))) {
        vlSelfRef.SA_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.SA_tb__DOT__errors);
        VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:84: Assertion failed in %m: [%0t] PE[0][2].a: expected 0, got %0d\n",5, 'M',vlSymsp->name(),"SA_tb.unnamedblk1.unnamedblk2", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',4,vlSelfRef.SA_tb__DOT__pe_a[0U][2U]);
        VL_STOP_MT("SA_tb.sv", 84, "");
    }
    vlSelfRef.SA_tb__DOT__checks = ((IData)(1U) + vlSelfRef.SA_tb__DOT__checks);
    if (VL_UNLIKELY(((0U != vlSelfRef.SA_tb__DOT__pe_a[1U][0U])))) {
        vlSelfRef.SA_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.SA_tb__DOT__errors);
        VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:84: Assertion failed in %m: [%0t] PE[1][0].a: expected 0, got %0d\n",5, 'M',vlSymsp->name(),"SA_tb.unnamedblk1.unnamedblk2", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',4,vlSelfRef.SA_tb__DOT__pe_a[1U][0U]);
        VL_STOP_MT("SA_tb.sv", 84, "");
    }
    vlSelfRef.SA_tb__DOT__checks = ((IData)(1U) + vlSelfRef.SA_tb__DOT__checks);
    if (VL_UNLIKELY(((0U != vlSelfRef.SA_tb__DOT__pe_a[1U][1U])))) {
        vlSelfRef.SA_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.SA_tb__DOT__errors);
        VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:84: Assertion failed in %m: [%0t] PE[1][1].a: expected 0, got %0d\n",5, 'M',vlSymsp->name(),"SA_tb.unnamedblk1.unnamedblk2", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',4,vlSelfRef.SA_tb__DOT__pe_a[1U][1U]);
        VL_STOP_MT("SA_tb.sv", 84, "");
    }
    vlSelfRef.SA_tb__DOT__checks = ((IData)(1U) + vlSelfRef.SA_tb__DOT__checks);
    if (VL_UNLIKELY(((0U != vlSelfRef.SA_tb__DOT__pe_a[1U][2U])))) {
        vlSelfRef.SA_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.SA_tb__DOT__errors);
        VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:84: Assertion failed in %m: [%0t] PE[1][2].a: expected 0, got %0d\n",5, 'M',vlSymsp->name(),"SA_tb.unnamedblk1.unnamedblk2", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',4,vlSelfRef.SA_tb__DOT__pe_a[1U][2U]);
        VL_STOP_MT("SA_tb.sv", 84, "");
    }
    vlSelfRef.SA_tb__DOT__checks = ((IData)(1U) + vlSelfRef.SA_tb__DOT__checks);
    if (VL_UNLIKELY(((0U != vlSelfRef.SA_tb__DOT__pe_a[2U][0U])))) {
        vlSelfRef.SA_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.SA_tb__DOT__errors);
        VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:84: Assertion failed in %m: [%0t] PE[2][0].a: expected 0, got %0d\n",5, 'M',vlSymsp->name(),"SA_tb.unnamedblk1.unnamedblk2", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',4,vlSelfRef.SA_tb__DOT__pe_a[2U][0U]);
        VL_STOP_MT("SA_tb.sv", 84, "");
    }
    vlSelfRef.SA_tb__DOT__checks = ((IData)(1U) + vlSelfRef.SA_tb__DOT__checks);
    if (VL_UNLIKELY(((0U != vlSelfRef.SA_tb__DOT__pe_a[2U][1U])))) {
        vlSelfRef.SA_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.SA_tb__DOT__errors);
        VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:84: Assertion failed in %m: [%0t] PE[2][1].a: expected 0, got %0d\n",5, 'M',vlSymsp->name(),"SA_tb.unnamedblk1.unnamedblk2", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',4,vlSelfRef.SA_tb__DOT__pe_a[2U][1U]);
        VL_STOP_MT("SA_tb.sv", 84, "");
    }
    vlSelfRef.SA_tb__DOT__checks = ((IData)(1U) + vlSelfRef.SA_tb__DOT__checks);
    if (VL_UNLIKELY(((0U != vlSelfRef.SA_tb__DOT__pe_a[2U][2U])))) {
        vlSelfRef.SA_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.SA_tb__DOT__errors);
        VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:84: Assertion failed in %m: [%0t] PE[2][2].a: expected 0, got %0d\n",5, 'M',vlSymsp->name(),"SA_tb.unnamedblk1.unnamedblk2", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',4,vlSelfRef.SA_tb__DOT__pe_a[2U][2U]);
        VL_STOP_MT("SA_tb.sv", 84, "");
    }
    SA_tb__DOT__unnamedblk3__DOT__t = 0U;
    while (VL_GTS_III(32, 5U, SA_tb__DOT__unnamedblk3__DOT__t)) {
        VSA_tb___024root____VbeforeTrig_h81bc4b78__0(vlSelf, 
                                                     "@(negedge SA_tb.clk)");
        co_await vlSelfRef.__VtrigSched_h81bc4b78__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge SA_tb.clk)", 
                                                             "SA_tb.sv", 
                                                             92);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.SA_tb__DOT__hist[2U][0U] = vlSelfRef.SA_tb__DOT__hist[1U][0U];
        vlSelfRef.SA_tb__DOT__hist[2U][1U] = vlSelfRef.SA_tb__DOT__hist[1U][1U];
        vlSelfRef.SA_tb__DOT__hist[2U][2U] = vlSelfRef.SA_tb__DOT__hist[1U][2U];
        vlSelfRef.SA_tb__DOT__hist[1U][0U] = vlSelfRef.SA_tb__DOT__hist[0U][0U];
        vlSelfRef.SA_tb__DOT__hist[1U][1U] = vlSelfRef.SA_tb__DOT__hist[0U][1U];
        vlSelfRef.SA_tb__DOT__hist[1U][2U] = vlSelfRef.SA_tb__DOT__hist[0U][2U];
        vlSelfRef.SA_tb__DOT__hist[0U][0U] = (0x0000000fU 
                                              & ((IData)(1U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(3U), SA_tb__DOT__unnamedblk3__DOT__t)));
        vlSelfRef.SA_tb__DOT__hist[0U][1U] = (0x0000000fU 
                                              & ((IData)(2U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(3U), SA_tb__DOT__unnamedblk3__DOT__t)));
        vlSelfRef.SA_tb__DOT__hist[0U][2U] = (0x0000000fU 
                                              & ((IData)(3U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(3U), SA_tb__DOT__unnamedblk3__DOT__t)));
        vlSelfRef.SA_tb__DOT__a_in[0U] = vlSelfRef.SA_tb__DOT__hist[0U][0U];
        vlSelfRef.SA_tb__DOT__a_in[1U] = vlSelfRef.SA_tb__DOT__hist[0U][1U];
        vlSelfRef.SA_tb__DOT__a_in[2U] = vlSelfRef.SA_tb__DOT__hist[0U][2U];
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "SA_tb.sv", 
                                             99);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        if (VL_LTES_III(32, 2U, SA_tb__DOT__unnamedblk3__DOT__t)) {
            vlSelfRef.SA_tb__DOT__checks = ((IData)(1U) 
                                            + vlSelfRef.SA_tb__DOT__checks);
            if (VL_UNLIKELY(((vlSelfRef.SA_tb__DOT__pe_a[0U][0U] 
                              != vlSelfRef.SA_tb__DOT__hist[0U][0U])))) {
                vlSelfRef.SA_tb__DOT__errors = ((IData)(1U) 
                                                + vlSelfRef.SA_tb__DOT__errors);
                VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:107: Assertion failed in %m: [%0t] PE[0][0].a: expected %0d, got %0d\n",6, 'M',vlSymsp->name(),"SA_tb.unnamedblk3.unnamedblk5.unnamedblk6", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',4,vlSelfRef.SA_tb__DOT__hist[0U][0U]
                             , '#',4,vlSelfRef.SA_tb__DOT__pe_a[0U][0U]);
                VL_STOP_MT("SA_tb.sv", 107, "");
            }
            vlSelfRef.SA_tb__DOT__checks = ((IData)(1U) 
                                            + vlSelfRef.SA_tb__DOT__checks);
            if (VL_UNLIKELY(((vlSelfRef.SA_tb__DOT__pe_a[0U][1U] 
                              != vlSelfRef.SA_tb__DOT__hist[1U][0U])))) {
                vlSelfRef.SA_tb__DOT__errors = ((IData)(1U) 
                                                + vlSelfRef.SA_tb__DOT__errors);
                VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:107: Assertion failed in %m: [%0t] PE[0][1].a: expected %0d, got %0d\n",6, 'M',vlSymsp->name(),"SA_tb.unnamedblk3.unnamedblk5.unnamedblk6", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',4,vlSelfRef.SA_tb__DOT__hist[1U][0U]
                             , '#',4,vlSelfRef.SA_tb__DOT__pe_a[0U][1U]);
                VL_STOP_MT("SA_tb.sv", 107, "");
            }
            vlSelfRef.SA_tb__DOT__checks = ((IData)(1U) 
                                            + vlSelfRef.SA_tb__DOT__checks);
            if (VL_UNLIKELY(((vlSelfRef.SA_tb__DOT__pe_a[0U][2U] 
                              != vlSelfRef.SA_tb__DOT__hist[2U][0U])))) {
                vlSelfRef.SA_tb__DOT__errors = ((IData)(1U) 
                                                + vlSelfRef.SA_tb__DOT__errors);
                VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:107: Assertion failed in %m: [%0t] PE[0][2].a: expected %0d, got %0d\n",6, 'M',vlSymsp->name(),"SA_tb.unnamedblk3.unnamedblk5.unnamedblk6", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',4,vlSelfRef.SA_tb__DOT__hist[2U][0U]
                             , '#',4,vlSelfRef.SA_tb__DOT__pe_a[0U][2U]);
                VL_STOP_MT("SA_tb.sv", 107, "");
            }
            vlSelfRef.SA_tb__DOT__checks = ((IData)(1U) 
                                            + vlSelfRef.SA_tb__DOT__checks);
            if (VL_UNLIKELY(((vlSelfRef.SA_tb__DOT__pe_a[1U][0U] 
                              != vlSelfRef.SA_tb__DOT__hist[0U][1U])))) {
                vlSelfRef.SA_tb__DOT__errors = ((IData)(1U) 
                                                + vlSelfRef.SA_tb__DOT__errors);
                VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:107: Assertion failed in %m: [%0t] PE[1][0].a: expected %0d, got %0d\n",6, 'M',vlSymsp->name(),"SA_tb.unnamedblk3.unnamedblk5.unnamedblk6", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',4,vlSelfRef.SA_tb__DOT__hist[0U][1U]
                             , '#',4,vlSelfRef.SA_tb__DOT__pe_a[1U][0U]);
                VL_STOP_MT("SA_tb.sv", 107, "");
            }
            vlSelfRef.SA_tb__DOT__checks = ((IData)(1U) 
                                            + vlSelfRef.SA_tb__DOT__checks);
            if (VL_UNLIKELY(((vlSelfRef.SA_tb__DOT__pe_a[1U][1U] 
                              != vlSelfRef.SA_tb__DOT__hist[1U][1U])))) {
                vlSelfRef.SA_tb__DOT__errors = ((IData)(1U) 
                                                + vlSelfRef.SA_tb__DOT__errors);
                VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:107: Assertion failed in %m: [%0t] PE[1][1].a: expected %0d, got %0d\n",6, 'M',vlSymsp->name(),"SA_tb.unnamedblk3.unnamedblk5.unnamedblk6", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',4,vlSelfRef.SA_tb__DOT__hist[1U][1U]
                             , '#',4,vlSelfRef.SA_tb__DOT__pe_a[1U][1U]);
                VL_STOP_MT("SA_tb.sv", 107, "");
            }
            vlSelfRef.SA_tb__DOT__checks = ((IData)(1U) 
                                            + vlSelfRef.SA_tb__DOT__checks);
            if (VL_UNLIKELY(((vlSelfRef.SA_tb__DOT__pe_a[1U][2U] 
                              != vlSelfRef.SA_tb__DOT__hist[2U][1U])))) {
                vlSelfRef.SA_tb__DOT__errors = ((IData)(1U) 
                                                + vlSelfRef.SA_tb__DOT__errors);
                VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:107: Assertion failed in %m: [%0t] PE[1][2].a: expected %0d, got %0d\n",6, 'M',vlSymsp->name(),"SA_tb.unnamedblk3.unnamedblk5.unnamedblk6", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',4,vlSelfRef.SA_tb__DOT__hist[2U][1U]
                             , '#',4,vlSelfRef.SA_tb__DOT__pe_a[1U][2U]);
                VL_STOP_MT("SA_tb.sv", 107, "");
            }
            vlSelfRef.SA_tb__DOT__checks = ((IData)(1U) 
                                            + vlSelfRef.SA_tb__DOT__checks);
            if (VL_UNLIKELY(((vlSelfRef.SA_tb__DOT__pe_a[2U][0U] 
                              != vlSelfRef.SA_tb__DOT__hist[0U][2U])))) {
                vlSelfRef.SA_tb__DOT__errors = ((IData)(1U) 
                                                + vlSelfRef.SA_tb__DOT__errors);
                VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:107: Assertion failed in %m: [%0t] PE[2][0].a: expected %0d, got %0d\n",6, 'M',vlSymsp->name(),"SA_tb.unnamedblk3.unnamedblk5.unnamedblk6", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',4,vlSelfRef.SA_tb__DOT__hist[0U][2U]
                             , '#',4,vlSelfRef.SA_tb__DOT__pe_a[2U][0U]);
                VL_STOP_MT("SA_tb.sv", 107, "");
            }
            vlSelfRef.SA_tb__DOT__checks = ((IData)(1U) 
                                            + vlSelfRef.SA_tb__DOT__checks);
            if (VL_UNLIKELY(((vlSelfRef.SA_tb__DOT__pe_a[2U][1U] 
                              != vlSelfRef.SA_tb__DOT__hist[1U][2U])))) {
                vlSelfRef.SA_tb__DOT__errors = ((IData)(1U) 
                                                + vlSelfRef.SA_tb__DOT__errors);
                VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:107: Assertion failed in %m: [%0t] PE[2][1].a: expected %0d, got %0d\n",6, 'M',vlSymsp->name(),"SA_tb.unnamedblk3.unnamedblk5.unnamedblk6", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',4,vlSelfRef.SA_tb__DOT__hist[1U][2U]
                             , '#',4,vlSelfRef.SA_tb__DOT__pe_a[2U][1U]);
                VL_STOP_MT("SA_tb.sv", 107, "");
            }
            vlSelfRef.SA_tb__DOT__checks = ((IData)(1U) 
                                            + vlSelfRef.SA_tb__DOT__checks);
            if (VL_UNLIKELY(((vlSelfRef.SA_tb__DOT__pe_a[2U][2U] 
                              != vlSelfRef.SA_tb__DOT__hist[2U][2U])))) {
                vlSelfRef.SA_tb__DOT__errors = ((IData)(1U) 
                                                + vlSelfRef.SA_tb__DOT__errors);
                VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:107: Assertion failed in %m: [%0t] PE[2][2].a: expected %0d, got %0d\n",6, 'M',vlSymsp->name(),"SA_tb.unnamedblk3.unnamedblk5.unnamedblk6", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',4,vlSelfRef.SA_tb__DOT__hist[2U][2U]
                             , '#',4,vlSelfRef.SA_tb__DOT__pe_a[2U][2U]);
                VL_STOP_MT("SA_tb.sv", 107, "");
            }
        }
        SA_tb__DOT__unnamedblk3__DOT__t = ((IData)(1U) 
                                           + SA_tb__DOT__unnamedblk3__DOT__t);
    }
    SA_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 = 3U;
    if ((vlSelfRef.SA_tb__DOT__errors == vlSelfRef.SA_tb__DOT__test_errors)) {
        VL_WRITEF_NX("Test 1 passed: activations propagate correctly\n",0);
    } else {
        VL_WRITEF_NX("Test 1 FAILED: activation propagation\n",0);
    }
    while (VL_LTS_III(32, 0U, SA_tb__DOT__unnamedblk1_2__DOT____Vrepeat1)) {
        VSA_tb___024root____VbeforeTrig_h81bc4bb7__0(vlSelf, 
                                                     "@(posedge SA_tb.clk)");
        co_await vlSelfRef.__VtrigSched_h81bc4bb7__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge SA_tb.clk)", 
                                                             "SA_tb.sv", 
                                                             117);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        SA_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 
            = (SA_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 
               - (IData)(1U));
    }
    VSA_tb___024root____VbeforeTrig_h81bc4b78__0(vlSelf, 
                                                 "@(negedge SA_tb.clk)");
    co_await vlSelfRef.__VtrigSched_h81bc4b78__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge SA_tb.clk)", 
                                                         "SA_tb.sv", 
                                                         120);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.SA_tb__DOT__test_num = ((IData)(1U) + vlSelfRef.SA_tb__DOT__test_num);
    vlSelfRef.SA_tb__DOT__rst_n = 1U;
    vlSelfRef.SA_tb__DOT__en = 1U;
    vlSelfRef.SA_tb__DOT__in_valid = 1U;
    vlSelfRef.SA_tb__DOT__load_slot = 0U;
    vlSelfRef.SA_tb__DOT__compute_slot = 1U;
    vlSelfRef.SA_tb__DOT__b_in[0U][0U] = 1U;
    vlSelfRef.SA_tb__DOT__b_in[0U][1U] = 1U;
    vlSelfRef.SA_tb__DOT__b_in[0U][2U] = 1U;
    vlSelfRef.SA_tb__DOT__b_in[1U][0U] = 1U;
    vlSelfRef.SA_tb__DOT__b_in[1U][1U] = 1U;
    vlSelfRef.SA_tb__DOT__b_in[1U][2U] = 1U;
    vlSelfRef.SA_tb__DOT__b_in[2U][0U] = 1U;
    vlSelfRef.SA_tb__DOT__b_in[2U][1U] = 1U;
    vlSelfRef.SA_tb__DOT__b_in[2U][2U] = 1U;
    VSA_tb___024root____VbeforeTrig_h81bc4b78__0(vlSelf, 
                                                 "@(negedge SA_tb.clk)");
    co_await vlSelfRef.__VtrigSched_h81bc4b78__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge SA_tb.clk)", 
                                                         "SA_tb.sv", 
                                                         131);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.SA_tb__DOT__load_slot = 1U;
    vlSelfRef.SA_tb__DOT__compute_slot = 0U;
    if (VL_UNLIKELY(((1U != vlSelfRef.SA_tb__DOT__pe_b1[0U][0U])))) {
        vlSelfRef.SA_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.SA_tb__DOT__errors);
        VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:138: Assertion failed in %m: [%0t] PE[0][0].b1: expected 1, got %0d\n",5, 'M',vlSymsp->name(),"SA_tb.unnamedblk7.unnamedblk8", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',4,vlSelfRef.SA_tb__DOT__pe_b1[0U][0U]);
        VL_STOP_MT("SA_tb.sv", 138, "");
    }
    if (VL_UNLIKELY(((1U != vlSelfRef.SA_tb__DOT__pe_b1[0U][1U])))) {
        vlSelfRef.SA_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.SA_tb__DOT__errors);
        VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:138: Assertion failed in %m: [%0t] PE[0][1].b1: expected 1, got %0d\n",5, 'M',vlSymsp->name(),"SA_tb.unnamedblk7.unnamedblk8", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',4,vlSelfRef.SA_tb__DOT__pe_b1[0U][1U]);
        VL_STOP_MT("SA_tb.sv", 138, "");
    }
    if (VL_UNLIKELY(((1U != vlSelfRef.SA_tb__DOT__pe_b1[0U][2U])))) {
        vlSelfRef.SA_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.SA_tb__DOT__errors);
        VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:138: Assertion failed in %m: [%0t] PE[0][2].b1: expected 1, got %0d\n",5, 'M',vlSymsp->name(),"SA_tb.unnamedblk7.unnamedblk8", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',4,vlSelfRef.SA_tb__DOT__pe_b1[0U][2U]);
        VL_STOP_MT("SA_tb.sv", 138, "");
    }
    if (VL_UNLIKELY(((1U != vlSelfRef.SA_tb__DOT__pe_b1[1U][0U])))) {
        vlSelfRef.SA_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.SA_tb__DOT__errors);
        VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:138: Assertion failed in %m: [%0t] PE[1][0].b1: expected 1, got %0d\n",5, 'M',vlSymsp->name(),"SA_tb.unnamedblk7.unnamedblk8", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',4,vlSelfRef.SA_tb__DOT__pe_b1[1U][0U]);
        VL_STOP_MT("SA_tb.sv", 138, "");
    }
    if (VL_UNLIKELY(((1U != vlSelfRef.SA_tb__DOT__pe_b1[1U][1U])))) {
        vlSelfRef.SA_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.SA_tb__DOT__errors);
        VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:138: Assertion failed in %m: [%0t] PE[1][1].b1: expected 1, got %0d\n",5, 'M',vlSymsp->name(),"SA_tb.unnamedblk7.unnamedblk8", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',4,vlSelfRef.SA_tb__DOT__pe_b1[1U][1U]);
        VL_STOP_MT("SA_tb.sv", 138, "");
    }
    if (VL_UNLIKELY(((1U != vlSelfRef.SA_tb__DOT__pe_b1[1U][2U])))) {
        vlSelfRef.SA_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.SA_tb__DOT__errors);
        VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:138: Assertion failed in %m: [%0t] PE[1][2].b1: expected 1, got %0d\n",5, 'M',vlSymsp->name(),"SA_tb.unnamedblk7.unnamedblk8", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',4,vlSelfRef.SA_tb__DOT__pe_b1[1U][2U]);
        VL_STOP_MT("SA_tb.sv", 138, "");
    }
    if (VL_UNLIKELY(((1U != vlSelfRef.SA_tb__DOT__pe_b1[2U][0U])))) {
        vlSelfRef.SA_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.SA_tb__DOT__errors);
        VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:138: Assertion failed in %m: [%0t] PE[2][0].b1: expected 1, got %0d\n",5, 'M',vlSymsp->name(),"SA_tb.unnamedblk7.unnamedblk8", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',4,vlSelfRef.SA_tb__DOT__pe_b1[2U][0U]);
        VL_STOP_MT("SA_tb.sv", 138, "");
    }
    if (VL_UNLIKELY(((1U != vlSelfRef.SA_tb__DOT__pe_b1[2U][1U])))) {
        vlSelfRef.SA_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.SA_tb__DOT__errors);
        VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:138: Assertion failed in %m: [%0t] PE[2][1].b1: expected 1, got %0d\n",5, 'M',vlSymsp->name(),"SA_tb.unnamedblk7.unnamedblk8", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',4,vlSelfRef.SA_tb__DOT__pe_b1[2U][1U]);
        VL_STOP_MT("SA_tb.sv", 138, "");
    }
    if (VL_UNLIKELY(((1U != vlSelfRef.SA_tb__DOT__pe_b1[2U][2U])))) {
        vlSelfRef.SA_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.SA_tb__DOT__errors);
        VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:138: Assertion failed in %m: [%0t] PE[2][2].b1: expected 1, got %0d\n",5, 'M',vlSymsp->name(),"SA_tb.unnamedblk7.unnamedblk8", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',4,vlSelfRef.SA_tb__DOT__pe_b1[2U][2U]);
        VL_STOP_MT("SA_tb.sv", 138, "");
    }
    VSA_tb___024root____VbeforeTrig_h81bc4b78__0(vlSelf, 
                                                 "@(negedge SA_tb.clk)");
    co_await vlSelfRef.__VtrigSched_h81bc4b78__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge SA_tb.clk)", 
                                                         "SA_tb.sv", 
                                                         143);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.SA_tb__DOT__load_slot = 0U;
    vlSelfRef.SA_tb__DOT__compute_slot = 1U;
    vlSelfRef.SA_tb__DOT__b_in[0U][0U] = 0U;
    vlSelfRef.SA_tb__DOT__b_in[0U][1U] = 0U;
    vlSelfRef.SA_tb__DOT__b_in[0U][2U] = 0U;
    vlSelfRef.SA_tb__DOT__b_in[1U][0U] = 0U;
    vlSelfRef.SA_tb__DOT__b_in[1U][1U] = 0U;
    vlSelfRef.SA_tb__DOT__b_in[1U][2U] = 0U;
    vlSelfRef.SA_tb__DOT__b_in[2U][0U] = 0U;
    vlSelfRef.SA_tb__DOT__b_in[2U][1U] = 0U;
    vlSelfRef.SA_tb__DOT__b_in[2U][2U] = 0U;
    if (VL_UNLIKELY(((1U != vlSelfRef.SA_tb__DOT__pe_b2[0U][0U])))) {
        vlSelfRef.SA_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.SA_tb__DOT__errors);
        VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:153: Assertion failed in %m: [%0t] PE[0][0].b2: expected 0, got %0d\n",5, 'M',vlSymsp->name(),"SA_tb.unnamedblk9.unnamedblk10", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',4,vlSelfRef.SA_tb__DOT__pe_b2[0U][0U]);
        VL_STOP_MT("SA_tb.sv", 153, "");
    }
    if (VL_UNLIKELY(((1U != vlSelfRef.SA_tb__DOT__pe_b2[0U][1U])))) {
        vlSelfRef.SA_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.SA_tb__DOT__errors);
        VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:153: Assertion failed in %m: [%0t] PE[0][1].b2: expected 0, got %0d\n",5, 'M',vlSymsp->name(),"SA_tb.unnamedblk9.unnamedblk10", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',4,vlSelfRef.SA_tb__DOT__pe_b2[0U][1U]);
        VL_STOP_MT("SA_tb.sv", 153, "");
    }
    if (VL_UNLIKELY(((1U != vlSelfRef.SA_tb__DOT__pe_b2[0U][2U])))) {
        vlSelfRef.SA_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.SA_tb__DOT__errors);
        VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:153: Assertion failed in %m: [%0t] PE[0][2].b2: expected 0, got %0d\n",5, 'M',vlSymsp->name(),"SA_tb.unnamedblk9.unnamedblk10", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',4,vlSelfRef.SA_tb__DOT__pe_b2[0U][2U]);
        VL_STOP_MT("SA_tb.sv", 153, "");
    }
    if (VL_UNLIKELY(((1U != vlSelfRef.SA_tb__DOT__pe_b2[1U][0U])))) {
        vlSelfRef.SA_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.SA_tb__DOT__errors);
        VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:153: Assertion failed in %m: [%0t] PE[1][0].b2: expected 0, got %0d\n",5, 'M',vlSymsp->name(),"SA_tb.unnamedblk9.unnamedblk10", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',4,vlSelfRef.SA_tb__DOT__pe_b2[1U][0U]);
        VL_STOP_MT("SA_tb.sv", 153, "");
    }
    if (VL_UNLIKELY(((1U != vlSelfRef.SA_tb__DOT__pe_b2[1U][1U])))) {
        vlSelfRef.SA_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.SA_tb__DOT__errors);
        VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:153: Assertion failed in %m: [%0t] PE[1][1].b2: expected 0, got %0d\n",5, 'M',vlSymsp->name(),"SA_tb.unnamedblk9.unnamedblk10", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',4,vlSelfRef.SA_tb__DOT__pe_b2[1U][1U]);
        VL_STOP_MT("SA_tb.sv", 153, "");
    }
    if (VL_UNLIKELY(((1U != vlSelfRef.SA_tb__DOT__pe_b2[1U][2U])))) {
        vlSelfRef.SA_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.SA_tb__DOT__errors);
        VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:153: Assertion failed in %m: [%0t] PE[1][2].b2: expected 0, got %0d\n",5, 'M',vlSymsp->name(),"SA_tb.unnamedblk9.unnamedblk10", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',4,vlSelfRef.SA_tb__DOT__pe_b2[1U][2U]);
        VL_STOP_MT("SA_tb.sv", 153, "");
    }
    if (VL_UNLIKELY(((1U != vlSelfRef.SA_tb__DOT__pe_b2[2U][0U])))) {
        vlSelfRef.SA_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.SA_tb__DOT__errors);
        VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:153: Assertion failed in %m: [%0t] PE[2][0].b2: expected 0, got %0d\n",5, 'M',vlSymsp->name(),"SA_tb.unnamedblk9.unnamedblk10", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',4,vlSelfRef.SA_tb__DOT__pe_b2[2U][0U]);
        VL_STOP_MT("SA_tb.sv", 153, "");
    }
    if (VL_UNLIKELY(((1U != vlSelfRef.SA_tb__DOT__pe_b2[2U][1U])))) {
        vlSelfRef.SA_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.SA_tb__DOT__errors);
        VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:153: Assertion failed in %m: [%0t] PE[2][1].b2: expected 0, got %0d\n",5, 'M',vlSymsp->name(),"SA_tb.unnamedblk9.unnamedblk10", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',4,vlSelfRef.SA_tb__DOT__pe_b2[2U][1U]);
        VL_STOP_MT("SA_tb.sv", 153, "");
    }
    if (VL_UNLIKELY(((1U != vlSelfRef.SA_tb__DOT__pe_b2[2U][2U])))) {
        vlSelfRef.SA_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.SA_tb__DOT__errors);
        VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:153: Assertion failed in %m: [%0t] PE[2][2].b2: expected 0, got %0d\n",5, 'M',vlSymsp->name(),"SA_tb.unnamedblk9.unnamedblk10", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',4,vlSelfRef.SA_tb__DOT__pe_b2[2U][2U]);
        VL_STOP_MT("SA_tb.sv", 153, "");
    }
    VSA_tb___024root____VbeforeTrig_h81bc4b78__0(vlSelf, 
                                                 "@(negedge SA_tb.clk)");
    co_await vlSelfRef.__VtrigSched_h81bc4b78__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge SA_tb.clk)", 
                                                         "SA_tb.sv", 
                                                         158);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.SA_tb__DOT__load_slot = 1U;
    vlSelfRef.SA_tb__DOT__compute_slot = 0U;
    if (VL_UNLIKELY(((0U != vlSelfRef.SA_tb__DOT__pe_b1[0U][0U])))) {
        vlSelfRef.SA_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.SA_tb__DOT__errors);
        VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:165: Assertion failed in %m: [%0t] PE[0][0].b1: expected 0, got %0d\n",5, 'M',vlSymsp->name(),"SA_tb.unnamedblk11.unnamedblk12", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',4,vlSelfRef.SA_tb__DOT__pe_b1[0U][0U]);
        VL_STOP_MT("SA_tb.sv", 165, "");
    }
    if (VL_UNLIKELY(((0U != vlSelfRef.SA_tb__DOT__pe_b1[0U][1U])))) {
        vlSelfRef.SA_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.SA_tb__DOT__errors);
        VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:165: Assertion failed in %m: [%0t] PE[0][1].b1: expected 0, got %0d\n",5, 'M',vlSymsp->name(),"SA_tb.unnamedblk11.unnamedblk12", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',4,vlSelfRef.SA_tb__DOT__pe_b1[0U][1U]);
        VL_STOP_MT("SA_tb.sv", 165, "");
    }
    if (VL_UNLIKELY(((0U != vlSelfRef.SA_tb__DOT__pe_b1[0U][2U])))) {
        vlSelfRef.SA_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.SA_tb__DOT__errors);
        VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:165: Assertion failed in %m: [%0t] PE[0][2].b1: expected 0, got %0d\n",5, 'M',vlSymsp->name(),"SA_tb.unnamedblk11.unnamedblk12", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',4,vlSelfRef.SA_tb__DOT__pe_b1[0U][2U]);
        VL_STOP_MT("SA_tb.sv", 165, "");
    }
    if (VL_UNLIKELY(((0U != vlSelfRef.SA_tb__DOT__pe_b1[1U][0U])))) {
        vlSelfRef.SA_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.SA_tb__DOT__errors);
        VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:165: Assertion failed in %m: [%0t] PE[1][0].b1: expected 0, got %0d\n",5, 'M',vlSymsp->name(),"SA_tb.unnamedblk11.unnamedblk12", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',4,vlSelfRef.SA_tb__DOT__pe_b1[1U][0U]);
        VL_STOP_MT("SA_tb.sv", 165, "");
    }
    if (VL_UNLIKELY(((0U != vlSelfRef.SA_tb__DOT__pe_b1[1U][1U])))) {
        vlSelfRef.SA_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.SA_tb__DOT__errors);
        VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:165: Assertion failed in %m: [%0t] PE[1][1].b1: expected 0, got %0d\n",5, 'M',vlSymsp->name(),"SA_tb.unnamedblk11.unnamedblk12", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',4,vlSelfRef.SA_tb__DOT__pe_b1[1U][1U]);
        VL_STOP_MT("SA_tb.sv", 165, "");
    }
    if (VL_UNLIKELY(((0U != vlSelfRef.SA_tb__DOT__pe_b1[1U][2U])))) {
        vlSelfRef.SA_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.SA_tb__DOT__errors);
        VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:165: Assertion failed in %m: [%0t] PE[1][2].b1: expected 0, got %0d\n",5, 'M',vlSymsp->name(),"SA_tb.unnamedblk11.unnamedblk12", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',4,vlSelfRef.SA_tb__DOT__pe_b1[1U][2U]);
        VL_STOP_MT("SA_tb.sv", 165, "");
    }
    if (VL_UNLIKELY(((0U != vlSelfRef.SA_tb__DOT__pe_b1[2U][0U])))) {
        vlSelfRef.SA_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.SA_tb__DOT__errors);
        VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:165: Assertion failed in %m: [%0t] PE[2][0].b1: expected 0, got %0d\n",5, 'M',vlSymsp->name(),"SA_tb.unnamedblk11.unnamedblk12", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',4,vlSelfRef.SA_tb__DOT__pe_b1[2U][0U]);
        VL_STOP_MT("SA_tb.sv", 165, "");
    }
    if (VL_UNLIKELY(((0U != vlSelfRef.SA_tb__DOT__pe_b1[2U][1U])))) {
        vlSelfRef.SA_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.SA_tb__DOT__errors);
        VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:165: Assertion failed in %m: [%0t] PE[2][1].b1: expected 0, got %0d\n",5, 'M',vlSymsp->name(),"SA_tb.unnamedblk11.unnamedblk12", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',4,vlSelfRef.SA_tb__DOT__pe_b1[2U][1U]);
        VL_STOP_MT("SA_tb.sv", 165, "");
    }
    if (VL_UNLIKELY(((0U != vlSelfRef.SA_tb__DOT__pe_b1[2U][2U])))) {
        vlSelfRef.SA_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.SA_tb__DOT__errors);
        VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:165: Assertion failed in %m: [%0t] PE[2][2].b1: expected 0, got %0d\n",5, 'M',vlSymsp->name(),"SA_tb.unnamedblk11.unnamedblk12", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',4,vlSelfRef.SA_tb__DOT__pe_b1[2U][2U]);
        VL_STOP_MT("SA_tb.sv", 165, "");
    }
    VSA_tb___024root____VbeforeTrig_h81bc4b78__0(vlSelf, 
                                                 "@(negedge SA_tb.clk)");
    co_await vlSelfRef.__VtrigSched_h81bc4b78__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge SA_tb.clk)", 
                                                         "SA_tb.sv", 
                                                         170);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.SA_tb__DOT__load_slot = 1U;
    vlSelfRef.SA_tb__DOT__compute_slot = 0U;
    if (VL_UNLIKELY(((0U != vlSelfRef.SA_tb__DOT__pe_b2[0U][0U])))) {
        vlSelfRef.SA_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.SA_tb__DOT__errors);
        VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:177: Assertion failed in %m: [%0t] PE[0][0].b2: expected 0, got %0d\n",5, 'M',vlSymsp->name(),"SA_tb.unnamedblk13.unnamedblk14", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',4,vlSelfRef.SA_tb__DOT__pe_b2[0U][0U]);
        VL_STOP_MT("SA_tb.sv", 177, "");
    }
    if (VL_UNLIKELY(((0U != vlSelfRef.SA_tb__DOT__pe_b2[0U][1U])))) {
        vlSelfRef.SA_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.SA_tb__DOT__errors);
        VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:177: Assertion failed in %m: [%0t] PE[0][1].b2: expected 0, got %0d\n",5, 'M',vlSymsp->name(),"SA_tb.unnamedblk13.unnamedblk14", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',4,vlSelfRef.SA_tb__DOT__pe_b2[0U][1U]);
        VL_STOP_MT("SA_tb.sv", 177, "");
    }
    if (VL_UNLIKELY(((0U != vlSelfRef.SA_tb__DOT__pe_b2[0U][2U])))) {
        vlSelfRef.SA_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.SA_tb__DOT__errors);
        VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:177: Assertion failed in %m: [%0t] PE[0][2].b2: expected 0, got %0d\n",5, 'M',vlSymsp->name(),"SA_tb.unnamedblk13.unnamedblk14", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',4,vlSelfRef.SA_tb__DOT__pe_b2[0U][2U]);
        VL_STOP_MT("SA_tb.sv", 177, "");
    }
    if (VL_UNLIKELY(((0U != vlSelfRef.SA_tb__DOT__pe_b2[1U][0U])))) {
        vlSelfRef.SA_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.SA_tb__DOT__errors);
        VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:177: Assertion failed in %m: [%0t] PE[1][0].b2: expected 0, got %0d\n",5, 'M',vlSymsp->name(),"SA_tb.unnamedblk13.unnamedblk14", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',4,vlSelfRef.SA_tb__DOT__pe_b2[1U][0U]);
        VL_STOP_MT("SA_tb.sv", 177, "");
    }
    if (VL_UNLIKELY(((0U != vlSelfRef.SA_tb__DOT__pe_b2[1U][1U])))) {
        vlSelfRef.SA_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.SA_tb__DOT__errors);
        VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:177: Assertion failed in %m: [%0t] PE[1][1].b2: expected 0, got %0d\n",5, 'M',vlSymsp->name(),"SA_tb.unnamedblk13.unnamedblk14", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',4,vlSelfRef.SA_tb__DOT__pe_b2[1U][1U]);
        VL_STOP_MT("SA_tb.sv", 177, "");
    }
    if (VL_UNLIKELY(((0U != vlSelfRef.SA_tb__DOT__pe_b2[1U][2U])))) {
        vlSelfRef.SA_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.SA_tb__DOT__errors);
        VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:177: Assertion failed in %m: [%0t] PE[1][2].b2: expected 0, got %0d\n",5, 'M',vlSymsp->name(),"SA_tb.unnamedblk13.unnamedblk14", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',4,vlSelfRef.SA_tb__DOT__pe_b2[1U][2U]);
        VL_STOP_MT("SA_tb.sv", 177, "");
    }
    if (VL_UNLIKELY(((0U != vlSelfRef.SA_tb__DOT__pe_b2[2U][0U])))) {
        vlSelfRef.SA_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.SA_tb__DOT__errors);
        VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:177: Assertion failed in %m: [%0t] PE[2][0].b2: expected 0, got %0d\n",5, 'M',vlSymsp->name(),"SA_tb.unnamedblk13.unnamedblk14", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',4,vlSelfRef.SA_tb__DOT__pe_b2[2U][0U]);
        VL_STOP_MT("SA_tb.sv", 177, "");
    }
    if (VL_UNLIKELY(((0U != vlSelfRef.SA_tb__DOT__pe_b2[2U][1U])))) {
        vlSelfRef.SA_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.SA_tb__DOT__errors);
        VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:177: Assertion failed in %m: [%0t] PE[2][1].b2: expected 0, got %0d\n",5, 'M',vlSymsp->name(),"SA_tb.unnamedblk13.unnamedblk14", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',4,vlSelfRef.SA_tb__DOT__pe_b2[2U][1U]);
        VL_STOP_MT("SA_tb.sv", 177, "");
    }
    if (VL_UNLIKELY(((0U != vlSelfRef.SA_tb__DOT__pe_b2[2U][2U])))) {
        vlSelfRef.SA_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.SA_tb__DOT__errors);
        VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:177: Assertion failed in %m: [%0t] PE[2][2].b2: expected 0, got %0d\n",5, 'M',vlSymsp->name(),"SA_tb.unnamedblk13.unnamedblk14", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',4,vlSelfRef.SA_tb__DOT__pe_b2[2U][2U]);
        VL_STOP_MT("SA_tb.sv", 177, "");
    }
    SA_tb__DOT__unnamedblk1_3__DOT____Vrepeat2 = 3U;
    if ((vlSelfRef.SA_tb__DOT__errors == vlSelfRef.SA_tb__DOT__test_errors)) {
        VL_WRITEF_NX("Test 2 passed: b1 and b2 loaded correctly with both 1s and 0s\n",0);
    } else {
        VL_WRITEF_NX("Test 2 FAILED: b registers not loaded correctly\n",0);
    }
    while (VL_LTS_III(32, 0U, SA_tb__DOT__unnamedblk1_3__DOT____Vrepeat2)) {
        VSA_tb___024root____VbeforeTrig_h81bc4bb7__0(vlSelf, 
                                                     "@(posedge SA_tb.clk)");
        co_await vlSelfRef.__VtrigSched_h81bc4bb7__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge SA_tb.clk)", 
                                                             "SA_tb.sv", 
                                                             185);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        SA_tb__DOT__unnamedblk1_3__DOT____Vrepeat2 
            = (SA_tb__DOT__unnamedblk1_3__DOT____Vrepeat2 
               - (IData)(1U));
    }
    vlSelfRef.SA_tb__DOT__test_num = ((IData)(1U) + vlSelfRef.SA_tb__DOT__test_num);
    VSA_tb___024root____VbeforeTrig_h81bc4b78__0(vlSelf, 
                                                 "@(negedge SA_tb.clk)");
    co_await vlSelfRef.__VtrigSched_h81bc4b78__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge SA_tb.clk)", 
                                                         "SA_tb.sv", 
                                                         189);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.SA_tb__DOT__A[0U][0U] = 1U;
    vlSelfRef.SA_tb__DOT__A[0U][1U] = 2U;
    vlSelfRef.SA_tb__DOT__A[0U][2U] = 3U;
    vlSelfRef.SA_tb__DOT__A[1U][0U] = 4U;
    vlSelfRef.SA_tb__DOT__A[1U][1U] = 5U;
    vlSelfRef.SA_tb__DOT__A[1U][2U] = 6U;
    vlSelfRef.SA_tb__DOT__A[2U][0U] = 7U;
    vlSelfRef.SA_tb__DOT__A[2U][1U] = 8U;
    vlSelfRef.SA_tb__DOT__A[2U][2U] = 9U;
    vlSelfRef.SA_tb__DOT__W[0U][0U] = 1U;
    vlSelfRef.SA_tb__DOT__W[0U][1U] = 0U;
    vlSelfRef.SA_tb__DOT__W[0U][2U] = 2U;
    vlSelfRef.SA_tb__DOT__W[1U][0U] = 3U;
    vlSelfRef.SA_tb__DOT__W[1U][1U] = 1U;
    vlSelfRef.SA_tb__DOT__W[1U][2U] = 0U;
    vlSelfRef.SA_tb__DOT__W[2U][0U] = 0U;
    vlSelfRef.SA_tb__DOT__W[2U][1U] = 2U;
    vlSelfRef.SA_tb__DOT__W[2U][2U] = 1U;
    vlSelfRef.SA_tb__DOT__C_exp[0U][0U] = 0U;
    vlSelfRef.SA_tb__DOT__C_exp[0U][0U] = (vlSelfRef.SA_tb__DOT__C_exp[0U][0U] 
                                           + (vlSelfRef.SA_tb__DOT__A[0U][0U] 
                                              * vlSelfRef.SA_tb__DOT__W[0U][0U]));
    vlSelfRef.SA_tb__DOT__C_exp[0U][0U] = (vlSelfRef.SA_tb__DOT__C_exp[0U][0U] 
                                           + (vlSelfRef.SA_tb__DOT__A[0U][1U] 
                                              * vlSelfRef.SA_tb__DOT__W[1U][0U]));
    vlSelfRef.SA_tb__DOT__C_exp[0U][0U] = (vlSelfRef.SA_tb__DOT__C_exp[0U][0U] 
                                           + (vlSelfRef.SA_tb__DOT__A[0U][2U] 
                                              * vlSelfRef.SA_tb__DOT__W[2U][0U]));
    vlSelfRef.SA_tb__DOT__C_exp[0U][1U] = 0U;
    vlSelfRef.SA_tb__DOT__C_exp[0U][1U] = (vlSelfRef.SA_tb__DOT__C_exp[0U][1U] 
                                           + (vlSelfRef.SA_tb__DOT__A[0U][0U] 
                                              * vlSelfRef.SA_tb__DOT__W[0U][1U]));
    vlSelfRef.SA_tb__DOT__C_exp[0U][1U] = (vlSelfRef.SA_tb__DOT__C_exp[0U][1U] 
                                           + (vlSelfRef.SA_tb__DOT__A[0U][1U] 
                                              * vlSelfRef.SA_tb__DOT__W[1U][1U]));
    vlSelfRef.SA_tb__DOT__C_exp[0U][1U] = (vlSelfRef.SA_tb__DOT__C_exp[0U][1U] 
                                           + (vlSelfRef.SA_tb__DOT__A[0U][2U] 
                                              * vlSelfRef.SA_tb__DOT__W[2U][1U]));
    vlSelfRef.SA_tb__DOT__C_exp[0U][2U] = 0U;
    vlSelfRef.SA_tb__DOT__C_exp[0U][2U] = (vlSelfRef.SA_tb__DOT__C_exp[0U][2U] 
                                           + (vlSelfRef.SA_tb__DOT__A[0U][0U] 
                                              * vlSelfRef.SA_tb__DOT__W[0U][2U]));
    vlSelfRef.SA_tb__DOT__C_exp[0U][2U] = (vlSelfRef.SA_tb__DOT__C_exp[0U][2U] 
                                           + (vlSelfRef.SA_tb__DOT__A[0U][1U] 
                                              * vlSelfRef.SA_tb__DOT__W[1U][2U]));
    vlSelfRef.SA_tb__DOT__C_exp[0U][2U] = (vlSelfRef.SA_tb__DOT__C_exp[0U][2U] 
                                           + (vlSelfRef.SA_tb__DOT__A[0U][2U] 
                                              * vlSelfRef.SA_tb__DOT__W[2U][2U]));
    vlSelfRef.SA_tb__DOT__C_exp[1U][0U] = 0U;
    vlSelfRef.SA_tb__DOT__C_exp[1U][0U] = (vlSelfRef.SA_tb__DOT__C_exp[1U][0U] 
                                           + (vlSelfRef.SA_tb__DOT__A[1U][0U] 
                                              * vlSelfRef.SA_tb__DOT__W[0U][0U]));
    vlSelfRef.SA_tb__DOT__C_exp[1U][0U] = (vlSelfRef.SA_tb__DOT__C_exp[1U][0U] 
                                           + (vlSelfRef.SA_tb__DOT__A[1U][1U] 
                                              * vlSelfRef.SA_tb__DOT__W[1U][0U]));
    vlSelfRef.SA_tb__DOT__C_exp[1U][0U] = (vlSelfRef.SA_tb__DOT__C_exp[1U][0U] 
                                           + (vlSelfRef.SA_tb__DOT__A[1U][2U] 
                                              * vlSelfRef.SA_tb__DOT__W[2U][0U]));
    vlSelfRef.SA_tb__DOT__C_exp[1U][1U] = 0U;
    vlSelfRef.SA_tb__DOT__C_exp[1U][1U] = (vlSelfRef.SA_tb__DOT__C_exp[1U][1U] 
                                           + (vlSelfRef.SA_tb__DOT__A[1U][0U] 
                                              * vlSelfRef.SA_tb__DOT__W[0U][1U]));
    vlSelfRef.SA_tb__DOT__C_exp[1U][1U] = (vlSelfRef.SA_tb__DOT__C_exp[1U][1U] 
                                           + (vlSelfRef.SA_tb__DOT__A[1U][1U] 
                                              * vlSelfRef.SA_tb__DOT__W[1U][1U]));
    vlSelfRef.SA_tb__DOT__C_exp[1U][1U] = (vlSelfRef.SA_tb__DOT__C_exp[1U][1U] 
                                           + (vlSelfRef.SA_tb__DOT__A[1U][2U] 
                                              * vlSelfRef.SA_tb__DOT__W[2U][1U]));
    vlSelfRef.SA_tb__DOT__C_exp[1U][2U] = 0U;
    vlSelfRef.SA_tb__DOT__C_exp[1U][2U] = (vlSelfRef.SA_tb__DOT__C_exp[1U][2U] 
                                           + (vlSelfRef.SA_tb__DOT__A[1U][0U] 
                                              * vlSelfRef.SA_tb__DOT__W[0U][2U]));
    vlSelfRef.SA_tb__DOT__C_exp[1U][2U] = (vlSelfRef.SA_tb__DOT__C_exp[1U][2U] 
                                           + (vlSelfRef.SA_tb__DOT__A[1U][1U] 
                                              * vlSelfRef.SA_tb__DOT__W[1U][2U]));
    vlSelfRef.SA_tb__DOT__C_exp[1U][2U] = (vlSelfRef.SA_tb__DOT__C_exp[1U][2U] 
                                           + (vlSelfRef.SA_tb__DOT__A[1U][2U] 
                                              * vlSelfRef.SA_tb__DOT__W[2U][2U]));
    vlSelfRef.SA_tb__DOT__C_exp[2U][0U] = 0U;
    vlSelfRef.SA_tb__DOT__C_exp[2U][0U] = (vlSelfRef.SA_tb__DOT__C_exp[2U][0U] 
                                           + (vlSelfRef.SA_tb__DOT__A[2U][0U] 
                                              * vlSelfRef.SA_tb__DOT__W[0U][0U]));
    vlSelfRef.SA_tb__DOT__C_exp[2U][0U] = (vlSelfRef.SA_tb__DOT__C_exp[2U][0U] 
                                           + (vlSelfRef.SA_tb__DOT__A[2U][1U] 
                                              * vlSelfRef.SA_tb__DOT__W[1U][0U]));
    vlSelfRef.SA_tb__DOT__C_exp[2U][0U] = (vlSelfRef.SA_tb__DOT__C_exp[2U][0U] 
                                           + (vlSelfRef.SA_tb__DOT__A[2U][2U] 
                                              * vlSelfRef.SA_tb__DOT__W[2U][0U]));
    vlSelfRef.SA_tb__DOT__C_exp[2U][1U] = 0U;
    vlSelfRef.SA_tb__DOT__C_exp[2U][1U] = (vlSelfRef.SA_tb__DOT__C_exp[2U][1U] 
                                           + (vlSelfRef.SA_tb__DOT__A[2U][0U] 
                                              * vlSelfRef.SA_tb__DOT__W[0U][1U]));
    vlSelfRef.SA_tb__DOT__C_exp[2U][1U] = (vlSelfRef.SA_tb__DOT__C_exp[2U][1U] 
                                           + (vlSelfRef.SA_tb__DOT__A[2U][1U] 
                                              * vlSelfRef.SA_tb__DOT__W[1U][1U]));
    vlSelfRef.SA_tb__DOT__C_exp[2U][1U] = (vlSelfRef.SA_tb__DOT__C_exp[2U][1U] 
                                           + (vlSelfRef.SA_tb__DOT__A[2U][2U] 
                                              * vlSelfRef.SA_tb__DOT__W[2U][1U]));
    vlSelfRef.SA_tb__DOT__C_exp[2U][2U] = 0U;
    vlSelfRef.SA_tb__DOT__C_exp[2U][2U] = (vlSelfRef.SA_tb__DOT__C_exp[2U][2U] 
                                           + (vlSelfRef.SA_tb__DOT__A[2U][0U] 
                                              * vlSelfRef.SA_tb__DOT__W[0U][2U]));
    vlSelfRef.SA_tb__DOT__C_exp[2U][2U] = (vlSelfRef.SA_tb__DOT__C_exp[2U][2U] 
                                           + (vlSelfRef.SA_tb__DOT__A[2U][1U] 
                                              * vlSelfRef.SA_tb__DOT__W[1U][2U]));
    vlSelfRef.SA_tb__DOT__C_exp[2U][2U] = (vlSelfRef.SA_tb__DOT__C_exp[2U][2U] 
                                           + (vlSelfRef.SA_tb__DOT__A[2U][2U] 
                                              * vlSelfRef.SA_tb__DOT__W[2U][2U]));
    VSA_tb___024root____VbeforeTrig_h81bc4b78__0(vlSelf, 
                                                 "@(negedge SA_tb.clk)");
    co_await vlSelfRef.__VtrigSched_h81bc4b78__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge SA_tb.clk)", 
                                                         "SA_tb.sv", 
                                                         207);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.SA_tb__DOT__en = 0U;
    vlSelfRef.SA_tb__DOT__in_valid = 1U;
    vlSelfRef.SA_tb__DOT__load_slot = 0U;
    vlSelfRef.SA_tb__DOT__compute_slot = 1U;
    vlSelfRef.SA_tb__DOT__b_in[0U][0U] = vlSelfRef.SA_tb__DOT__W[0U][0U];
    vlSelfRef.SA_tb__DOT__b_in[0U][1U] = vlSelfRef.SA_tb__DOT__W[0U][1U];
    vlSelfRef.SA_tb__DOT__b_in[0U][2U] = vlSelfRef.SA_tb__DOT__W[0U][2U];
    vlSelfRef.SA_tb__DOT__b_in[1U][0U] = vlSelfRef.SA_tb__DOT__W[1U][0U];
    vlSelfRef.SA_tb__DOT__b_in[1U][1U] = vlSelfRef.SA_tb__DOT__W[1U][1U];
    vlSelfRef.SA_tb__DOT__b_in[1U][2U] = vlSelfRef.SA_tb__DOT__W[1U][2U];
    vlSelfRef.SA_tb__DOT__b_in[2U][0U] = vlSelfRef.SA_tb__DOT__W[2U][0U];
    vlSelfRef.SA_tb__DOT__b_in[2U][1U] = vlSelfRef.SA_tb__DOT__W[2U][1U];
    vlSelfRef.SA_tb__DOT__b_in[2U][2U] = vlSelfRef.SA_tb__DOT__W[2U][2U];
    VSA_tb___024root____VbeforeTrig_h81bc4b78__0(vlSelf, 
                                                 "@(negedge SA_tb.clk)");
    co_await vlSelfRef.__VtrigSched_h81bc4b78__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge SA_tb.clk)", 
                                                         "SA_tb.sv", 
                                                         216);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.SA_tb__DOT__in_valid = 0U;
    vlSelfRef.SA_tb__DOT__load_slot = 1U;
    vlSelfRef.SA_tb__DOT__compute_slot = 0U;
    vlSelfRef.SA_tb__DOT__en = 1U;
    vlSelfRef.SA_tb__DOT__a_in[0U] = 0U;
    vlSelfRef.SA_tb__DOT__a_in[1U] = 0U;
    vlSelfRef.SA_tb__DOT__a_in[2U] = 0U;
    SA_tb__DOT__unnamedblk1_4__DOT____Vrepeat3 = 3U;
    while (VL_LTS_III(32, 0U, SA_tb__DOT__unnamedblk1_4__DOT____Vrepeat3)) {
        VSA_tb___024root____VbeforeTrig_h81bc4b78__0(vlSelf, 
                                                     "@(negedge SA_tb.clk)");
        co_await vlSelfRef.__VtrigSched_h81bc4b78__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge SA_tb.clk)", 
                                                             "SA_tb.sv", 
                                                             223);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        SA_tb__DOT__unnamedblk1_4__DOT____Vrepeat3 
            = (SA_tb__DOT__unnamedblk1_4__DOT____Vrepeat3 
               - (IData)(1U));
    }
    SA_tb__DOT__unnamedblk20__DOT__k = 0U;
    while (VL_GTS_III(32, 8U, SA_tb__DOT__unnamedblk20__DOT__k)) {
        VSA_tb___024root____VbeforeTrig_h81bc4b78__0(vlSelf, 
                                                     "@(negedge SA_tb.clk)");
        co_await vlSelfRef.__VtrigSched_h81bc4b78__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge SA_tb.clk)", 
                                                             "SA_tb.sv", 
                                                             228);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        if ((VL_LTES_III(32, 0U, (SA_tb__DOT__unnamedblk20__DOT__k 
                                  - (IData)(3U))) & 
             VL_GTS_III(32, 3U, (SA_tb__DOT__unnamedblk20__DOT__k 
                                 - (IData)(3U))))) {
            vlSelfRef.SA_tb__DOT__checks = ((IData)(1U) 
                                            + vlSelfRef.SA_tb__DOT__checks);
            if (VL_UNLIKELY(((vlSelfRef.SA_tb__DOT__result_matrix[0U] 
                              != (0x000003ffU & vlSelfRef.SA_tb__DOT__C_exp
                                  [((2U >= (3U & (SA_tb__DOT__unnamedblk20__DOT__k 
                                                  - (IData)(3U))))
                                     ? (3U & (SA_tb__DOT__unnamedblk20__DOT__k 
                                              - (IData)(3U)))
                                     : 0U)][0U]))))) {
                vlSelfRef.SA_tb__DOT__errors = ((IData)(1U) 
                                                + vlSelfRef.SA_tb__DOT__errors);
                VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:236: Assertion failed in %m: [%0t] C[%0d][0]: expected %0d, got %0d\n",7, 'M',vlSymsp->name(),"SA_tb.unnamedblk20.unnamedblk21", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '~',32,(SA_tb__DOT__unnamedblk20__DOT__k 
                                       - (IData)(3U))
                             , '~',32,vlSelfRef.SA_tb__DOT__C_exp
                             [((2U >= (3U & (SA_tb__DOT__unnamedblk20__DOT__k 
                                             - (IData)(3U))))
                                ? (3U & (SA_tb__DOT__unnamedblk20__DOT__k 
                                         - (IData)(3U)))
                                : 0U)][0U], '#',10,vlSelfRef.SA_tb__DOT__result_matrix[0U]);
                VL_STOP_MT("SA_tb.sv", 236, "");
            }
        }
        if ((VL_LTES_III(32, 0U, ((SA_tb__DOT__unnamedblk20__DOT__k 
                                   - (IData)(3U)) - (IData)(1U))) 
             & VL_GTS_III(32, 3U, ((SA_tb__DOT__unnamedblk20__DOT__k 
                                    - (IData)(3U)) 
                                   - (IData)(1U))))) {
            vlSelfRef.SA_tb__DOT__checks = ((IData)(1U) 
                                            + vlSelfRef.SA_tb__DOT__checks);
            if (VL_UNLIKELY(((vlSelfRef.SA_tb__DOT__result_matrix[1U] 
                              != (0x000003ffU & vlSelfRef.SA_tb__DOT__C_exp
                                  [((2U >= (3U & ((SA_tb__DOT__unnamedblk20__DOT__k 
                                                   - (IData)(3U)) 
                                                  - (IData)(1U))))
                                     ? (3U & ((SA_tb__DOT__unnamedblk20__DOT__k 
                                               - (IData)(3U)) 
                                              - (IData)(1U)))
                                     : 0U)][1U]))))) {
                vlSelfRef.SA_tb__DOT__errors = ((IData)(1U) 
                                                + vlSelfRef.SA_tb__DOT__errors);
                VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:236: Assertion failed in %m: [%0t] C[%0d][1]: expected %0d, got %0d\n",7, 'M',vlSymsp->name(),"SA_tb.unnamedblk20.unnamedblk21", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '~',32,((SA_tb__DOT__unnamedblk20__DOT__k 
                                        - (IData)(3U)) 
                                       - (IData)(1U))
                             , '~',32,vlSelfRef.SA_tb__DOT__C_exp
                             [((2U >= (3U & ((SA_tb__DOT__unnamedblk20__DOT__k 
                                              - (IData)(3U)) 
                                             - (IData)(1U))))
                                ? (3U & ((SA_tb__DOT__unnamedblk20__DOT__k 
                                          - (IData)(3U)) 
                                         - (IData)(1U)))
                                : 0U)][1U], '#',10,vlSelfRef.SA_tb__DOT__result_matrix[1U]);
                VL_STOP_MT("SA_tb.sv", 236, "");
            }
        }
        if ((VL_LTES_III(32, 0U, ((SA_tb__DOT__unnamedblk20__DOT__k 
                                   - (IData)(3U)) - (IData)(2U))) 
             & VL_GTS_III(32, 3U, ((SA_tb__DOT__unnamedblk20__DOT__k 
                                    - (IData)(3U)) 
                                   - (IData)(2U))))) {
            vlSelfRef.SA_tb__DOT__checks = ((IData)(1U) 
                                            + vlSelfRef.SA_tb__DOT__checks);
            if (VL_UNLIKELY(((vlSelfRef.SA_tb__DOT__result_matrix[2U] 
                              != (0x000003ffU & vlSelfRef.SA_tb__DOT__C_exp
                                  [((2U >= (3U & ((SA_tb__DOT__unnamedblk20__DOT__k 
                                                   - (IData)(3U)) 
                                                  - (IData)(2U))))
                                     ? (3U & ((SA_tb__DOT__unnamedblk20__DOT__k 
                                               - (IData)(3U)) 
                                              - (IData)(2U)))
                                     : 0U)][2U]))))) {
                vlSelfRef.SA_tb__DOT__errors = ((IData)(1U) 
                                                + vlSelfRef.SA_tb__DOT__errors);
                VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:236: Assertion failed in %m: [%0t] C[%0d][2]: expected %0d, got %0d\n",7, 'M',vlSymsp->name(),"SA_tb.unnamedblk20.unnamedblk21", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '~',32,((SA_tb__DOT__unnamedblk20__DOT__k 
                                        - (IData)(3U)) 
                                       - (IData)(2U))
                             , '~',32,vlSelfRef.SA_tb__DOT__C_exp
                             [((2U >= (3U & ((SA_tb__DOT__unnamedblk20__DOT__k 
                                              - (IData)(3U)) 
                                             - (IData)(2U))))
                                ? (3U & ((SA_tb__DOT__unnamedblk20__DOT__k 
                                          - (IData)(3U)) 
                                         - (IData)(2U)))
                                : 0U)][2U], '#',10,vlSelfRef.SA_tb__DOT__result_matrix[2U]);
                VL_STOP_MT("SA_tb.sv", 236, "");
            }
        }
        vlSelfRef.SA_tb__DOT__a_in[0U] = ((VL_LTES_III(32, 0U, SA_tb__DOT__unnamedblk20__DOT__k) 
                                           & VL_GTS_III(32, 3U, SA_tb__DOT__unnamedblk20__DOT__k))
                                           ? vlSelfRef.SA_tb__DOT__A
                                          [((2U >= 
                                             (3U & SA_tb__DOT__unnamedblk20__DOT__k))
                                             ? (3U 
                                                & SA_tb__DOT__unnamedblk20__DOT__k)
                                             : 0U)][0U]
                                           : 0U);
        vlSelfRef.SA_tb__DOT__a_in[1U] = ((VL_LTES_III(32, 0U, 
                                                       (SA_tb__DOT__unnamedblk20__DOT__k 
                                                        - (IData)(1U))) 
                                           & VL_GTS_III(32, 3U, 
                                                        (SA_tb__DOT__unnamedblk20__DOT__k 
                                                         - (IData)(1U))))
                                           ? vlSelfRef.SA_tb__DOT__A
                                          [((2U >= 
                                             (3U & 
                                              (SA_tb__DOT__unnamedblk20__DOT__k 
                                               - (IData)(1U))))
                                             ? (3U 
                                                & (SA_tb__DOT__unnamedblk20__DOT__k 
                                                   - (IData)(1U)))
                                             : 0U)][1U]
                                           : 0U);
        vlSelfRef.SA_tb__DOT__a_in[2U] = ((VL_LTES_III(32, 0U, 
                                                       (SA_tb__DOT__unnamedblk20__DOT__k 
                                                        - (IData)(2U))) 
                                           & VL_GTS_III(32, 3U, 
                                                        (SA_tb__DOT__unnamedblk20__DOT__k 
                                                         - (IData)(2U))))
                                           ? vlSelfRef.SA_tb__DOT__A
                                          [((2U >= 
                                             (3U & 
                                              (SA_tb__DOT__unnamedblk20__DOT__k 
                                               - (IData)(2U))))
                                             ? (3U 
                                                & (SA_tb__DOT__unnamedblk20__DOT__k 
                                                   - (IData)(2U)))
                                             : 0U)][2U]
                                           : 0U);
        SA_tb__DOT__unnamedblk20__DOT__k = ((IData)(1U) 
                                            + SA_tb__DOT__unnamedblk20__DOT__k);
    }
    SA_tb__DOT__unnamedblk1_5__DOT____Vrepeat4 = 3U;
    if ((vlSelfRef.SA_tb__DOT__errors == vlSelfRef.SA_tb__DOT__test_errors)) {
        VL_WRITEF_NX("Test 3 passed: 3x3 matrix multiply correct\n",0);
    } else {
        VL_WRITEF_NX("Test 3 FAILED: matrix multiply\n",0);
    }
    while (VL_LTS_III(32, 0U, SA_tb__DOT__unnamedblk1_5__DOT____Vrepeat4)) {
        VSA_tb___024root____VbeforeTrig_h81bc4b78__0(vlSelf, 
                                                     "@(negedge SA_tb.clk)");
        co_await vlSelfRef.__VtrigSched_h81bc4b78__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge SA_tb.clk)", 
                                                             "SA_tb.sv", 
                                                             249);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        SA_tb__DOT__unnamedblk1_5__DOT____Vrepeat4 
            = (SA_tb__DOT__unnamedblk1_5__DOT____Vrepeat4 
               - (IData)(1U));
    }
    vlSelfRef.SA_tb__DOT__test_num = ((IData)(1U) + vlSelfRef.SA_tb__DOT__test_num);
    vlSelfRef.SA_tb__DOT__en = 0U;
    vlSelfRef.SA_tb__DOT__in_valid = 1U;
    vlSelfRef.SA_tb__DOT__load_slot = 0U;
    vlSelfRef.SA_tb__DOT__compute_slot = 1U;
    vlSelfRef.SA_tb__DOT__b_in[0U][0U] = 0U;
    vlSelfRef.SA_tb__DOT__b_in[0U][1U] = 1U;
    vlSelfRef.SA_tb__DOT__b_in[0U][2U] = 2U;
    vlSelfRef.SA_tb__DOT__b_in[1U][0U] = 4U;
    vlSelfRef.SA_tb__DOT__b_in[1U][1U] = 5U;
    vlSelfRef.SA_tb__DOT__b_in[1U][2U] = 6U;
    vlSelfRef.SA_tb__DOT__b_in[2U][0U] = 8U;
    vlSelfRef.SA_tb__DOT__b_in[2U][1U] = 9U;
    vlSelfRef.SA_tb__DOT__b_in[2U][2U] = 0x0aU;
    VSA_tb___024root____VbeforeTrig_h81bc4b78__0(vlSelf, 
                                                 "@(negedge SA_tb.clk)");
    co_await vlSelfRef.__VtrigSched_h81bc4b78__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge SA_tb.clk)", 
                                                         "SA_tb.sv", 
                                                         261);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.SA_tb__DOT__expected_temp = 0U;
    vlSelfRef.SA_tb__DOT__b_in[0U][0U] = (0x0000000fU 
                                          & (~ (IData)(vlSelfRef.SA_tb__DOT__b_in[0U][0U])));
    if (VL_UNLIKELY(((0U != vlSelfRef.SA_tb__DOT__pe_b1[0U][0U])))) {
        vlSelfRef.SA_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.SA_tb__DOT__errors);
        VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:268: Assertion failed in %m: [%0t] PE[0][0].b1: expected 0, got %0d\n",5, 'M',vlSymsp->name(),"SA_tb.unnamedblk23.unnamedblk24", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',4,vlSelfRef.SA_tb__DOT__pe_b1[0U][0U]);
        VL_STOP_MT("SA_tb.sv", 268, "");
    }
    vlSelfRef.SA_tb__DOT__expected_temp = 1U;
    vlSelfRef.SA_tb__DOT__b_in[0U][1U] = (0x0000000fU 
                                          & (~ (IData)(vlSelfRef.SA_tb__DOT__b_in[0U][1U])));
    if (VL_UNLIKELY(((1U != vlSelfRef.SA_tb__DOT__pe_b1[0U][1U])))) {
        vlSelfRef.SA_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.SA_tb__DOT__errors);
        VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:268: Assertion failed in %m: [%0t] PE[0][1].b1: expected 1, got %0d\n",5, 'M',vlSymsp->name(),"SA_tb.unnamedblk23.unnamedblk24", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',4,vlSelfRef.SA_tb__DOT__pe_b1[0U][1U]);
        VL_STOP_MT("SA_tb.sv", 268, "");
    }
    vlSelfRef.SA_tb__DOT__expected_temp = 2U;
    vlSelfRef.SA_tb__DOT__b_in[0U][2U] = (0x0000000fU 
                                          & (~ (IData)(vlSelfRef.SA_tb__DOT__b_in[0U][2U])));
    if (VL_UNLIKELY(((2U != vlSelfRef.SA_tb__DOT__pe_b1[0U][2U])))) {
        vlSelfRef.SA_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.SA_tb__DOT__errors);
        VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:268: Assertion failed in %m: [%0t] PE[0][2].b1: expected 2, got %0d\n",5, 'M',vlSymsp->name(),"SA_tb.unnamedblk23.unnamedblk24", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',4,vlSelfRef.SA_tb__DOT__pe_b1[0U][2U]);
        VL_STOP_MT("SA_tb.sv", 268, "");
    }
    vlSelfRef.SA_tb__DOT__expected_temp = 4U;
    vlSelfRef.SA_tb__DOT__b_in[1U][0U] = (0x0000000fU 
                                          & (~ (IData)(vlSelfRef.SA_tb__DOT__b_in[1U][0U])));
    if (VL_UNLIKELY(((4U != vlSelfRef.SA_tb__DOT__pe_b1[1U][0U])))) {
        vlSelfRef.SA_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.SA_tb__DOT__errors);
        VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:268: Assertion failed in %m: [%0t] PE[1][0].b1: expected 4, got %0d\n",5, 'M',vlSymsp->name(),"SA_tb.unnamedblk23.unnamedblk24", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',4,vlSelfRef.SA_tb__DOT__pe_b1[1U][0U]);
        VL_STOP_MT("SA_tb.sv", 268, "");
    }
    vlSelfRef.SA_tb__DOT__expected_temp = 5U;
    vlSelfRef.SA_tb__DOT__b_in[1U][1U] = (0x0000000fU 
                                          & (~ (IData)(vlSelfRef.SA_tb__DOT__b_in[1U][1U])));
    if (VL_UNLIKELY(((5U != vlSelfRef.SA_tb__DOT__pe_b1[1U][1U])))) {
        vlSelfRef.SA_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.SA_tb__DOT__errors);
        VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:268: Assertion failed in %m: [%0t] PE[1][1].b1: expected 5, got %0d\n",5, 'M',vlSymsp->name(),"SA_tb.unnamedblk23.unnamedblk24", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',4,vlSelfRef.SA_tb__DOT__pe_b1[1U][1U]);
        VL_STOP_MT("SA_tb.sv", 268, "");
    }
    vlSelfRef.SA_tb__DOT__expected_temp = 6U;
    vlSelfRef.SA_tb__DOT__b_in[1U][2U] = (0x0000000fU 
                                          & (~ (IData)(vlSelfRef.SA_tb__DOT__b_in[1U][2U])));
    if (VL_UNLIKELY(((6U != vlSelfRef.SA_tb__DOT__pe_b1[1U][2U])))) {
        vlSelfRef.SA_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.SA_tb__DOT__errors);
        VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:268: Assertion failed in %m: [%0t] PE[1][2].b1: expected 6, got %0d\n",5, 'M',vlSymsp->name(),"SA_tb.unnamedblk23.unnamedblk24", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',4,vlSelfRef.SA_tb__DOT__pe_b1[1U][2U]);
        VL_STOP_MT("SA_tb.sv", 268, "");
    }
    vlSelfRef.SA_tb__DOT__expected_temp = 8U;
    vlSelfRef.SA_tb__DOT__b_in[2U][0U] = (0x0000000fU 
                                          & (~ (IData)(vlSelfRef.SA_tb__DOT__b_in[2U][0U])));
    if (VL_UNLIKELY(((8U != vlSelfRef.SA_tb__DOT__pe_b1[2U][0U])))) {
        vlSelfRef.SA_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.SA_tb__DOT__errors);
        VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:268: Assertion failed in %m: [%0t] PE[2][0].b1: expected 8, got %0d\n",5, 'M',vlSymsp->name(),"SA_tb.unnamedblk23.unnamedblk24", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',4,vlSelfRef.SA_tb__DOT__pe_b1[2U][0U]);
        VL_STOP_MT("SA_tb.sv", 268, "");
    }
    vlSelfRef.SA_tb__DOT__expected_temp = 9U;
    vlSelfRef.SA_tb__DOT__b_in[2U][1U] = (0x0000000fU 
                                          & (~ (IData)(vlSelfRef.SA_tb__DOT__b_in[2U][1U])));
    if (VL_UNLIKELY(((9U != vlSelfRef.SA_tb__DOT__pe_b1[2U][1U])))) {
        vlSelfRef.SA_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.SA_tb__DOT__errors);
        VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:268: Assertion failed in %m: [%0t] PE[2][1].b1: expected 9, got %0d\n",5, 'M',vlSymsp->name(),"SA_tb.unnamedblk23.unnamedblk24", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',4,vlSelfRef.SA_tb__DOT__pe_b1[2U][1U]);
        VL_STOP_MT("SA_tb.sv", 268, "");
    }
    vlSelfRef.SA_tb__DOT__expected_temp = 0x0aU;
    vlSelfRef.SA_tb__DOT__b_in[2U][2U] = (0x0000000fU 
                                          & (~ (IData)(vlSelfRef.SA_tb__DOT__b_in[2U][2U])));
    if (VL_UNLIKELY(((0x0aU != vlSelfRef.SA_tb__DOT__pe_b1[2U][2U])))) {
        vlSelfRef.SA_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.SA_tb__DOT__errors);
        VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:268: Assertion failed in %m: [%0t] PE[2][2].b1: expected 10, got %0d\n",5, 'M',vlSymsp->name(),"SA_tb.unnamedblk23.unnamedblk24", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',4,vlSelfRef.SA_tb__DOT__pe_b1[2U][2U]);
        VL_STOP_MT("SA_tb.sv", 268, "");
    }
    vlSelfRef.SA_tb__DOT__load_slot = 1U;
    vlSelfRef.SA_tb__DOT__compute_slot = 0U;
    VSA_tb___024root____VbeforeTrig_h81bc4b78__0(vlSelf, 
                                                 "@(negedge SA_tb.clk)");
    co_await vlSelfRef.__VtrigSched_h81bc4b78__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge SA_tb.clk)", 
                                                         "SA_tb.sv", 
                                                         276);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.SA_tb__DOT__expected_temp = 0U;
    vlSelfRef.SA_tb__DOT__expected_temp = 0x0fU;
    if (VL_UNLIKELY(((0x0fU != vlSelfRef.SA_tb__DOT__pe_b2[0U][0U])))) {
        vlSelfRef.SA_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.SA_tb__DOT__errors);
        VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:283: Assertion failed in %m: [%0t] PE[0][0].b2: expected 15, got %0d\n",5, 'M',vlSymsp->name(),"SA_tb.unnamedblk25.unnamedblk26", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',4,vlSelfRef.SA_tb__DOT__pe_b1[0U][0U]);
        VL_STOP_MT("SA_tb.sv", 283, "");
    }
    vlSelfRef.SA_tb__DOT__expected_temp = 1U;
    vlSelfRef.SA_tb__DOT__expected_temp = 0x0eU;
    if (VL_UNLIKELY(((0x0eU != vlSelfRef.SA_tb__DOT__pe_b2[0U][1U])))) {
        vlSelfRef.SA_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.SA_tb__DOT__errors);
        VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:283: Assertion failed in %m: [%0t] PE[0][1].b2: expected 14, got %0d\n",5, 'M',vlSymsp->name(),"SA_tb.unnamedblk25.unnamedblk26", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',4,vlSelfRef.SA_tb__DOT__pe_b1[0U][1U]);
        VL_STOP_MT("SA_tb.sv", 283, "");
    }
    vlSelfRef.SA_tb__DOT__expected_temp = 2U;
    vlSelfRef.SA_tb__DOT__expected_temp = 0x0dU;
    if (VL_UNLIKELY(((0x0dU != vlSelfRef.SA_tb__DOT__pe_b2[0U][2U])))) {
        vlSelfRef.SA_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.SA_tb__DOT__errors);
        VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:283: Assertion failed in %m: [%0t] PE[0][2].b2: expected 13, got %0d\n",5, 'M',vlSymsp->name(),"SA_tb.unnamedblk25.unnamedblk26", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',4,vlSelfRef.SA_tb__DOT__pe_b1[0U][2U]);
        VL_STOP_MT("SA_tb.sv", 283, "");
    }
    vlSelfRef.SA_tb__DOT__expected_temp = 4U;
    vlSelfRef.SA_tb__DOT__expected_temp = 0x0bU;
    if (VL_UNLIKELY(((0x0bU != vlSelfRef.SA_tb__DOT__pe_b2[1U][0U])))) {
        vlSelfRef.SA_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.SA_tb__DOT__errors);
        VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:283: Assertion failed in %m: [%0t] PE[1][0].b2: expected 11, got %0d\n",5, 'M',vlSymsp->name(),"SA_tb.unnamedblk25.unnamedblk26", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',4,vlSelfRef.SA_tb__DOT__pe_b1[1U][0U]);
        VL_STOP_MT("SA_tb.sv", 283, "");
    }
    vlSelfRef.SA_tb__DOT__expected_temp = 5U;
    vlSelfRef.SA_tb__DOT__expected_temp = 0x0aU;
    if (VL_UNLIKELY(((0x0aU != vlSelfRef.SA_tb__DOT__pe_b2[1U][1U])))) {
        vlSelfRef.SA_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.SA_tb__DOT__errors);
        VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:283: Assertion failed in %m: [%0t] PE[1][1].b2: expected 10, got %0d\n",5, 'M',vlSymsp->name(),"SA_tb.unnamedblk25.unnamedblk26", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',4,vlSelfRef.SA_tb__DOT__pe_b1[1U][1U]);
        VL_STOP_MT("SA_tb.sv", 283, "");
    }
    vlSelfRef.SA_tb__DOT__expected_temp = 6U;
    vlSelfRef.SA_tb__DOT__expected_temp = 9U;
    if (VL_UNLIKELY(((9U != vlSelfRef.SA_tb__DOT__pe_b2[1U][2U])))) {
        vlSelfRef.SA_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.SA_tb__DOT__errors);
        VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:283: Assertion failed in %m: [%0t] PE[1][2].b2: expected 9, got %0d\n",5, 'M',vlSymsp->name(),"SA_tb.unnamedblk25.unnamedblk26", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',4,vlSelfRef.SA_tb__DOT__pe_b1[1U][2U]);
        VL_STOP_MT("SA_tb.sv", 283, "");
    }
    vlSelfRef.SA_tb__DOT__expected_temp = 8U;
    vlSelfRef.SA_tb__DOT__expected_temp = 7U;
    if (VL_UNLIKELY(((7U != vlSelfRef.SA_tb__DOT__pe_b2[2U][0U])))) {
        vlSelfRef.SA_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.SA_tb__DOT__errors);
        VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:283: Assertion failed in %m: [%0t] PE[2][0].b2: expected 7, got %0d\n",5, 'M',vlSymsp->name(),"SA_tb.unnamedblk25.unnamedblk26", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',4,vlSelfRef.SA_tb__DOT__pe_b1[2U][0U]);
        VL_STOP_MT("SA_tb.sv", 283, "");
    }
    vlSelfRef.SA_tb__DOT__expected_temp = 9U;
    vlSelfRef.SA_tb__DOT__expected_temp = 6U;
    if (VL_UNLIKELY(((6U != vlSelfRef.SA_tb__DOT__pe_b2[2U][1U])))) {
        vlSelfRef.SA_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.SA_tb__DOT__errors);
        VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:283: Assertion failed in %m: [%0t] PE[2][1].b2: expected 6, got %0d\n",5, 'M',vlSymsp->name(),"SA_tb.unnamedblk25.unnamedblk26", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',4,vlSelfRef.SA_tb__DOT__pe_b1[2U][1U]);
        VL_STOP_MT("SA_tb.sv", 283, "");
    }
    vlSelfRef.SA_tb__DOT__expected_temp = 0x0aU;
    vlSelfRef.SA_tb__DOT__expected_temp = 5U;
    if (VL_UNLIKELY(((5U != vlSelfRef.SA_tb__DOT__pe_b2[2U][2U])))) {
        vlSelfRef.SA_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.SA_tb__DOT__errors);
        VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:283: Assertion failed in %m: [%0t] PE[2][2].b2: expected 5, got %0d\n",5, 'M',vlSymsp->name(),"SA_tb.unnamedblk25.unnamedblk26", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',4,vlSelfRef.SA_tb__DOT__pe_b1[2U][2U]);
        VL_STOP_MT("SA_tb.sv", 283, "");
    }
    SA_tb__DOT__unnamedblk1_6__DOT____Vrepeat5 = 3U;
    if ((vlSelfRef.SA_tb__DOT__errors == vlSelfRef.SA_tb__DOT__test_errors)) {
        VL_WRITEF_NX("Test 4 passed: b1 and b2 loaded distinct values\n",0);
    } else {
        VL_WRITEF_NX("Test 2 FAILED: b registers not loaded correctly\n",0);
    }
    while (VL_LTS_III(32, 0U, SA_tb__DOT__unnamedblk1_6__DOT____Vrepeat5)) {
        VSA_tb___024root____VbeforeTrig_h81bc4b78__0(vlSelf, 
                                                     "@(negedge SA_tb.clk)");
        co_await vlSelfRef.__VtrigSched_h81bc4b78__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge SA_tb.clk)", 
                                                             "SA_tb.sv", 
                                                             291);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        SA_tb__DOT__unnamedblk1_6__DOT____Vrepeat5 
            = (SA_tb__DOT__unnamedblk1_6__DOT____Vrepeat5 
               - (IData)(1U));
    }
    vlSelfRef.SA_tb__DOT__rst_n = 0U;
    vlSelfRef.SA_tb__DOT__test_num = ((IData)(1U) + vlSelfRef.SA_tb__DOT__test_num);
    VSA_tb___024root____VbeforeTrig_h81bc4b78__0(vlSelf, 
                                                 "@(negedge SA_tb.clk)");
    co_await vlSelfRef.__VtrigSched_h81bc4b78__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge SA_tb.clk)", 
                                                         "SA_tb.sv", 
                                                         295);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.SA_tb__DOT__rst_n = 1U;
    vlSelfRef.SA_tb__DOT__en = 0U;
    vlSelfRef.SA_tb__DOT__A[0U][0U] = 0x0fU;
    vlSelfRef.SA_tb__DOT__A[0U][1U] = 0x0fU;
    vlSelfRef.SA_tb__DOT__A[0U][2U] = 0x0fU;
    vlSelfRef.SA_tb__DOT__A[1U][0U] = 0x0fU;
    vlSelfRef.SA_tb__DOT__A[1U][1U] = 0x0fU;
    vlSelfRef.SA_tb__DOT__A[1U][2U] = 0x0fU;
    vlSelfRef.SA_tb__DOT__A[2U][0U] = 0x0fU;
    vlSelfRef.SA_tb__DOT__A[2U][1U] = 0x0fU;
    vlSelfRef.SA_tb__DOT__A[2U][2U] = 0x0fU;
    vlSelfRef.SA_tb__DOT__W[0U][0U] = 0x0fU;
    vlSelfRef.SA_tb__DOT__W[0U][1U] = 0x0fU;
    vlSelfRef.SA_tb__DOT__W[0U][2U] = 0x0fU;
    vlSelfRef.SA_tb__DOT__W[1U][0U] = 0x0fU;
    vlSelfRef.SA_tb__DOT__W[1U][1U] = 0x0fU;
    vlSelfRef.SA_tb__DOT__W[1U][2U] = 0x0fU;
    vlSelfRef.SA_tb__DOT__W[2U][0U] = 0x0fU;
    vlSelfRef.SA_tb__DOT__W[2U][1U] = 0x0fU;
    vlSelfRef.SA_tb__DOT__W[2U][2U] = 0x0fU;
    vlSelfRef.SA_tb__DOT__C_exp[0U][0U] = 0U;
    vlSelfRef.SA_tb__DOT__C_exp[0U][0U] = (vlSelfRef.SA_tb__DOT__C_exp[0U][0U] 
                                           + (vlSelfRef.SA_tb__DOT__A[0U][0U] 
                                              * vlSelfRef.SA_tb__DOT__W[0U][0U]));
    vlSelfRef.SA_tb__DOT__C_exp[0U][0U] = (vlSelfRef.SA_tb__DOT__C_exp[0U][0U] 
                                           + (vlSelfRef.SA_tb__DOT__A[0U][1U] 
                                              * vlSelfRef.SA_tb__DOT__W[1U][0U]));
    vlSelfRef.SA_tb__DOT__C_exp[0U][0U] = (vlSelfRef.SA_tb__DOT__C_exp[0U][0U] 
                                           + (vlSelfRef.SA_tb__DOT__A[0U][2U] 
                                              * vlSelfRef.SA_tb__DOT__W[2U][0U]));
    vlSelfRef.SA_tb__DOT__C_exp[0U][1U] = 0U;
    vlSelfRef.SA_tb__DOT__C_exp[0U][1U] = (vlSelfRef.SA_tb__DOT__C_exp[0U][1U] 
                                           + (vlSelfRef.SA_tb__DOT__A[0U][0U] 
                                              * vlSelfRef.SA_tb__DOT__W[0U][1U]));
    vlSelfRef.SA_tb__DOT__C_exp[0U][1U] = (vlSelfRef.SA_tb__DOT__C_exp[0U][1U] 
                                           + (vlSelfRef.SA_tb__DOT__A[0U][1U] 
                                              * vlSelfRef.SA_tb__DOT__W[1U][1U]));
    vlSelfRef.SA_tb__DOT__C_exp[0U][1U] = (vlSelfRef.SA_tb__DOT__C_exp[0U][1U] 
                                           + (vlSelfRef.SA_tb__DOT__A[0U][2U] 
                                              * vlSelfRef.SA_tb__DOT__W[2U][1U]));
    vlSelfRef.SA_tb__DOT__C_exp[0U][2U] = 0U;
    vlSelfRef.SA_tb__DOT__C_exp[0U][2U] = (vlSelfRef.SA_tb__DOT__C_exp[0U][2U] 
                                           + (vlSelfRef.SA_tb__DOT__A[0U][0U] 
                                              * vlSelfRef.SA_tb__DOT__W[0U][2U]));
    vlSelfRef.SA_tb__DOT__C_exp[0U][2U] = (vlSelfRef.SA_tb__DOT__C_exp[0U][2U] 
                                           + (vlSelfRef.SA_tb__DOT__A[0U][1U] 
                                              * vlSelfRef.SA_tb__DOT__W[1U][2U]));
    vlSelfRef.SA_tb__DOT__C_exp[0U][2U] = (vlSelfRef.SA_tb__DOT__C_exp[0U][2U] 
                                           + (vlSelfRef.SA_tb__DOT__A[0U][2U] 
                                              * vlSelfRef.SA_tb__DOT__W[2U][2U]));
    vlSelfRef.SA_tb__DOT__C_exp[1U][0U] = 0U;
    vlSelfRef.SA_tb__DOT__C_exp[1U][0U] = (vlSelfRef.SA_tb__DOT__C_exp[1U][0U] 
                                           + (vlSelfRef.SA_tb__DOT__A[1U][0U] 
                                              * vlSelfRef.SA_tb__DOT__W[0U][0U]));
    vlSelfRef.SA_tb__DOT__C_exp[1U][0U] = (vlSelfRef.SA_tb__DOT__C_exp[1U][0U] 
                                           + (vlSelfRef.SA_tb__DOT__A[1U][1U] 
                                              * vlSelfRef.SA_tb__DOT__W[1U][0U]));
    vlSelfRef.SA_tb__DOT__C_exp[1U][0U] = (vlSelfRef.SA_tb__DOT__C_exp[1U][0U] 
                                           + (vlSelfRef.SA_tb__DOT__A[1U][2U] 
                                              * vlSelfRef.SA_tb__DOT__W[2U][0U]));
    vlSelfRef.SA_tb__DOT__C_exp[1U][1U] = 0U;
    vlSelfRef.SA_tb__DOT__C_exp[1U][1U] = (vlSelfRef.SA_tb__DOT__C_exp[1U][1U] 
                                           + (vlSelfRef.SA_tb__DOT__A[1U][0U] 
                                              * vlSelfRef.SA_tb__DOT__W[0U][1U]));
    vlSelfRef.SA_tb__DOT__C_exp[1U][1U] = (vlSelfRef.SA_tb__DOT__C_exp[1U][1U] 
                                           + (vlSelfRef.SA_tb__DOT__A[1U][1U] 
                                              * vlSelfRef.SA_tb__DOT__W[1U][1U]));
    vlSelfRef.SA_tb__DOT__C_exp[1U][1U] = (vlSelfRef.SA_tb__DOT__C_exp[1U][1U] 
                                           + (vlSelfRef.SA_tb__DOT__A[1U][2U] 
                                              * vlSelfRef.SA_tb__DOT__W[2U][1U]));
    vlSelfRef.SA_tb__DOT__C_exp[1U][2U] = 0U;
    vlSelfRef.SA_tb__DOT__C_exp[1U][2U] = (vlSelfRef.SA_tb__DOT__C_exp[1U][2U] 
                                           + (vlSelfRef.SA_tb__DOT__A[1U][0U] 
                                              * vlSelfRef.SA_tb__DOT__W[0U][2U]));
    vlSelfRef.SA_tb__DOT__C_exp[1U][2U] = (vlSelfRef.SA_tb__DOT__C_exp[1U][2U] 
                                           + (vlSelfRef.SA_tb__DOT__A[1U][1U] 
                                              * vlSelfRef.SA_tb__DOT__W[1U][2U]));
    vlSelfRef.SA_tb__DOT__C_exp[1U][2U] = (vlSelfRef.SA_tb__DOT__C_exp[1U][2U] 
                                           + (vlSelfRef.SA_tb__DOT__A[1U][2U] 
                                              * vlSelfRef.SA_tb__DOT__W[2U][2U]));
    vlSelfRef.SA_tb__DOT__C_exp[2U][0U] = 0U;
    vlSelfRef.SA_tb__DOT__C_exp[2U][0U] = (vlSelfRef.SA_tb__DOT__C_exp[2U][0U] 
                                           + (vlSelfRef.SA_tb__DOT__A[2U][0U] 
                                              * vlSelfRef.SA_tb__DOT__W[0U][0U]));
    vlSelfRef.SA_tb__DOT__C_exp[2U][0U] = (vlSelfRef.SA_tb__DOT__C_exp[2U][0U] 
                                           + (vlSelfRef.SA_tb__DOT__A[2U][1U] 
                                              * vlSelfRef.SA_tb__DOT__W[1U][0U]));
    vlSelfRef.SA_tb__DOT__C_exp[2U][0U] = (vlSelfRef.SA_tb__DOT__C_exp[2U][0U] 
                                           + (vlSelfRef.SA_tb__DOT__A[2U][2U] 
                                              * vlSelfRef.SA_tb__DOT__W[2U][0U]));
    vlSelfRef.SA_tb__DOT__C_exp[2U][1U] = 0U;
    vlSelfRef.SA_tb__DOT__C_exp[2U][1U] = (vlSelfRef.SA_tb__DOT__C_exp[2U][1U] 
                                           + (vlSelfRef.SA_tb__DOT__A[2U][0U] 
                                              * vlSelfRef.SA_tb__DOT__W[0U][1U]));
    vlSelfRef.SA_tb__DOT__C_exp[2U][1U] = (vlSelfRef.SA_tb__DOT__C_exp[2U][1U] 
                                           + (vlSelfRef.SA_tb__DOT__A[2U][1U] 
                                              * vlSelfRef.SA_tb__DOT__W[1U][1U]));
    vlSelfRef.SA_tb__DOT__C_exp[2U][1U] = (vlSelfRef.SA_tb__DOT__C_exp[2U][1U] 
                                           + (vlSelfRef.SA_tb__DOT__A[2U][2U] 
                                              * vlSelfRef.SA_tb__DOT__W[2U][1U]));
    vlSelfRef.SA_tb__DOT__C_exp[2U][2U] = 0U;
    vlSelfRef.SA_tb__DOT__C_exp[2U][2U] = (vlSelfRef.SA_tb__DOT__C_exp[2U][2U] 
                                           + (vlSelfRef.SA_tb__DOT__A[2U][0U] 
                                              * vlSelfRef.SA_tb__DOT__W[0U][2U]));
    vlSelfRef.SA_tb__DOT__C_exp[2U][2U] = (vlSelfRef.SA_tb__DOT__C_exp[2U][2U] 
                                           + (vlSelfRef.SA_tb__DOT__A[2U][1U] 
                                              * vlSelfRef.SA_tb__DOT__W[1U][2U]));
    vlSelfRef.SA_tb__DOT__C_exp[2U][2U] = (vlSelfRef.SA_tb__DOT__C_exp[2U][2U] 
                                           + (vlSelfRef.SA_tb__DOT__A[2U][2U] 
                                              * vlSelfRef.SA_tb__DOT__W[2U][2U]));
    VSA_tb___024root____VbeforeTrig_h81bc4b78__0(vlSelf, 
                                                 "@(negedge SA_tb.clk)");
    co_await vlSelfRef.__VtrigSched_h81bc4b78__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge SA_tb.clk)", 
                                                         "SA_tb.sv", 
                                                         313);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.SA_tb__DOT__in_valid = 1U;
    vlSelfRef.SA_tb__DOT__load_slot = 0U;
    vlSelfRef.SA_tb__DOT__compute_slot = 1U;
    vlSelfRef.SA_tb__DOT__b_in[0U][0U] = vlSelfRef.SA_tb__DOT__W[0U][0U];
    vlSelfRef.SA_tb__DOT__b_in[0U][1U] = vlSelfRef.SA_tb__DOT__W[0U][1U];
    vlSelfRef.SA_tb__DOT__b_in[0U][2U] = vlSelfRef.SA_tb__DOT__W[0U][2U];
    vlSelfRef.SA_tb__DOT__b_in[1U][0U] = vlSelfRef.SA_tb__DOT__W[1U][0U];
    vlSelfRef.SA_tb__DOT__b_in[1U][1U] = vlSelfRef.SA_tb__DOT__W[1U][1U];
    vlSelfRef.SA_tb__DOT__b_in[1U][2U] = vlSelfRef.SA_tb__DOT__W[1U][2U];
    vlSelfRef.SA_tb__DOT__b_in[2U][0U] = vlSelfRef.SA_tb__DOT__W[2U][0U];
    vlSelfRef.SA_tb__DOT__b_in[2U][1U] = vlSelfRef.SA_tb__DOT__W[2U][1U];
    vlSelfRef.SA_tb__DOT__b_in[2U][2U] = vlSelfRef.SA_tb__DOT__W[2U][2U];
    VSA_tb___024root____VbeforeTrig_h81bc4b78__0(vlSelf, 
                                                 "@(negedge SA_tb.clk)");
    co_await vlSelfRef.__VtrigSched_h81bc4b78__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge SA_tb.clk)", 
                                                         "SA_tb.sv", 
                                                         324);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.SA_tb__DOT__in_valid = 0U;
    vlSelfRef.SA_tb__DOT__load_slot = 1U;
    vlSelfRef.SA_tb__DOT__compute_slot = 0U;
    vlSelfRef.SA_tb__DOT__en = 1U;
    vlSelfRef.SA_tb__DOT__a_in[0U] = 0U;
    vlSelfRef.SA_tb__DOT__a_in[1U] = 0U;
    vlSelfRef.SA_tb__DOT__a_in[2U] = 0U;
    SA_tb__DOT__unnamedblk1_7__DOT____Vrepeat6 = 3U;
    while (VL_LTS_III(32, 0U, SA_tb__DOT__unnamedblk1_7__DOT____Vrepeat6)) {
        VSA_tb___024root____VbeforeTrig_h81bc4b78__0(vlSelf, 
                                                     "@(negedge SA_tb.clk)");
        co_await vlSelfRef.__VtrigSched_h81bc4b78__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge SA_tb.clk)", 
                                                             "SA_tb.sv", 
                                                             331);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        SA_tb__DOT__unnamedblk1_7__DOT____Vrepeat6 
            = (SA_tb__DOT__unnamedblk1_7__DOT____Vrepeat6 
               - (IData)(1U));
    }
    SA_tb__DOT__unnamedblk32__DOT__k = 0U;
    while (VL_GTS_III(32, 8U, SA_tb__DOT__unnamedblk32__DOT__k)) {
        VSA_tb___024root____VbeforeTrig_h81bc4b78__0(vlSelf, 
                                                     "@(negedge SA_tb.clk)");
        co_await vlSelfRef.__VtrigSched_h81bc4b78__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge SA_tb.clk)", 
                                                             "SA_tb.sv", 
                                                             336);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        if ((VL_LTES_III(32, 0U, (SA_tb__DOT__unnamedblk32__DOT__k 
                                  - (IData)(3U))) & 
             VL_GTS_III(32, 3U, (SA_tb__DOT__unnamedblk32__DOT__k 
                                 - (IData)(3U))))) {
            vlSelfRef.SA_tb__DOT__checks = ((IData)(1U) 
                                            + vlSelfRef.SA_tb__DOT__checks);
            if (VL_UNLIKELY(((vlSelfRef.SA_tb__DOT__result_matrix[0U] 
                              != (0x000003ffU & vlSelfRef.SA_tb__DOT__C_exp
                                  [((2U >= (3U & (SA_tb__DOT__unnamedblk32__DOT__k 
                                                  - (IData)(3U))))
                                     ? (3U & (SA_tb__DOT__unnamedblk32__DOT__k 
                                              - (IData)(3U)))
                                     : 0U)][0U]))))) {
                vlSelfRef.SA_tb__DOT__errors = ((IData)(1U) 
                                                + vlSelfRef.SA_tb__DOT__errors);
                VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:344: Assertion failed in %m: [%0t] C[%0d][0]: expected %0d, got %0d\n",7, 'M',vlSymsp->name(),"SA_tb.unnamedblk32.unnamedblk33", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '~',32,(SA_tb__DOT__unnamedblk32__DOT__k 
                                       - (IData)(3U))
                             , '~',32,vlSelfRef.SA_tb__DOT__C_exp
                             [((2U >= (3U & (SA_tb__DOT__unnamedblk32__DOT__k 
                                             - (IData)(3U))))
                                ? (3U & (SA_tb__DOT__unnamedblk32__DOT__k 
                                         - (IData)(3U)))
                                : 0U)][0U], '#',10,vlSelfRef.SA_tb__DOT__result_matrix[0U]);
                VL_STOP_MT("SA_tb.sv", 344, "");
            }
        }
        if ((VL_LTES_III(32, 0U, ((SA_tb__DOT__unnamedblk32__DOT__k 
                                   - (IData)(3U)) - (IData)(1U))) 
             & VL_GTS_III(32, 3U, ((SA_tb__DOT__unnamedblk32__DOT__k 
                                    - (IData)(3U)) 
                                   - (IData)(1U))))) {
            vlSelfRef.SA_tb__DOT__checks = ((IData)(1U) 
                                            + vlSelfRef.SA_tb__DOT__checks);
            if (VL_UNLIKELY(((vlSelfRef.SA_tb__DOT__result_matrix[1U] 
                              != (0x000003ffU & vlSelfRef.SA_tb__DOT__C_exp
                                  [((2U >= (3U & ((SA_tb__DOT__unnamedblk32__DOT__k 
                                                   - (IData)(3U)) 
                                                  - (IData)(1U))))
                                     ? (3U & ((SA_tb__DOT__unnamedblk32__DOT__k 
                                               - (IData)(3U)) 
                                              - (IData)(1U)))
                                     : 0U)][1U]))))) {
                vlSelfRef.SA_tb__DOT__errors = ((IData)(1U) 
                                                + vlSelfRef.SA_tb__DOT__errors);
                VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:344: Assertion failed in %m: [%0t] C[%0d][1]: expected %0d, got %0d\n",7, 'M',vlSymsp->name(),"SA_tb.unnamedblk32.unnamedblk33", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '~',32,((SA_tb__DOT__unnamedblk32__DOT__k 
                                        - (IData)(3U)) 
                                       - (IData)(1U))
                             , '~',32,vlSelfRef.SA_tb__DOT__C_exp
                             [((2U >= (3U & ((SA_tb__DOT__unnamedblk32__DOT__k 
                                              - (IData)(3U)) 
                                             - (IData)(1U))))
                                ? (3U & ((SA_tb__DOT__unnamedblk32__DOT__k 
                                          - (IData)(3U)) 
                                         - (IData)(1U)))
                                : 0U)][1U], '#',10,vlSelfRef.SA_tb__DOT__result_matrix[1U]);
                VL_STOP_MT("SA_tb.sv", 344, "");
            }
        }
        if ((VL_LTES_III(32, 0U, ((SA_tb__DOT__unnamedblk32__DOT__k 
                                   - (IData)(3U)) - (IData)(2U))) 
             & VL_GTS_III(32, 3U, ((SA_tb__DOT__unnamedblk32__DOT__k 
                                    - (IData)(3U)) 
                                   - (IData)(2U))))) {
            vlSelfRef.SA_tb__DOT__checks = ((IData)(1U) 
                                            + vlSelfRef.SA_tb__DOT__checks);
            if (VL_UNLIKELY(((vlSelfRef.SA_tb__DOT__result_matrix[2U] 
                              != (0x000003ffU & vlSelfRef.SA_tb__DOT__C_exp
                                  [((2U >= (3U & ((SA_tb__DOT__unnamedblk32__DOT__k 
                                                   - (IData)(3U)) 
                                                  - (IData)(2U))))
                                     ? (3U & ((SA_tb__DOT__unnamedblk32__DOT__k 
                                               - (IData)(3U)) 
                                              - (IData)(2U)))
                                     : 0U)][2U]))))) {
                vlSelfRef.SA_tb__DOT__errors = ((IData)(1U) 
                                                + vlSelfRef.SA_tb__DOT__errors);
                VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:344: Assertion failed in %m: [%0t] C[%0d][2]: expected %0d, got %0d\n",7, 'M',vlSymsp->name(),"SA_tb.unnamedblk32.unnamedblk33", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '~',32,((SA_tb__DOT__unnamedblk32__DOT__k 
                                        - (IData)(3U)) 
                                       - (IData)(2U))
                             , '~',32,vlSelfRef.SA_tb__DOT__C_exp
                             [((2U >= (3U & ((SA_tb__DOT__unnamedblk32__DOT__k 
                                              - (IData)(3U)) 
                                             - (IData)(2U))))
                                ? (3U & ((SA_tb__DOT__unnamedblk32__DOT__k 
                                          - (IData)(3U)) 
                                         - (IData)(2U)))
                                : 0U)][2U], '#',10,vlSelfRef.SA_tb__DOT__result_matrix[2U]);
                VL_STOP_MT("SA_tb.sv", 344, "");
            }
        }
        vlSelfRef.SA_tb__DOT__a_in[0U] = ((VL_LTES_III(32, 0U, SA_tb__DOT__unnamedblk32__DOT__k) 
                                           & VL_GTS_III(32, 3U, SA_tb__DOT__unnamedblk32__DOT__k))
                                           ? vlSelfRef.SA_tb__DOT__A
                                          [((2U >= 
                                             (3U & SA_tb__DOT__unnamedblk32__DOT__k))
                                             ? (3U 
                                                & SA_tb__DOT__unnamedblk32__DOT__k)
                                             : 0U)][0U]
                                           : 0U);
        vlSelfRef.SA_tb__DOT__a_in[1U] = ((VL_LTES_III(32, 0U, 
                                                       (SA_tb__DOT__unnamedblk32__DOT__k 
                                                        - (IData)(1U))) 
                                           & VL_GTS_III(32, 3U, 
                                                        (SA_tb__DOT__unnamedblk32__DOT__k 
                                                         - (IData)(1U))))
                                           ? vlSelfRef.SA_tb__DOT__A
                                          [((2U >= 
                                             (3U & 
                                              (SA_tb__DOT__unnamedblk32__DOT__k 
                                               - (IData)(1U))))
                                             ? (3U 
                                                & (SA_tb__DOT__unnamedblk32__DOT__k 
                                                   - (IData)(1U)))
                                             : 0U)][1U]
                                           : 0U);
        vlSelfRef.SA_tb__DOT__a_in[2U] = ((VL_LTES_III(32, 0U, 
                                                       (SA_tb__DOT__unnamedblk32__DOT__k 
                                                        - (IData)(2U))) 
                                           & VL_GTS_III(32, 3U, 
                                                        (SA_tb__DOT__unnamedblk32__DOT__k 
                                                         - (IData)(2U))))
                                           ? vlSelfRef.SA_tb__DOT__A
                                          [((2U >= 
                                             (3U & 
                                              (SA_tb__DOT__unnamedblk32__DOT__k 
                                               - (IData)(2U))))
                                             ? (3U 
                                                & (SA_tb__DOT__unnamedblk32__DOT__k 
                                                   - (IData)(2U)))
                                             : 0U)][2U]
                                           : 0U);
        SA_tb__DOT__unnamedblk32__DOT__k = ((IData)(1U) 
                                            + SA_tb__DOT__unnamedblk32__DOT__k);
    }
    SA_tb__DOT__unnamedblk1_8__DOT____Vrepeat7 = 3U;
    if ((vlSelfRef.SA_tb__DOT__errors == vlSelfRef.SA_tb__DOT__test_errors)) {
        VL_WRITEF_NX("Test 5 passed: Max matrix multiply correct\n",0);
    } else {
        VL_WRITEF_NX("Test 5 FAILED: Max matrix multiply\n",0);
    }
    while (VL_LTS_III(32, 0U, SA_tb__DOT__unnamedblk1_8__DOT____Vrepeat7)) {
        VSA_tb___024root____VbeforeTrig_h81bc4b78__0(vlSelf, 
                                                     "@(negedge SA_tb.clk)");
        co_await vlSelfRef.__VtrigSched_h81bc4b78__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge SA_tb.clk)", 
                                                             "SA_tb.sv", 
                                                             358);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        SA_tb__DOT__unnamedblk1_8__DOT____Vrepeat7 
            = (SA_tb__DOT__unnamedblk1_8__DOT____Vrepeat7 
               - (IData)(1U));
    }
    vlSelfRef.SA_tb__DOT__test_num = ((IData)(1U) + vlSelfRef.SA_tb__DOT__test_num);
    vlSelfRef.SA_tb__DOT__test_errors = vlSelfRef.SA_tb__DOT__errors;
    vlSelfRef.SA_tb__DOT__A[0U][0U] = 1U;
    vlSelfRef.SA_tb__DOT__A[0U][1U] = 2U;
    vlSelfRef.SA_tb__DOT__A[0U][2U] = 3U;
    vlSelfRef.SA_tb__DOT__A[1U][0U] = 4U;
    vlSelfRef.SA_tb__DOT__A[1U][1U] = 5U;
    vlSelfRef.SA_tb__DOT__A[1U][2U] = 6U;
    vlSelfRef.SA_tb__DOT__A[2U][0U] = 7U;
    vlSelfRef.SA_tb__DOT__A[2U][1U] = 8U;
    vlSelfRef.SA_tb__DOT__A[2U][2U] = 9U;
    vlSelfRef.SA_tb__DOT__W[0U][0U] = 1U;
    vlSelfRef.SA_tb__DOT__W[0U][1U] = 0U;
    vlSelfRef.SA_tb__DOT__W[0U][2U] = 2U;
    vlSelfRef.SA_tb__DOT__W[1U][0U] = 3U;
    vlSelfRef.SA_tb__DOT__W[1U][1U] = 1U;
    vlSelfRef.SA_tb__DOT__W[1U][2U] = 0U;
    vlSelfRef.SA_tb__DOT__W[2U][0U] = 0U;
    vlSelfRef.SA_tb__DOT__W[2U][1U] = 2U;
    vlSelfRef.SA_tb__DOT__W[2U][2U] = 1U;
    vlSelfRef.SA_tb__DOT__W2[0U][0U] = 2U;
    vlSelfRef.SA_tb__DOT__W2[0U][1U] = 1U;
    vlSelfRef.SA_tb__DOT__W2[0U][2U] = 0U;
    vlSelfRef.SA_tb__DOT__W2[1U][0U] = 0U;
    vlSelfRef.SA_tb__DOT__W2[1U][1U] = 3U;
    vlSelfRef.SA_tb__DOT__W2[1U][2U] = 1U;
    vlSelfRef.SA_tb__DOT__W2[2U][0U] = 1U;
    vlSelfRef.SA_tb__DOT__W2[2U][1U] = 0U;
    vlSelfRef.SA_tb__DOT__W2[2U][2U] = 2U;
    vlSelfRef.SA_tb__DOT__C_exp[0U][0U] = 0U;
    vlSelfRef.SA_tb__DOT__C_exp2[0U][0U] = 0U;
    vlSelfRef.SA_tb__DOT__C_exp[0U][0U] = (vlSelfRef.SA_tb__DOT__C_exp[0U][0U] 
                                           + (vlSelfRef.SA_tb__DOT__A[0U][0U] 
                                              * vlSelfRef.SA_tb__DOT__W[0U][0U]));
    vlSelfRef.SA_tb__DOT__C_exp2[0U][0U] = (vlSelfRef.SA_tb__DOT__C_exp2[0U][0U] 
                                            + (vlSelfRef.SA_tb__DOT__A[0U][0U] 
                                               * vlSelfRef.SA_tb__DOT__W2[0U][0U]));
    vlSelfRef.SA_tb__DOT__C_exp[0U][0U] = (vlSelfRef.SA_tb__DOT__C_exp[0U][0U] 
                                           + (vlSelfRef.SA_tb__DOT__A[0U][1U] 
                                              * vlSelfRef.SA_tb__DOT__W[1U][0U]));
    vlSelfRef.SA_tb__DOT__C_exp2[0U][0U] = (vlSelfRef.SA_tb__DOT__C_exp2[0U][0U] 
                                            + (vlSelfRef.SA_tb__DOT__A[0U][1U] 
                                               * vlSelfRef.SA_tb__DOT__W2[1U][0U]));
    vlSelfRef.SA_tb__DOT__C_exp[0U][0U] = (vlSelfRef.SA_tb__DOT__C_exp[0U][0U] 
                                           + (vlSelfRef.SA_tb__DOT__A[0U][2U] 
                                              * vlSelfRef.SA_tb__DOT__W[2U][0U]));
    vlSelfRef.SA_tb__DOT__C_exp2[0U][0U] = (vlSelfRef.SA_tb__DOT__C_exp2[0U][0U] 
                                            + (vlSelfRef.SA_tb__DOT__A[0U][2U] 
                                               * vlSelfRef.SA_tb__DOT__W2[2U][0U]));
    vlSelfRef.SA_tb__DOT__C_exp[0U][1U] = 0U;
    vlSelfRef.SA_tb__DOT__C_exp2[0U][1U] = 0U;
    vlSelfRef.SA_tb__DOT__C_exp[0U][1U] = (vlSelfRef.SA_tb__DOT__C_exp[0U][1U] 
                                           + (vlSelfRef.SA_tb__DOT__A[0U][0U] 
                                              * vlSelfRef.SA_tb__DOT__W[0U][1U]));
    vlSelfRef.SA_tb__DOT__C_exp2[0U][1U] = (vlSelfRef.SA_tb__DOT__C_exp2[0U][1U] 
                                            + (vlSelfRef.SA_tb__DOT__A[0U][0U] 
                                               * vlSelfRef.SA_tb__DOT__W2[0U][1U]));
    vlSelfRef.SA_tb__DOT__C_exp[0U][1U] = (vlSelfRef.SA_tb__DOT__C_exp[0U][1U] 
                                           + (vlSelfRef.SA_tb__DOT__A[0U][1U] 
                                              * vlSelfRef.SA_tb__DOT__W[1U][1U]));
    vlSelfRef.SA_tb__DOT__C_exp2[0U][1U] = (vlSelfRef.SA_tb__DOT__C_exp2[0U][1U] 
                                            + (vlSelfRef.SA_tb__DOT__A[0U][1U] 
                                               * vlSelfRef.SA_tb__DOT__W2[1U][1U]));
    vlSelfRef.SA_tb__DOT__C_exp[0U][1U] = (vlSelfRef.SA_tb__DOT__C_exp[0U][1U] 
                                           + (vlSelfRef.SA_tb__DOT__A[0U][2U] 
                                              * vlSelfRef.SA_tb__DOT__W[2U][1U]));
    vlSelfRef.SA_tb__DOT__C_exp2[0U][1U] = (vlSelfRef.SA_tb__DOT__C_exp2[0U][1U] 
                                            + (vlSelfRef.SA_tb__DOT__A[0U][2U] 
                                               * vlSelfRef.SA_tb__DOT__W2[2U][1U]));
    vlSelfRef.SA_tb__DOT__C_exp[0U][2U] = 0U;
    vlSelfRef.SA_tb__DOT__C_exp2[0U][2U] = 0U;
    vlSelfRef.SA_tb__DOT__C_exp[0U][2U] = (vlSelfRef.SA_tb__DOT__C_exp[0U][2U] 
                                           + (vlSelfRef.SA_tb__DOT__A[0U][0U] 
                                              * vlSelfRef.SA_tb__DOT__W[0U][2U]));
    vlSelfRef.SA_tb__DOT__C_exp2[0U][2U] = (vlSelfRef.SA_tb__DOT__C_exp2[0U][2U] 
                                            + (vlSelfRef.SA_tb__DOT__A[0U][0U] 
                                               * vlSelfRef.SA_tb__DOT__W2[0U][2U]));
    vlSelfRef.SA_tb__DOT__C_exp[0U][2U] = (vlSelfRef.SA_tb__DOT__C_exp[0U][2U] 
                                           + (vlSelfRef.SA_tb__DOT__A[0U][1U] 
                                              * vlSelfRef.SA_tb__DOT__W[1U][2U]));
    vlSelfRef.SA_tb__DOT__C_exp2[0U][2U] = (vlSelfRef.SA_tb__DOT__C_exp2[0U][2U] 
                                            + (vlSelfRef.SA_tb__DOT__A[0U][1U] 
                                               * vlSelfRef.SA_tb__DOT__W2[1U][2U]));
    vlSelfRef.SA_tb__DOT__C_exp[0U][2U] = (vlSelfRef.SA_tb__DOT__C_exp[0U][2U] 
                                           + (vlSelfRef.SA_tb__DOT__A[0U][2U] 
                                              * vlSelfRef.SA_tb__DOT__W[2U][2U]));
    vlSelfRef.SA_tb__DOT__C_exp2[0U][2U] = (vlSelfRef.SA_tb__DOT__C_exp2[0U][2U] 
                                            + (vlSelfRef.SA_tb__DOT__A[0U][2U] 
                                               * vlSelfRef.SA_tb__DOT__W2[2U][2U]));
    vlSelfRef.SA_tb__DOT__C_exp[1U][0U] = 0U;
    vlSelfRef.SA_tb__DOT__C_exp2[1U][0U] = 0U;
    vlSelfRef.SA_tb__DOT__C_exp[1U][0U] = (vlSelfRef.SA_tb__DOT__C_exp[1U][0U] 
                                           + (vlSelfRef.SA_tb__DOT__A[1U][0U] 
                                              * vlSelfRef.SA_tb__DOT__W[0U][0U]));
    vlSelfRef.SA_tb__DOT__C_exp2[1U][0U] = (vlSelfRef.SA_tb__DOT__C_exp2[1U][0U] 
                                            + (vlSelfRef.SA_tb__DOT__A[1U][0U] 
                                               * vlSelfRef.SA_tb__DOT__W2[0U][0U]));
    vlSelfRef.SA_tb__DOT__C_exp[1U][0U] = (vlSelfRef.SA_tb__DOT__C_exp[1U][0U] 
                                           + (vlSelfRef.SA_tb__DOT__A[1U][1U] 
                                              * vlSelfRef.SA_tb__DOT__W[1U][0U]));
    vlSelfRef.SA_tb__DOT__C_exp2[1U][0U] = (vlSelfRef.SA_tb__DOT__C_exp2[1U][0U] 
                                            + (vlSelfRef.SA_tb__DOT__A[1U][1U] 
                                               * vlSelfRef.SA_tb__DOT__W2[1U][0U]));
    vlSelfRef.SA_tb__DOT__C_exp[1U][0U] = (vlSelfRef.SA_tb__DOT__C_exp[1U][0U] 
                                           + (vlSelfRef.SA_tb__DOT__A[1U][2U] 
                                              * vlSelfRef.SA_tb__DOT__W[2U][0U]));
    vlSelfRef.SA_tb__DOT__C_exp2[1U][0U] = (vlSelfRef.SA_tb__DOT__C_exp2[1U][0U] 
                                            + (vlSelfRef.SA_tb__DOT__A[1U][2U] 
                                               * vlSelfRef.SA_tb__DOT__W2[2U][0U]));
    vlSelfRef.SA_tb__DOT__C_exp[1U][1U] = 0U;
    vlSelfRef.SA_tb__DOT__C_exp2[1U][1U] = 0U;
    vlSelfRef.SA_tb__DOT__C_exp[1U][1U] = (vlSelfRef.SA_tb__DOT__C_exp[1U][1U] 
                                           + (vlSelfRef.SA_tb__DOT__A[1U][0U] 
                                              * vlSelfRef.SA_tb__DOT__W[0U][1U]));
    vlSelfRef.SA_tb__DOT__C_exp2[1U][1U] = (vlSelfRef.SA_tb__DOT__C_exp2[1U][1U] 
                                            + (vlSelfRef.SA_tb__DOT__A[1U][0U] 
                                               * vlSelfRef.SA_tb__DOT__W2[0U][1U]));
    vlSelfRef.SA_tb__DOT__C_exp[1U][1U] = (vlSelfRef.SA_tb__DOT__C_exp[1U][1U] 
                                           + (vlSelfRef.SA_tb__DOT__A[1U][1U] 
                                              * vlSelfRef.SA_tb__DOT__W[1U][1U]));
    vlSelfRef.SA_tb__DOT__C_exp2[1U][1U] = (vlSelfRef.SA_tb__DOT__C_exp2[1U][1U] 
                                            + (vlSelfRef.SA_tb__DOT__A[1U][1U] 
                                               * vlSelfRef.SA_tb__DOT__W2[1U][1U]));
    vlSelfRef.SA_tb__DOT__C_exp[1U][1U] = (vlSelfRef.SA_tb__DOT__C_exp[1U][1U] 
                                           + (vlSelfRef.SA_tb__DOT__A[1U][2U] 
                                              * vlSelfRef.SA_tb__DOT__W[2U][1U]));
    vlSelfRef.SA_tb__DOT__C_exp2[1U][1U] = (vlSelfRef.SA_tb__DOT__C_exp2[1U][1U] 
                                            + (vlSelfRef.SA_tb__DOT__A[1U][2U] 
                                               * vlSelfRef.SA_tb__DOT__W2[2U][1U]));
    vlSelfRef.SA_tb__DOT__C_exp[1U][2U] = 0U;
    vlSelfRef.SA_tb__DOT__C_exp2[1U][2U] = 0U;
    vlSelfRef.SA_tb__DOT__C_exp[1U][2U] = (vlSelfRef.SA_tb__DOT__C_exp[1U][2U] 
                                           + (vlSelfRef.SA_tb__DOT__A[1U][0U] 
                                              * vlSelfRef.SA_tb__DOT__W[0U][2U]));
    vlSelfRef.SA_tb__DOT__C_exp2[1U][2U] = (vlSelfRef.SA_tb__DOT__C_exp2[1U][2U] 
                                            + (vlSelfRef.SA_tb__DOT__A[1U][0U] 
                                               * vlSelfRef.SA_tb__DOT__W2[0U][2U]));
    vlSelfRef.SA_tb__DOT__C_exp[1U][2U] = (vlSelfRef.SA_tb__DOT__C_exp[1U][2U] 
                                           + (vlSelfRef.SA_tb__DOT__A[1U][1U] 
                                              * vlSelfRef.SA_tb__DOT__W[1U][2U]));
    vlSelfRef.SA_tb__DOT__C_exp2[1U][2U] = (vlSelfRef.SA_tb__DOT__C_exp2[1U][2U] 
                                            + (vlSelfRef.SA_tb__DOT__A[1U][1U] 
                                               * vlSelfRef.SA_tb__DOT__W2[1U][2U]));
    vlSelfRef.SA_tb__DOT__C_exp[1U][2U] = (vlSelfRef.SA_tb__DOT__C_exp[1U][2U] 
                                           + (vlSelfRef.SA_tb__DOT__A[1U][2U] 
                                              * vlSelfRef.SA_tb__DOT__W[2U][2U]));
    vlSelfRef.SA_tb__DOT__C_exp2[1U][2U] = (vlSelfRef.SA_tb__DOT__C_exp2[1U][2U] 
                                            + (vlSelfRef.SA_tb__DOT__A[1U][2U] 
                                               * vlSelfRef.SA_tb__DOT__W2[2U][2U]));
    vlSelfRef.SA_tb__DOT__C_exp[2U][0U] = 0U;
    vlSelfRef.SA_tb__DOT__C_exp2[2U][0U] = 0U;
    vlSelfRef.SA_tb__DOT__C_exp[2U][0U] = (vlSelfRef.SA_tb__DOT__C_exp[2U][0U] 
                                           + (vlSelfRef.SA_tb__DOT__A[2U][0U] 
                                              * vlSelfRef.SA_tb__DOT__W[0U][0U]));
    vlSelfRef.SA_tb__DOT__C_exp2[2U][0U] = (vlSelfRef.SA_tb__DOT__C_exp2[2U][0U] 
                                            + (vlSelfRef.SA_tb__DOT__A[2U][0U] 
                                               * vlSelfRef.SA_tb__DOT__W2[0U][0U]));
    vlSelfRef.SA_tb__DOT__C_exp[2U][0U] = (vlSelfRef.SA_tb__DOT__C_exp[2U][0U] 
                                           + (vlSelfRef.SA_tb__DOT__A[2U][1U] 
                                              * vlSelfRef.SA_tb__DOT__W[1U][0U]));
    vlSelfRef.SA_tb__DOT__C_exp2[2U][0U] = (vlSelfRef.SA_tb__DOT__C_exp2[2U][0U] 
                                            + (vlSelfRef.SA_tb__DOT__A[2U][1U] 
                                               * vlSelfRef.SA_tb__DOT__W2[1U][0U]));
    vlSelfRef.SA_tb__DOT__C_exp[2U][0U] = (vlSelfRef.SA_tb__DOT__C_exp[2U][0U] 
                                           + (vlSelfRef.SA_tb__DOT__A[2U][2U] 
                                              * vlSelfRef.SA_tb__DOT__W[2U][0U]));
    vlSelfRef.SA_tb__DOT__C_exp2[2U][0U] = (vlSelfRef.SA_tb__DOT__C_exp2[2U][0U] 
                                            + (vlSelfRef.SA_tb__DOT__A[2U][2U] 
                                               * vlSelfRef.SA_tb__DOT__W2[2U][0U]));
    vlSelfRef.SA_tb__DOT__C_exp[2U][1U] = 0U;
    vlSelfRef.SA_tb__DOT__C_exp2[2U][1U] = 0U;
    vlSelfRef.SA_tb__DOT__C_exp[2U][1U] = (vlSelfRef.SA_tb__DOT__C_exp[2U][1U] 
                                           + (vlSelfRef.SA_tb__DOT__A[2U][0U] 
                                              * vlSelfRef.SA_tb__DOT__W[0U][1U]));
    vlSelfRef.SA_tb__DOT__C_exp2[2U][1U] = (vlSelfRef.SA_tb__DOT__C_exp2[2U][1U] 
                                            + (vlSelfRef.SA_tb__DOT__A[2U][0U] 
                                               * vlSelfRef.SA_tb__DOT__W2[0U][1U]));
    vlSelfRef.SA_tb__DOT__C_exp[2U][1U] = (vlSelfRef.SA_tb__DOT__C_exp[2U][1U] 
                                           + (vlSelfRef.SA_tb__DOT__A[2U][1U] 
                                              * vlSelfRef.SA_tb__DOT__W[1U][1U]));
    vlSelfRef.SA_tb__DOT__C_exp2[2U][1U] = (vlSelfRef.SA_tb__DOT__C_exp2[2U][1U] 
                                            + (vlSelfRef.SA_tb__DOT__A[2U][1U] 
                                               * vlSelfRef.SA_tb__DOT__W2[1U][1U]));
    vlSelfRef.SA_tb__DOT__C_exp[2U][1U] = (vlSelfRef.SA_tb__DOT__C_exp[2U][1U] 
                                           + (vlSelfRef.SA_tb__DOT__A[2U][2U] 
                                              * vlSelfRef.SA_tb__DOT__W[2U][1U]));
    vlSelfRef.SA_tb__DOT__C_exp2[2U][1U] = (vlSelfRef.SA_tb__DOT__C_exp2[2U][1U] 
                                            + (vlSelfRef.SA_tb__DOT__A[2U][2U] 
                                               * vlSelfRef.SA_tb__DOT__W2[2U][1U]));
    vlSelfRef.SA_tb__DOT__C_exp[2U][2U] = 0U;
    vlSelfRef.SA_tb__DOT__C_exp2[2U][2U] = 0U;
    vlSelfRef.SA_tb__DOT__C_exp[2U][2U] = (vlSelfRef.SA_tb__DOT__C_exp[2U][2U] 
                                           + (vlSelfRef.SA_tb__DOT__A[2U][0U] 
                                              * vlSelfRef.SA_tb__DOT__W[0U][2U]));
    vlSelfRef.SA_tb__DOT__C_exp2[2U][2U] = (vlSelfRef.SA_tb__DOT__C_exp2[2U][2U] 
                                            + (vlSelfRef.SA_tb__DOT__A[2U][0U] 
                                               * vlSelfRef.SA_tb__DOT__W2[0U][2U]));
    vlSelfRef.SA_tb__DOT__C_exp[2U][2U] = (vlSelfRef.SA_tb__DOT__C_exp[2U][2U] 
                                           + (vlSelfRef.SA_tb__DOT__A[2U][1U] 
                                              * vlSelfRef.SA_tb__DOT__W[1U][2U]));
    vlSelfRef.SA_tb__DOT__C_exp2[2U][2U] = (vlSelfRef.SA_tb__DOT__C_exp2[2U][2U] 
                                            + (vlSelfRef.SA_tb__DOT__A[2U][1U] 
                                               * vlSelfRef.SA_tb__DOT__W2[1U][2U]));
    vlSelfRef.SA_tb__DOT__C_exp[2U][2U] = (vlSelfRef.SA_tb__DOT__C_exp[2U][2U] 
                                           + (vlSelfRef.SA_tb__DOT__A[2U][2U] 
                                              * vlSelfRef.SA_tb__DOT__W[2U][2U]));
    vlSelfRef.SA_tb__DOT__C_exp2[2U][2U] = (vlSelfRef.SA_tb__DOT__C_exp2[2U][2U] 
                                            + (vlSelfRef.SA_tb__DOT__A[2U][2U] 
                                               * vlSelfRef.SA_tb__DOT__W2[2U][2U]));
    VSA_tb___024root____VbeforeTrig_h81bc4b78__0(vlSelf, 
                                                 "@(negedge SA_tb.clk)");
    co_await vlSelfRef.__VtrigSched_h81bc4b78__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge SA_tb.clk)", 
                                                         "SA_tb.sv", 
                                                         388);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.SA_tb__DOT__en = 0U;
    vlSelfRef.SA_tb__DOT__in_valid = 1U;
    vlSelfRef.SA_tb__DOT__load_slot = 0U;
    vlSelfRef.SA_tb__DOT__compute_slot = 1U;
    vlSelfRef.SA_tb__DOT__b_in[0U][0U] = vlSelfRef.SA_tb__DOT__W[0U][0U];
    vlSelfRef.SA_tb__DOT__b_in[0U][1U] = vlSelfRef.SA_tb__DOT__W[0U][1U];
    vlSelfRef.SA_tb__DOT__b_in[0U][2U] = vlSelfRef.SA_tb__DOT__W[0U][2U];
    vlSelfRef.SA_tb__DOT__b_in[1U][0U] = vlSelfRef.SA_tb__DOT__W[1U][0U];
    vlSelfRef.SA_tb__DOT__b_in[1U][1U] = vlSelfRef.SA_tb__DOT__W[1U][1U];
    vlSelfRef.SA_tb__DOT__b_in[1U][2U] = vlSelfRef.SA_tb__DOT__W[1U][2U];
    vlSelfRef.SA_tb__DOT__b_in[2U][0U] = vlSelfRef.SA_tb__DOT__W[2U][0U];
    vlSelfRef.SA_tb__DOT__b_in[2U][1U] = vlSelfRef.SA_tb__DOT__W[2U][1U];
    vlSelfRef.SA_tb__DOT__b_in[2U][2U] = vlSelfRef.SA_tb__DOT__W[2U][2U];
    VSA_tb___024root____VbeforeTrig_h81bc4b78__0(vlSelf, 
                                                 "@(negedge SA_tb.clk)");
    co_await vlSelfRef.__VtrigSched_h81bc4b78__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge SA_tb.clk)", 
                                                         "SA_tb.sv", 
                                                         399);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.SA_tb__DOT__in_valid = 0U;
    vlSelfRef.SA_tb__DOT__load_slot = 1U;
    vlSelfRef.SA_tb__DOT__compute_slot = 0U;
    vlSelfRef.SA_tb__DOT__en = 1U;
    vlSelfRef.SA_tb__DOT__a_in[0U] = 0U;
    vlSelfRef.SA_tb__DOT__a_in[1U] = 0U;
    vlSelfRef.SA_tb__DOT__a_in[2U] = 0U;
    SA_tb__DOT__unnamedblk1_9__DOT____Vrepeat8 = 3U;
    while (VL_LTS_III(32, 0U, SA_tb__DOT__unnamedblk1_9__DOT____Vrepeat8)) {
        VSA_tb___024root____VbeforeTrig_h81bc4b78__0(vlSelf, 
                                                     "@(negedge SA_tb.clk)");
        co_await vlSelfRef.__VtrigSched_h81bc4b78__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge SA_tb.clk)", 
                                                             "SA_tb.sv", 
                                                             406);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        SA_tb__DOT__unnamedblk1_9__DOT____Vrepeat8 
            = (SA_tb__DOT__unnamedblk1_9__DOT____Vrepeat8 
               - (IData)(1U));
    }
    SA_tb__DOT__unnamedblk40__DOT__k = 0U;
    while (VL_GTS_III(32, 8U, SA_tb__DOT__unnamedblk40__DOT__k)) {
        VSA_tb___024root____VbeforeTrig_h81bc4b78__0(vlSelf, 
                                                     "@(negedge SA_tb.clk)");
        co_await vlSelfRef.__VtrigSched_h81bc4b78__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge SA_tb.clk)", 
                                                             "SA_tb.sv", 
                                                             410);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        if ((VL_LTES_III(32, 0U, (SA_tb__DOT__unnamedblk40__DOT__k 
                                  - (IData)(3U))) & 
             VL_GTS_III(32, 3U, (SA_tb__DOT__unnamedblk40__DOT__k 
                                 - (IData)(3U))))) {
            vlSelfRef.SA_tb__DOT__checks = ((IData)(1U) 
                                            + vlSelfRef.SA_tb__DOT__checks);
            if (VL_UNLIKELY(((vlSelfRef.SA_tb__DOT__result_matrix[0U] 
                              != (0x000003ffU & vlSelfRef.SA_tb__DOT__C_exp
                                  [((2U >= (3U & (SA_tb__DOT__unnamedblk40__DOT__k 
                                                  - (IData)(3U))))
                                     ? (3U & (SA_tb__DOT__unnamedblk40__DOT__k 
                                              - (IData)(3U)))
                                     : 0U)][0U]))))) {
                vlSelfRef.SA_tb__DOT__errors = ((IData)(1U) 
                                                + vlSelfRef.SA_tb__DOT__errors);
                VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:417: Assertion failed in %m: [%0t] slot 0 C[%0d][0]: expected %0d, got %0d\n",7, 'M',vlSymsp->name(),"SA_tb.unnamedblk40.unnamedblk41", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '~',32,(SA_tb__DOT__unnamedblk40__DOT__k 
                                       - (IData)(3U))
                             , '~',32,vlSelfRef.SA_tb__DOT__C_exp
                             [((2U >= (3U & (SA_tb__DOT__unnamedblk40__DOT__k 
                                             - (IData)(3U))))
                                ? (3U & (SA_tb__DOT__unnamedblk40__DOT__k 
                                         - (IData)(3U)))
                                : 0U)][0U], '#',10,vlSelfRef.SA_tb__DOT__result_matrix[0U]);
                VL_STOP_MT("SA_tb.sv", 417, "");
            }
        }
        if ((VL_LTES_III(32, 0U, ((SA_tb__DOT__unnamedblk40__DOT__k 
                                   - (IData)(3U)) - (IData)(1U))) 
             & VL_GTS_III(32, 3U, ((SA_tb__DOT__unnamedblk40__DOT__k 
                                    - (IData)(3U)) 
                                   - (IData)(1U))))) {
            vlSelfRef.SA_tb__DOT__checks = ((IData)(1U) 
                                            + vlSelfRef.SA_tb__DOT__checks);
            if (VL_UNLIKELY(((vlSelfRef.SA_tb__DOT__result_matrix[1U] 
                              != (0x000003ffU & vlSelfRef.SA_tb__DOT__C_exp
                                  [((2U >= (3U & ((SA_tb__DOT__unnamedblk40__DOT__k 
                                                   - (IData)(3U)) 
                                                  - (IData)(1U))))
                                     ? (3U & ((SA_tb__DOT__unnamedblk40__DOT__k 
                                               - (IData)(3U)) 
                                              - (IData)(1U)))
                                     : 0U)][1U]))))) {
                vlSelfRef.SA_tb__DOT__errors = ((IData)(1U) 
                                                + vlSelfRef.SA_tb__DOT__errors);
                VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:417: Assertion failed in %m: [%0t] slot 0 C[%0d][1]: expected %0d, got %0d\n",7, 'M',vlSymsp->name(),"SA_tb.unnamedblk40.unnamedblk41", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '~',32,((SA_tb__DOT__unnamedblk40__DOT__k 
                                        - (IData)(3U)) 
                                       - (IData)(1U))
                             , '~',32,vlSelfRef.SA_tb__DOT__C_exp
                             [((2U >= (3U & ((SA_tb__DOT__unnamedblk40__DOT__k 
                                              - (IData)(3U)) 
                                             - (IData)(1U))))
                                ? (3U & ((SA_tb__DOT__unnamedblk40__DOT__k 
                                          - (IData)(3U)) 
                                         - (IData)(1U)))
                                : 0U)][1U], '#',10,vlSelfRef.SA_tb__DOT__result_matrix[1U]);
                VL_STOP_MT("SA_tb.sv", 417, "");
            }
        }
        if ((VL_LTES_III(32, 0U, ((SA_tb__DOT__unnamedblk40__DOT__k 
                                   - (IData)(3U)) - (IData)(2U))) 
             & VL_GTS_III(32, 3U, ((SA_tb__DOT__unnamedblk40__DOT__k 
                                    - (IData)(3U)) 
                                   - (IData)(2U))))) {
            vlSelfRef.SA_tb__DOT__checks = ((IData)(1U) 
                                            + vlSelfRef.SA_tb__DOT__checks);
            if (VL_UNLIKELY(((vlSelfRef.SA_tb__DOT__result_matrix[2U] 
                              != (0x000003ffU & vlSelfRef.SA_tb__DOT__C_exp
                                  [((2U >= (3U & ((SA_tb__DOT__unnamedblk40__DOT__k 
                                                   - (IData)(3U)) 
                                                  - (IData)(2U))))
                                     ? (3U & ((SA_tb__DOT__unnamedblk40__DOT__k 
                                               - (IData)(3U)) 
                                              - (IData)(2U)))
                                     : 0U)][2U]))))) {
                vlSelfRef.SA_tb__DOT__errors = ((IData)(1U) 
                                                + vlSelfRef.SA_tb__DOT__errors);
                VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:417: Assertion failed in %m: [%0t] slot 0 C[%0d][2]: expected %0d, got %0d\n",7, 'M',vlSymsp->name(),"SA_tb.unnamedblk40.unnamedblk41", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '~',32,((SA_tb__DOT__unnamedblk40__DOT__k 
                                        - (IData)(3U)) 
                                       - (IData)(2U))
                             , '~',32,vlSelfRef.SA_tb__DOT__C_exp
                             [((2U >= (3U & ((SA_tb__DOT__unnamedblk40__DOT__k 
                                              - (IData)(3U)) 
                                             - (IData)(2U))))
                                ? (3U & ((SA_tb__DOT__unnamedblk40__DOT__k 
                                          - (IData)(3U)) 
                                         - (IData)(2U)))
                                : 0U)][2U], '#',10,vlSelfRef.SA_tb__DOT__result_matrix[2U]);
                VL_STOP_MT("SA_tb.sv", 417, "");
            }
        }
        vlSelfRef.SA_tb__DOT__a_in[0U] = ((VL_LTES_III(32, 0U, SA_tb__DOT__unnamedblk40__DOT__k) 
                                           & VL_GTS_III(32, 3U, SA_tb__DOT__unnamedblk40__DOT__k))
                                           ? vlSelfRef.SA_tb__DOT__A
                                          [((2U >= 
                                             (3U & SA_tb__DOT__unnamedblk40__DOT__k))
                                             ? (3U 
                                                & SA_tb__DOT__unnamedblk40__DOT__k)
                                             : 0U)][0U]
                                           : 0U);
        vlSelfRef.SA_tb__DOT__a_in[1U] = ((VL_LTES_III(32, 0U, 
                                                       (SA_tb__DOT__unnamedblk40__DOT__k 
                                                        - (IData)(1U))) 
                                           & VL_GTS_III(32, 3U, 
                                                        (SA_tb__DOT__unnamedblk40__DOT__k 
                                                         - (IData)(1U))))
                                           ? vlSelfRef.SA_tb__DOT__A
                                          [((2U >= 
                                             (3U & 
                                              (SA_tb__DOT__unnamedblk40__DOT__k 
                                               - (IData)(1U))))
                                             ? (3U 
                                                & (SA_tb__DOT__unnamedblk40__DOT__k 
                                                   - (IData)(1U)))
                                             : 0U)][1U]
                                           : 0U);
        vlSelfRef.SA_tb__DOT__a_in[2U] = ((VL_LTES_III(32, 0U, 
                                                       (SA_tb__DOT__unnamedblk40__DOT__k 
                                                        - (IData)(2U))) 
                                           & VL_GTS_III(32, 3U, 
                                                        (SA_tb__DOT__unnamedblk40__DOT__k 
                                                         - (IData)(2U))))
                                           ? vlSelfRef.SA_tb__DOT__A
                                          [((2U >= 
                                             (3U & 
                                              (SA_tb__DOT__unnamedblk40__DOT__k 
                                               - (IData)(2U))))
                                             ? (3U 
                                                & (SA_tb__DOT__unnamedblk40__DOT__k 
                                                   - (IData)(2U)))
                                             : 0U)][2U]
                                           : 0U);
        if ((1U == SA_tb__DOT__unnamedblk40__DOT__k)) {
            vlSelfRef.SA_tb__DOT__in_valid = 1U;
            vlSelfRef.SA_tb__DOT__load_slot = 1U;
            vlSelfRef.SA_tb__DOT__b_in[0U][0U] = vlSelfRef.SA_tb__DOT__W2[0U][0U];
            vlSelfRef.SA_tb__DOT__b_in[0U][1U] = vlSelfRef.SA_tb__DOT__W2[0U][1U];
            vlSelfRef.SA_tb__DOT__b_in[0U][2U] = vlSelfRef.SA_tb__DOT__W2[0U][2U];
            vlSelfRef.SA_tb__DOT__b_in[1U][0U] = vlSelfRef.SA_tb__DOT__W2[1U][0U];
            vlSelfRef.SA_tb__DOT__b_in[1U][1U] = vlSelfRef.SA_tb__DOT__W2[1U][1U];
            vlSelfRef.SA_tb__DOT__b_in[1U][2U] = vlSelfRef.SA_tb__DOT__W2[1U][2U];
            vlSelfRef.SA_tb__DOT__b_in[2U][0U] = vlSelfRef.SA_tb__DOT__W2[2U][0U];
            vlSelfRef.SA_tb__DOT__b_in[2U][1U] = vlSelfRef.SA_tb__DOT__W2[2U][1U];
            vlSelfRef.SA_tb__DOT__b_in[2U][2U] = vlSelfRef.SA_tb__DOT__W2[2U][2U];
        }
        if ((2U == SA_tb__DOT__unnamedblk40__DOT__k)) {
            vlSelfRef.SA_tb__DOT__in_valid = 0U;
        }
        SA_tb__DOT__unnamedblk40__DOT__k = ((IData)(1U) 
                                            + SA_tb__DOT__unnamedblk40__DOT__k);
    }
    vlSelfRef.SA_tb__DOT__checks = ((IData)(1U) + vlSelfRef.SA_tb__DOT__checks);
    if (VL_UNLIKELY(((vlSelfRef.SA_tb__DOT__pe_b1[0U][0U] 
                      != vlSelfRef.SA_tb__DOT__W[0U][0U])))) {
        vlSelfRef.SA_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.SA_tb__DOT__errors);
        VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:445: Assertion failed in %m: [%0t] PE[0][0].b1: expected %0d, got %0d\n",6, 'M',vlSymsp->name(),"SA_tb.unnamedblk45.unnamedblk46", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',4,vlSelfRef.SA_tb__DOT__W[0U][0U]
                     , '#',4,vlSelfRef.SA_tb__DOT__pe_b1[0U][0U]);
        VL_STOP_MT("SA_tb.sv", 445, "");
    }
    vlSelfRef.SA_tb__DOT__checks = ((IData)(1U) + vlSelfRef.SA_tb__DOT__checks);
    if (VL_UNLIKELY(((vlSelfRef.SA_tb__DOT__pe_b2[0U][0U] 
                      != vlSelfRef.SA_tb__DOT__W2[0U][0U])))) {
        vlSelfRef.SA_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.SA_tb__DOT__errors);
        VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:450: Assertion failed in %m: [%0t] PE[0][0].b2: expected %0d, got %0d\n",6, 'M',vlSymsp->name(),"SA_tb.unnamedblk45.unnamedblk46", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',4,vlSelfRef.SA_tb__DOT__W2[0U][0U]
                     , '#',4,vlSelfRef.SA_tb__DOT__pe_b2[0U][0U]);
        VL_STOP_MT("SA_tb.sv", 450, "");
    }
    vlSelfRef.SA_tb__DOT__checks = ((IData)(1U) + vlSelfRef.SA_tb__DOT__checks);
    if (VL_UNLIKELY(((vlSelfRef.SA_tb__DOT__pe_b1[0U][1U] 
                      != vlSelfRef.SA_tb__DOT__W[0U][1U])))) {
        vlSelfRef.SA_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.SA_tb__DOT__errors);
        VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:445: Assertion failed in %m: [%0t] PE[0][1].b1: expected %0d, got %0d\n",6, 'M',vlSymsp->name(),"SA_tb.unnamedblk45.unnamedblk46", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',4,vlSelfRef.SA_tb__DOT__W[0U][1U]
                     , '#',4,vlSelfRef.SA_tb__DOT__pe_b1[0U][1U]);
        VL_STOP_MT("SA_tb.sv", 445, "");
    }
    vlSelfRef.SA_tb__DOT__checks = ((IData)(1U) + vlSelfRef.SA_tb__DOT__checks);
    if (VL_UNLIKELY(((vlSelfRef.SA_tb__DOT__pe_b2[0U][1U] 
                      != vlSelfRef.SA_tb__DOT__W2[0U][1U])))) {
        vlSelfRef.SA_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.SA_tb__DOT__errors);
        VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:450: Assertion failed in %m: [%0t] PE[0][1].b2: expected %0d, got %0d\n",6, 'M',vlSymsp->name(),"SA_tb.unnamedblk45.unnamedblk46", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',4,vlSelfRef.SA_tb__DOT__W2[0U][1U]
                     , '#',4,vlSelfRef.SA_tb__DOT__pe_b2[0U][1U]);
        VL_STOP_MT("SA_tb.sv", 450, "");
    }
    vlSelfRef.SA_tb__DOT__checks = ((IData)(1U) + vlSelfRef.SA_tb__DOT__checks);
    if (VL_UNLIKELY(((vlSelfRef.SA_tb__DOT__pe_b1[0U][2U] 
                      != vlSelfRef.SA_tb__DOT__W[0U][2U])))) {
        vlSelfRef.SA_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.SA_tb__DOT__errors);
        VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:445: Assertion failed in %m: [%0t] PE[0][2].b1: expected %0d, got %0d\n",6, 'M',vlSymsp->name(),"SA_tb.unnamedblk45.unnamedblk46", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',4,vlSelfRef.SA_tb__DOT__W[0U][2U]
                     , '#',4,vlSelfRef.SA_tb__DOT__pe_b1[0U][2U]);
        VL_STOP_MT("SA_tb.sv", 445, "");
    }
    vlSelfRef.SA_tb__DOT__checks = ((IData)(1U) + vlSelfRef.SA_tb__DOT__checks);
    if (VL_UNLIKELY(((vlSelfRef.SA_tb__DOT__pe_b2[0U][2U] 
                      != vlSelfRef.SA_tb__DOT__W2[0U][2U])))) {
        vlSelfRef.SA_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.SA_tb__DOT__errors);
        VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:450: Assertion failed in %m: [%0t] PE[0][2].b2: expected %0d, got %0d\n",6, 'M',vlSymsp->name(),"SA_tb.unnamedblk45.unnamedblk46", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',4,vlSelfRef.SA_tb__DOT__W2[0U][2U]
                     , '#',4,vlSelfRef.SA_tb__DOT__pe_b2[0U][2U]);
        VL_STOP_MT("SA_tb.sv", 450, "");
    }
    vlSelfRef.SA_tb__DOT__checks = ((IData)(1U) + vlSelfRef.SA_tb__DOT__checks);
    if (VL_UNLIKELY(((vlSelfRef.SA_tb__DOT__pe_b1[1U][0U] 
                      != vlSelfRef.SA_tb__DOT__W[1U][0U])))) {
        vlSelfRef.SA_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.SA_tb__DOT__errors);
        VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:445: Assertion failed in %m: [%0t] PE[1][0].b1: expected %0d, got %0d\n",6, 'M',vlSymsp->name(),"SA_tb.unnamedblk45.unnamedblk46", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',4,vlSelfRef.SA_tb__DOT__W[1U][0U]
                     , '#',4,vlSelfRef.SA_tb__DOT__pe_b1[1U][0U]);
        VL_STOP_MT("SA_tb.sv", 445, "");
    }
    vlSelfRef.SA_tb__DOT__checks = ((IData)(1U) + vlSelfRef.SA_tb__DOT__checks);
    if (VL_UNLIKELY(((vlSelfRef.SA_tb__DOT__pe_b2[1U][0U] 
                      != vlSelfRef.SA_tb__DOT__W2[1U][0U])))) {
        vlSelfRef.SA_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.SA_tb__DOT__errors);
        VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:450: Assertion failed in %m: [%0t] PE[1][0].b2: expected %0d, got %0d\n",6, 'M',vlSymsp->name(),"SA_tb.unnamedblk45.unnamedblk46", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',4,vlSelfRef.SA_tb__DOT__W2[1U][0U]
                     , '#',4,vlSelfRef.SA_tb__DOT__pe_b2[1U][0U]);
        VL_STOP_MT("SA_tb.sv", 450, "");
    }
    vlSelfRef.SA_tb__DOT__checks = ((IData)(1U) + vlSelfRef.SA_tb__DOT__checks);
    if (VL_UNLIKELY(((vlSelfRef.SA_tb__DOT__pe_b1[1U][1U] 
                      != vlSelfRef.SA_tb__DOT__W[1U][1U])))) {
        vlSelfRef.SA_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.SA_tb__DOT__errors);
        VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:445: Assertion failed in %m: [%0t] PE[1][1].b1: expected %0d, got %0d\n",6, 'M',vlSymsp->name(),"SA_tb.unnamedblk45.unnamedblk46", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',4,vlSelfRef.SA_tb__DOT__W[1U][1U]
                     , '#',4,vlSelfRef.SA_tb__DOT__pe_b1[1U][1U]);
        VL_STOP_MT("SA_tb.sv", 445, "");
    }
    vlSelfRef.SA_tb__DOT__checks = ((IData)(1U) + vlSelfRef.SA_tb__DOT__checks);
    if (VL_UNLIKELY(((vlSelfRef.SA_tb__DOT__pe_b2[1U][1U] 
                      != vlSelfRef.SA_tb__DOT__W2[1U][1U])))) {
        vlSelfRef.SA_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.SA_tb__DOT__errors);
        VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:450: Assertion failed in %m: [%0t] PE[1][1].b2: expected %0d, got %0d\n",6, 'M',vlSymsp->name(),"SA_tb.unnamedblk45.unnamedblk46", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',4,vlSelfRef.SA_tb__DOT__W2[1U][1U]
                     , '#',4,vlSelfRef.SA_tb__DOT__pe_b2[1U][1U]);
        VL_STOP_MT("SA_tb.sv", 450, "");
    }
    vlSelfRef.SA_tb__DOT__checks = ((IData)(1U) + vlSelfRef.SA_tb__DOT__checks);
    if (VL_UNLIKELY(((vlSelfRef.SA_tb__DOT__pe_b1[1U][2U] 
                      != vlSelfRef.SA_tb__DOT__W[1U][2U])))) {
        vlSelfRef.SA_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.SA_tb__DOT__errors);
        VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:445: Assertion failed in %m: [%0t] PE[1][2].b1: expected %0d, got %0d\n",6, 'M',vlSymsp->name(),"SA_tb.unnamedblk45.unnamedblk46", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',4,vlSelfRef.SA_tb__DOT__W[1U][2U]
                     , '#',4,vlSelfRef.SA_tb__DOT__pe_b1[1U][2U]);
        VL_STOP_MT("SA_tb.sv", 445, "");
    }
    vlSelfRef.SA_tb__DOT__checks = ((IData)(1U) + vlSelfRef.SA_tb__DOT__checks);
    if (VL_UNLIKELY(((vlSelfRef.SA_tb__DOT__pe_b2[1U][2U] 
                      != vlSelfRef.SA_tb__DOT__W2[1U][2U])))) {
        vlSelfRef.SA_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.SA_tb__DOT__errors);
        VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:450: Assertion failed in %m: [%0t] PE[1][2].b2: expected %0d, got %0d\n",6, 'M',vlSymsp->name(),"SA_tb.unnamedblk45.unnamedblk46", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',4,vlSelfRef.SA_tb__DOT__W2[1U][2U]
                     , '#',4,vlSelfRef.SA_tb__DOT__pe_b2[1U][2U]);
        VL_STOP_MT("SA_tb.sv", 450, "");
    }
    vlSelfRef.SA_tb__DOT__checks = ((IData)(1U) + vlSelfRef.SA_tb__DOT__checks);
    if (VL_UNLIKELY(((vlSelfRef.SA_tb__DOT__pe_b1[2U][0U] 
                      != vlSelfRef.SA_tb__DOT__W[2U][0U])))) {
        vlSelfRef.SA_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.SA_tb__DOT__errors);
        VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:445: Assertion failed in %m: [%0t] PE[2][0].b1: expected %0d, got %0d\n",6, 'M',vlSymsp->name(),"SA_tb.unnamedblk45.unnamedblk46", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',4,vlSelfRef.SA_tb__DOT__W[2U][0U]
                     , '#',4,vlSelfRef.SA_tb__DOT__pe_b1[2U][0U]);
        VL_STOP_MT("SA_tb.sv", 445, "");
    }
    vlSelfRef.SA_tb__DOT__checks = ((IData)(1U) + vlSelfRef.SA_tb__DOT__checks);
    if (VL_UNLIKELY(((vlSelfRef.SA_tb__DOT__pe_b2[2U][0U] 
                      != vlSelfRef.SA_tb__DOT__W2[2U][0U])))) {
        vlSelfRef.SA_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.SA_tb__DOT__errors);
        VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:450: Assertion failed in %m: [%0t] PE[2][0].b2: expected %0d, got %0d\n",6, 'M',vlSymsp->name(),"SA_tb.unnamedblk45.unnamedblk46", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',4,vlSelfRef.SA_tb__DOT__W2[2U][0U]
                     , '#',4,vlSelfRef.SA_tb__DOT__pe_b2[2U][0U]);
        VL_STOP_MT("SA_tb.sv", 450, "");
    }
    vlSelfRef.SA_tb__DOT__checks = ((IData)(1U) + vlSelfRef.SA_tb__DOT__checks);
    if (VL_UNLIKELY(((vlSelfRef.SA_tb__DOT__pe_b1[2U][1U] 
                      != vlSelfRef.SA_tb__DOT__W[2U][1U])))) {
        vlSelfRef.SA_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.SA_tb__DOT__errors);
        VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:445: Assertion failed in %m: [%0t] PE[2][1].b1: expected %0d, got %0d\n",6, 'M',vlSymsp->name(),"SA_tb.unnamedblk45.unnamedblk46", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',4,vlSelfRef.SA_tb__DOT__W[2U][1U]
                     , '#',4,vlSelfRef.SA_tb__DOT__pe_b1[2U][1U]);
        VL_STOP_MT("SA_tb.sv", 445, "");
    }
    vlSelfRef.SA_tb__DOT__checks = ((IData)(1U) + vlSelfRef.SA_tb__DOT__checks);
    if (VL_UNLIKELY(((vlSelfRef.SA_tb__DOT__pe_b2[2U][1U] 
                      != vlSelfRef.SA_tb__DOT__W2[2U][1U])))) {
        vlSelfRef.SA_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.SA_tb__DOT__errors);
        VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:450: Assertion failed in %m: [%0t] PE[2][1].b2: expected %0d, got %0d\n",6, 'M',vlSymsp->name(),"SA_tb.unnamedblk45.unnamedblk46", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',4,vlSelfRef.SA_tb__DOT__W2[2U][1U]
                     , '#',4,vlSelfRef.SA_tb__DOT__pe_b2[2U][1U]);
        VL_STOP_MT("SA_tb.sv", 450, "");
    }
    vlSelfRef.SA_tb__DOT__checks = ((IData)(1U) + vlSelfRef.SA_tb__DOT__checks);
    if (VL_UNLIKELY(((vlSelfRef.SA_tb__DOT__pe_b1[2U][2U] 
                      != vlSelfRef.SA_tb__DOT__W[2U][2U])))) {
        vlSelfRef.SA_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.SA_tb__DOT__errors);
        VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:445: Assertion failed in %m: [%0t] PE[2][2].b1: expected %0d, got %0d\n",6, 'M',vlSymsp->name(),"SA_tb.unnamedblk45.unnamedblk46", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',4,vlSelfRef.SA_tb__DOT__W[2U][2U]
                     , '#',4,vlSelfRef.SA_tb__DOT__pe_b1[2U][2U]);
        VL_STOP_MT("SA_tb.sv", 445, "");
    }
    vlSelfRef.SA_tb__DOT__checks = ((IData)(1U) + vlSelfRef.SA_tb__DOT__checks);
    if (VL_UNLIKELY(((vlSelfRef.SA_tb__DOT__pe_b2[2U][2U] 
                      != vlSelfRef.SA_tb__DOT__W2[2U][2U])))) {
        vlSelfRef.SA_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.SA_tb__DOT__errors);
        VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:450: Assertion failed in %m: [%0t] PE[2][2].b2: expected %0d, got %0d\n",6, 'M',vlSymsp->name(),"SA_tb.unnamedblk45.unnamedblk46", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',4,vlSelfRef.SA_tb__DOT__W2[2U][2U]
                     , '#',4,vlSelfRef.SA_tb__DOT__pe_b2[2U][2U]);
        VL_STOP_MT("SA_tb.sv", 450, "");
    }
    vlSelfRef.SA_tb__DOT__compute_slot = 1U;
    vlSelfRef.SA_tb__DOT__load_slot = 0U;
    vlSelfRef.SA_tb__DOT__a_in[0U] = 0U;
    vlSelfRef.SA_tb__DOT__a_in[1U] = 0U;
    vlSelfRef.SA_tb__DOT__a_in[2U] = 0U;
    SA_tb__DOT__unnamedblk1_10__DOT____Vrepeat9 = 3U;
    while (VL_LTS_III(32, 0U, SA_tb__DOT__unnamedblk1_10__DOT____Vrepeat9)) {
        VSA_tb___024root____VbeforeTrig_h81bc4b78__0(vlSelf, 
                                                     "@(negedge SA_tb.clk)");
        co_await vlSelfRef.__VtrigSched_h81bc4b78__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge SA_tb.clk)", 
                                                             "SA_tb.sv", 
                                                             460);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        SA_tb__DOT__unnamedblk1_10__DOT____Vrepeat9 
            = (SA_tb__DOT__unnamedblk1_10__DOT____Vrepeat9 
               - (IData)(1U));
    }
    SA_tb__DOT__unnamedblk47__DOT__k = 0U;
    while (VL_GTS_III(32, 8U, SA_tb__DOT__unnamedblk47__DOT__k)) {
        VSA_tb___024root____VbeforeTrig_h81bc4b78__0(vlSelf, 
                                                     "@(negedge SA_tb.clk)");
        co_await vlSelfRef.__VtrigSched_h81bc4b78__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge SA_tb.clk)", 
                                                             "SA_tb.sv", 
                                                             463);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        if ((VL_LTES_III(32, 0U, (SA_tb__DOT__unnamedblk47__DOT__k 
                                  - (IData)(3U))) & 
             VL_GTS_III(32, 3U, (SA_tb__DOT__unnamedblk47__DOT__k 
                                 - (IData)(3U))))) {
            vlSelfRef.SA_tb__DOT__checks = ((IData)(1U) 
                                            + vlSelfRef.SA_tb__DOT__checks);
            if (VL_UNLIKELY(((vlSelfRef.SA_tb__DOT__result_matrix[0U] 
                              != (0x000003ffU & vlSelfRef.SA_tb__DOT__C_exp2
                                  [((2U >= (3U & (SA_tb__DOT__unnamedblk47__DOT__k 
                                                  - (IData)(3U))))
                                     ? (3U & (SA_tb__DOT__unnamedblk47__DOT__k 
                                              - (IData)(3U)))
                                     : 0U)][0U]))))) {
                vlSelfRef.SA_tb__DOT__errors = ((IData)(1U) 
                                                + vlSelfRef.SA_tb__DOT__errors);
                VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:470: Assertion failed in %m: [%0t] slot 1 C[%0d][0]: expected %0d, got %0d\n",7, 'M',vlSymsp->name(),"SA_tb.unnamedblk47.unnamedblk48", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '~',32,(SA_tb__DOT__unnamedblk47__DOT__k 
                                       - (IData)(3U))
                             , '~',32,vlSelfRef.SA_tb__DOT__C_exp2
                             [((2U >= (3U & (SA_tb__DOT__unnamedblk47__DOT__k 
                                             - (IData)(3U))))
                                ? (3U & (SA_tb__DOT__unnamedblk47__DOT__k 
                                         - (IData)(3U)))
                                : 0U)][0U], '#',10,vlSelfRef.SA_tb__DOT__result_matrix[0U]);
                VL_STOP_MT("SA_tb.sv", 470, "");
            }
        }
        if ((VL_LTES_III(32, 0U, ((SA_tb__DOT__unnamedblk47__DOT__k 
                                   - (IData)(3U)) - (IData)(1U))) 
             & VL_GTS_III(32, 3U, ((SA_tb__DOT__unnamedblk47__DOT__k 
                                    - (IData)(3U)) 
                                   - (IData)(1U))))) {
            vlSelfRef.SA_tb__DOT__checks = ((IData)(1U) 
                                            + vlSelfRef.SA_tb__DOT__checks);
            if (VL_UNLIKELY(((vlSelfRef.SA_tb__DOT__result_matrix[1U] 
                              != (0x000003ffU & vlSelfRef.SA_tb__DOT__C_exp2
                                  [((2U >= (3U & ((SA_tb__DOT__unnamedblk47__DOT__k 
                                                   - (IData)(3U)) 
                                                  - (IData)(1U))))
                                     ? (3U & ((SA_tb__DOT__unnamedblk47__DOT__k 
                                               - (IData)(3U)) 
                                              - (IData)(1U)))
                                     : 0U)][1U]))))) {
                vlSelfRef.SA_tb__DOT__errors = ((IData)(1U) 
                                                + vlSelfRef.SA_tb__DOT__errors);
                VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:470: Assertion failed in %m: [%0t] slot 1 C[%0d][1]: expected %0d, got %0d\n",7, 'M',vlSymsp->name(),"SA_tb.unnamedblk47.unnamedblk48", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '~',32,((SA_tb__DOT__unnamedblk47__DOT__k 
                                        - (IData)(3U)) 
                                       - (IData)(1U))
                             , '~',32,vlSelfRef.SA_tb__DOT__C_exp2
                             [((2U >= (3U & ((SA_tb__DOT__unnamedblk47__DOT__k 
                                              - (IData)(3U)) 
                                             - (IData)(1U))))
                                ? (3U & ((SA_tb__DOT__unnamedblk47__DOT__k 
                                          - (IData)(3U)) 
                                         - (IData)(1U)))
                                : 0U)][1U], '#',10,vlSelfRef.SA_tb__DOT__result_matrix[1U]);
                VL_STOP_MT("SA_tb.sv", 470, "");
            }
        }
        if ((VL_LTES_III(32, 0U, ((SA_tb__DOT__unnamedblk47__DOT__k 
                                   - (IData)(3U)) - (IData)(2U))) 
             & VL_GTS_III(32, 3U, ((SA_tb__DOT__unnamedblk47__DOT__k 
                                    - (IData)(3U)) 
                                   - (IData)(2U))))) {
            vlSelfRef.SA_tb__DOT__checks = ((IData)(1U) 
                                            + vlSelfRef.SA_tb__DOT__checks);
            if (VL_UNLIKELY(((vlSelfRef.SA_tb__DOT__result_matrix[2U] 
                              != (0x000003ffU & vlSelfRef.SA_tb__DOT__C_exp2
                                  [((2U >= (3U & ((SA_tb__DOT__unnamedblk47__DOT__k 
                                                   - (IData)(3U)) 
                                                  - (IData)(2U))))
                                     ? (3U & ((SA_tb__DOT__unnamedblk47__DOT__k 
                                               - (IData)(3U)) 
                                              - (IData)(2U)))
                                     : 0U)][2U]))))) {
                vlSelfRef.SA_tb__DOT__errors = ((IData)(1U) 
                                                + vlSelfRef.SA_tb__DOT__errors);
                VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:470: Assertion failed in %m: [%0t] slot 1 C[%0d][2]: expected %0d, got %0d\n",7, 'M',vlSymsp->name(),"SA_tb.unnamedblk47.unnamedblk48", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '~',32,((SA_tb__DOT__unnamedblk47__DOT__k 
                                        - (IData)(3U)) 
                                       - (IData)(2U))
                             , '~',32,vlSelfRef.SA_tb__DOT__C_exp2
                             [((2U >= (3U & ((SA_tb__DOT__unnamedblk47__DOT__k 
                                              - (IData)(3U)) 
                                             - (IData)(2U))))
                                ? (3U & ((SA_tb__DOT__unnamedblk47__DOT__k 
                                          - (IData)(3U)) 
                                         - (IData)(2U)))
                                : 0U)][2U], '#',10,vlSelfRef.SA_tb__DOT__result_matrix[2U]);
                VL_STOP_MT("SA_tb.sv", 470, "");
            }
        }
        vlSelfRef.SA_tb__DOT__a_in[0U] = ((VL_LTES_III(32, 0U, SA_tb__DOT__unnamedblk47__DOT__k) 
                                           & VL_GTS_III(32, 3U, SA_tb__DOT__unnamedblk47__DOT__k))
                                           ? vlSelfRef.SA_tb__DOT__A
                                          [((2U >= 
                                             (3U & SA_tb__DOT__unnamedblk47__DOT__k))
                                             ? (3U 
                                                & SA_tb__DOT__unnamedblk47__DOT__k)
                                             : 0U)][0U]
                                           : 0U);
        vlSelfRef.SA_tb__DOT__a_in[1U] = ((VL_LTES_III(32, 0U, 
                                                       (SA_tb__DOT__unnamedblk47__DOT__k 
                                                        - (IData)(1U))) 
                                           & VL_GTS_III(32, 3U, 
                                                        (SA_tb__DOT__unnamedblk47__DOT__k 
                                                         - (IData)(1U))))
                                           ? vlSelfRef.SA_tb__DOT__A
                                          [((2U >= 
                                             (3U & 
                                              (SA_tb__DOT__unnamedblk47__DOT__k 
                                               - (IData)(1U))))
                                             ? (3U 
                                                & (SA_tb__DOT__unnamedblk47__DOT__k 
                                                   - (IData)(1U)))
                                             : 0U)][1U]
                                           : 0U);
        vlSelfRef.SA_tb__DOT__a_in[2U] = ((VL_LTES_III(32, 0U, 
                                                       (SA_tb__DOT__unnamedblk47__DOT__k 
                                                        - (IData)(2U))) 
                                           & VL_GTS_III(32, 3U, 
                                                        (SA_tb__DOT__unnamedblk47__DOT__k 
                                                         - (IData)(2U))))
                                           ? vlSelfRef.SA_tb__DOT__A
                                          [((2U >= 
                                             (3U & 
                                              (SA_tb__DOT__unnamedblk47__DOT__k 
                                               - (IData)(2U))))
                                             ? (3U 
                                                & (SA_tb__DOT__unnamedblk47__DOT__k 
                                                   - (IData)(2U)))
                                             : 0U)][2U]
                                           : 0U);
        SA_tb__DOT__unnamedblk47__DOT__k = ((IData)(1U) 
                                            + SA_tb__DOT__unnamedblk47__DOT__k);
    }
    SA_tb__DOT__unnamedblk1_11__DOT____Vrepeat10 = 3U;
    if ((vlSelfRef.SA_tb__DOT__errors == vlSelfRef.SA_tb__DOT__test_errors)) {
        VL_WRITEF_NX("Test 6 passed: ping pong load during compute\n",0);
    } else {
        VL_WRITEF_NX("Test 6 FAILED: ping pong\n",0);
    }
    while (VL_LTS_III(32, 0U, SA_tb__DOT__unnamedblk1_11__DOT____Vrepeat10)) {
        VSA_tb___024root____VbeforeTrig_h81bc4b78__0(vlSelf, 
                                                     "@(negedge SA_tb.clk)");
        co_await vlSelfRef.__VtrigSched_h81bc4b78__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge SA_tb.clk)", 
                                                             "SA_tb.sv", 
                                                             483);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        SA_tb__DOT__unnamedblk1_11__DOT____Vrepeat10 
            = (SA_tb__DOT__unnamedblk1_11__DOT____Vrepeat10 
               - (IData)(1U));
    }
    vlSelfRef.SA_tb__DOT__test_errors = vlSelfRef.SA_tb__DOT__errors;
    vlSelfRef.SA_tb__DOT__test_num = ((IData)(1U) + vlSelfRef.SA_tb__DOT__test_num);
    vlSelfRef.SA_tb__DOT__A2[0U][0U] = 9U;
    vlSelfRef.SA_tb__DOT__A2[0U][1U] = 8U;
    vlSelfRef.SA_tb__DOT__A2[0U][2U] = 7U;
    vlSelfRef.SA_tb__DOT__A2[1U][0U] = 6U;
    vlSelfRef.SA_tb__DOT__A2[1U][1U] = 5U;
    vlSelfRef.SA_tb__DOT__A2[1U][2U] = 4U;
    vlSelfRef.SA_tb__DOT__A2[2U][0U] = 3U;
    vlSelfRef.SA_tb__DOT__A2[2U][1U] = 2U;
    vlSelfRef.SA_tb__DOT__A2[2U][2U] = 1U;
    vlSelfRef.SA_tb__DOT__C_exp2[0U][0U] = 0U;
    vlSelfRef.SA_tb__DOT__C_exp2[0U][0U] = (vlSelfRef.SA_tb__DOT__C_exp2[0U][0U] 
                                            + (vlSelfRef.SA_tb__DOT__A2[0U][0U] 
                                               * vlSelfRef.SA_tb__DOT__W2[0U][0U]));
    vlSelfRef.SA_tb__DOT__C_exp2[0U][0U] = (vlSelfRef.SA_tb__DOT__C_exp2[0U][0U] 
                                            + (vlSelfRef.SA_tb__DOT__A2[0U][1U] 
                                               * vlSelfRef.SA_tb__DOT__W2[1U][0U]));
    vlSelfRef.SA_tb__DOT__C_exp2[0U][0U] = (vlSelfRef.SA_tb__DOT__C_exp2[0U][0U] 
                                            + (vlSelfRef.SA_tb__DOT__A2[0U][2U] 
                                               * vlSelfRef.SA_tb__DOT__W2[2U][0U]));
    vlSelfRef.SA_tb__DOT__C_exp2[0U][1U] = 0U;
    vlSelfRef.SA_tb__DOT__C_exp2[0U][1U] = (vlSelfRef.SA_tb__DOT__C_exp2[0U][1U] 
                                            + (vlSelfRef.SA_tb__DOT__A2[0U][0U] 
                                               * vlSelfRef.SA_tb__DOT__W2[0U][1U]));
    vlSelfRef.SA_tb__DOT__C_exp2[0U][1U] = (vlSelfRef.SA_tb__DOT__C_exp2[0U][1U] 
                                            + (vlSelfRef.SA_tb__DOT__A2[0U][1U] 
                                               * vlSelfRef.SA_tb__DOT__W2[1U][1U]));
    vlSelfRef.SA_tb__DOT__C_exp2[0U][1U] = (vlSelfRef.SA_tb__DOT__C_exp2[0U][1U] 
                                            + (vlSelfRef.SA_tb__DOT__A2[0U][2U] 
                                               * vlSelfRef.SA_tb__DOT__W2[2U][1U]));
    vlSelfRef.SA_tb__DOT__C_exp2[0U][2U] = 0U;
    vlSelfRef.SA_tb__DOT__C_exp2[0U][2U] = (vlSelfRef.SA_tb__DOT__C_exp2[0U][2U] 
                                            + (vlSelfRef.SA_tb__DOT__A2[0U][0U] 
                                               * vlSelfRef.SA_tb__DOT__W2[0U][2U]));
    vlSelfRef.SA_tb__DOT__C_exp2[0U][2U] = (vlSelfRef.SA_tb__DOT__C_exp2[0U][2U] 
                                            + (vlSelfRef.SA_tb__DOT__A2[0U][1U] 
                                               * vlSelfRef.SA_tb__DOT__W2[1U][2U]));
    vlSelfRef.SA_tb__DOT__C_exp2[0U][2U] = (vlSelfRef.SA_tb__DOT__C_exp2[0U][2U] 
                                            + (vlSelfRef.SA_tb__DOT__A2[0U][2U] 
                                               * vlSelfRef.SA_tb__DOT__W2[2U][2U]));
    vlSelfRef.SA_tb__DOT__C_exp2[1U][0U] = 0U;
    vlSelfRef.SA_tb__DOT__C_exp2[1U][0U] = (vlSelfRef.SA_tb__DOT__C_exp2[1U][0U] 
                                            + (vlSelfRef.SA_tb__DOT__A2[1U][0U] 
                                               * vlSelfRef.SA_tb__DOT__W2[0U][0U]));
    vlSelfRef.SA_tb__DOT__C_exp2[1U][0U] = (vlSelfRef.SA_tb__DOT__C_exp2[1U][0U] 
                                            + (vlSelfRef.SA_tb__DOT__A2[1U][1U] 
                                               * vlSelfRef.SA_tb__DOT__W2[1U][0U]));
    vlSelfRef.SA_tb__DOT__C_exp2[1U][0U] = (vlSelfRef.SA_tb__DOT__C_exp2[1U][0U] 
                                            + (vlSelfRef.SA_tb__DOT__A2[1U][2U] 
                                               * vlSelfRef.SA_tb__DOT__W2[2U][0U]));
    vlSelfRef.SA_tb__DOT__C_exp2[1U][1U] = 0U;
    vlSelfRef.SA_tb__DOT__C_exp2[1U][1U] = (vlSelfRef.SA_tb__DOT__C_exp2[1U][1U] 
                                            + (vlSelfRef.SA_tb__DOT__A2[1U][0U] 
                                               * vlSelfRef.SA_tb__DOT__W2[0U][1U]));
    vlSelfRef.SA_tb__DOT__C_exp2[1U][1U] = (vlSelfRef.SA_tb__DOT__C_exp2[1U][1U] 
                                            + (vlSelfRef.SA_tb__DOT__A2[1U][1U] 
                                               * vlSelfRef.SA_tb__DOT__W2[1U][1U]));
    vlSelfRef.SA_tb__DOT__C_exp2[1U][1U] = (vlSelfRef.SA_tb__DOT__C_exp2[1U][1U] 
                                            + (vlSelfRef.SA_tb__DOT__A2[1U][2U] 
                                               * vlSelfRef.SA_tb__DOT__W2[2U][1U]));
    vlSelfRef.SA_tb__DOT__C_exp2[1U][2U] = 0U;
    vlSelfRef.SA_tb__DOT__C_exp2[1U][2U] = (vlSelfRef.SA_tb__DOT__C_exp2[1U][2U] 
                                            + (vlSelfRef.SA_tb__DOT__A2[1U][0U] 
                                               * vlSelfRef.SA_tb__DOT__W2[0U][2U]));
    vlSelfRef.SA_tb__DOT__C_exp2[1U][2U] = (vlSelfRef.SA_tb__DOT__C_exp2[1U][2U] 
                                            + (vlSelfRef.SA_tb__DOT__A2[1U][1U] 
                                               * vlSelfRef.SA_tb__DOT__W2[1U][2U]));
    vlSelfRef.SA_tb__DOT__C_exp2[1U][2U] = (vlSelfRef.SA_tb__DOT__C_exp2[1U][2U] 
                                            + (vlSelfRef.SA_tb__DOT__A2[1U][2U] 
                                               * vlSelfRef.SA_tb__DOT__W2[2U][2U]));
    vlSelfRef.SA_tb__DOT__C_exp2[2U][0U] = 0U;
    vlSelfRef.SA_tb__DOT__C_exp2[2U][0U] = (vlSelfRef.SA_tb__DOT__C_exp2[2U][0U] 
                                            + (vlSelfRef.SA_tb__DOT__A2[2U][0U] 
                                               * vlSelfRef.SA_tb__DOT__W2[0U][0U]));
    vlSelfRef.SA_tb__DOT__C_exp2[2U][0U] = (vlSelfRef.SA_tb__DOT__C_exp2[2U][0U] 
                                            + (vlSelfRef.SA_tb__DOT__A2[2U][1U] 
                                               * vlSelfRef.SA_tb__DOT__W2[1U][0U]));
    vlSelfRef.SA_tb__DOT__C_exp2[2U][0U] = (vlSelfRef.SA_tb__DOT__C_exp2[2U][0U] 
                                            + (vlSelfRef.SA_tb__DOT__A2[2U][2U] 
                                               * vlSelfRef.SA_tb__DOT__W2[2U][0U]));
    vlSelfRef.SA_tb__DOT__C_exp2[2U][1U] = 0U;
    vlSelfRef.SA_tb__DOT__C_exp2[2U][1U] = (vlSelfRef.SA_tb__DOT__C_exp2[2U][1U] 
                                            + (vlSelfRef.SA_tb__DOT__A2[2U][0U] 
                                               * vlSelfRef.SA_tb__DOT__W2[0U][1U]));
    vlSelfRef.SA_tb__DOT__C_exp2[2U][1U] = (vlSelfRef.SA_tb__DOT__C_exp2[2U][1U] 
                                            + (vlSelfRef.SA_tb__DOT__A2[2U][1U] 
                                               * vlSelfRef.SA_tb__DOT__W2[1U][1U]));
    vlSelfRef.SA_tb__DOT__C_exp2[2U][1U] = (vlSelfRef.SA_tb__DOT__C_exp2[2U][1U] 
                                            + (vlSelfRef.SA_tb__DOT__A2[2U][2U] 
                                               * vlSelfRef.SA_tb__DOT__W2[2U][1U]));
    vlSelfRef.SA_tb__DOT__C_exp2[2U][2U] = 0U;
    vlSelfRef.SA_tb__DOT__C_exp2[2U][2U] = (vlSelfRef.SA_tb__DOT__C_exp2[2U][2U] 
                                            + (vlSelfRef.SA_tb__DOT__A2[2U][0U] 
                                               * vlSelfRef.SA_tb__DOT__W2[0U][2U]));
    vlSelfRef.SA_tb__DOT__C_exp2[2U][2U] = (vlSelfRef.SA_tb__DOT__C_exp2[2U][2U] 
                                            + (vlSelfRef.SA_tb__DOT__A2[2U][1U] 
                                               * vlSelfRef.SA_tb__DOT__W2[1U][2U]));
    vlSelfRef.SA_tb__DOT__C_exp2[2U][2U] = (vlSelfRef.SA_tb__DOT__C_exp2[2U][2U] 
                                            + (vlSelfRef.SA_tb__DOT__A2[2U][2U] 
                                               * vlSelfRef.SA_tb__DOT__W2[2U][2U]));
    VSA_tb___024root____VbeforeTrig_h81bc4b78__0(vlSelf, 
                                                 "@(negedge SA_tb.clk)");
    co_await vlSelfRef.__VtrigSched_h81bc4b78__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge SA_tb.clk)", 
                                                         "SA_tb.sv", 
                                                         504);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.SA_tb__DOT__en = 0U;
    vlSelfRef.SA_tb__DOT__in_valid = 1U;
    vlSelfRef.SA_tb__DOT__load_slot = 0U;
    vlSelfRef.SA_tb__DOT__compute_slot = 1U;
    vlSelfRef.SA_tb__DOT__b_in[0U][0U] = vlSelfRef.SA_tb__DOT__W[0U][0U];
    vlSelfRef.SA_tb__DOT__b_in[0U][1U] = vlSelfRef.SA_tb__DOT__W[0U][1U];
    vlSelfRef.SA_tb__DOT__b_in[0U][2U] = vlSelfRef.SA_tb__DOT__W[0U][2U];
    vlSelfRef.SA_tb__DOT__b_in[1U][0U] = vlSelfRef.SA_tb__DOT__W[1U][0U];
    vlSelfRef.SA_tb__DOT__b_in[1U][1U] = vlSelfRef.SA_tb__DOT__W[1U][1U];
    vlSelfRef.SA_tb__DOT__b_in[1U][2U] = vlSelfRef.SA_tb__DOT__W[1U][2U];
    vlSelfRef.SA_tb__DOT__b_in[2U][0U] = vlSelfRef.SA_tb__DOT__W[2U][0U];
    vlSelfRef.SA_tb__DOT__b_in[2U][1U] = vlSelfRef.SA_tb__DOT__W[2U][1U];
    vlSelfRef.SA_tb__DOT__b_in[2U][2U] = vlSelfRef.SA_tb__DOT__W[2U][2U];
    VSA_tb___024root____VbeforeTrig_h81bc4b78__0(vlSelf, 
                                                 "@(negedge SA_tb.clk)");
    co_await vlSelfRef.__VtrigSched_h81bc4b78__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge SA_tb.clk)", 
                                                         "SA_tb.sv", 
                                                         515);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.SA_tb__DOT__in_valid = 0U;
    vlSelfRef.SA_tb__DOT__load_slot = 1U;
    vlSelfRef.SA_tb__DOT__compute_slot = 0U;
    vlSelfRef.SA_tb__DOT__en = 1U;
    vlSelfRef.SA_tb__DOT__a_in[0U] = 0U;
    vlSelfRef.SA_tb__DOT__a_in[1U] = 0U;
    vlSelfRef.SA_tb__DOT__a_in[2U] = 0U;
    SA_tb__DOT__unnamedblk55__DOT__k = 0U;
    while (VL_GTS_III(32, 0x0000000fU, SA_tb__DOT__unnamedblk55__DOT__k)) {
        VSA_tb___024root____VbeforeTrig_h81bc4b78__0(vlSelf, 
                                                     "@(negedge SA_tb.clk)");
        co_await vlSelfRef.__VtrigSched_h81bc4b78__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge SA_tb.clk)", 
                                                             "SA_tb.sv", 
                                                             525);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.SA_tb__DOT__m = (SA_tb__DOT__unnamedblk55__DOT__k 
                                   - (IData)(3U));
        if ((VL_LTES_III(32, 0U, vlSelfRef.SA_tb__DOT__m) 
             & VL_GTS_III(32, 3U, vlSelfRef.SA_tb__DOT__m))) {
            vlSelfRef.SA_tb__DOT__checks = ((IData)(1U) 
                                            + vlSelfRef.SA_tb__DOT__checks);
            if (VL_UNLIKELY(((vlSelfRef.SA_tb__DOT__result_matrix[0U] 
                              != (0x000003ffU & vlSelfRef.SA_tb__DOT__C_exp
                                  [((2U >= (3U & vlSelfRef.SA_tb__DOT__m))
                                     ? (3U & vlSelfRef.SA_tb__DOT__m)
                                     : 0U)][0U]))))) {
                vlSelfRef.SA_tb__DOT__errors = ((IData)(1U) 
                                                + vlSelfRef.SA_tb__DOT__errors);
                VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:534: Assertion failed in %m: [%0t] A C[%0d][0]: expected %0d, got %0d\n",7, 'M',vlSymsp->name(),"SA_tb.unnamedblk55.unnamedblk56", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '~',32,vlSelfRef.SA_tb__DOT__m
                             , '~',32,vlSelfRef.SA_tb__DOT__C_exp
                             [((2U >= (3U & vlSelfRef.SA_tb__DOT__m))
                                ? (3U & vlSelfRef.SA_tb__DOT__m)
                                : 0U)][0U], '#',10,vlSelfRef.SA_tb__DOT__result_matrix[0U]);
                VL_STOP_MT("SA_tb.sv", 534, "");
            }
        } else if ((VL_LTES_III(32, 7U, vlSelfRef.SA_tb__DOT__m) 
                    & VL_GTS_III(32, 0x0000000aU, vlSelfRef.SA_tb__DOT__m))) {
            vlSelfRef.SA_tb__DOT__checks = ((IData)(1U) 
                                            + vlSelfRef.SA_tb__DOT__checks);
            if (VL_UNLIKELY(((vlSelfRef.SA_tb__DOT__result_matrix[0U] 
                              != (0x000003ffU & vlSelfRef.SA_tb__DOT__C_exp2
                                  [((2U >= (3U & (vlSelfRef.SA_tb__DOT__m 
                                                  - (IData)(3U))))
                                     ? (3U & (vlSelfRef.SA_tb__DOT__m 
                                              - (IData)(3U)))
                                     : 0U)][0U]))))) {
                vlSelfRef.SA_tb__DOT__errors = ((IData)(1U) 
                                                + vlSelfRef.SA_tb__DOT__errors);
                VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:541: Assertion failed in %m: [%0t] A2 C[%0d][0]: expected %0d, got %0d\n",7, 'M',vlSymsp->name(),"SA_tb.unnamedblk55.unnamedblk56", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '~',32,(vlSelfRef.SA_tb__DOT__m 
                                       - (IData)(7U))
                             , '~',32,vlSelfRef.SA_tb__DOT__C_exp2
                             [((2U >= (3U & (vlSelfRef.SA_tb__DOT__m 
                                             - (IData)(3U))))
                                ? (3U & (vlSelfRef.SA_tb__DOT__m 
                                         - (IData)(3U)))
                                : 0U)][0U], '#',10,vlSelfRef.SA_tb__DOT__result_matrix[0U]);
                VL_STOP_MT("SA_tb.sv", 541, "");
            }
        }
        vlSelfRef.SA_tb__DOT__m = ((SA_tb__DOT__unnamedblk55__DOT__k 
                                    - (IData)(3U)) 
                                   - (IData)(1U));
        if ((VL_LTES_III(32, 0U, vlSelfRef.SA_tb__DOT__m) 
             & VL_GTS_III(32, 3U, vlSelfRef.SA_tb__DOT__m))) {
            vlSelfRef.SA_tb__DOT__checks = ((IData)(1U) 
                                            + vlSelfRef.SA_tb__DOT__checks);
            if (VL_UNLIKELY(((vlSelfRef.SA_tb__DOT__result_matrix[1U] 
                              != (0x000003ffU & vlSelfRef.SA_tb__DOT__C_exp
                                  [((2U >= (3U & vlSelfRef.SA_tb__DOT__m))
                                     ? (3U & vlSelfRef.SA_tb__DOT__m)
                                     : 0U)][1U]))))) {
                vlSelfRef.SA_tb__DOT__errors = ((IData)(1U) 
                                                + vlSelfRef.SA_tb__DOT__errors);
                VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:534: Assertion failed in %m: [%0t] A C[%0d][1]: expected %0d, got %0d\n",7, 'M',vlSymsp->name(),"SA_tb.unnamedblk55.unnamedblk56", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '~',32,vlSelfRef.SA_tb__DOT__m
                             , '~',32,vlSelfRef.SA_tb__DOT__C_exp
                             [((2U >= (3U & vlSelfRef.SA_tb__DOT__m))
                                ? (3U & vlSelfRef.SA_tb__DOT__m)
                                : 0U)][1U], '#',10,vlSelfRef.SA_tb__DOT__result_matrix[1U]);
                VL_STOP_MT("SA_tb.sv", 534, "");
            }
        } else if ((VL_LTES_III(32, 7U, vlSelfRef.SA_tb__DOT__m) 
                    & VL_GTS_III(32, 0x0000000aU, vlSelfRef.SA_tb__DOT__m))) {
            vlSelfRef.SA_tb__DOT__checks = ((IData)(1U) 
                                            + vlSelfRef.SA_tb__DOT__checks);
            if (VL_UNLIKELY(((vlSelfRef.SA_tb__DOT__result_matrix[1U] 
                              != (0x000003ffU & vlSelfRef.SA_tb__DOT__C_exp2
                                  [((2U >= (3U & (vlSelfRef.SA_tb__DOT__m 
                                                  - (IData)(3U))))
                                     ? (3U & (vlSelfRef.SA_tb__DOT__m 
                                              - (IData)(3U)))
                                     : 0U)][1U]))))) {
                vlSelfRef.SA_tb__DOT__errors = ((IData)(1U) 
                                                + vlSelfRef.SA_tb__DOT__errors);
                VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:541: Assertion failed in %m: [%0t] A2 C[%0d][1]: expected %0d, got %0d\n",7, 'M',vlSymsp->name(),"SA_tb.unnamedblk55.unnamedblk56", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '~',32,(vlSelfRef.SA_tb__DOT__m 
                                       - (IData)(7U))
                             , '~',32,vlSelfRef.SA_tb__DOT__C_exp2
                             [((2U >= (3U & (vlSelfRef.SA_tb__DOT__m 
                                             - (IData)(3U))))
                                ? (3U & (vlSelfRef.SA_tb__DOT__m 
                                         - (IData)(3U)))
                                : 0U)][1U], '#',10,vlSelfRef.SA_tb__DOT__result_matrix[1U]);
                VL_STOP_MT("SA_tb.sv", 541, "");
            }
        }
        vlSelfRef.SA_tb__DOT__m = ((SA_tb__DOT__unnamedblk55__DOT__k 
                                    - (IData)(3U)) 
                                   - (IData)(2U));
        if ((VL_LTES_III(32, 0U, vlSelfRef.SA_tb__DOT__m) 
             & VL_GTS_III(32, 3U, vlSelfRef.SA_tb__DOT__m))) {
            vlSelfRef.SA_tb__DOT__checks = ((IData)(1U) 
                                            + vlSelfRef.SA_tb__DOT__checks);
            if (VL_UNLIKELY(((vlSelfRef.SA_tb__DOT__result_matrix[2U] 
                              != (0x000003ffU & vlSelfRef.SA_tb__DOT__C_exp
                                  [((2U >= (3U & vlSelfRef.SA_tb__DOT__m))
                                     ? (3U & vlSelfRef.SA_tb__DOT__m)
                                     : 0U)][2U]))))) {
                vlSelfRef.SA_tb__DOT__errors = ((IData)(1U) 
                                                + vlSelfRef.SA_tb__DOT__errors);
                VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:534: Assertion failed in %m: [%0t] A C[%0d][2]: expected %0d, got %0d\n",7, 'M',vlSymsp->name(),"SA_tb.unnamedblk55.unnamedblk56", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '~',32,vlSelfRef.SA_tb__DOT__m
                             , '~',32,vlSelfRef.SA_tb__DOT__C_exp
                             [((2U >= (3U & vlSelfRef.SA_tb__DOT__m))
                                ? (3U & vlSelfRef.SA_tb__DOT__m)
                                : 0U)][2U], '#',10,vlSelfRef.SA_tb__DOT__result_matrix[2U]);
                VL_STOP_MT("SA_tb.sv", 534, "");
            }
        } else if ((VL_LTES_III(32, 7U, vlSelfRef.SA_tb__DOT__m) 
                    & VL_GTS_III(32, 0x0000000aU, vlSelfRef.SA_tb__DOT__m))) {
            vlSelfRef.SA_tb__DOT__checks = ((IData)(1U) 
                                            + vlSelfRef.SA_tb__DOT__checks);
            if (VL_UNLIKELY(((vlSelfRef.SA_tb__DOT__result_matrix[2U] 
                              != (0x000003ffU & vlSelfRef.SA_tb__DOT__C_exp2
                                  [((2U >= (3U & (vlSelfRef.SA_tb__DOT__m 
                                                  - (IData)(3U))))
                                     ? (3U & (vlSelfRef.SA_tb__DOT__m 
                                              - (IData)(3U)))
                                     : 0U)][2U]))))) {
                vlSelfRef.SA_tb__DOT__errors = ((IData)(1U) 
                                                + vlSelfRef.SA_tb__DOT__errors);
                VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:541: Assertion failed in %m: [%0t] A2 C[%0d][2]: expected %0d, got %0d\n",7, 'M',vlSymsp->name(),"SA_tb.unnamedblk55.unnamedblk56", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '~',32,(vlSelfRef.SA_tb__DOT__m 
                                       - (IData)(7U))
                             , '~',32,vlSelfRef.SA_tb__DOT__C_exp2
                             [((2U >= (3U & (vlSelfRef.SA_tb__DOT__m 
                                             - (IData)(3U))))
                                ? (3U & (vlSelfRef.SA_tb__DOT__m 
                                         - (IData)(3U)))
                                : 0U)][2U], '#',10,vlSelfRef.SA_tb__DOT__result_matrix[2U]);
                VL_STOP_MT("SA_tb.sv", 541, "");
            }
        }
        vlSelfRef.SA_tb__DOT__m = SA_tb__DOT__unnamedblk55__DOT__k;
        vlSelfRef.SA_tb__DOT__a_in[0U] = ((VL_LTES_III(32, 0U, vlSelfRef.SA_tb__DOT__m) 
                                           & VL_GTS_III(32, 3U, vlSelfRef.SA_tb__DOT__m))
                                           ? vlSelfRef.SA_tb__DOT__A
                                          [((2U >= 
                                             (3U & vlSelfRef.SA_tb__DOT__m))
                                             ? (3U 
                                                & vlSelfRef.SA_tb__DOT__m)
                                             : 0U)][0U]
                                           : ((VL_LTES_III(32, 7U, vlSelfRef.SA_tb__DOT__m) 
                                               & VL_GTS_III(32, 0x0000000aU, vlSelfRef.SA_tb__DOT__m))
                                               ? vlSelfRef.SA_tb__DOT__A2
                                              [((2U 
                                                 >= 
                                                 (3U 
                                                  & (vlSelfRef.SA_tb__DOT__m 
                                                     - (IData)(3U))))
                                                 ? 
                                                (3U 
                                                 & (vlSelfRef.SA_tb__DOT__m 
                                                    - (IData)(3U)))
                                                 : 0U)][0U]
                                               : 0U));
        vlSelfRef.SA_tb__DOT__m = (SA_tb__DOT__unnamedblk55__DOT__k 
                                   - (IData)(1U));
        vlSelfRef.SA_tb__DOT__a_in[1U] = ((VL_LTES_III(32, 0U, vlSelfRef.SA_tb__DOT__m) 
                                           & VL_GTS_III(32, 3U, vlSelfRef.SA_tb__DOT__m))
                                           ? vlSelfRef.SA_tb__DOT__A
                                          [((2U >= 
                                             (3U & vlSelfRef.SA_tb__DOT__m))
                                             ? (3U 
                                                & vlSelfRef.SA_tb__DOT__m)
                                             : 0U)][1U]
                                           : ((VL_LTES_III(32, 7U, vlSelfRef.SA_tb__DOT__m) 
                                               & VL_GTS_III(32, 0x0000000aU, vlSelfRef.SA_tb__DOT__m))
                                               ? vlSelfRef.SA_tb__DOT__A2
                                              [((2U 
                                                 >= 
                                                 (3U 
                                                  & (vlSelfRef.SA_tb__DOT__m 
                                                     - (IData)(3U))))
                                                 ? 
                                                (3U 
                                                 & (vlSelfRef.SA_tb__DOT__m 
                                                    - (IData)(3U)))
                                                 : 0U)][1U]
                                               : 0U));
        vlSelfRef.SA_tb__DOT__m = (SA_tb__DOT__unnamedblk55__DOT__k 
                                   - (IData)(2U));
        vlSelfRef.SA_tb__DOT__a_in[2U] = ((VL_LTES_III(32, 0U, vlSelfRef.SA_tb__DOT__m) 
                                           & VL_GTS_III(32, 3U, vlSelfRef.SA_tb__DOT__m))
                                           ? vlSelfRef.SA_tb__DOT__A
                                          [((2U >= 
                                             (3U & vlSelfRef.SA_tb__DOT__m))
                                             ? (3U 
                                                & vlSelfRef.SA_tb__DOT__m)
                                             : 0U)][2U]
                                           : ((VL_LTES_III(32, 7U, vlSelfRef.SA_tb__DOT__m) 
                                               & VL_GTS_III(32, 0x0000000aU, vlSelfRef.SA_tb__DOT__m))
                                               ? vlSelfRef.SA_tb__DOT__A2
                                              [((2U 
                                                 >= 
                                                 (3U 
                                                  & (vlSelfRef.SA_tb__DOT__m 
                                                     - (IData)(3U))))
                                                 ? 
                                                (3U 
                                                 & (vlSelfRef.SA_tb__DOT__m 
                                                    - (IData)(3U)))
                                                 : 0U)][2U]
                                               : 0U));
        if ((1U == SA_tb__DOT__unnamedblk55__DOT__k)) {
            vlSelfRef.SA_tb__DOT__in_valid = 1U;
            vlSelfRef.SA_tb__DOT__load_slot = 1U;
            vlSelfRef.SA_tb__DOT__b_in[0U][0U] = vlSelfRef.SA_tb__DOT__W2[0U][0U];
            vlSelfRef.SA_tb__DOT__b_in[0U][1U] = vlSelfRef.SA_tb__DOT__W2[0U][1U];
            vlSelfRef.SA_tb__DOT__b_in[0U][2U] = vlSelfRef.SA_tb__DOT__W2[0U][2U];
            vlSelfRef.SA_tb__DOT__b_in[1U][0U] = vlSelfRef.SA_tb__DOT__W2[1U][0U];
            vlSelfRef.SA_tb__DOT__b_in[1U][1U] = vlSelfRef.SA_tb__DOT__W2[1U][1U];
            vlSelfRef.SA_tb__DOT__b_in[1U][2U] = vlSelfRef.SA_tb__DOT__W2[1U][2U];
            vlSelfRef.SA_tb__DOT__b_in[2U][0U] = vlSelfRef.SA_tb__DOT__W2[2U][0U];
            vlSelfRef.SA_tb__DOT__b_in[2U][1U] = vlSelfRef.SA_tb__DOT__W2[2U][1U];
            vlSelfRef.SA_tb__DOT__b_in[2U][2U] = vlSelfRef.SA_tb__DOT__W2[2U][2U];
        }
        if ((2U == SA_tb__DOT__unnamedblk55__DOT__k)) {
            vlSelfRef.SA_tb__DOT__in_valid = 0U;
        }
        vlSelfRef.SA_tb__DOT__compute_slot = (VL_LTES_III(32, 7U, SA_tb__DOT__unnamedblk55__DOT__k)
                                               ? 1U
                                               : 0U);
        SA_tb__DOT__unnamedblk55__DOT__k = ((IData)(1U) 
                                            + SA_tb__DOT__unnamedblk55__DOT__k);
    }
    if ((vlSelfRef.SA_tb__DOT__errors == vlSelfRef.SA_tb__DOT__test_errors)) {
        VL_WRITEF_NX("Test 7 passed: back to back with 4 cycle gap\n",0);
    } else {
        VL_WRITEF_NX("Test 7 FAILED: back to back\n",0);
    }
    VL_FINISH_MT("SA_tb.sv", 573, "");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_return;
}

bool VSA_tb___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSA_tb___024root___trigger_anySet__ico\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

bool VSA_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSA_tb___024root___trigger_anySet__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void VSA_tb___024root___act_comb__TOP__0(VSA_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSA_tb___024root___act_comb__TOP__0\n"); );
    VSA_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.SA_tb__DOT____Vcellinp__dut__b_in[0U][0U] 
        = vlSelfRef.SA_tb__DOT__b_in[0U][0U];
    vlSelfRef.SA_tb__DOT____Vcellinp__dut__b_in[0U][1U] 
        = vlSelfRef.SA_tb__DOT__b_in[0U][1U];
    vlSelfRef.SA_tb__DOT____Vcellinp__dut__b_in[0U][2U] 
        = vlSelfRef.SA_tb__DOT__b_in[0U][2U];
    vlSelfRef.SA_tb__DOT____Vcellinp__dut__b_in[1U][0U] 
        = vlSelfRef.SA_tb__DOT__b_in[1U][0U];
    vlSelfRef.SA_tb__DOT____Vcellinp__dut__b_in[1U][1U] 
        = vlSelfRef.SA_tb__DOT__b_in[1U][1U];
    vlSelfRef.SA_tb__DOT____Vcellinp__dut__b_in[1U][2U] 
        = vlSelfRef.SA_tb__DOT__b_in[1U][2U];
    vlSelfRef.SA_tb__DOT____Vcellinp__dut__b_in[2U][0U] 
        = vlSelfRef.SA_tb__DOT__b_in[2U][0U];
    vlSelfRef.SA_tb__DOT____Vcellinp__dut__b_in[2U][1U] 
        = vlSelfRef.SA_tb__DOT__b_in[2U][1U];
    vlSelfRef.SA_tb__DOT____Vcellinp__dut__b_in[2U][2U] 
        = vlSelfRef.SA_tb__DOT__b_in[2U][2U];
    if (vlSelfRef.SA_tb__DOT__compute_slot) {
        vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__w 
            = vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__b2;
        vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__w 
            = vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__b2;
        vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__w 
            = vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__b2;
        vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__w 
            = vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__b2;
        vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__w 
            = vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__b2;
        vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__w 
            = vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__b2;
        vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__w 
            = vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__b2;
        vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__w 
            = vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__b2;
        vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__w 
            = vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__b2;
    } else {
        vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__w 
            = vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__b1;
        vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__w 
            = vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__b1;
        vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__w 
            = vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__b1;
        vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__w 
            = vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__b1;
        vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__w 
            = vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__b1;
        vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__w 
            = vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__b1;
        vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__w 
            = vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__b1;
        vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__w 
            = vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__b1;
        vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__w 
            = vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__b1;
    }
    vlSelfRef.SA_tb__DOT____Vcellinp__dut__a_in[0U] 
        = vlSelfRef.SA_tb__DOT__a_in[0U];
    vlSelfRef.SA_tb__DOT____Vcellinp__dut__a_in[1U] 
        = vlSelfRef.SA_tb__DOT__a_in[1U];
    vlSelfRef.SA_tb__DOT____Vcellinp__dut__a_in[2U] 
        = vlSelfRef.SA_tb__DOT__a_in[2U];
    vlSelfRef.SA_tb__DOT__pe_a[0U][0U] = vlSelfRef.SA_tb__DOT____Vcellinp__dut__a_in[0U];
    vlSelfRef.SA_tb__DOT__pe_a[1U][0U] = vlSelfRef.SA_tb__DOT____Vcellinp__dut__a_in[1U];
    vlSelfRef.SA_tb__DOT__pe_a[2U][0U] = vlSelfRef.SA_tb__DOT____Vcellinp__dut__a_in[2U];
}

void VSA_tb___024root___nba_sequent__TOP__0(VSA_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSA_tb___024root___nba_sequent__TOP__0\n"); );
    VSA_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.SA_tb__DOT__rst_n) {
        if (vlSelfRef.SA_tb__DOT__in_valid) {
            if ((1U & (~ (IData)(vlSelfRef.SA_tb__DOT__load_slot)))) {
                vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__b1 
                    = vlSelfRef.SA_tb__DOT____Vcellinp__dut__b_in[2U][2U];
                vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__b1 
                    = vlSelfRef.SA_tb__DOT____Vcellinp__dut__b_in[2U][1U];
                vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__b1 
                    = vlSelfRef.SA_tb__DOT____Vcellinp__dut__b_in[2U][0U];
                vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__b1 
                    = vlSelfRef.SA_tb__DOT____Vcellinp__dut__b_in[1U][2U];
                vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__b1 
                    = vlSelfRef.SA_tb__DOT____Vcellinp__dut__b_in[1U][1U];
                vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__b1 
                    = vlSelfRef.SA_tb__DOT____Vcellinp__dut__b_in[1U][0U];
                vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__b1 
                    = vlSelfRef.SA_tb__DOT____Vcellinp__dut__b_in[0U][2U];
                vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__b1 
                    = vlSelfRef.SA_tb__DOT____Vcellinp__dut__b_in[0U][1U];
                vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__b1 
                    = vlSelfRef.SA_tb__DOT____Vcellinp__dut__b_in[0U][0U];
            }
            if (vlSelfRef.SA_tb__DOT__load_slot) {
                vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__b2 
                    = vlSelfRef.SA_tb__DOT____Vcellinp__dut__b_in[2U][2U];
                vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__b2 
                    = vlSelfRef.SA_tb__DOT____Vcellinp__dut__b_in[2U][1U];
                vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__b2 
                    = vlSelfRef.SA_tb__DOT____Vcellinp__dut__b_in[2U][0U];
                vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__b2 
                    = vlSelfRef.SA_tb__DOT____Vcellinp__dut__b_in[1U][2U];
                vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__b2 
                    = vlSelfRef.SA_tb__DOT____Vcellinp__dut__b_in[1U][1U];
                vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__b2 
                    = vlSelfRef.SA_tb__DOT____Vcellinp__dut__b_in[1U][0U];
                vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__b2 
                    = vlSelfRef.SA_tb__DOT____Vcellinp__dut__b_in[0U][2U];
                vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__b2 
                    = vlSelfRef.SA_tb__DOT____Vcellinp__dut__b_in[0U][1U];
                vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__b2 
                    = vlSelfRef.SA_tb__DOT____Vcellinp__dut__b_in[0U][0U];
            }
        }
        if (vlSelfRef.SA_tb__DOT__en) {
            vlSelfRef.SA_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__PE__result 
                = (((0U == vlSelfRef.SA_tb__DOT____Vcellinp__dut__a_in[0U]) 
                    | (0U == (IData)(vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__w)))
                    ? 0U : (0x000003ffU & (vlSelfRef.SA_tb__DOT____Vcellinp__dut__a_in[0U] 
                                           * (IData)(vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__w))));
            vlSelfRef.SA_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__PE__a_out 
                = vlSelfRef.SA_tb__DOT____Vcellinp__dut__a_in[2U];
            vlSelfRef.SA_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__PE__a_out 
                = vlSelfRef.SA_tb__DOT____Vcellinp__dut__a_in[1U];
            vlSelfRef.SA_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__PE__a_out 
                = vlSelfRef.SA_tb__DOT____Vcellinp__dut__a_in[0U];
            vlSelfRef.SA_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__PE__result 
                = (0x000003ffU & (((0U == vlSelfRef.SA_tb__DOT____Vcellinp__dut__a_in[2U]) 
                                   | (0U == (IData)(vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__w)))
                                   ? vlSelfRef.SA_tb__DOT__dut__DOT__p_wire[1U][0U]
                                   : ((IData)(vlSelfRef.SA_tb__DOT__dut__DOT__p_wire[1U][0U]) 
                                      + (vlSelfRef.SA_tb__DOT____Vcellinp__dut__a_in[2U] 
                                         * (IData)(vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__w)))));
            vlSelfRef.SA_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__PE__result 
                = (0x000003ffU & (((0U == vlSelfRef.SA_tb__DOT____Vcellinp__dut__a_in[1U]) 
                                   | (0U == (IData)(vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__w)))
                                   ? vlSelfRef.SA_tb__DOT__dut__DOT__p_wire[0U][0U]
                                   : ((IData)(vlSelfRef.SA_tb__DOT__dut__DOT__p_wire[0U][0U]) 
                                      + (vlSelfRef.SA_tb__DOT____Vcellinp__dut__a_in[1U] 
                                         * (IData)(vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__w)))));
            vlSelfRef.SA_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__PE__result 
                = (((0U == vlSelfRef.SA_tb__DOT__dut__DOT__a_wire[0U][1U]) 
                    | (0U == (IData)(vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__w)))
                    ? 0U : (0x000003ffU & (vlSelfRef.SA_tb__DOT__dut__DOT__a_wire[0U][1U] 
                                           * (IData)(vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__w))));
            vlSelfRef.SA_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__PE__result 
                = (((0U == vlSelfRef.SA_tb__DOT__dut__DOT__a_wire[0U][0U]) 
                    | (0U == (IData)(vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__w)))
                    ? 0U : (0x000003ffU & (vlSelfRef.SA_tb__DOT__dut__DOT__a_wire[0U][0U] 
                                           * (IData)(vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__w))));
            vlSelfRef.SA_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__PE__a_out 
                = vlSelfRef.SA_tb__DOT__dut__DOT__a_wire[2U][1U];
            vlSelfRef.SA_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__PE__a_out 
                = vlSelfRef.SA_tb__DOT__dut__DOT__a_wire[2U][0U];
            vlSelfRef.SA_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__PE__a_out 
                = vlSelfRef.SA_tb__DOT__dut__DOT__a_wire[1U][1U];
            vlSelfRef.SA_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__PE__a_out 
                = vlSelfRef.SA_tb__DOT__dut__DOT__a_wire[1U][0U];
            vlSelfRef.SA_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__PE__a_out 
                = vlSelfRef.SA_tb__DOT__dut__DOT__a_wire[0U][1U];
            vlSelfRef.SA_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__PE__a_out 
                = vlSelfRef.SA_tb__DOT__dut__DOT__a_wire[0U][0U];
            vlSelfRef.SA_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__PE__result 
                = (0x000003ffU & (((0U == vlSelfRef.SA_tb__DOT__dut__DOT__a_wire[2U][1U]) 
                                   | (0U == (IData)(vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__w)))
                                   ? vlSelfRef.SA_tb__DOT__dut__DOT__p_wire[1U][2U]
                                   : ((IData)(vlSelfRef.SA_tb__DOT__dut__DOT__p_wire[1U][2U]) 
                                      + (vlSelfRef.SA_tb__DOT__dut__DOT__a_wire[2U][1U] 
                                         * (IData)(vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__w)))));
            vlSelfRef.SA_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__PE__result 
                = (0x000003ffU & (((0U == vlSelfRef.SA_tb__DOT__dut__DOT__a_wire[2U][0U]) 
                                   | (0U == (IData)(vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__w)))
                                   ? vlSelfRef.SA_tb__DOT__dut__DOT__p_wire[1U][1U]
                                   : ((IData)(vlSelfRef.SA_tb__DOT__dut__DOT__p_wire[1U][1U]) 
                                      + (vlSelfRef.SA_tb__DOT__dut__DOT__a_wire[2U][0U] 
                                         * (IData)(vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__w)))));
            vlSelfRef.SA_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__PE__result 
                = (0x000003ffU & (((0U == vlSelfRef.SA_tb__DOT__dut__DOT__a_wire[1U][1U]) 
                                   | (0U == (IData)(vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__w)))
                                   ? vlSelfRef.SA_tb__DOT__dut__DOT__p_wire[0U][2U]
                                   : ((IData)(vlSelfRef.SA_tb__DOT__dut__DOT__p_wire[0U][2U]) 
                                      + (vlSelfRef.SA_tb__DOT__dut__DOT__a_wire[1U][1U] 
                                         * (IData)(vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__w)))));
            vlSelfRef.SA_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__PE__result 
                = (0x000003ffU & (((0U == vlSelfRef.SA_tb__DOT__dut__DOT__a_wire[1U][0U]) 
                                   | (0U == (IData)(vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__w)))
                                   ? vlSelfRef.SA_tb__DOT__dut__DOT__p_wire[0U][1U]
                                   : ((IData)(vlSelfRef.SA_tb__DOT__dut__DOT__p_wire[0U][1U]) 
                                      + (vlSelfRef.SA_tb__DOT__dut__DOT__a_wire[1U][0U] 
                                         * (IData)(vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__w)))));
        }
    } else {
        vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__b1 = 0U;
        vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__b2 = 0U;
        vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__b1 = 0U;
        vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__b2 = 0U;
        vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__b1 = 0U;
        vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__b2 = 0U;
        vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__b1 = 0U;
        vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__b2 = 0U;
        vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__b1 = 0U;
        vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__b2 = 0U;
        vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__b1 = 0U;
        vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__b2 = 0U;
        vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__b1 = 0U;
        vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__b2 = 0U;
        vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__b1 = 0U;
        vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__b2 = 0U;
        vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__b1 = 0U;
        vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__b2 = 0U;
        vlSelfRef.SA_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__PE__result = 0U;
        vlSelfRef.SA_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__PE__a_out = 0U;
        vlSelfRef.SA_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__PE__a_out = 0U;
        vlSelfRef.SA_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__PE__a_out = 0U;
        vlSelfRef.SA_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__PE__result = 0U;
        vlSelfRef.SA_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__PE__result = 0U;
        vlSelfRef.SA_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__PE__result = 0U;
        vlSelfRef.SA_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__PE__result = 0U;
        vlSelfRef.SA_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__PE__a_out = 0U;
        vlSelfRef.SA_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__PE__a_out = 0U;
        vlSelfRef.SA_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__PE__a_out = 0U;
        vlSelfRef.SA_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__PE__a_out = 0U;
        vlSelfRef.SA_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__PE__a_out = 0U;
        vlSelfRef.SA_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__PE__a_out = 0U;
        vlSelfRef.SA_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__PE__result = 0U;
        vlSelfRef.SA_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__PE__result = 0U;
        vlSelfRef.SA_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__PE__result = 0U;
        vlSelfRef.SA_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__PE__result = 0U;
    }
    vlSelfRef.SA_tb__DOT__pe_b1[2U][2U] = vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__b1;
    vlSelfRef.SA_tb__DOT__pe_b2[2U][2U] = vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__b2;
    vlSelfRef.SA_tb__DOT__pe_b1[2U][1U] = vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__b1;
    vlSelfRef.SA_tb__DOT__pe_b2[2U][1U] = vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__b2;
    vlSelfRef.SA_tb__DOT__pe_b1[2U][0U] = vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__b1;
    vlSelfRef.SA_tb__DOT__pe_b2[2U][0U] = vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__b2;
    vlSelfRef.SA_tb__DOT__pe_b1[1U][2U] = vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__b1;
    vlSelfRef.SA_tb__DOT__pe_b2[1U][2U] = vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__b2;
    vlSelfRef.SA_tb__DOT__pe_b1[1U][1U] = vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__b1;
    vlSelfRef.SA_tb__DOT__pe_b2[1U][1U] = vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__b2;
    vlSelfRef.SA_tb__DOT__pe_b1[1U][0U] = vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__b1;
    vlSelfRef.SA_tb__DOT__pe_b2[1U][0U] = vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__b2;
    vlSelfRef.SA_tb__DOT__pe_b1[0U][2U] = vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__b1;
    vlSelfRef.SA_tb__DOT__pe_b2[0U][2U] = vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__b2;
    vlSelfRef.SA_tb__DOT__pe_b1[0U][1U] = vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__b1;
    vlSelfRef.SA_tb__DOT__pe_b2[0U][1U] = vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__b2;
    vlSelfRef.SA_tb__DOT__pe_b1[0U][0U] = vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__b1;
    vlSelfRef.SA_tb__DOT__pe_b2[0U][0U] = vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__b2;
    vlSelfRef.SA_tb__DOT__dut__DOT__p_wire[0U][0U] 
        = vlSelfRef.SA_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__PE__result;
    vlSelfRef.SA_tb__DOT__dut__DOT__a_wire[2U][0U] 
        = vlSelfRef.SA_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__PE__a_out;
    vlSelfRef.SA_tb__DOT__dut__DOT__a_wire[1U][0U] 
        = vlSelfRef.SA_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__PE__a_out;
    vlSelfRef.SA_tb__DOT__dut__DOT__a_wire[0U][0U] 
        = vlSelfRef.SA_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__PE__a_out;
    vlSelfRef.SA_tb__DOT__dut__DOT__p_wire[2U][0U] 
        = vlSelfRef.SA_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__PE__result;
    vlSelfRef.SA_tb__DOT__dut__DOT__p_wire[1U][0U] 
        = vlSelfRef.SA_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__PE__result;
    vlSelfRef.SA_tb__DOT__dut__DOT__p_wire[0U][2U] 
        = vlSelfRef.SA_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__PE__result;
    vlSelfRef.SA_tb__DOT__dut__DOT__p_wire[0U][1U] 
        = vlSelfRef.SA_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__PE__result;
    vlSelfRef.SA_tb__DOT__dut__DOT__a_wire[2U][2U] 
        = vlSelfRef.SA_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__PE__a_out;
    vlSelfRef.SA_tb__DOT__dut__DOT__a_wire[2U][1U] 
        = vlSelfRef.SA_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__PE__a_out;
    vlSelfRef.SA_tb__DOT__dut__DOT__a_wire[1U][2U] 
        = vlSelfRef.SA_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__PE__a_out;
    vlSelfRef.SA_tb__DOT__dut__DOT__a_wire[1U][1U] 
        = vlSelfRef.SA_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__PE__a_out;
    vlSelfRef.SA_tb__DOT__dut__DOT__a_wire[0U][2U] 
        = vlSelfRef.SA_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__PE__a_out;
    vlSelfRef.SA_tb__DOT__dut__DOT__a_wire[0U][1U] 
        = vlSelfRef.SA_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__PE__a_out;
    vlSelfRef.SA_tb__DOT__dut__DOT__p_wire[2U][2U] 
        = vlSelfRef.SA_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__PE__result;
    vlSelfRef.SA_tb__DOT__dut__DOT__p_wire[2U][1U] 
        = vlSelfRef.SA_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__PE__result;
    vlSelfRef.SA_tb__DOT__dut__DOT__p_wire[1U][2U] 
        = vlSelfRef.SA_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__PE__result;
    vlSelfRef.SA_tb__DOT__dut__DOT__p_wire[1U][1U] 
        = vlSelfRef.SA_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__PE__result;
    vlSelfRef.SA_tb__DOT__pe_a[0U][1U] = vlSelfRef.SA_tb__DOT__dut__DOT__a_wire[0U][0U];
    vlSelfRef.SA_tb__DOT__pe_a[0U][2U] = vlSelfRef.SA_tb__DOT__dut__DOT__a_wire[0U][1U];
    vlSelfRef.SA_tb__DOT__pe_a[1U][1U] = vlSelfRef.SA_tb__DOT__dut__DOT__a_wire[1U][0U];
    vlSelfRef.SA_tb__DOT__pe_a[1U][2U] = vlSelfRef.SA_tb__DOT__dut__DOT__a_wire[1U][1U];
    vlSelfRef.SA_tb__DOT__pe_a[2U][1U] = vlSelfRef.SA_tb__DOT__dut__DOT__a_wire[2U][0U];
    vlSelfRef.SA_tb__DOT__pe_a[2U][2U] = vlSelfRef.SA_tb__DOT__dut__DOT__a_wire[2U][1U];
    vlSelfRef.SA_tb__DOT____Vcellout__dut__result_matrix[0U] 
        = vlSelfRef.SA_tb__DOT__dut__DOT__p_wire[2U][0U];
    vlSelfRef.SA_tb__DOT____Vcellout__dut__result_matrix[1U] 
        = vlSelfRef.SA_tb__DOT__dut__DOT__p_wire[2U][1U];
    vlSelfRef.SA_tb__DOT____Vcellout__dut__result_matrix[2U] 
        = vlSelfRef.SA_tb__DOT__dut__DOT__p_wire[2U][2U];
    vlSelfRef.SA_tb__DOT__result_matrix[0U] = vlSelfRef.SA_tb__DOT____Vcellout__dut__result_matrix[0U];
    vlSelfRef.SA_tb__DOT__result_matrix[1U] = vlSelfRef.SA_tb__DOT____Vcellout__dut__result_matrix[1U];
    vlSelfRef.SA_tb__DOT__result_matrix[2U] = vlSelfRef.SA_tb__DOT____Vcellout__dut__result_matrix[2U];
}

void VSA_tb___024root___nba_comb__TOP__0(VSA_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSA_tb___024root___nba_comb__TOP__0\n"); );
    VSA_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.SA_tb__DOT____Vcellinp__dut__b_in[0U][0U] 
        = vlSelfRef.SA_tb__DOT__b_in[0U][0U];
    vlSelfRef.SA_tb__DOT____Vcellinp__dut__b_in[0U][1U] 
        = vlSelfRef.SA_tb__DOT__b_in[0U][1U];
    vlSelfRef.SA_tb__DOT____Vcellinp__dut__b_in[0U][2U] 
        = vlSelfRef.SA_tb__DOT__b_in[0U][2U];
    vlSelfRef.SA_tb__DOT____Vcellinp__dut__b_in[1U][0U] 
        = vlSelfRef.SA_tb__DOT__b_in[1U][0U];
    vlSelfRef.SA_tb__DOT____Vcellinp__dut__b_in[1U][1U] 
        = vlSelfRef.SA_tb__DOT__b_in[1U][1U];
    vlSelfRef.SA_tb__DOT____Vcellinp__dut__b_in[1U][2U] 
        = vlSelfRef.SA_tb__DOT__b_in[1U][2U];
    vlSelfRef.SA_tb__DOT____Vcellinp__dut__b_in[2U][0U] 
        = vlSelfRef.SA_tb__DOT__b_in[2U][0U];
    vlSelfRef.SA_tb__DOT____Vcellinp__dut__b_in[2U][1U] 
        = vlSelfRef.SA_tb__DOT__b_in[2U][1U];
    vlSelfRef.SA_tb__DOT____Vcellinp__dut__b_in[2U][2U] 
        = vlSelfRef.SA_tb__DOT__b_in[2U][2U];
    vlSelfRef.SA_tb__DOT____Vcellinp__dut__a_in[0U] 
        = vlSelfRef.SA_tb__DOT__a_in[0U];
    vlSelfRef.SA_tb__DOT____Vcellinp__dut__a_in[1U] 
        = vlSelfRef.SA_tb__DOT__a_in[1U];
    vlSelfRef.SA_tb__DOT____Vcellinp__dut__a_in[2U] 
        = vlSelfRef.SA_tb__DOT__a_in[2U];
    if (vlSelfRef.SA_tb__DOT__compute_slot) {
        vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__w 
            = vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__b2;
        vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__w 
            = vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__b2;
        vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__w 
            = vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__b2;
        vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__w 
            = vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__b2;
        vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__w 
            = vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__b2;
        vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__w 
            = vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__b2;
        vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__w 
            = vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__b2;
        vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__w 
            = vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__b2;
        vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__w 
            = vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__b2;
    } else {
        vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__w 
            = vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__b1;
        vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__w 
            = vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__b1;
        vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__w 
            = vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__b1;
        vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__w 
            = vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__b1;
        vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__w 
            = vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__b1;
        vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__w 
            = vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__b1;
        vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__w 
            = vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__b1;
        vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__w 
            = vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__b1;
        vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__w 
            = vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__b1;
    }
    vlSelfRef.SA_tb__DOT__pe_a[0U][0U] = vlSelfRef.SA_tb__DOT____Vcellinp__dut__a_in[0U];
    vlSelfRef.SA_tb__DOT__pe_a[1U][0U] = vlSelfRef.SA_tb__DOT____Vcellinp__dut__a_in[1U];
    vlSelfRef.SA_tb__DOT__pe_a[2U][0U] = vlSelfRef.SA_tb__DOT____Vcellinp__dut__a_in[2U];
}

void VSA_tb___024root___timing_ready(VSA_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSA_tb___024root___timing_ready\n"); );
    VSA_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h81bc4b78__0.ready("@(negedge SA_tb.clk)");
    }
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h81bc4bb7__0.ready("@(posedge SA_tb.clk)");
    }
}

void VSA_tb___024root___timing_resume(VSA_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSA_tb___024root___timing_resume\n"); );
    VSA_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VtrigSched_h81bc4b78__0.moveToResumeQueue(
                                                          "@(negedge SA_tb.clk)");
    vlSelfRef.__VtrigSched_h81bc4bb7__0.moveToResumeQueue(
                                                          "@(posedge SA_tb.clk)");
    vlSelfRef.__VtrigSched_h81bc4b78__0.resume("@(negedge SA_tb.clk)");
    vlSelfRef.__VtrigSched_h81bc4bb7__0.resume("@(posedge SA_tb.clk)");
    if ((2ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void VSA_tb___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSA_tb___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

void VSA_tb___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSA_tb___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

void VSA_tb___024root____VbeforeTrig_h81bc4b78__0(VSA_tb___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSA_tb___024root____VbeforeTrig_h81bc4b78__0\n"); );
    VSA_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((((~ (IData)(vlSelfRef.SA_tb__DOT__clk)) 
                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__SA_tb__DOT__clk__0)) 
                                   << 2U) | ((IData)(vlSelfRef.SA_tb__DOT__clk) 
                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__SA_tb__DOT__clk__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__SA_tb__DOT__clk__0 
        = vlSelfRef.SA_tb__DOT__clk;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h81bc4bb7__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h81bc4bb7__0.ready(__VeventDescription);
    }
    if ((4ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h81bc4b78__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h81bc4b78__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h81bc4b78__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h81bc4b78__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h81bc4b78__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h81bc4b78__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h81bc4b78__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h81bc4b78__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h81bc4b78__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h81bc4b78__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h81bc4b78__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h81bc4b78__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h81bc4b78__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h81bc4b78__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h81bc4b78__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h81bc4b78__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h81bc4b78__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h81bc4b78__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h81bc4b78__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h81bc4b78__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h81bc4b78__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h81bc4b78__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h81bc4b78__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h81bc4b78__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h81bc4b78__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h81bc4b78__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h81bc4b78__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h81bc4b78__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h81bc4b78__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h81bc4b78__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h81bc4b78__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h81bc4b78__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h81bc4b78__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

void VSA_tb___024root____VbeforeTrig_h81bc4bb7__0(VSA_tb___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSA_tb___024root____VbeforeTrig_h81bc4bb7__0\n"); );
    VSA_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((((~ (IData)(vlSelfRef.SA_tb__DOT__clk)) 
                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__SA_tb__DOT__clk__0)) 
                                   << 2U) | ((IData)(vlSelfRef.SA_tb__DOT__clk) 
                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__SA_tb__DOT__clk__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__SA_tb__DOT__clk__0 
        = vlSelfRef.SA_tb__DOT__clk;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h81bc4bb7__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h81bc4bb7__0.ready(__VeventDescription);
    }
    if ((4ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h81bc4b78__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h81bc4b78__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h81bc4b78__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h81bc4b78__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h81bc4b78__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h81bc4b78__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h81bc4b78__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h81bc4b78__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h81bc4b78__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h81bc4b78__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h81bc4b78__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h81bc4b78__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h81bc4b78__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h81bc4b78__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h81bc4b78__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h81bc4b78__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h81bc4b78__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h81bc4b78__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h81bc4b78__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h81bc4b78__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h81bc4b78__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h81bc4b78__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h81bc4b78__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h81bc4b78__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h81bc4b78__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h81bc4b78__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h81bc4b78__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h81bc4b78__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h81bc4b78__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h81bc4b78__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h81bc4b78__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h81bc4b78__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h81bc4b78__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

#ifdef VL_DEBUG
void VSA_tb___024root___eval_debug_assertions(VSA_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSA_tb___024root___eval_debug_assertions\n"); );
    VSA_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
