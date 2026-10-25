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
            if ((6ULL & vlSelfRef.__VactTriggered[0U])) {
                {
                    // Inlined CFunc: _act_comb__TOP__0
                    vlSelfRef.PE_tb__DOT__dut__DOT__w 
                        = ((IData)(vlSelfRef.PE_tb__DOT__slot_in)
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
        VL_FATAL_MT("PE_tb.sv", 3, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
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
                            vlSelfRef.PE_tb__DOT__slot_out 
                                = vlSelfRef.PE_tb__DOT__slot_in;
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
                        if (vlSelfRef.PE_tb__DOT__w_load) {
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
                        vlSelfRef.PE_tb__DOT__slot_out = 0U;
                        vlSelfRef.PE_tb__DOT__a_out = 0U;
                        vlSelfRef.PE_tb__DOT__result = 0U;
                        vlSelfRef.PE_tb__DOT__dut__DOT__b1 = 0U;
                        vlSelfRef.PE_tb__DOT__dut__DOT__b2 = 0U;
                    }
                }
                vlSelfRef.__Vm_traceActivity[3U] = 1U;
            }
            if ((7ULL & vlSelfRef.__VnbaTriggered[0U])) {
                {
                    // Inlined CFunc: _act_comb__TOP__0
                    vlSelfRef.PE_tb__DOT__dut__DOT__w 
                        = ((IData)(vlSelfRef.PE_tb__DOT__slot_in)
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
                                             "PE_tb.sv", 
                                             24);
        vlSelfRef.PE_tb__DOT__clk = (1U & (~ (IData)(vlSelfRef.PE_tb__DOT__clk)));
    }
    co_return;
}

void VPE_tb___024root____VbeforeTrig_h68bb2b13__0(VPE_tb___024root* vlSelf, const char* __VeventDescription);

VlCoroutine VPE_tb___024root___eval_initial__TOP__Vtiming__1(VPE_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPE_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    VPE_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ PE_tb__DOT__unnamedblk1__DOT__s;
    PE_tb__DOT__unnamedblk1__DOT__s = 0;
    IData/*31:0*/ PE_tb__DOT__unnamedblk4__DOT__i;
    PE_tb__DOT__unnamedblk4__DOT__i = 0;
    // Body
    vlSelfRef.PE_tb__DOT__test_errors = vlSelfRef.PE_tb__DOT__errors;
    VPE_tb___024root____VbeforeTrig_h68bb2b13__0(vlSelf, 
                                                 "@(negedge PE_tb.clk)");
    co_await vlSelfRef.__VtrigSched_h68bb2b13__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge PE_tb.clk)", 
                                                         "PE_tb.sv", 
                                                         35);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.PE_tb__DOT__rst_n = 0U;
    vlSelfRef.PE_tb__DOT__en = 0U;
    vlSelfRef.PE_tb__DOT__w_load = 0U;
    vlSelfRef.PE_tb__DOT__load_slot = 0U;
    vlSelfRef.PE_tb__DOT__slot_in = 0U;
    vlSelfRef.PE_tb__DOT__a = 0U;
    vlSelfRef.PE_tb__DOT__b = 0U;
    VPE_tb___024root____VbeforeTrig_h68bb2b13__0(vlSelf, 
                                                 "@(negedge PE_tb.clk)");
    co_await vlSelfRef.__VtrigSched_h68bb2b13__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge PE_tb.clk)", 
                                                         "PE_tb.sv", 
                                                         45);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.PE_tb__DOT__en = 1U;
    vlSelfRef.PE_tb__DOT__w_load = 1U;
    vlSelfRef.PE_tb__DOT__load_slot = 0U;
    vlSelfRef.PE_tb__DOT__slot_in = 1U;
    vlSelfRef.PE_tb__DOT__a = 8U;
    vlSelfRef.PE_tb__DOT__b = 4U;
    VPE_tb___024root____VbeforeTrig_h68bb2b13__0(vlSelf, 
                                                 "@(negedge PE_tb.clk)");
    co_await vlSelfRef.__VtrigSched_h68bb2b13__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge PE_tb.clk)", 
                                                         "PE_tb.sv", 
                                                         54);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.PE_tb__DOT__checks = ((IData)(1U) + vlSelfRef.PE_tb__DOT__checks);
    if (VL_UNLIKELY(((((0U != (IData)(vlSelfRef.PE_tb__DOT__a_out)) 
                       | (0U != (IData)(vlSelfRef.PE_tb__DOT__dut__DOT__b1))) 
                      | (0U != (IData)(vlSelfRef.PE_tb__DOT__result)))))) {
        vlSelfRef.PE_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.PE_tb__DOT__errors);
        VL_WRITEF_NX("[%0t] %%Error: PE_tb.sv:59: Assertion failed in %m: [%0t] reset overridden (b1 side): a_out=%0d dut.b1=%0d result=%0d\n",7, 'M',vlSymsp->name(),"PE_tb", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',4,(IData)(vlSelfRef.PE_tb__DOT__a_out)
                     , '#',4,vlSelfRef.PE_tb__DOT__dut__DOT__b1
                     , '#',10,(IData)(vlSelfRef.PE_tb__DOT__result));
        VL_STOP_MT("PE_tb.sv", 59, "");
    }
    vlSelfRef.PE_tb__DOT__w_load = 1U;
    vlSelfRef.PE_tb__DOT__load_slot = 1U;
    vlSelfRef.PE_tb__DOT__slot_in = 0U;
    vlSelfRef.PE_tb__DOT__a = 1U;
    vlSelfRef.PE_tb__DOT__b = 2U;
    VPE_tb___024root____VbeforeTrig_h68bb2b13__0(vlSelf, 
                                                 "@(negedge PE_tb.clk)");
    co_await vlSelfRef.__VtrigSched_h68bb2b13__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge PE_tb.clk)", 
                                                         "PE_tb.sv", 
                                                         68);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.PE_tb__DOT__checks = ((IData)(1U) + vlSelfRef.PE_tb__DOT__checks);
    if (VL_UNLIKELY(((((0U != (IData)(vlSelfRef.PE_tb__DOT__a_out)) 
                       | (0U != (IData)(vlSelfRef.PE_tb__DOT__dut__DOT__b2))) 
                      | (0U != (IData)(vlSelfRef.PE_tb__DOT__result)))))) {
        vlSelfRef.PE_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.PE_tb__DOT__errors);
        VL_WRITEF_NX("[%0t] %%Error: PE_tb.sv:72: Assertion failed in %m: [%0t] reset overridden (b2 side): a_out=%0d dut.b2=%0d result=%0d\n",7, 'M',vlSymsp->name(),"PE_tb", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',4,(IData)(vlSelfRef.PE_tb__DOT__a_out)
                     , '#',4,vlSelfRef.PE_tb__DOT__dut__DOT__b2
                     , '#',10,(IData)(vlSelfRef.PE_tb__DOT__result));
        VL_STOP_MT("PE_tb.sv", 72, "");
    }
    vlSelfRef.PE_tb__DOT__rst_n = 1U;
    vlSelfRef.PE_tb__DOT__w_load = 1U;
    vlSelfRef.PE_tb__DOT__load_slot = 0U;
    vlSelfRef.PE_tb__DOT__b = 2U;
    if ((vlSelfRef.PE_tb__DOT__errors == vlSelfRef.PE_tb__DOT__test_errors)) {
        VL_WRITEF_NX("Test 1 passed: reset priority\n",0);
    } else {
        VL_WRITEF_NX("Test 1 FAILED: reset priority\n",0);
    }
    VPE_tb___024root____VbeforeTrig_h68bb2b13__0(vlSelf, 
                                                 "@(negedge PE_tb.clk)");
    co_await vlSelfRef.__VtrigSched_h68bb2b13__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge PE_tb.clk)", 
                                                         "PE_tb.sv", 
                                                         87);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.PE_tb__DOT__checks = ((IData)(1U) + vlSelfRef.PE_tb__DOT__checks);
    if (VL_UNLIKELY(((2U != (IData)(vlSelfRef.PE_tb__DOT__dut__DOT__b1))))) {
        vlSelfRef.PE_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.PE_tb__DOT__errors);
        VL_WRITEF_NX("[%0t] %%Error: PE_tb.sv:91: Assertion failed in %m: [%0t] b1 loaded incorrectly: b1 expected: 0010, b1 was: %0d\n",5, 'M',vlSymsp->name(),"PE_tb", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',4,(IData)(vlSelfRef.PE_tb__DOT__dut__DOT__b1));
        VL_STOP_MT("PE_tb.sv", 91, "");
    }
    vlSelfRef.PE_tb__DOT__load_slot = 1U;
    vlSelfRef.PE_tb__DOT__b = 4U;
    VPE_tb___024root____VbeforeTrig_h68bb2b13__0(vlSelf, 
                                                 "@(negedge PE_tb.clk)");
    co_await vlSelfRef.__VtrigSched_h68bb2b13__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge PE_tb.clk)", 
                                                         "PE_tb.sv", 
                                                         97);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.PE_tb__DOT__checks = ((IData)(1U) + vlSelfRef.PE_tb__DOT__checks);
    if (VL_UNLIKELY(((4U != (IData)(vlSelfRef.PE_tb__DOT__dut__DOT__b2))))) {
        vlSelfRef.PE_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.PE_tb__DOT__errors);
        VL_WRITEF_NX("[%0t] %%Error: PE_tb.sv:101: Assertion failed in %m: [%0t] b2 loaded incorrectly: b2 expected: 0010, b2 was: %0d\n",5, 'M',vlSymsp->name(),"PE_tb", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',4,(IData)(vlSelfRef.PE_tb__DOT__dut__DOT__b2));
        VL_STOP_MT("PE_tb.sv", 101, "");
    }
    vlSelfRef.PE_tb__DOT__b = 1U;
    vlSelfRef.PE_tb__DOT__load_slot = 0U;
    if ((vlSelfRef.PE_tb__DOT__errors == vlSelfRef.PE_tb__DOT__test_errors)) {
        VL_WRITEF_NX("Test 2 passed: weight loading\n",0);
    } else {
        VL_WRITEF_NX("Test 2 FAILED: weight loading\n",0);
    }
    VPE_tb___024root____VbeforeTrig_h68bb2b13__0(vlSelf, 
                                                 "@(negedge PE_tb.clk)");
    co_await vlSelfRef.__VtrigSched_h68bb2b13__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge PE_tb.clk)", 
                                                         "PE_tb.sv", 
                                                         111);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY(((1U != (IData)(vlSelfRef.PE_tb__DOT__b))))) {
        vlSelfRef.PE_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.PE_tb__DOT__errors);
        VL_WRITEF_NX("[%0t] %%Error: PE_tb.sv:114: Assertion failed in %m: [%0t] b not reading correctly: b expected: 0001, b was: %0d\n",5, 'M',vlSymsp->name(),"PE_tb", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',4,(IData)(vlSelfRef.PE_tb__DOT__b));
        VL_STOP_MT("PE_tb.sv", 114, "");
    }
    vlSelfRef.PE_tb__DOT__b = 2U;
    vlSelfRef.PE_tb__DOT__load_slot = 1U;
    if (VL_UNLIKELY(((2U != (IData)(vlSelfRef.PE_tb__DOT__b))))) {
        vlSelfRef.PE_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.PE_tb__DOT__errors);
        VL_WRITEF_NX("[%0t] %%Error: PE_tb.sv:122: Assertion failed in %m: [%0t] slot did not fire correctly: b expected: 0010, b was: %0d\n",5, 'M',vlSymsp->name(),"PE_tb", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',4,(IData)(vlSelfRef.PE_tb__DOT__b));
        VL_STOP_MT("PE_tb.sv", 122, "");
    }
    VPE_tb___024root____VbeforeTrig_h68bb2b13__0(vlSelf, 
                                                 "@(negedge PE_tb.clk)");
    co_await vlSelfRef.__VtrigSched_h68bb2b13__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge PE_tb.clk)", 
                                                         "PE_tb.sv", 
                                                         125);
    if (VL_UNLIKELY(((2U != (IData)(vlSelfRef.PE_tb__DOT__b))))) {
        vlSelfRef.PE_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.PE_tb__DOT__errors);
        VL_WRITEF_NX("[%0t] %%Error: PE_tb.sv:128: Assertion failed in %m: [%0t] dut.b: dut.b expected: 0010, b was: %0d\n",5, 'M',vlSymsp->name(),"PE_tb", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',4,(IData)(vlSelfRef.PE_tb__DOT__b));
        VL_STOP_MT("PE_tb.sv", 128, "");
    }
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.PE_tb__DOT__rst_n = 0U;
    if ((vlSelfRef.PE_tb__DOT__errors == vlSelfRef.PE_tb__DOT__test_errors)) {
        VL_WRITEF_NX("Test 3 passed: weight shift chain\n",0);
    } else {
        VL_WRITEF_NX("Test 3 FAILED: weight shift chain\n",0);
    }
    VPE_tb___024root____VbeforeTrig_h68bb2b13__0(vlSelf, 
                                                 "@(negedge PE_tb.clk)");
    co_await vlSelfRef.__VtrigSched_h68bb2b13__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge PE_tb.clk)", 
                                                         "PE_tb.sv", 
                                                         137);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.PE_tb__DOT__en = 0U;
    vlSelfRef.PE_tb__DOT__w_load = 1U;
    vlSelfRef.PE_tb__DOT__rst_n = 1U;
    vlSelfRef.PE_tb__DOT__slot_in = 1U;
    vlSelfRef.PE_tb__DOT__load_slot = 0U;
    vlSelfRef.PE_tb__DOT__b = 3U;
    VPE_tb___024root____VbeforeTrig_h68bb2b13__0(vlSelf, 
                                                 "@(negedge PE_tb.clk)");
    co_await vlSelfRef.__VtrigSched_h68bb2b13__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge PE_tb.clk)", 
                                                         "PE_tb.sv", 
                                                         145);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.PE_tb__DOT__en = 1U;
    vlSelfRef.PE_tb__DOT__w_load = 1U;
    vlSelfRef.PE_tb__DOT__slot_in = 0U;
    vlSelfRef.PE_tb__DOT__load_slot = 1U;
    vlSelfRef.PE_tb__DOT__a = 1U;
    vlSelfRef.PE_tb__DOT__b = 5U;
    vlSelfRef.PE_tb__DOT__above_result = 5U;
    VPE_tb___024root____VbeforeTrig_h68bb2b13__0(vlSelf, 
                                                 "@(negedge PE_tb.clk)");
    co_await vlSelfRef.__VtrigSched_h68bb2b13__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge PE_tb.clk)", 
                                                         "PE_tb.sv", 
                                                         154);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY(((8U != (IData)(vlSelfRef.PE_tb__DOT__result))))) {
        vlSelfRef.PE_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.PE_tb__DOT__errors);
        VL_WRITEF_NX("[%0t] %%Error: PE_tb.sv:157: Assertion failed in %m: [%0t] result computed incorrectly for compute slot 0: result expected: 8, b was: %0d\n",5, 'M',vlSymsp->name(),"PE_tb", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',10,(IData)(vlSelfRef.PE_tb__DOT__result));
        VL_STOP_MT("PE_tb.sv", 157, "");
    }
    vlSelfRef.PE_tb__DOT__slot_in = 1U;
    VPE_tb___024root____VbeforeTrig_h68bb2b13__0(vlSelf, 
                                                 "@(negedge PE_tb.clk)");
    co_await vlSelfRef.__VtrigSched_h68bb2b13__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge PE_tb.clk)", 
                                                         "PE_tb.sv", 
                                                         162);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY(((0x000aU != (IData)(vlSelfRef.PE_tb__DOT__result))))) {
        vlSelfRef.PE_tb__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.PE_tb__DOT__errors);
        VL_WRITEF_NX("[%0t] %%Error: PE_tb.sv:165: Assertion failed in %m: [%0t] result computed incorrectly for compute slot 1: result expected: 10, b was: %0d\n",5, 'M',vlSymsp->name(),"PE_tb", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',10,(IData)(vlSelfRef.PE_tb__DOT__result));
        VL_STOP_MT("PE_tb.sv", 165, "");
    }
    vlSelfRef.PE_tb__DOT__rst_n = 0U;
    if ((vlSelfRef.PE_tb__DOT__errors == vlSelfRef.PE_tb__DOT__test_errors)) {
        VL_WRITEF_NX("Test 4 passed: compute slot verification\n",0);
    } else {
        VL_WRITEF_NX("Test 4 FAILED: compute slot verification\n",0);
    }
    VPE_tb___024root____VbeforeTrig_h68bb2b13__0(vlSelf, 
                                                 "@(negedge PE_tb.clk)");
    co_await vlSelfRef.__VtrigSched_h68bb2b13__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge PE_tb.clk)", 
                                                         "PE_tb.sv", 
                                                         174);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.PE_tb__DOT__rst_n = 1U;
    PE_tb__DOT__unnamedblk1__DOT__s = 0U;
    while (VL_GTS_III(32, 2U, PE_tb__DOT__unnamedblk1__DOT__s)) {
        vlSelfRef.PE_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__w = 0U;
        while (VL_GTS_III(32, 0x00000010U, vlSelfRef.PE_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__w)) {
            VPE_tb___024root____VbeforeTrig_h68bb2b13__0(vlSelf, 
                                                         "@(negedge PE_tb.clk)");
            co_await vlSelfRef.__VtrigSched_h68bb2b13__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge PE_tb.clk)", 
                                                                 "PE_tb.sv", 
                                                                 178);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.PE_tb__DOT__en = 0U;
            vlSelfRef.PE_tb__DOT__w_load = 1U;
            vlSelfRef.PE_tb__DOT__load_slot = (1U & PE_tb__DOT__unnamedblk1__DOT__s);
            vlSelfRef.PE_tb__DOT__b = (0x0000000fU 
                                       & vlSelfRef.PE_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__w);
            VPE_tb___024root____VbeforeTrig_h68bb2b13__0(vlSelf, 
                                                         "@(negedge PE_tb.clk)");
            co_await vlSelfRef.__VtrigSched_h68bb2b13__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge PE_tb.clk)", 
                                                                 "PE_tb.sv", 
                                                                 184);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.PE_tb__DOT__w_load = 0U;
            vlSelfRef.PE_tb__DOT__slot_in = (1U & PE_tb__DOT__unnamedblk1__DOT__s);
            vlSelfRef.PE_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__av = 0U;
            while (VL_GTS_III(32, 0x00000010U, vlSelfRef.PE_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__av)) {
                vlSelfRef.PE_tb__DOT__a = (0x0000000fU 
                                           & vlSelfRef.PE_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__av);
                vlSelfRef.PE_tb__DOT____VlemExpr_0 
                    = VL_URANDOM_RANGE_I(0U, 0x000001c2U);
                vlSelfRef.PE_tb__DOT__above_result 
                    = (0x000003ffU & vlSelfRef.PE_tb__DOT____VlemExpr_0);
                vlSelfRef.PE_tb__DOT__expected = (0x000003ffU 
                                                  & ((IData)(vlSelfRef.PE_tb__DOT__above_result) 
                                                     + 
                                                     (vlSelfRef.PE_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__av 
                                                      * vlSelfRef.PE_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__w)));
                vlSelfRef.PE_tb__DOT__en = 1U;
                VPE_tb___024root____VbeforeTrig_h68bb2b13__0(vlSelf, 
                                                             "@(negedge PE_tb.clk)");
                co_await vlSelfRef.__VtrigSched_h68bb2b13__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge PE_tb.clk)", 
                                                                     "PE_tb.sv", 
                                                                     194);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
                vlSelfRef.PE_tb__DOT__checks = ((IData)(1U) 
                                                + vlSelfRef.PE_tb__DOT__checks);
                if (VL_UNLIKELY((((IData)(vlSelfRef.PE_tb__DOT__result) 
                                  != (IData)(vlSelfRef.PE_tb__DOT__expected))))) {
                    vlSelfRef.PE_tb__DOT__errors = 
                        ((IData)(1U) + vlSelfRef.PE_tb__DOT__errors);
                    VL_WRITEF_NX("[%0t] %%Error: PE_tb.sv:198: Assertion failed in %m: [%0t] MAC slot=%0d a=%0d w=%0d above=%0d: got %0d, expected %0d\n",10, 'M',vlSymsp->name(),"PE_tb.unnamedblk1.unnamedblk2.unnamedblk3", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000)
                                 , '#',64,VL_TIME_UNITED_Q(1000)
                                 , '~',32,PE_tb__DOT__unnamedblk1__DOT__s
                                 , '~',32,vlSelfRef.PE_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__av
                                 , '~',32,vlSelfRef.PE_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__w
                                 , '#',10,(IData)(vlSelfRef.PE_tb__DOT__above_result)
                                 , '#',10,vlSelfRef.PE_tb__DOT__result
                                 , '#',10,(IData)(vlSelfRef.PE_tb__DOT__expected));
                    VL_STOP_MT("PE_tb.sv", 198, "");
                }
                vlSelfRef.PE_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__av 
                    = ((IData)(1U) + vlSelfRef.PE_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__av);
            }
            vlSelfRef.PE_tb__DOT__en = 0U;
            vlSelfRef.PE_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__w 
                = ((IData)(1U) + vlSelfRef.PE_tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__w);
        }
        PE_tb__DOT__unnamedblk1__DOT__s = ((IData)(1U) 
                                           + PE_tb__DOT__unnamedblk1__DOT__s);
    }
    vlSelfRef.PE_tb__DOT__rst_n = 0U;
    if ((vlSelfRef.PE_tb__DOT__errors == vlSelfRef.PE_tb__DOT__test_errors)) {
        VL_WRITEF_NX("Test 5 passed: MAC verification\n",0);
    } else {
        VL_WRITEF_NX("Test 5 FAILED: MAC verification\n",0);
    }
    VPE_tb___024root____VbeforeTrig_h68bb2b13__0(vlSelf, 
                                                 "@(negedge PE_tb.clk)");
    co_await vlSelfRef.__VtrigSched_h68bb2b13__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge PE_tb.clk)", 
                                                         "PE_tb.sv", 
                                                         211);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.PE_tb__DOT__rst_n = 1U;
    vlSelfRef.PE_tb__DOT__en = 1U;
    vlSelfRef.PE_tb__DOT__a = 0x0fU;
    vlSelfRef.PE_tb__DOT__prev_a = vlSelfRef.PE_tb__DOT__a;
    PE_tb__DOT__unnamedblk4__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00000010U, PE_tb__DOT__unnamedblk4__DOT__i)) {
        VPE_tb___024root____VbeforeTrig_h68bb2b13__0(vlSelf, 
                                                     "@(negedge PE_tb.clk)");
        co_await vlSelfRef.__VtrigSched_h68bb2b13__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge PE_tb.clk)", 
                                                             "PE_tb.sv", 
                                                             218);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.PE_tb__DOT__checks = ((IData)(1U) 
                                        + vlSelfRef.PE_tb__DOT__checks);
        vlSelfRef.PE_tb__DOT__a = (0x0000000fU & PE_tb__DOT__unnamedblk4__DOT__i);
        if (VL_UNLIKELY((((IData)(vlSelfRef.PE_tb__DOT__a_out) 
                          != (IData)(vlSelfRef.PE_tb__DOT__prev_a))))) {
            vlSelfRef.PE_tb__DOT__errors = ((IData)(1U) 
                                            + vlSelfRef.PE_tb__DOT__errors);
            VL_WRITEF_NX("[%0t] %%Error: PE_tb.sv:222: Assertion failed in %m: [%0t] a_out=%0d, expected %0d (previous a)\n",6, 'M',vlSymsp->name(),"PE_tb.unnamedblk4", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , '#',4,(IData)(vlSelfRef.PE_tb__DOT__a_out)
                         , '#',4,vlSelfRef.PE_tb__DOT__prev_a);
            VL_STOP_MT("PE_tb.sv", 222, "");
        }
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "PE_tb.sv", 
                                             227);
        if (VL_UNLIKELY((((IData)(vlSelfRef.PE_tb__DOT__a_out) 
                          != (IData)(vlSelfRef.PE_tb__DOT__prev_a))))) {
            vlSelfRef.PE_tb__DOT__errors = ((IData)(1U) 
                                            + vlSelfRef.PE_tb__DOT__errors);
            VL_WRITEF_NX("[%0t] %%Error: PE_tb.sv:231: Assertion failed in %m: [%0t] a_out changed before the clock edge (combinational path?)\n",4, 'M',vlSymsp->name(),"PE_tb.unnamedblk4", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , '#',64,VL_TIME_UNITED_Q(1000));
            VL_STOP_MT("PE_tb.sv", 231, "");
        }
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.PE_tb__DOT__checks = ((IData)(1U) 
                                        + vlSelfRef.PE_tb__DOT__checks);
        vlSelfRef.PE_tb__DOT__prev_a = vlSelfRef.PE_tb__DOT__a;
        PE_tb__DOT__unnamedblk4__DOT__i = ((IData)(1U) 
                                           + PE_tb__DOT__unnamedblk4__DOT__i);
    }
    if ((vlSelfRef.PE_tb__DOT__errors == vlSelfRef.PE_tb__DOT__test_errors)) {
        VL_WRITEF_NX("Test 6 passed: activation forwarding\n",0);
    } else {
        VL_WRITEF_NX("Test 6 FAILED: activation forwarding\n",0);
    }
    VL_FINISH_MT("PE_tb.sv", 240, "");
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
        vlSelfRef.__VtrigSched_h68bb2b13__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h68bb2b13__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h68bb2b13__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h68bb2b13__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h68bb2b13__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h68bb2b13__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h68bb2b13__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h68bb2b13__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h68bb2b13__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h68bb2b13__0.ready(__VeventDescription);
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
