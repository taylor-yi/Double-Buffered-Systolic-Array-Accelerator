// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPE_tb.h for the primary calling header

#include "VPE_tb__pch.h"

VlCoroutine VPE_tb___024root___eval_initial__TOP__Vtiming__0(VPE_tb___024root* vlSelf);
VlCoroutine VPE_tb___024root___eval_initial__TOP__Vtiming__1(VPE_tb___024root* vlSelf);

void VPE_tb___024root___eval_initial(VPE_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPE_tb___024root___eval_initial\n"); );
    VPE_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_initial__TOP
        vlSymsp->_vm_contextp__->dumpfile("dump.vcd"s);
        vlSymsp->_traceDumpOpen();
    }
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VPE_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    VPE_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

void VPE_tb___024root___eval_sample(VPE_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPE_tb___024root___eval_sample\n"); );
    VPE_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VPE_tb___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool VPE_tb___024root___eval_ico(VPE_tb___024root* vlSelf, CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPE_tb___024root___eval_ico\n"); );
    VPE_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | (IData)((IData)(firstIteration)));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VPE_tb___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    return (0U);
}

void VPE_tb___024root___timing_ready(VPE_tb___024root* vlSelf);
void VPE_tb___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in);
#ifdef VL_DEBUG
VL_ATTR_COLD void VPE_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
bool VPE_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);
void VPE_tb___024root___timing_resume(VPE_tb___024root* vlSelf);

bool VPE_tb___024root___eval_act(VPE_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPE_tb___024root___eval_act\n"); );
    VPE_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__act
        vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                        ((((~ (IData)(vlSelfRef.PE_tb__DOT__clk)) 
                                                           & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__PE_tb__DOT__clk__0)) 
                                                          << 2U) 
                                                         | ((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                             << 1U) 
                                                            | ((IData)(vlSelfRef.PE_tb__DOT__clk) 
                                                               & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__PE_tb__DOT__clk__0)))))));
        vlSelfRef.__Vtrigprevexpr___TOP__PE_tb__DOT__clk__0 
            = vlSelfRef.PE_tb__DOT__clk;
    }
    VPE_tb___024root___timing_ready(vlSelf);
    VPE_tb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VPE_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    VPE_tb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = VPE_tb___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        VPE_tb___024root___timing_resume(vlSelf);
        {
            // Inlined CFunc: _eval_body__act
            if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
                {
                    // Inlined CFunc: _act_sequent__TOP__0
                    vlSelfRef.PE_tb__DOT__dut__DOT__b_out 
                        = ((IData)(vlSelfRef.PE_tb__DOT__load_slot)
                            ? (IData)(vlSelfRef.PE_tb__DOT__dut__DOT__b2)
                            : (IData)(vlSelfRef.PE_tb__DOT__dut__DOT__b1));
                    vlSelfRef.PE_tb__DOT__dut__DOT__w 
                        = ((IData)(vlSelfRef.PE_tb__DOT__compute_slot)
                            ? (IData)(vlSelfRef.PE_tb__DOT__dut__DOT__b2)
                            : (IData)(vlSelfRef.PE_tb__DOT__dut__DOT__b1));
                }
            }
        }
    }
    return (__VactExecute);
}

bool VPE_tb___024root___eval_inact(VPE_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPE_tb___024root___eval_inact\n"); );
    VPE_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("Processing_Element.sv", 57, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void VPE_tb___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out);

bool VPE_tb___024root___eval_nba(VPE_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPE_tb___024root___eval_nba\n"); );
    VPE_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = VPE_tb___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        {
            // Inlined CFunc: _eval_body__nba
            if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
                {
                    // Inlined CFunc: _nba_sequent__TOP__0
                    if (vlSelfRef.PE_tb__DOT__rst_n) {
                        if (vlSelfRef.PE_tb__DOT__en) {
                            vlSelfRef.PE_tb__DOT__a_out 
                                = vlSelfRef.PE_tb__DOT__a;
                            vlSelfRef.PE_tb__DOT__result 
                                = (0x000003ffU & ((
                                                   (0U 
                                                    == (IData)(vlSelfRef.PE_tb__DOT__a)) 
                                                   | (0U 
                                                      == (IData)(vlSelfRef.PE_tb__DOT__dut__DOT__w)))
                                                   ? (IData)(vlSelfRef.PE_tb__DOT__above_result)
                                                   : 
                                                  ((IData)(vlSelfRef.PE_tb__DOT__above_result) 
                                                   + 
                                                   ((IData)(vlSelfRef.PE_tb__DOT__a) 
                                                    * (IData)(vlSelfRef.PE_tb__DOT__dut__DOT__w)))));
                        }
                        if (vlSelfRef.PE_tb__DOT__in_valid) {
                            if ((1U & (~ (IData)(vlSelfRef.PE_tb__DOT__load_slot)))) {
                                vlSelfRef.PE_tb__DOT__dut__DOT__b1 
                                    = vlSelfRef.PE_tb__DOT__b;
                            }
                            if (vlSelfRef.PE_tb__DOT__load_slot) {
                                vlSelfRef.PE_tb__DOT__dut__DOT__b2 
                                    = vlSelfRef.PE_tb__DOT__b;
                            }
                        }
                    } else {
                        vlSelfRef.PE_tb__DOT__a_out = 0U;
                        vlSelfRef.PE_tb__DOT__result = 0U;
                        vlSelfRef.PE_tb__DOT__dut__DOT__b1 = 0U;
                        vlSelfRef.PE_tb__DOT__dut__DOT__b2 = 0U;
                    }
                }
                vlSelfRef.__Vm_traceActivity[3U] = 1U;
            }
            if ((5ULL & vlSelfRef.__VnbaTriggered[0U])) {
                {
                    // Inlined CFunc: _act_sequent__TOP__0
                    vlSelfRef.PE_tb__DOT__dut__DOT__b_out 
                        = ((IData)(vlSelfRef.PE_tb__DOT__load_slot)
                            ? (IData)(vlSelfRef.PE_tb__DOT__dut__DOT__b2)
                            : (IData)(vlSelfRef.PE_tb__DOT__dut__DOT__b1));
                    vlSelfRef.PE_tb__DOT__dut__DOT__w 
                        = ((IData)(vlSelfRef.PE_tb__DOT__compute_slot)
                            ? (IData)(vlSelfRef.PE_tb__DOT__dut__DOT__b2)
                            : (IData)(vlSelfRef.PE_tb__DOT__dut__DOT__b1));
                }
            }
        }
        VPE_tb___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

bool VPE_tb___024root___eval_obs(VPE_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPE_tb___024root___eval_obs\n"); );
    VPE_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

bool VPE_tb___024root___eval_react(VPE_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPE_tb___024root___eval_react\n"); );
    VPE_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

void VPE_tb___024root___eval_postponed(VPE_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPE_tb___024root___eval_postponed\n"); );
    VPE_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VlCoroutine VPE_tb___024root___eval_initial__TOP__Vtiming__0(VPE_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPE_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    VPE_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.PE_tb__DOT__clk = 0U;
    while (true) {
        co_await vlSelfRef.__VdlySched.delay(0x0000000000001388ULL, 
                                             nullptr, 
                                             "Processing_Element.sv", 
                                             70);
        vlSelfRef.PE_tb__DOT__clk = (1U & (~ (IData)(vlSelfRef.PE_tb__DOT__clk)));
    }
    co_return;
}

void VPE_tb___024root____VbeforeTrig_h68bb2b13__0(VPE_tb___024root* vlSelf, const char* __VeventDescription);

VlCoroutine VPE_tb___024root___eval_initial__TOP__Vtiming__1(VPE_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPE_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    VPE_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.PE_tb__DOT__test_errors = vlSelfRef.PE_tb__DOT__errors;
    VPE_tb___024root____VbeforeTrig_h68bb2b13__0(vlSelf, 
                                                 "@(negedge PE_tb.clk)");
    co_await vlSelfRef.__VtrigSched_h68bb2b13__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge PE_tb.clk)", 
                                                         "Processing_Element.sv", 
                                                         81);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.PE_tb__DOT__rst_n = 0U;
    vlSelfRef.PE_tb__DOT__en = 0U;
    vlSelfRef.PE_tb__DOT__in_valid = 0U;
    vlSelfRef.PE_tb__DOT__load_slot = 0U;
    vlSelfRef.PE_tb__DOT__compute_slot = 0U;
    vlSelfRef.PE_tb__DOT__a = 0U;
    vlSelfRef.PE_tb__DOT__b = 0U;
    VPE_tb___024root____VbeforeTrig_h68bb2b13__0(vlSelf, 
                                                 "@(negedge PE_tb.clk)");
    co_await vlSelfRef.__VtrigSched_h68bb2b13__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge PE_tb.clk)", 
                                                         "Processing_Element.sv", 
                                                         91);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.PE_tb__DOT__en = 1U;
    vlSelfRef.PE_tb__DOT__in_valid = 1U;
    vlSelfRef.PE_tb__DOT__load_slot = 0U;
    vlSelfRef.PE_tb__DOT__compute_slot = 1U;
    vlSelfRef.PE_tb__DOT__a = 8U;
    vlSelfRef.PE_tb__DOT__b = 4U;
    VPE_tb___024root____VbeforeTrig_h68bb2b13__0(vlSelf, 
                                                 "@(negedge PE_tb.clk)");
    co_await vlSelfRef.__VtrigSched_h68bb2b13__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge PE_tb.clk)", 
                                                         "Processing_Element.sv", 
                                                         100);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.PE_tb__DOT__checks = ((IData)(1U) + vlSelfRef.PE_tb__DOT__checks);
    vlSelfRef.PE_tb__DOT__in_valid = 1U;
    vlSelfRef.PE_tb__DOT__load_slot = 1U;
    vlSelfRef.PE_tb__DOT__compute_slot = 0U;
    vlSelfRef.PE_tb__DOT__a = 1U;
    vlSelfRef.PE_tb__DOT__b = 2U;
    if (VL_UNLIKELY(((((0U != (IData)(vlSelfRef.PE_tb__DOT__a_out)) 
                       | (0U != (IData)(vlSelfRef.PE_tb__DOT__dut__DOT__b_out))) 
                      | (0U != (IData)(vlSelfRef.PE_tb__DOT__result)))))) {
        vlSelfRef.PE_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.PE_tb__DOT__errors);
        VL_WRITEF_NX("[%0t] %%Error: Processing_Element.sv:105: Assertion failed in %m: [%0t] reset overridden (b1 side): a_out=%0d b_out=%0d result=%0d\n",7, 'M',vlSymsp->name(),"PE_tb", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',4,(IData)(vlSelfRef.PE_tb__DOT__a_out)
                     , '#',4,vlSelfRef.PE_tb__DOT__dut__DOT__b_out
                     , '#',10,(IData)(vlSelfRef.PE_tb__DOT__result));
        VL_STOP_MT("Processing_Element.sv", 105, "");
    }
    VPE_tb___024root____VbeforeTrig_h68bb2b13__0(vlSelf, 
                                                 "@(negedge PE_tb.clk)");
    co_await vlSelfRef.__VtrigSched_h68bb2b13__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge PE_tb.clk)", 
                                                         "Processing_Element.sv", 
                                                         114);
    if (VL_UNLIKELY(((((0U != (IData)(vlSelfRef.PE_tb__DOT__a_out)) 
                       | (0U != (IData)(vlSelfRef.PE_tb__DOT__dut__DOT__b_out))) 
                      | (0U != (IData)(vlSelfRef.PE_tb__DOT__result)))))) {
        vlSelfRef.PE_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.PE_tb__DOT__errors);
        VL_WRITEF_NX("[%0t] %%Error: Processing_Element.sv:118: Assertion failed in %m: [%0t] reset overridden (b2 side): a_out=%0d b_out=%0d result=%0d\n",7, 'M',vlSymsp->name(),"PE_tb", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',4,(IData)(vlSelfRef.PE_tb__DOT__a_out)
                     , '#',4,vlSelfRef.PE_tb__DOT__dut__DOT__b_out
                     , '#',10,(IData)(vlSelfRef.PE_tb__DOT__result));
        VL_STOP_MT("Processing_Element.sv", 118, "");
    }
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.PE_tb__DOT__checks = ((IData)(1U) + vlSelfRef.PE_tb__DOT__checks);
    VL_FINISH_MT("Processing_Element.sv", 171, "");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_return;
}

bool VPE_tb___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPE_tb___024root___trigger_anySet__ico\n"); );
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

bool VPE_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPE_tb___024root___trigger_anySet__act\n"); );
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

void VPE_tb___024root___timing_ready(VPE_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPE_tb___024root___timing_ready\n"); );
    VPE_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h68bb2b13__0.ready("@(negedge PE_tb.clk)");
    }
}

void VPE_tb___024root___timing_resume(VPE_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPE_tb___024root___timing_resume\n"); );
    VPE_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VtrigSched_h68bb2b13__0.moveToResumeQueue(
                                                          "@(negedge PE_tb.clk)");
    vlSelfRef.__VtrigSched_h68bb2b13__0.resume("@(negedge PE_tb.clk)");
    if ((2ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void VPE_tb___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPE_tb___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

void VPE_tb___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPE_tb___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

void VPE_tb___024root____VbeforeTrig_h68bb2b13__0(VPE_tb___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPE_tb___024root____VbeforeTrig_h68bb2b13__0\n"); );
    VPE_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)((((~ (IData)(vlSelfRef.PE_tb__DOT__clk)) 
                                   & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__PE_tb__DOT__clk__0)) 
                                  << 2U)));
    vlSelfRef.__Vtrigprevexpr___TOP__PE_tb__DOT__clk__0 
        = vlSelfRef.PE_tb__DOT__clk;
    if ((4ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h68bb2b13__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h68bb2b13__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h68bb2b13__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h68bb2b13__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

#ifdef VL_DEBUG
void VPE_tb___024root___eval_debug_assertions(VPE_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPE_tb___024root___eval_debug_assertions\n"); );
    VPE_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
