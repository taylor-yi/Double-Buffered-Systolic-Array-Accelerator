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
            if ((6ULL & vlSelfRef.__VactTriggered[0U])) {
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

void VSA_tb___024root___eval_body__nba(VSA_tb___024root* vlSelf);
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
        VSA_tb___024root___eval_body__nba(vlSelf);
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

VlCoroutine VSA_tb___024root___eval_initial__TOP__Vtiming__1(VSA_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSA_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    VSA_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ SA_tb__DOT__unnamedblk1_1__DOT____Vrepeat0;
    SA_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ SA_tb__DOT__unnamedblk3__DOT__t;
    SA_tb__DOT__unnamedblk3__DOT__t = 0;
    // Body
    vlSelfRef.SA_tb__DOT__rst_n = 0U;
    vlSelfRef.SA_tb__DOT__en = 0U;
    vlSelfRef.SA_tb__DOT__in_valid = 0U;
    vlSelfRef.SA_tb__DOT__load_slot = 0U;
    vlSelfRef.SA_tb__DOT__compute_slot = 0U;
    vlSelfRef.SA_tb__DOT__a_in[2U] = 0U;
    vlSelfRef.SA_tb__DOT__a_in[1U] = 0U;
    vlSelfRef.SA_tb__DOT__a_in[0U] = 0U;
    vlSelfRef.SA_tb__DOT__b_in[2U][2U] = 0U;
    vlSelfRef.SA_tb__DOT__b_in[2U][1U] = 0U;
    vlSelfRef.SA_tb__DOT__b_in[2U][0U] = 0U;
    vlSelfRef.SA_tb__DOT__b_in[1U][2U] = 0U;
    vlSelfRef.SA_tb__DOT__b_in[1U][1U] = 0U;
    vlSelfRef.SA_tb__DOT__b_in[1U][0U] = 0U;
    vlSelfRef.SA_tb__DOT__b_in[0U][2U] = 0U;
    vlSelfRef.SA_tb__DOT__b_in[0U][1U] = 0U;
    vlSelfRef.SA_tb__DOT__b_in[0U][0U] = 0U;
    VSA_tb___024root____VbeforeTrig_h81bc4b78__0(vlSelf, 
                                                 "@(negedge SA_tb.clk)");
    co_await vlSelfRef.__VtrigSched_h81bc4b78__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge SA_tb.clk)", 
                                                         "SA_tb.sv", 
                                                         43);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.SA_tb__DOT__rst_n = 1U;
    vlSelfRef.SA_tb__DOT__en = 1U;
    vlSelfRef.SA_tb__DOT__in_valid = 0U;
    vlSelfRef.SA_tb__DOT__load_slot = 1U;
    vlSelfRef.SA_tb__DOT__compute_slot = 0U;
    vlSelfRef.SA_tb__DOT__a_in[2U] = 0U;
    vlSelfRef.SA_tb__DOT__a_in[1U] = 0U;
    vlSelfRef.SA_tb__DOT__a_in[0U] = 0U;
    SA_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 3U;
    while (VL_LTS_III(32, 0U, SA_tb__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        VSA_tb___024root____VbeforeTrig_h81bc4b78__0(vlSelf, 
                                                     "@(negedge SA_tb.clk)");
        co_await vlSelfRef.__VtrigSched_h81bc4b78__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge SA_tb.clk)", 
                                                             "SA_tb.sv", 
                                                             52);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        SA_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (SA_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.SA_tb__DOT__checks = ((IData)(1U) + vlSelfRef.SA_tb__DOT__checks);
    if (VL_UNLIKELY(((0U != vlSelfRef.SA_tb__DOT__pe_a[0U][0U])))) {
        vlSelfRef.SA_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.SA_tb__DOT__errors);
        VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:58: Assertion failed in %m: [%0t] PE[0][0].a: expected 0, got %0d\n",5, 'M',vlSymsp->name(),"SA_tb.unnamedblk1.unnamedblk2", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',4,vlSelfRef.SA_tb__DOT__pe_a[0U][0U]);
        VL_STOP_MT("SA_tb.sv", 58, "");
    }
    vlSelfRef.SA_tb__DOT__checks = ((IData)(1U) + vlSelfRef.SA_tb__DOT__checks);
    if (VL_UNLIKELY(((0U != vlSelfRef.SA_tb__DOT__pe_a[0U][1U])))) {
        vlSelfRef.SA_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.SA_tb__DOT__errors);
        VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:58: Assertion failed in %m: [%0t] PE[0][1].a: expected 0, got %0d\n",5, 'M',vlSymsp->name(),"SA_tb.unnamedblk1.unnamedblk2", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',4,vlSelfRef.SA_tb__DOT__pe_a[0U][1U]);
        VL_STOP_MT("SA_tb.sv", 58, "");
    }
    vlSelfRef.SA_tb__DOT__checks = ((IData)(1U) + vlSelfRef.SA_tb__DOT__checks);
    if (VL_UNLIKELY(((0U != vlSelfRef.SA_tb__DOT__pe_a[0U][2U])))) {
        vlSelfRef.SA_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.SA_tb__DOT__errors);
        VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:58: Assertion failed in %m: [%0t] PE[0][2].a: expected 0, got %0d\n",5, 'M',vlSymsp->name(),"SA_tb.unnamedblk1.unnamedblk2", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',4,vlSelfRef.SA_tb__DOT__pe_a[0U][2U]);
        VL_STOP_MT("SA_tb.sv", 58, "");
    }
    vlSelfRef.SA_tb__DOT__checks = ((IData)(1U) + vlSelfRef.SA_tb__DOT__checks);
    if (VL_UNLIKELY(((0U != vlSelfRef.SA_tb__DOT__pe_a[1U][0U])))) {
        vlSelfRef.SA_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.SA_tb__DOT__errors);
        VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:58: Assertion failed in %m: [%0t] PE[1][0].a: expected 0, got %0d\n",5, 'M',vlSymsp->name(),"SA_tb.unnamedblk1.unnamedblk2", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',4,vlSelfRef.SA_tb__DOT__pe_a[1U][0U]);
        VL_STOP_MT("SA_tb.sv", 58, "");
    }
    vlSelfRef.SA_tb__DOT__checks = ((IData)(1U) + vlSelfRef.SA_tb__DOT__checks);
    if (VL_UNLIKELY(((0U != vlSelfRef.SA_tb__DOT__pe_a[1U][1U])))) {
        vlSelfRef.SA_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.SA_tb__DOT__errors);
        VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:58: Assertion failed in %m: [%0t] PE[1][1].a: expected 0, got %0d\n",5, 'M',vlSymsp->name(),"SA_tb.unnamedblk1.unnamedblk2", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',4,vlSelfRef.SA_tb__DOT__pe_a[1U][1U]);
        VL_STOP_MT("SA_tb.sv", 58, "");
    }
    vlSelfRef.SA_tb__DOT__checks = ((IData)(1U) + vlSelfRef.SA_tb__DOT__checks);
    if (VL_UNLIKELY(((0U != vlSelfRef.SA_tb__DOT__pe_a[1U][2U])))) {
        vlSelfRef.SA_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.SA_tb__DOT__errors);
        VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:58: Assertion failed in %m: [%0t] PE[1][2].a: expected 0, got %0d\n",5, 'M',vlSymsp->name(),"SA_tb.unnamedblk1.unnamedblk2", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',4,vlSelfRef.SA_tb__DOT__pe_a[1U][2U]);
        VL_STOP_MT("SA_tb.sv", 58, "");
    }
    vlSelfRef.SA_tb__DOT__checks = ((IData)(1U) + vlSelfRef.SA_tb__DOT__checks);
    if (VL_UNLIKELY(((0U != vlSelfRef.SA_tb__DOT__pe_a[2U][0U])))) {
        vlSelfRef.SA_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.SA_tb__DOT__errors);
        VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:58: Assertion failed in %m: [%0t] PE[2][0].a: expected 0, got %0d\n",5, 'M',vlSymsp->name(),"SA_tb.unnamedblk1.unnamedblk2", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',4,vlSelfRef.SA_tb__DOT__pe_a[2U][0U]);
        VL_STOP_MT("SA_tb.sv", 58, "");
    }
    vlSelfRef.SA_tb__DOT__checks = ((IData)(1U) + vlSelfRef.SA_tb__DOT__checks);
    if (VL_UNLIKELY(((0U != vlSelfRef.SA_tb__DOT__pe_a[2U][1U])))) {
        vlSelfRef.SA_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.SA_tb__DOT__errors);
        VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:58: Assertion failed in %m: [%0t] PE[2][1].a: expected 0, got %0d\n",5, 'M',vlSymsp->name(),"SA_tb.unnamedblk1.unnamedblk2", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',4,vlSelfRef.SA_tb__DOT__pe_a[2U][1U]);
        VL_STOP_MT("SA_tb.sv", 58, "");
    }
    vlSelfRef.SA_tb__DOT__checks = ((IData)(1U) + vlSelfRef.SA_tb__DOT__checks);
    if (VL_UNLIKELY(((0U != vlSelfRef.SA_tb__DOT__pe_a[2U][2U])))) {
        vlSelfRef.SA_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.SA_tb__DOT__errors);
        VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:58: Assertion failed in %m: [%0t] PE[2][2].a: expected 0, got %0d\n",5, 'M',vlSymsp->name(),"SA_tb.unnamedblk1.unnamedblk2", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',4,vlSelfRef.SA_tb__DOT__pe_a[2U][2U]);
        VL_STOP_MT("SA_tb.sv", 58, "");
    }
    SA_tb__DOT__unnamedblk3__DOT__t = 0U;
    while (VL_GTS_III(32, 5U, SA_tb__DOT__unnamedblk3__DOT__t)) {
        VSA_tb___024root____VbeforeTrig_h81bc4b78__0(vlSelf, 
                                                     "@(negedge SA_tb.clk)");
        co_await vlSelfRef.__VtrigSched_h81bc4b78__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge SA_tb.clk)", 
                                                             "SA_tb.sv", 
                                                             66);
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
        vlSelfRef.SA_tb__DOT__a_in[2U] = vlSelfRef.SA_tb__DOT__hist[0U][0U];
        vlSelfRef.SA_tb__DOT__a_in[1U] = vlSelfRef.SA_tb__DOT__hist[0U][1U];
        vlSelfRef.SA_tb__DOT__a_in[0U] = vlSelfRef.SA_tb__DOT__hist[0U][2U];
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "SA_tb.sv", 
                                             73);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        if (VL_LTES_III(32, 2U, SA_tb__DOT__unnamedblk3__DOT__t)) {
            vlSelfRef.SA_tb__DOT__checks = ((IData)(1U) 
                                            + vlSelfRef.SA_tb__DOT__checks);
            if (VL_UNLIKELY(((vlSelfRef.SA_tb__DOT__pe_a[0U][0U] 
                              != vlSelfRef.SA_tb__DOT__hist[0U][0U])))) {
                vlSelfRef.SA_tb__DOT__errors = ((IData)(1U) 
                                                + vlSelfRef.SA_tb__DOT__errors);
                VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:81: Assertion failed in %m: [%0t] PE[0][0].a: expected %0d, got %0d\n",6, 'M',vlSymsp->name(),"SA_tb.unnamedblk3.unnamedblk5.unnamedblk6", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',4,vlSelfRef.SA_tb__DOT__hist[0U][0U]
                             , '#',4,vlSelfRef.SA_tb__DOT__pe_a[0U][0U]);
                VL_STOP_MT("SA_tb.sv", 81, "");
            }
            vlSelfRef.SA_tb__DOT__checks = ((IData)(1U) 
                                            + vlSelfRef.SA_tb__DOT__checks);
            if (VL_UNLIKELY(((vlSelfRef.SA_tb__DOT__pe_a[0U][1U] 
                              != vlSelfRef.SA_tb__DOT__hist[1U][0U])))) {
                vlSelfRef.SA_tb__DOT__errors = ((IData)(1U) 
                                                + vlSelfRef.SA_tb__DOT__errors);
                VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:81: Assertion failed in %m: [%0t] PE[0][1].a: expected %0d, got %0d\n",6, 'M',vlSymsp->name(),"SA_tb.unnamedblk3.unnamedblk5.unnamedblk6", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',4,vlSelfRef.SA_tb__DOT__hist[1U][0U]
                             , '#',4,vlSelfRef.SA_tb__DOT__pe_a[0U][1U]);
                VL_STOP_MT("SA_tb.sv", 81, "");
            }
            vlSelfRef.SA_tb__DOT__checks = ((IData)(1U) 
                                            + vlSelfRef.SA_tb__DOT__checks);
            if (VL_UNLIKELY(((vlSelfRef.SA_tb__DOT__pe_a[0U][2U] 
                              != vlSelfRef.SA_tb__DOT__hist[2U][0U])))) {
                vlSelfRef.SA_tb__DOT__errors = ((IData)(1U) 
                                                + vlSelfRef.SA_tb__DOT__errors);
                VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:81: Assertion failed in %m: [%0t] PE[0][2].a: expected %0d, got %0d\n",6, 'M',vlSymsp->name(),"SA_tb.unnamedblk3.unnamedblk5.unnamedblk6", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',4,vlSelfRef.SA_tb__DOT__hist[2U][0U]
                             , '#',4,vlSelfRef.SA_tb__DOT__pe_a[0U][2U]);
                VL_STOP_MT("SA_tb.sv", 81, "");
            }
            vlSelfRef.SA_tb__DOT__checks = ((IData)(1U) 
                                            + vlSelfRef.SA_tb__DOT__checks);
            if (VL_UNLIKELY(((vlSelfRef.SA_tb__DOT__pe_a[1U][0U] 
                              != vlSelfRef.SA_tb__DOT__hist[0U][1U])))) {
                vlSelfRef.SA_tb__DOT__errors = ((IData)(1U) 
                                                + vlSelfRef.SA_tb__DOT__errors);
                VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:81: Assertion failed in %m: [%0t] PE[1][0].a: expected %0d, got %0d\n",6, 'M',vlSymsp->name(),"SA_tb.unnamedblk3.unnamedblk5.unnamedblk6", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',4,vlSelfRef.SA_tb__DOT__hist[0U][1U]
                             , '#',4,vlSelfRef.SA_tb__DOT__pe_a[1U][0U]);
                VL_STOP_MT("SA_tb.sv", 81, "");
            }
            vlSelfRef.SA_tb__DOT__checks = ((IData)(1U) 
                                            + vlSelfRef.SA_tb__DOT__checks);
            if (VL_UNLIKELY(((vlSelfRef.SA_tb__DOT__pe_a[1U][1U] 
                              != vlSelfRef.SA_tb__DOT__hist[1U][1U])))) {
                vlSelfRef.SA_tb__DOT__errors = ((IData)(1U) 
                                                + vlSelfRef.SA_tb__DOT__errors);
                VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:81: Assertion failed in %m: [%0t] PE[1][1].a: expected %0d, got %0d\n",6, 'M',vlSymsp->name(),"SA_tb.unnamedblk3.unnamedblk5.unnamedblk6", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',4,vlSelfRef.SA_tb__DOT__hist[1U][1U]
                             , '#',4,vlSelfRef.SA_tb__DOT__pe_a[1U][1U]);
                VL_STOP_MT("SA_tb.sv", 81, "");
            }
            vlSelfRef.SA_tb__DOT__checks = ((IData)(1U) 
                                            + vlSelfRef.SA_tb__DOT__checks);
            if (VL_UNLIKELY(((vlSelfRef.SA_tb__DOT__pe_a[1U][2U] 
                              != vlSelfRef.SA_tb__DOT__hist[2U][1U])))) {
                vlSelfRef.SA_tb__DOT__errors = ((IData)(1U) 
                                                + vlSelfRef.SA_tb__DOT__errors);
                VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:81: Assertion failed in %m: [%0t] PE[1][2].a: expected %0d, got %0d\n",6, 'M',vlSymsp->name(),"SA_tb.unnamedblk3.unnamedblk5.unnamedblk6", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',4,vlSelfRef.SA_tb__DOT__hist[2U][1U]
                             , '#',4,vlSelfRef.SA_tb__DOT__pe_a[1U][2U]);
                VL_STOP_MT("SA_tb.sv", 81, "");
            }
            vlSelfRef.SA_tb__DOT__checks = ((IData)(1U) 
                                            + vlSelfRef.SA_tb__DOT__checks);
            if (VL_UNLIKELY(((vlSelfRef.SA_tb__DOT__pe_a[2U][0U] 
                              != vlSelfRef.SA_tb__DOT__hist[0U][2U])))) {
                vlSelfRef.SA_tb__DOT__errors = ((IData)(1U) 
                                                + vlSelfRef.SA_tb__DOT__errors);
                VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:81: Assertion failed in %m: [%0t] PE[2][0].a: expected %0d, got %0d\n",6, 'M',vlSymsp->name(),"SA_tb.unnamedblk3.unnamedblk5.unnamedblk6", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',4,vlSelfRef.SA_tb__DOT__hist[0U][2U]
                             , '#',4,vlSelfRef.SA_tb__DOT__pe_a[2U][0U]);
                VL_STOP_MT("SA_tb.sv", 81, "");
            }
            vlSelfRef.SA_tb__DOT__checks = ((IData)(1U) 
                                            + vlSelfRef.SA_tb__DOT__checks);
            if (VL_UNLIKELY(((vlSelfRef.SA_tb__DOT__pe_a[2U][1U] 
                              != vlSelfRef.SA_tb__DOT__hist[1U][2U])))) {
                vlSelfRef.SA_tb__DOT__errors = ((IData)(1U) 
                                                + vlSelfRef.SA_tb__DOT__errors);
                VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:81: Assertion failed in %m: [%0t] PE[2][1].a: expected %0d, got %0d\n",6, 'M',vlSymsp->name(),"SA_tb.unnamedblk3.unnamedblk5.unnamedblk6", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',4,vlSelfRef.SA_tb__DOT__hist[1U][2U]
                             , '#',4,vlSelfRef.SA_tb__DOT__pe_a[2U][1U]);
                VL_STOP_MT("SA_tb.sv", 81, "");
            }
            vlSelfRef.SA_tb__DOT__checks = ((IData)(1U) 
                                            + vlSelfRef.SA_tb__DOT__checks);
            if (VL_UNLIKELY(((vlSelfRef.SA_tb__DOT__pe_a[2U][2U] 
                              != vlSelfRef.SA_tb__DOT__hist[2U][2U])))) {
                vlSelfRef.SA_tb__DOT__errors = ((IData)(1U) 
                                                + vlSelfRef.SA_tb__DOT__errors);
                VL_WRITEF_NX("[%0t] %%Error: SA_tb.sv:81: Assertion failed in %m: [%0t] PE[2][2].a: expected %0d, got %0d\n",6, 'M',vlSymsp->name(),"SA_tb.unnamedblk3.unnamedblk5.unnamedblk6", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',4,vlSelfRef.SA_tb__DOT__hist[2U][2U]
                             , '#',4,vlSelfRef.SA_tb__DOT__pe_a[2U][2U]);
                VL_STOP_MT("SA_tb.sv", 81, "");
            }
        }
        SA_tb__DOT__unnamedblk3__DOT__t = ((IData)(1U) 
                                           + SA_tb__DOT__unnamedblk3__DOT__t);
    }
    if ((vlSelfRef.SA_tb__DOT__errors == vlSelfRef.SA_tb__DOT__test_errors)) {
        VL_WRITEF_NX("Test 1 passed: activations propagate correctly\n",0);
    } else {
        VL_WRITEF_NX("Test 1 FAILED: activation propagation\n",0);
    }
    VL_FINISH_MT("SA_tb.sv", 92, "");
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
        = vlSelfRef.SA_tb__DOT__b_in[2U][2U];
    vlSelfRef.SA_tb__DOT____Vcellinp__dut__b_in[0U][1U] 
        = vlSelfRef.SA_tb__DOT__b_in[2U][1U];
    vlSelfRef.SA_tb__DOT____Vcellinp__dut__b_in[0U][2U] 
        = vlSelfRef.SA_tb__DOT__b_in[2U][0U];
    vlSelfRef.SA_tb__DOT____Vcellinp__dut__b_in[1U][0U] 
        = vlSelfRef.SA_tb__DOT__b_in[1U][2U];
    vlSelfRef.SA_tb__DOT____Vcellinp__dut__b_in[1U][1U] 
        = vlSelfRef.SA_tb__DOT__b_in[1U][1U];
    vlSelfRef.SA_tb__DOT____Vcellinp__dut__b_in[1U][2U] 
        = vlSelfRef.SA_tb__DOT__b_in[1U][0U];
    vlSelfRef.SA_tb__DOT____Vcellinp__dut__b_in[2U][0U] 
        = vlSelfRef.SA_tb__DOT__b_in[0U][2U];
    vlSelfRef.SA_tb__DOT____Vcellinp__dut__b_in[2U][1U] 
        = vlSelfRef.SA_tb__DOT__b_in[0U][1U];
    vlSelfRef.SA_tb__DOT____Vcellinp__dut__b_in[2U][2U] 
        = vlSelfRef.SA_tb__DOT__b_in[0U][0U];
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
        = vlSelfRef.SA_tb__DOT__a_in[2U];
    vlSelfRef.SA_tb__DOT____Vcellinp__dut__a_in[1U] 
        = vlSelfRef.SA_tb__DOT__a_in[1U];
    vlSelfRef.SA_tb__DOT____Vcellinp__dut__a_in[2U] 
        = vlSelfRef.SA_tb__DOT__a_in[0U];
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
    vlSelfRef.SA_tb__DOT__result_matrix[2U] = vlSelfRef.SA_tb__DOT____Vcellout__dut__result_matrix[0U];
    vlSelfRef.SA_tb__DOT__result_matrix[1U] = vlSelfRef.SA_tb__DOT____Vcellout__dut__result_matrix[1U];
    vlSelfRef.SA_tb__DOT__result_matrix[0U] = vlSelfRef.SA_tb__DOT____Vcellout__dut__result_matrix[2U];
}

void VSA_tb___024root___eval_body__nba(VSA_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSA_tb___024root___eval_body__nba\n"); );
    VSA_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        VSA_tb___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[4U] = 1U;
    }
    if ((6ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_comb__TOP__0
            vlSelfRef.SA_tb__DOT____Vcellinp__dut__b_in[0U][0U] 
                = vlSelfRef.SA_tb__DOT__b_in[2U][2U];
            vlSelfRef.SA_tb__DOT____Vcellinp__dut__b_in[0U][1U] 
                = vlSelfRef.SA_tb__DOT__b_in[2U][1U];
            vlSelfRef.SA_tb__DOT____Vcellinp__dut__b_in[0U][2U] 
                = vlSelfRef.SA_tb__DOT__b_in[2U][0U];
            vlSelfRef.SA_tb__DOT____Vcellinp__dut__b_in[1U][0U] 
                = vlSelfRef.SA_tb__DOT__b_in[1U][2U];
            vlSelfRef.SA_tb__DOT____Vcellinp__dut__b_in[1U][1U] 
                = vlSelfRef.SA_tb__DOT__b_in[1U][1U];
            vlSelfRef.SA_tb__DOT____Vcellinp__dut__b_in[1U][2U] 
                = vlSelfRef.SA_tb__DOT__b_in[1U][0U];
            vlSelfRef.SA_tb__DOT____Vcellinp__dut__b_in[2U][0U] 
                = vlSelfRef.SA_tb__DOT__b_in[0U][2U];
            vlSelfRef.SA_tb__DOT____Vcellinp__dut__b_in[2U][1U] 
                = vlSelfRef.SA_tb__DOT__b_in[0U][1U];
            vlSelfRef.SA_tb__DOT____Vcellinp__dut__b_in[2U][2U] 
                = vlSelfRef.SA_tb__DOT__b_in[0U][0U];
            vlSelfRef.SA_tb__DOT____Vcellinp__dut__a_in[0U] 
                = vlSelfRef.SA_tb__DOT__a_in[2U];
            vlSelfRef.SA_tb__DOT____Vcellinp__dut__a_in[1U] 
                = vlSelfRef.SA_tb__DOT__a_in[1U];
            vlSelfRef.SA_tb__DOT____Vcellinp__dut__a_in[2U] 
                = vlSelfRef.SA_tb__DOT__a_in[0U];
            vlSelfRef.SA_tb__DOT__pe_a[0U][0U] = vlSelfRef.SA_tb__DOT____Vcellinp__dut__a_in[0U];
            vlSelfRef.SA_tb__DOT__pe_a[1U][0U] = vlSelfRef.SA_tb__DOT____Vcellinp__dut__a_in[1U];
            vlSelfRef.SA_tb__DOT__pe_a[2U][0U] = vlSelfRef.SA_tb__DOT____Vcellinp__dut__a_in[2U];
        }
        vlSelfRef.__Vm_traceActivity[5U] = 1U;
    }
    if ((7ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_comb__TOP__1
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
        }
        vlSelfRef.__Vm_traceActivity[6U] = 1U;
    }
}

void VSA_tb___024root___timing_ready(VSA_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSA_tb___024root___timing_ready\n"); );
    VSA_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h81bc4b78__0.ready("@(negedge SA_tb.clk)");
    }
}

void VSA_tb___024root___timing_resume(VSA_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSA_tb___024root___timing_resume\n"); );
    VSA_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VtrigSched_h81bc4b78__0.moveToResumeQueue(
                                                          "@(negedge SA_tb.clk)");
    vlSelfRef.__VtrigSched_h81bc4b78__0.resume("@(negedge SA_tb.clk)");
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
    __VTmp[0U] = (QData)((IData)((((~ (IData)(vlSelfRef.SA_tb__DOT__clk)) 
                                   & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__SA_tb__DOT__clk__0)) 
                                  << 2U)));
    vlSelfRef.__Vtrigprevexpr___TOP__SA_tb__DOT__clk__0 
        = vlSelfRef.SA_tb__DOT__clk;
    if ((4ULL & __VTmp[0U])) {
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
