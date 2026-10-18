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

void VPE_tb___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in);
#ifdef VL_DEBUG
VL_ATTR_COLD void VPE_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
bool VPE_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

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
                                                        ((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                          << 1U) 
                                                         | ((IData)(vlSelfRef.PE_tb__DOT__clk) 
                                                            & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__PE_tb__DOT__clk__0))))));
        vlSelfRef.__Vtrigprevexpr___TOP__PE_tb__DOT__clk__0 
            = vlSelfRef.PE_tb__DOT__clk;
    }
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
        {
            // Inlined CFunc: _timing_resume
            if ((2ULL & vlSelfRef.__VactTriggered[0U])) {
                vlSelfRef.__VdlySched.resume();
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
        VL_FATAL_MT("Processing_Element.sv", 63, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
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
                            vlSelfRef.PE_tb__DOT__result 
                                = (0x000003ffU & ((IData)(vlSelfRef.PE_tb__DOT__above_result) 
                                                  + 
                                                  ((IData)(vlSelfRef.PE_tb__DOT__slot)
                                                    ? 
                                                   ((IData)(vlSelfRef.PE_tb__DOT__dut__DOT__b2) 
                                                    * (IData)(vlSelfRef.PE_tb__DOT__a))
                                                    : 
                                                   ((IData)(vlSelfRef.PE_tb__DOT__dut__DOT__b1) 
                                                    * (IData)(vlSelfRef.PE_tb__DOT__a)))));
                        }
                        if (vlSelfRef.PE_tb__DOT__in_valid) {
                            if (vlSelfRef.PE_tb__DOT__slot) {
                                vlSelfRef.PE_tb__DOT__dut__DOT__b2 
                                    = vlSelfRef.PE_tb__DOT__b;
                            }
                            if ((1U & (~ (IData)(vlSelfRef.PE_tb__DOT__slot)))) {
                                vlSelfRef.PE_tb__DOT__dut__DOT__b1 
                                    = vlSelfRef.PE_tb__DOT__b;
                            }
                        }
                    } else {
                        vlSelfRef.PE_tb__DOT__result = 0U;
                        vlSelfRef.PE_tb__DOT__dut__DOT__b2 = 0U;
                        vlSelfRef.PE_tb__DOT__dut__DOT__b1 = 0U;
                    }
                }
                vlSelfRef.__Vm_traceActivity[3U] = 1U;
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
                                             73);
        vlSelfRef.PE_tb__DOT__clk = (1U & (~ (IData)(vlSelfRef.PE_tb__DOT__clk)));
    }
    co_return;
}

VlCoroutine VPE_tb___024root___eval_initial__TOP__Vtiming__1(VPE_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPE_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    VPE_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.PE_tb__DOT__rst_n = 0U;
    vlSelfRef.PE_tb__DOT__en = 0U;
    vlSelfRef.PE_tb__DOT__drain_en = 0U;
    vlSelfRef.PE_tb__DOT__in_valid = 0U;
    vlSelfRef.PE_tb__DOT__a = 0U;
    vlSelfRef.PE_tb__DOT__b = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                         nullptr, "Processing_Element.sv", 
                                         88);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.PE_tb__DOT__rst_n = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000004e20ULL, 
                                         nullptr, "Processing_Element.sv", 
                                         90);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.PE_tb__DOT__in_valid = 1U;
    vlSelfRef.PE_tb__DOT__slot = 0U;
    vlSelfRef.PE_tb__DOT__b = 3U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                         nullptr, "Processing_Element.sv", 
                                         95);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.PE_tb__DOT__in_valid = 0U;
    if (VL_UNLIKELY(((3U == (IData)(vlSelfRef.PE_tb__DOT__dut__DOT__b1))))) {
        VL_WRITEF_NX("b1 loaded correctly. Value is %0d\n",1
                     , '#',4,vlSelfRef.PE_tb__DOT__dut__DOT__b1);
    }
    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                         nullptr, "Processing_Element.sv", 
                                         98);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.PE_tb__DOT__slot = 1U;
    vlSelfRef.PE_tb__DOT__b = 5U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                         nullptr, "Processing_Element.sv", 
                                         102);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.PE_tb__DOT__in_valid = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                         nullptr, "Processing_Element.sv", 
                                         104);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.PE_tb__DOT__in_valid = 0U;
    if (VL_UNLIKELY(((5U == (IData)(vlSelfRef.PE_tb__DOT__dut__DOT__b2))))) {
        VL_WRITEF_NX("b2 loaded correctly. Value is %0d\n",1
                     , '#',4,vlSelfRef.PE_tb__DOT__dut__DOT__b2);
    }
    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                         nullptr, "Processing_Element.sv", 
                                         107);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.PE_tb__DOT__rst_n = 0U;
    vlSelfRef.PE_tb__DOT__en = 0U;
    vlSelfRef.PE_tb__DOT__drain_en = 0U;
    vlSelfRef.PE_tb__DOT__in_valid = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                         nullptr, "Processing_Element.sv", 
                                         112);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.PE_tb__DOT__rst_n = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000004e20ULL, 
                                         nullptr, "Processing_Element.sv", 
                                         115);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.PE_tb__DOT__in_valid = 1U;
    vlSelfRef.PE_tb__DOT__slot = 0U;
    vlSelfRef.PE_tb__DOT__above_result = 2U;
    vlSelfRef.PE_tb__DOT__a = 1U;
    vlSelfRef.PE_tb__DOT__b = 3U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                         nullptr, "Processing_Element.sv", 
                                         121);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.PE_tb__DOT__in_valid = 0U;
    vlSelfRef.PE_tb__DOT__en = 1U;
    if (VL_UNLIKELY(((5U == (IData)(vlSelfRef.PE_tb__DOT__result))))) {
        VL_WRITEF_NX("Slot 1 calculated correctly, result correct. Result is %0d\n",1
                     , '#',10,vlSelfRef.PE_tb__DOT__result);
    }
    co_await vlSelfRef.__VdlySched.delay(0x0000000000004e20ULL, 
                                         nullptr, "Processing_Element.sv", 
                                         127);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.PE_tb__DOT__en = 0U;
    vlSelfRef.PE_tb__DOT__slot = 1U;
    vlSelfRef.PE_tb__DOT__b = 2U;
    vlSelfRef.PE_tb__DOT__in_valid = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                         nullptr, "Processing_Element.sv", 
                                         132);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.PE_tb__DOT__in_valid = 0U;
    vlSelfRef.PE_tb__DOT__en = 1U;
    if (VL_UNLIKELY(((4U == (IData)(vlSelfRef.PE_tb__DOT__result))))) {
        VL_WRITEF_NX("Slot 2 calculated correctly, result correct. Result is %0d\n",1
                     , '#',10,vlSelfRef.PE_tb__DOT__result);
    }
    co_await vlSelfRef.__VdlySched.delay(0x0000000000007530ULL, 
                                         nullptr, "Processing_Element.sv", 
                                         138);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_FINISH_MT("Processing_Element.sv", 140, "");
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

#ifdef VL_DEBUG
void VPE_tb___024root___eval_debug_assertions(VPE_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPE_tb___024root___eval_debug_assertions\n"); );
    VPE_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
