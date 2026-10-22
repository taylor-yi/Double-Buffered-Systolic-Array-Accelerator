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
    // Body
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
                                                         57);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
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
                                                             66);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        SA_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (SA_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.SA_tb__DOT__checks = ((IData)(1U) + vlSelfRef.SA_tb__DOT__checks);
    if (VL_UNLIKELY(((0U != vlSelfRef.SA_tb__DOT__pe_a[0U][0U])))) {
        vlSelfRef.SA_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.SA_tb__DOT__errors);
        VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:72: Assertion failed in %m: [%0t] PE[0][0].a: expected 0, got %0d\n",5, 'M',vlSymsp->name(),"SA_tb.unnamedblk1.unnamedblk2", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',4,vlSelfRef.SA_tb__DOT__pe_a[0U][0U]);
        VL_STOP_MT("SA_tb.sv", 72, "");
    }
    vlSelfRef.SA_tb__DOT__checks = ((IData)(1U) + vlSelfRef.SA_tb__DOT__checks);
    if (VL_UNLIKELY(((0U != vlSelfRef.SA_tb__DOT__pe_a[0U][1U])))) {
        vlSelfRef.SA_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.SA_tb__DOT__errors);
        VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:72: Assertion failed in %m: [%0t] PE[0][1].a: expected 0, got %0d\n",5, 'M',vlSymsp->name(),"SA_tb.unnamedblk1.unnamedblk2", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',4,vlSelfRef.SA_tb__DOT__pe_a[0U][1U]);
        VL_STOP_MT("SA_tb.sv", 72, "");
    }
    vlSelfRef.SA_tb__DOT__checks = ((IData)(1U) + vlSelfRef.SA_tb__DOT__checks);
    if (VL_UNLIKELY(((0U != vlSelfRef.SA_tb__DOT__pe_a[0U][2U])))) {
        vlSelfRef.SA_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.SA_tb__DOT__errors);
        VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:72: Assertion failed in %m: [%0t] PE[0][2].a: expected 0, got %0d\n",5, 'M',vlSymsp->name(),"SA_tb.unnamedblk1.unnamedblk2", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',4,vlSelfRef.SA_tb__DOT__pe_a[0U][2U]);
        VL_STOP_MT("SA_tb.sv", 72, "");
    }
    vlSelfRef.SA_tb__DOT__checks = ((IData)(1U) + vlSelfRef.SA_tb__DOT__checks);
    if (VL_UNLIKELY(((0U != vlSelfRef.SA_tb__DOT__pe_a[1U][0U])))) {
        vlSelfRef.SA_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.SA_tb__DOT__errors);
        VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:72: Assertion failed in %m: [%0t] PE[1][0].a: expected 0, got %0d\n",5, 'M',vlSymsp->name(),"SA_tb.unnamedblk1.unnamedblk2", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',4,vlSelfRef.SA_tb__DOT__pe_a[1U][0U]);
        VL_STOP_MT("SA_tb.sv", 72, "");
    }
    vlSelfRef.SA_tb__DOT__checks = ((IData)(1U) + vlSelfRef.SA_tb__DOT__checks);
    if (VL_UNLIKELY(((0U != vlSelfRef.SA_tb__DOT__pe_a[1U][1U])))) {
        vlSelfRef.SA_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.SA_tb__DOT__errors);
        VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:72: Assertion failed in %m: [%0t] PE[1][1].a: expected 0, got %0d\n",5, 'M',vlSymsp->name(),"SA_tb.unnamedblk1.unnamedblk2", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',4,vlSelfRef.SA_tb__DOT__pe_a[1U][1U]);
        VL_STOP_MT("SA_tb.sv", 72, "");
    }
    vlSelfRef.SA_tb__DOT__checks = ((IData)(1U) + vlSelfRef.SA_tb__DOT__checks);
    if (VL_UNLIKELY(((0U != vlSelfRef.SA_tb__DOT__pe_a[1U][2U])))) {
        vlSelfRef.SA_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.SA_tb__DOT__errors);
        VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:72: Assertion failed in %m: [%0t] PE[1][2].a: expected 0, got %0d\n",5, 'M',vlSymsp->name(),"SA_tb.unnamedblk1.unnamedblk2", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',4,vlSelfRef.SA_tb__DOT__pe_a[1U][2U]);
        VL_STOP_MT("SA_tb.sv", 72, "");
    }
    vlSelfRef.SA_tb__DOT__checks = ((IData)(1U) + vlSelfRef.SA_tb__DOT__checks);
    if (VL_UNLIKELY(((0U != vlSelfRef.SA_tb__DOT__pe_a[2U][0U])))) {
        vlSelfRef.SA_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.SA_tb__DOT__errors);
        VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:72: Assertion failed in %m: [%0t] PE[2][0].a: expected 0, got %0d\n",5, 'M',vlSymsp->name(),"SA_tb.unnamedblk1.unnamedblk2", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',4,vlSelfRef.SA_tb__DOT__pe_a[2U][0U]);
        VL_STOP_MT("SA_tb.sv", 72, "");
    }
    vlSelfRef.SA_tb__DOT__checks = ((IData)(1U) + vlSelfRef.SA_tb__DOT__checks);
    if (VL_UNLIKELY(((0U != vlSelfRef.SA_tb__DOT__pe_a[2U][1U])))) {
        vlSelfRef.SA_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.SA_tb__DOT__errors);
        VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:72: Assertion failed in %m: [%0t] PE[2][1].a: expected 0, got %0d\n",5, 'M',vlSymsp->name(),"SA_tb.unnamedblk1.unnamedblk2", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',4,vlSelfRef.SA_tb__DOT__pe_a[2U][1U]);
        VL_STOP_MT("SA_tb.sv", 72, "");
    }
    vlSelfRef.SA_tb__DOT__checks = ((IData)(1U) + vlSelfRef.SA_tb__DOT__checks);
    if (VL_UNLIKELY(((0U != vlSelfRef.SA_tb__DOT__pe_a[2U][2U])))) {
        vlSelfRef.SA_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.SA_tb__DOT__errors);
        VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:72: Assertion failed in %m: [%0t] PE[2][2].a: expected 0, got %0d\n",5, 'M',vlSymsp->name(),"SA_tb.unnamedblk1.unnamedblk2", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',4,vlSelfRef.SA_tb__DOT__pe_a[2U][2U]);
        VL_STOP_MT("SA_tb.sv", 72, "");
    }
    SA_tb__DOT__unnamedblk3__DOT__t = 0U;
    while (VL_GTS_III(32, 5U, SA_tb__DOT__unnamedblk3__DOT__t)) {
        VSA_tb___024root____VbeforeTrig_h81bc4b78__0(vlSelf, 
                                                     "@(negedge SA_tb.clk)");
        co_await vlSelfRef.__VtrigSched_h81bc4b78__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge SA_tb.clk)", 
                                                             "SA_tb.sv", 
                                                             80);
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
                                             87);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        if (VL_LTES_III(32, 2U, SA_tb__DOT__unnamedblk3__DOT__t)) {
            vlSelfRef.SA_tb__DOT__checks = ((IData)(1U) 
                                            + vlSelfRef.SA_tb__DOT__checks);
            if (VL_UNLIKELY(((vlSelfRef.SA_tb__DOT__pe_a[0U][0U] 
                              != vlSelfRef.SA_tb__DOT__hist[0U][0U])))) {
                vlSelfRef.SA_tb__DOT__errors = ((IData)(1U) 
                                                + vlSelfRef.SA_tb__DOT__errors);
                VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:95: Assertion failed in %m: [%0t] PE[0][0].a: expected %0d, got %0d\n",6, 'M',vlSymsp->name(),"SA_tb.unnamedblk3.unnamedblk5.unnamedblk6", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',4,vlSelfRef.SA_tb__DOT__hist[0U][0U]
                             , '#',4,vlSelfRef.SA_tb__DOT__pe_a[0U][0U]);
                VL_STOP_MT("SA_tb.sv", 95, "");
            }
            vlSelfRef.SA_tb__DOT__checks = ((IData)(1U) 
                                            + vlSelfRef.SA_tb__DOT__checks);
            if (VL_UNLIKELY(((vlSelfRef.SA_tb__DOT__pe_a[0U][1U] 
                              != vlSelfRef.SA_tb__DOT__hist[1U][0U])))) {
                vlSelfRef.SA_tb__DOT__errors = ((IData)(1U) 
                                                + vlSelfRef.SA_tb__DOT__errors);
                VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:95: Assertion failed in %m: [%0t] PE[0][1].a: expected %0d, got %0d\n",6, 'M',vlSymsp->name(),"SA_tb.unnamedblk3.unnamedblk5.unnamedblk6", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',4,vlSelfRef.SA_tb__DOT__hist[1U][0U]
                             , '#',4,vlSelfRef.SA_tb__DOT__pe_a[0U][1U]);
                VL_STOP_MT("SA_tb.sv", 95, "");
            }
            vlSelfRef.SA_tb__DOT__checks = ((IData)(1U) 
                                            + vlSelfRef.SA_tb__DOT__checks);
            if (VL_UNLIKELY(((vlSelfRef.SA_tb__DOT__pe_a[0U][2U] 
                              != vlSelfRef.SA_tb__DOT__hist[2U][0U])))) {
                vlSelfRef.SA_tb__DOT__errors = ((IData)(1U) 
                                                + vlSelfRef.SA_tb__DOT__errors);
                VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:95: Assertion failed in %m: [%0t] PE[0][2].a: expected %0d, got %0d\n",6, 'M',vlSymsp->name(),"SA_tb.unnamedblk3.unnamedblk5.unnamedblk6", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',4,vlSelfRef.SA_tb__DOT__hist[2U][0U]
                             , '#',4,vlSelfRef.SA_tb__DOT__pe_a[0U][2U]);
                VL_STOP_MT("SA_tb.sv", 95, "");
            }
            vlSelfRef.SA_tb__DOT__checks = ((IData)(1U) 
                                            + vlSelfRef.SA_tb__DOT__checks);
            if (VL_UNLIKELY(((vlSelfRef.SA_tb__DOT__pe_a[1U][0U] 
                              != vlSelfRef.SA_tb__DOT__hist[0U][1U])))) {
                vlSelfRef.SA_tb__DOT__errors = ((IData)(1U) 
                                                + vlSelfRef.SA_tb__DOT__errors);
                VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:95: Assertion failed in %m: [%0t] PE[1][0].a: expected %0d, got %0d\n",6, 'M',vlSymsp->name(),"SA_tb.unnamedblk3.unnamedblk5.unnamedblk6", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',4,vlSelfRef.SA_tb__DOT__hist[0U][1U]
                             , '#',4,vlSelfRef.SA_tb__DOT__pe_a[1U][0U]);
                VL_STOP_MT("SA_tb.sv", 95, "");
            }
            vlSelfRef.SA_tb__DOT__checks = ((IData)(1U) 
                                            + vlSelfRef.SA_tb__DOT__checks);
            if (VL_UNLIKELY(((vlSelfRef.SA_tb__DOT__pe_a[1U][1U] 
                              != vlSelfRef.SA_tb__DOT__hist[1U][1U])))) {
                vlSelfRef.SA_tb__DOT__errors = ((IData)(1U) 
                                                + vlSelfRef.SA_tb__DOT__errors);
                VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:95: Assertion failed in %m: [%0t] PE[1][1].a: expected %0d, got %0d\n",6, 'M',vlSymsp->name(),"SA_tb.unnamedblk3.unnamedblk5.unnamedblk6", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',4,vlSelfRef.SA_tb__DOT__hist[1U][1U]
                             , '#',4,vlSelfRef.SA_tb__DOT__pe_a[1U][1U]);
                VL_STOP_MT("SA_tb.sv", 95, "");
            }
            vlSelfRef.SA_tb__DOT__checks = ((IData)(1U) 
                                            + vlSelfRef.SA_tb__DOT__checks);
            if (VL_UNLIKELY(((vlSelfRef.SA_tb__DOT__pe_a[1U][2U] 
                              != vlSelfRef.SA_tb__DOT__hist[2U][1U])))) {
                vlSelfRef.SA_tb__DOT__errors = ((IData)(1U) 
                                                + vlSelfRef.SA_tb__DOT__errors);
                VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:95: Assertion failed in %m: [%0t] PE[1][2].a: expected %0d, got %0d\n",6, 'M',vlSymsp->name(),"SA_tb.unnamedblk3.unnamedblk5.unnamedblk6", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',4,vlSelfRef.SA_tb__DOT__hist[2U][1U]
                             , '#',4,vlSelfRef.SA_tb__DOT__pe_a[1U][2U]);
                VL_STOP_MT("SA_tb.sv", 95, "");
            }
            vlSelfRef.SA_tb__DOT__checks = ((IData)(1U) 
                                            + vlSelfRef.SA_tb__DOT__checks);
            if (VL_UNLIKELY(((vlSelfRef.SA_tb__DOT__pe_a[2U][0U] 
                              != vlSelfRef.SA_tb__DOT__hist[0U][2U])))) {
                vlSelfRef.SA_tb__DOT__errors = ((IData)(1U) 
                                                + vlSelfRef.SA_tb__DOT__errors);
                VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:95: Assertion failed in %m: [%0t] PE[2][0].a: expected %0d, got %0d\n",6, 'M',vlSymsp->name(),"SA_tb.unnamedblk3.unnamedblk5.unnamedblk6", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',4,vlSelfRef.SA_tb__DOT__hist[0U][2U]
                             , '#',4,vlSelfRef.SA_tb__DOT__pe_a[2U][0U]);
                VL_STOP_MT("SA_tb.sv", 95, "");
            }
            vlSelfRef.SA_tb__DOT__checks = ((IData)(1U) 
                                            + vlSelfRef.SA_tb__DOT__checks);
            if (VL_UNLIKELY(((vlSelfRef.SA_tb__DOT__pe_a[2U][1U] 
                              != vlSelfRef.SA_tb__DOT__hist[1U][2U])))) {
                vlSelfRef.SA_tb__DOT__errors = ((IData)(1U) 
                                                + vlSelfRef.SA_tb__DOT__errors);
                VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:95: Assertion failed in %m: [%0t] PE[2][1].a: expected %0d, got %0d\n",6, 'M',vlSymsp->name(),"SA_tb.unnamedblk3.unnamedblk5.unnamedblk6", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',4,vlSelfRef.SA_tb__DOT__hist[1U][2U]
                             , '#',4,vlSelfRef.SA_tb__DOT__pe_a[2U][1U]);
                VL_STOP_MT("SA_tb.sv", 95, "");
            }
            vlSelfRef.SA_tb__DOT__checks = ((IData)(1U) 
                                            + vlSelfRef.SA_tb__DOT__checks);
            if (VL_UNLIKELY(((vlSelfRef.SA_tb__DOT__pe_a[2U][2U] 
                              != vlSelfRef.SA_tb__DOT__hist[2U][2U])))) {
                vlSelfRef.SA_tb__DOT__errors = ((IData)(1U) 
                                                + vlSelfRef.SA_tb__DOT__errors);
                VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:95: Assertion failed in %m: [%0t] PE[2][2].a: expected %0d, got %0d\n",6, 'M',vlSymsp->name(),"SA_tb.unnamedblk3.unnamedblk5.unnamedblk6", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',4,vlSelfRef.SA_tb__DOT__hist[2U][2U]
                             , '#',4,vlSelfRef.SA_tb__DOT__pe_a[2U][2U]);
                VL_STOP_MT("SA_tb.sv", 95, "");
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
                                                             105);
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
                                                         108);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
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
                                                         118);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.SA_tb__DOT__load_slot = 1U;
    vlSelfRef.SA_tb__DOT__compute_slot = 0U;
    if (VL_UNLIKELY(((1U != vlSelfRef.SA_tb__DOT__pe_b1[0U][0U])))) {
        vlSelfRef.SA_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.SA_tb__DOT__errors);
        VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:125: Assertion failed in %m: [%0t] PE[0][0].b1: expected 1, got %0d\n",5, 'M',vlSymsp->name(),"SA_tb.unnamedblk7.unnamedblk8", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',4,vlSelfRef.SA_tb__DOT__pe_b1[0U][0U]);
        VL_STOP_MT("SA_tb.sv", 125, "");
    }
    if (VL_UNLIKELY(((1U != vlSelfRef.SA_tb__DOT__pe_b1[0U][1U])))) {
        vlSelfRef.SA_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.SA_tb__DOT__errors);
        VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:125: Assertion failed in %m: [%0t] PE[0][1].b1: expected 1, got %0d\n",5, 'M',vlSymsp->name(),"SA_tb.unnamedblk7.unnamedblk8", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',4,vlSelfRef.SA_tb__DOT__pe_b1[0U][1U]);
        VL_STOP_MT("SA_tb.sv", 125, "");
    }
    if (VL_UNLIKELY(((1U != vlSelfRef.SA_tb__DOT__pe_b1[0U][2U])))) {
        vlSelfRef.SA_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.SA_tb__DOT__errors);
        VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:125: Assertion failed in %m: [%0t] PE[0][2].b1: expected 1, got %0d\n",5, 'M',vlSymsp->name(),"SA_tb.unnamedblk7.unnamedblk8", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',4,vlSelfRef.SA_tb__DOT__pe_b1[0U][2U]);
        VL_STOP_MT("SA_tb.sv", 125, "");
    }
    if (VL_UNLIKELY(((1U != vlSelfRef.SA_tb__DOT__pe_b1[1U][0U])))) {
        vlSelfRef.SA_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.SA_tb__DOT__errors);
        VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:125: Assertion failed in %m: [%0t] PE[1][0].b1: expected 1, got %0d\n",5, 'M',vlSymsp->name(),"SA_tb.unnamedblk7.unnamedblk8", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',4,vlSelfRef.SA_tb__DOT__pe_b1[1U][0U]);
        VL_STOP_MT("SA_tb.sv", 125, "");
    }
    if (VL_UNLIKELY(((1U != vlSelfRef.SA_tb__DOT__pe_b1[1U][1U])))) {
        vlSelfRef.SA_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.SA_tb__DOT__errors);
        VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:125: Assertion failed in %m: [%0t] PE[1][1].b1: expected 1, got %0d\n",5, 'M',vlSymsp->name(),"SA_tb.unnamedblk7.unnamedblk8", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',4,vlSelfRef.SA_tb__DOT__pe_b1[1U][1U]);
        VL_STOP_MT("SA_tb.sv", 125, "");
    }
    if (VL_UNLIKELY(((1U != vlSelfRef.SA_tb__DOT__pe_b1[1U][2U])))) {
        vlSelfRef.SA_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.SA_tb__DOT__errors);
        VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:125: Assertion failed in %m: [%0t] PE[1][2].b1: expected 1, got %0d\n",5, 'M',vlSymsp->name(),"SA_tb.unnamedblk7.unnamedblk8", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',4,vlSelfRef.SA_tb__DOT__pe_b1[1U][2U]);
        VL_STOP_MT("SA_tb.sv", 125, "");
    }
    if (VL_UNLIKELY(((1U != vlSelfRef.SA_tb__DOT__pe_b1[2U][0U])))) {
        vlSelfRef.SA_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.SA_tb__DOT__errors);
        VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:125: Assertion failed in %m: [%0t] PE[2][0].b1: expected 1, got %0d\n",5, 'M',vlSymsp->name(),"SA_tb.unnamedblk7.unnamedblk8", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',4,vlSelfRef.SA_tb__DOT__pe_b1[2U][0U]);
        VL_STOP_MT("SA_tb.sv", 125, "");
    }
    if (VL_UNLIKELY(((1U != vlSelfRef.SA_tb__DOT__pe_b1[2U][1U])))) {
        vlSelfRef.SA_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.SA_tb__DOT__errors);
        VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:125: Assertion failed in %m: [%0t] PE[2][1].b1: expected 1, got %0d\n",5, 'M',vlSymsp->name(),"SA_tb.unnamedblk7.unnamedblk8", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',4,vlSelfRef.SA_tb__DOT__pe_b1[2U][1U]);
        VL_STOP_MT("SA_tb.sv", 125, "");
    }
    if (VL_UNLIKELY(((1U != vlSelfRef.SA_tb__DOT__pe_b1[2U][2U])))) {
        vlSelfRef.SA_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.SA_tb__DOT__errors);
        VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:125: Assertion failed in %m: [%0t] PE[2][2].b1: expected 1, got %0d\n",5, 'M',vlSymsp->name(),"SA_tb.unnamedblk7.unnamedblk8", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',4,vlSelfRef.SA_tb__DOT__pe_b1[2U][2U]);
        VL_STOP_MT("SA_tb.sv", 125, "");
    }
    VSA_tb___024root____VbeforeTrig_h81bc4b78__0(vlSelf, 
                                                 "@(negedge SA_tb.clk)");
    co_await vlSelfRef.__VtrigSched_h81bc4b78__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge SA_tb.clk)", 
                                                         "SA_tb.sv", 
                                                         130);
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
        VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:140: Assertion failed in %m: [%0t] PE[0][0].b2: expected 0, got %0d\n",5, 'M',vlSymsp->name(),"SA_tb.unnamedblk9.unnamedblk10", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',4,vlSelfRef.SA_tb__DOT__pe_b2[0U][0U]);
        VL_STOP_MT("SA_tb.sv", 140, "");
    }
    if (VL_UNLIKELY(((1U != vlSelfRef.SA_tb__DOT__pe_b2[0U][1U])))) {
        vlSelfRef.SA_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.SA_tb__DOT__errors);
        VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:140: Assertion failed in %m: [%0t] PE[0][1].b2: expected 0, got %0d\n",5, 'M',vlSymsp->name(),"SA_tb.unnamedblk9.unnamedblk10", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',4,vlSelfRef.SA_tb__DOT__pe_b2[0U][1U]);
        VL_STOP_MT("SA_tb.sv", 140, "");
    }
    if (VL_UNLIKELY(((1U != vlSelfRef.SA_tb__DOT__pe_b2[0U][2U])))) {
        vlSelfRef.SA_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.SA_tb__DOT__errors);
        VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:140: Assertion failed in %m: [%0t] PE[0][2].b2: expected 0, got %0d\n",5, 'M',vlSymsp->name(),"SA_tb.unnamedblk9.unnamedblk10", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',4,vlSelfRef.SA_tb__DOT__pe_b2[0U][2U]);
        VL_STOP_MT("SA_tb.sv", 140, "");
    }
    if (VL_UNLIKELY(((1U != vlSelfRef.SA_tb__DOT__pe_b2[1U][0U])))) {
        vlSelfRef.SA_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.SA_tb__DOT__errors);
        VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:140: Assertion failed in %m: [%0t] PE[1][0].b2: expected 0, got %0d\n",5, 'M',vlSymsp->name(),"SA_tb.unnamedblk9.unnamedblk10", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',4,vlSelfRef.SA_tb__DOT__pe_b2[1U][0U]);
        VL_STOP_MT("SA_tb.sv", 140, "");
    }
    if (VL_UNLIKELY(((1U != vlSelfRef.SA_tb__DOT__pe_b2[1U][1U])))) {
        vlSelfRef.SA_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.SA_tb__DOT__errors);
        VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:140: Assertion failed in %m: [%0t] PE[1][1].b2: expected 0, got %0d\n",5, 'M',vlSymsp->name(),"SA_tb.unnamedblk9.unnamedblk10", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',4,vlSelfRef.SA_tb__DOT__pe_b2[1U][1U]);
        VL_STOP_MT("SA_tb.sv", 140, "");
    }
    if (VL_UNLIKELY(((1U != vlSelfRef.SA_tb__DOT__pe_b2[1U][2U])))) {
        vlSelfRef.SA_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.SA_tb__DOT__errors);
        VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:140: Assertion failed in %m: [%0t] PE[1][2].b2: expected 0, got %0d\n",5, 'M',vlSymsp->name(),"SA_tb.unnamedblk9.unnamedblk10", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',4,vlSelfRef.SA_tb__DOT__pe_b2[1U][2U]);
        VL_STOP_MT("SA_tb.sv", 140, "");
    }
    if (VL_UNLIKELY(((1U != vlSelfRef.SA_tb__DOT__pe_b2[2U][0U])))) {
        vlSelfRef.SA_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.SA_tb__DOT__errors);
        VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:140: Assertion failed in %m: [%0t] PE[2][0].b2: expected 0, got %0d\n",5, 'M',vlSymsp->name(),"SA_tb.unnamedblk9.unnamedblk10", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',4,vlSelfRef.SA_tb__DOT__pe_b2[2U][0U]);
        VL_STOP_MT("SA_tb.sv", 140, "");
    }
    if (VL_UNLIKELY(((1U != vlSelfRef.SA_tb__DOT__pe_b2[2U][1U])))) {
        vlSelfRef.SA_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.SA_tb__DOT__errors);
        VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:140: Assertion failed in %m: [%0t] PE[2][1].b2: expected 0, got %0d\n",5, 'M',vlSymsp->name(),"SA_tb.unnamedblk9.unnamedblk10", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',4,vlSelfRef.SA_tb__DOT__pe_b2[2U][1U]);
        VL_STOP_MT("SA_tb.sv", 140, "");
    }
    if (VL_UNLIKELY(((1U != vlSelfRef.SA_tb__DOT__pe_b2[2U][2U])))) {
        vlSelfRef.SA_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.SA_tb__DOT__errors);
        VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:140: Assertion failed in %m: [%0t] PE[2][2].b2: expected 0, got %0d\n",5, 'M',vlSymsp->name(),"SA_tb.unnamedblk9.unnamedblk10", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',4,vlSelfRef.SA_tb__DOT__pe_b2[2U][2U]);
        VL_STOP_MT("SA_tb.sv", 140, "");
    }
    VSA_tb___024root____VbeforeTrig_h81bc4b78__0(vlSelf, 
                                                 "@(negedge SA_tb.clk)");
    co_await vlSelfRef.__VtrigSched_h81bc4b78__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge SA_tb.clk)", 
                                                         "SA_tb.sv", 
                                                         145);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.SA_tb__DOT__load_slot = 1U;
    vlSelfRef.SA_tb__DOT__compute_slot = 0U;
    if (VL_UNLIKELY(((0U != vlSelfRef.SA_tb__DOT__pe_b1[0U][0U])))) {
        vlSelfRef.SA_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.SA_tb__DOT__errors);
        VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:152: Assertion failed in %m: [%0t] PE[0][0].b1: expected 0, got %0d\n",5, 'M',vlSymsp->name(),"SA_tb.unnamedblk11.unnamedblk12", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',4,vlSelfRef.SA_tb__DOT__pe_b1[0U][0U]);
        VL_STOP_MT("SA_tb.sv", 152, "");
    }
    if (VL_UNLIKELY(((0U != vlSelfRef.SA_tb__DOT__pe_b1[0U][1U])))) {
        vlSelfRef.SA_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.SA_tb__DOT__errors);
        VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:152: Assertion failed in %m: [%0t] PE[0][1].b1: expected 0, got %0d\n",5, 'M',vlSymsp->name(),"SA_tb.unnamedblk11.unnamedblk12", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',4,vlSelfRef.SA_tb__DOT__pe_b1[0U][1U]);
        VL_STOP_MT("SA_tb.sv", 152, "");
    }
    if (VL_UNLIKELY(((0U != vlSelfRef.SA_tb__DOT__pe_b1[0U][2U])))) {
        vlSelfRef.SA_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.SA_tb__DOT__errors);
        VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:152: Assertion failed in %m: [%0t] PE[0][2].b1: expected 0, got %0d\n",5, 'M',vlSymsp->name(),"SA_tb.unnamedblk11.unnamedblk12", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',4,vlSelfRef.SA_tb__DOT__pe_b1[0U][2U]);
        VL_STOP_MT("SA_tb.sv", 152, "");
    }
    if (VL_UNLIKELY(((0U != vlSelfRef.SA_tb__DOT__pe_b1[1U][0U])))) {
        vlSelfRef.SA_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.SA_tb__DOT__errors);
        VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:152: Assertion failed in %m: [%0t] PE[1][0].b1: expected 0, got %0d\n",5, 'M',vlSymsp->name(),"SA_tb.unnamedblk11.unnamedblk12", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',4,vlSelfRef.SA_tb__DOT__pe_b1[1U][0U]);
        VL_STOP_MT("SA_tb.sv", 152, "");
    }
    if (VL_UNLIKELY(((0U != vlSelfRef.SA_tb__DOT__pe_b1[1U][1U])))) {
        vlSelfRef.SA_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.SA_tb__DOT__errors);
        VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:152: Assertion failed in %m: [%0t] PE[1][1].b1: expected 0, got %0d\n",5, 'M',vlSymsp->name(),"SA_tb.unnamedblk11.unnamedblk12", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',4,vlSelfRef.SA_tb__DOT__pe_b1[1U][1U]);
        VL_STOP_MT("SA_tb.sv", 152, "");
    }
    if (VL_UNLIKELY(((0U != vlSelfRef.SA_tb__DOT__pe_b1[1U][2U])))) {
        vlSelfRef.SA_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.SA_tb__DOT__errors);
        VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:152: Assertion failed in %m: [%0t] PE[1][2].b1: expected 0, got %0d\n",5, 'M',vlSymsp->name(),"SA_tb.unnamedblk11.unnamedblk12", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',4,vlSelfRef.SA_tb__DOT__pe_b1[1U][2U]);
        VL_STOP_MT("SA_tb.sv", 152, "");
    }
    if (VL_UNLIKELY(((0U != vlSelfRef.SA_tb__DOT__pe_b1[2U][0U])))) {
        vlSelfRef.SA_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.SA_tb__DOT__errors);
        VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:152: Assertion failed in %m: [%0t] PE[2][0].b1: expected 0, got %0d\n",5, 'M',vlSymsp->name(),"SA_tb.unnamedblk11.unnamedblk12", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',4,vlSelfRef.SA_tb__DOT__pe_b1[2U][0U]);
        VL_STOP_MT("SA_tb.sv", 152, "");
    }
    if (VL_UNLIKELY(((0U != vlSelfRef.SA_tb__DOT__pe_b1[2U][1U])))) {
        vlSelfRef.SA_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.SA_tb__DOT__errors);
        VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:152: Assertion failed in %m: [%0t] PE[2][1].b1: expected 0, got %0d\n",5, 'M',vlSymsp->name(),"SA_tb.unnamedblk11.unnamedblk12", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',4,vlSelfRef.SA_tb__DOT__pe_b1[2U][1U]);
        VL_STOP_MT("SA_tb.sv", 152, "");
    }
    if (VL_UNLIKELY(((0U != vlSelfRef.SA_tb__DOT__pe_b1[2U][2U])))) {
        vlSelfRef.SA_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.SA_tb__DOT__errors);
        VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:152: Assertion failed in %m: [%0t] PE[2][2].b1: expected 0, got %0d\n",5, 'M',vlSymsp->name(),"SA_tb.unnamedblk11.unnamedblk12", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',4,vlSelfRef.SA_tb__DOT__pe_b1[2U][2U]);
        VL_STOP_MT("SA_tb.sv", 152, "");
    }
    VSA_tb___024root____VbeforeTrig_h81bc4b78__0(vlSelf, 
                                                 "@(negedge SA_tb.clk)");
    co_await vlSelfRef.__VtrigSched_h81bc4b78__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge SA_tb.clk)", 
                                                         "SA_tb.sv", 
                                                         157);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.SA_tb__DOT__load_slot = 1U;
    vlSelfRef.SA_tb__DOT__compute_slot = 0U;
    if (VL_UNLIKELY(((0U != vlSelfRef.SA_tb__DOT__pe_b2[0U][0U])))) {
        vlSelfRef.SA_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.SA_tb__DOT__errors);
        VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:164: Assertion failed in %m: [%0t] PE[0][0].b2: expected 0, got %0d\n",5, 'M',vlSymsp->name(),"SA_tb.unnamedblk13.unnamedblk14", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',4,vlSelfRef.SA_tb__DOT__pe_b2[0U][0U]);
        VL_STOP_MT("SA_tb.sv", 164, "");
    }
    if (VL_UNLIKELY(((0U != vlSelfRef.SA_tb__DOT__pe_b2[0U][1U])))) {
        vlSelfRef.SA_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.SA_tb__DOT__errors);
        VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:164: Assertion failed in %m: [%0t] PE[0][1].b2: expected 0, got %0d\n",5, 'M',vlSymsp->name(),"SA_tb.unnamedblk13.unnamedblk14", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',4,vlSelfRef.SA_tb__DOT__pe_b2[0U][1U]);
        VL_STOP_MT("SA_tb.sv", 164, "");
    }
    if (VL_UNLIKELY(((0U != vlSelfRef.SA_tb__DOT__pe_b2[0U][2U])))) {
        vlSelfRef.SA_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.SA_tb__DOT__errors);
        VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:164: Assertion failed in %m: [%0t] PE[0][2].b2: expected 0, got %0d\n",5, 'M',vlSymsp->name(),"SA_tb.unnamedblk13.unnamedblk14", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',4,vlSelfRef.SA_tb__DOT__pe_b2[0U][2U]);
        VL_STOP_MT("SA_tb.sv", 164, "");
    }
    if (VL_UNLIKELY(((0U != vlSelfRef.SA_tb__DOT__pe_b2[1U][0U])))) {
        vlSelfRef.SA_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.SA_tb__DOT__errors);
        VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:164: Assertion failed in %m: [%0t] PE[1][0].b2: expected 0, got %0d\n",5, 'M',vlSymsp->name(),"SA_tb.unnamedblk13.unnamedblk14", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',4,vlSelfRef.SA_tb__DOT__pe_b2[1U][0U]);
        VL_STOP_MT("SA_tb.sv", 164, "");
    }
    if (VL_UNLIKELY(((0U != vlSelfRef.SA_tb__DOT__pe_b2[1U][1U])))) {
        vlSelfRef.SA_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.SA_tb__DOT__errors);
        VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:164: Assertion failed in %m: [%0t] PE[1][1].b2: expected 0, got %0d\n",5, 'M',vlSymsp->name(),"SA_tb.unnamedblk13.unnamedblk14", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',4,vlSelfRef.SA_tb__DOT__pe_b2[1U][1U]);
        VL_STOP_MT("SA_tb.sv", 164, "");
    }
    if (VL_UNLIKELY(((0U != vlSelfRef.SA_tb__DOT__pe_b2[1U][2U])))) {
        vlSelfRef.SA_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.SA_tb__DOT__errors);
        VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:164: Assertion failed in %m: [%0t] PE[1][2].b2: expected 0, got %0d\n",5, 'M',vlSymsp->name(),"SA_tb.unnamedblk13.unnamedblk14", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',4,vlSelfRef.SA_tb__DOT__pe_b2[1U][2U]);
        VL_STOP_MT("SA_tb.sv", 164, "");
    }
    if (VL_UNLIKELY(((0U != vlSelfRef.SA_tb__DOT__pe_b2[2U][0U])))) {
        vlSelfRef.SA_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.SA_tb__DOT__errors);
        VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:164: Assertion failed in %m: [%0t] PE[2][0].b2: expected 0, got %0d\n",5, 'M',vlSymsp->name(),"SA_tb.unnamedblk13.unnamedblk14", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',4,vlSelfRef.SA_tb__DOT__pe_b2[2U][0U]);
        VL_STOP_MT("SA_tb.sv", 164, "");
    }
    if (VL_UNLIKELY(((0U != vlSelfRef.SA_tb__DOT__pe_b2[2U][1U])))) {
        vlSelfRef.SA_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.SA_tb__DOT__errors);
        VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:164: Assertion failed in %m: [%0t] PE[2][1].b2: expected 0, got %0d\n",5, 'M',vlSymsp->name(),"SA_tb.unnamedblk13.unnamedblk14", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',4,vlSelfRef.SA_tb__DOT__pe_b2[2U][1U]);
        VL_STOP_MT("SA_tb.sv", 164, "");
    }
    if (VL_UNLIKELY(((0U != vlSelfRef.SA_tb__DOT__pe_b2[2U][2U])))) {
        vlSelfRef.SA_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.SA_tb__DOT__errors);
        VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:164: Assertion failed in %m: [%0t] PE[2][2].b2: expected 0, got %0d\n",5, 'M',vlSymsp->name(),"SA_tb.unnamedblk13.unnamedblk14", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',4,vlSelfRef.SA_tb__DOT__pe_b2[2U][2U]);
        VL_STOP_MT("SA_tb.sv", 164, "");
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
                                                             172);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        SA_tb__DOT__unnamedblk1_3__DOT____Vrepeat2 
            = (SA_tb__DOT__unnamedblk1_3__DOT____Vrepeat2 
               - (IData)(1U));
    }
    VSA_tb___024root____VbeforeTrig_h81bc4b78__0(vlSelf, 
                                                 "@(negedge SA_tb.clk)");
    co_await vlSelfRef.__VtrigSched_h81bc4b78__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge SA_tb.clk)", 
                                                         "SA_tb.sv", 
                                                         175);
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
                                                         193);
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
                                                         202);
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
                                                             209);
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
                                                             214);
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
                VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:222: Assertion failed in %m: [%0t] C[%0d][0]: expected %0d, got %0d\n",7, 'M',vlSymsp->name(),"SA_tb.unnamedblk20.unnamedblk21", 'T',-9
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
                VL_STOP_MT("SA_tb.sv", 222, "");
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
                VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:222: Assertion failed in %m: [%0t] C[%0d][1]: expected %0d, got %0d\n",7, 'M',vlSymsp->name(),"SA_tb.unnamedblk20.unnamedblk21", 'T',-9
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
                VL_STOP_MT("SA_tb.sv", 222, "");
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
                VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:222: Assertion failed in %m: [%0t] C[%0d][2]: expected %0d, got %0d\n",7, 'M',vlSymsp->name(),"SA_tb.unnamedblk20.unnamedblk21", 'T',-9
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
                VL_STOP_MT("SA_tb.sv", 222, "");
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
    if ((vlSelfRef.SA_tb__DOT__errors == vlSelfRef.SA_tb__DOT__test_errors)) {
        VL_WRITEF_NX("Test 3 passed: 3x3 matrix multiply correct\n",0);
    } else {
        VL_WRITEF_NX("Test 3 FAILED: matrix multiply\n",0);
    }
    SA_tb__DOT__unnamedblk1_5__DOT____Vrepeat4 = 3U;
    while (VL_LTS_III(32, 0U, SA_tb__DOT__unnamedblk1_5__DOT____Vrepeat4)) {
        VSA_tb___024root____VbeforeTrig_h81bc4b78__0(vlSelf, 
                                                     "@(negedge SA_tb.clk)");
        co_await vlSelfRef.__VtrigSched_h81bc4b78__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge SA_tb.clk)", 
                                                             "SA_tb.sv", 
                                                             236);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        SA_tb__DOT__unnamedblk1_5__DOT____Vrepeat4 
            = (SA_tb__DOT__unnamedblk1_5__DOT____Vrepeat4 
               - (IData)(1U));
    }
    VL_FINISH_MT("SA_tb.sv", 238, "");
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
