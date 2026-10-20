// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPE.h for the primary calling header

#include "VPE__pch.h"

void VPE___024root___eval_sample(VPE___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPE___024root___eval_sample\n"); );
    VPE__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vsampled_TOP__in_valid = vlSelfRef.in_valid;
    vlSelfRef.__Vsampled_TOP__en = vlSelfRef.en;
    vlSelfRef.__Vsampled_TOP__load_slot = vlSelfRef.load_slot;
    vlSelfRef.__Vsampled_TOP__compute_slot = vlSelfRef.compute_slot;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VPE___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag);
#endif  // VL_DEBUG
bool VPE___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 2> &in);

bool VPE___024root___eval_ico(VPE___024root* vlSelf, CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPE___024root___eval_ico\n"); );
    VPE__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VicoExecute;
    // Body
    vlSelfRef.__VicoTriggered[1U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered[1U]) 
                                     | (IData)((IData)(firstIteration)));
    {
        // Inlined CFunc: _eval_triggers_vec__ico
        vlSelfRef.__VicoTriggered[0U] = (QData)((IData)(
                                                        ((((IData)(vlSelfRef.above_result) 
                                                           != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__above_result__0)) 
                                                          << 8U) 
                                                         | (((((((IData)(vlSelfRef.b) 
                                                                 != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__b__0)) 
                                                                << 3U) 
                                                               | (((IData)(vlSelfRef.a) 
                                                                   != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__a__0)) 
                                                                  << 2U)) 
                                                              | ((((IData)(vlSelfRef.en) 
                                                                   != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__en__0)) 
                                                                  << 1U) 
                                                                 | ((IData)(vlSelfRef.compute_slot) 
                                                                    != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__compute_slot__0)))) 
                                                             << 4U) 
                                                            | (((((IData)(vlSelfRef.load_slot) 
                                                                  != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__load_slot__0)) 
                                                                 << 3U) 
                                                                | (((IData)(vlSelfRef.in_valid) 
                                                                    != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__in_valid__0)) 
                                                                   << 2U)) 
                                                               | ((((IData)(vlSelfRef.rst_n) 
                                                                    != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__rst_n__0)) 
                                                                   << 1U) 
                                                                  | ((IData)(vlSelfRef.clk) 
                                                                     != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0))))))));
        vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
        vlSelfRef.__Vtrigprevexpr___TOP__rst_n__0 = vlSelfRef.rst_n;
        vlSelfRef.__Vtrigprevexpr___TOP__in_valid__0 
            = vlSelfRef.in_valid;
        vlSelfRef.__Vtrigprevexpr___TOP__load_slot__0 
            = vlSelfRef.load_slot;
        vlSelfRef.__Vtrigprevexpr___TOP__compute_slot__0 
            = vlSelfRef.compute_slot;
        vlSelfRef.__Vtrigprevexpr___TOP__en__0 = vlSelfRef.en;
        vlSelfRef.__Vtrigprevexpr___TOP__a__0 = vlSelfRef.a;
        vlSelfRef.__Vtrigprevexpr___TOP__b__0 = vlSelfRef.b;
        vlSelfRef.__Vtrigprevexpr___TOP__above_result__0 
            = vlSelfRef.above_result;
        if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VicoDidInit)))))) {
            vlSelfRef.__VicoDidInit = 1U;
            vlSelfRef.__VicoTriggered[0U] = (1ULL | vlSelfRef.__VicoTriggered[0U]);
            vlSelfRef.__VicoTriggered[0U] = (2ULL | vlSelfRef.__VicoTriggered[0U]);
            vlSelfRef.__VicoTriggered[0U] = (4ULL | vlSelfRef.__VicoTriggered[0U]);
            vlSelfRef.__VicoTriggered[0U] = (8ULL | vlSelfRef.__VicoTriggered[0U]);
            vlSelfRef.__VicoTriggered[0U] = (0x0000000000000010ULL 
                                             | vlSelfRef.__VicoTriggered[0U]);
            vlSelfRef.__VicoTriggered[0U] = (0x0000000000000020ULL 
                                             | vlSelfRef.__VicoTriggered[0U]);
            vlSelfRef.__VicoTriggered[0U] = (0x0000000000000040ULL 
                                             | vlSelfRef.__VicoTriggered[0U]);
            vlSelfRef.__VicoTriggered[0U] = (0x0000000000000080ULL 
                                             | vlSelfRef.__VicoTriggered[0U]);
            vlSelfRef.__VicoTriggered[0U] = (0x0000000000000100ULL 
                                             | vlSelfRef.__VicoTriggered[0U]);
        }
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VPE___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    __VicoExecute = VPE___024root___trigger_anySet__ico(vlSelfRef.__VicoTriggered);
    if (__VicoExecute) {
        {
            // Inlined CFunc: _eval_body__ico
            if ((8ULL & vlSelfRef.__VicoTriggered[0U])) {
                {
                    // Inlined CFunc: _ico_sequent__TOP__0
                    vlSelfRef.b_out = ((IData)(vlSelfRef.load_slot)
                                        ? (IData)(vlSelfRef.PE__DOT__b2)
                                        : (IData)(vlSelfRef.PE__DOT__b1));
                }
            }
            if ((0x0000000000000010ULL & vlSelfRef.__VicoTriggered[0U])) {
                {
                    // Inlined CFunc: _ico_sequent__TOP__1
                    vlSelfRef.PE__DOT__w = ((IData)(vlSelfRef.compute_slot)
                                             ? (IData)(vlSelfRef.PE__DOT__b2)
                                             : (IData)(vlSelfRef.PE__DOT__b1));
                }
            }
        }
    }
    return (__VicoExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VPE___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
void VPE___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in);

bool VPE___024root___eval_act(VPE___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPE___024root___eval_act\n"); );
    VPE__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__act
        vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                        ((IData)(vlSelfRef.clk) 
                                                         & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__1)))));
        vlSelfRef.__Vtrigprevexpr___TOP__clk__1 = vlSelfRef.clk;
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VPE___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    VPE___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    return (0U);
}

bool VPE___024root___eval_inact(VPE___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPE___024root___eval_inact\n"); );
    VPE__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

bool VPE___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);
void VPE___024root___nba_sequent__TOP__0(VPE___024root* vlSelf);
void VPE___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out);

bool VPE___024root___eval_nba(VPE___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPE___024root___eval_nba\n"); );
    VPE__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = VPE___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        {
            // Inlined CFunc: _eval_body__nba
            if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
                VPE___024root___nba_sequent__TOP__0(vlSelf);
            }
        }
        VPE___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

bool VPE___024root___eval_obs(VPE___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPE___024root___eval_obs\n"); );
    VPE__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

bool VPE___024root___eval_react(VPE___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPE___024root___eval_react\n"); );
    VPE__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

void VPE___024root___eval_postponed(VPE___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPE___024root___eval_postponed\n"); );
    VPE__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

bool VPE___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 2> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPE___024root___trigger_anySet__ico\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((2U > n));
    return (0U);
}

bool VPE___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPE___024root___trigger_anySet__act\n"); );
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

void VPE___024root___nba_sequent__TOP__0(VPE___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPE___024root___nba_sequent__TOP__0\n"); );
    VPE__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 1, 1)) {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 1, 1)) {
            if (vlSelfRef.rst_n) {
                if (VL_UNLIKELY(((((IData)(vlSelfRef.__Vsampled_TOP__in_valid) 
                                   & (IData)(vlSelfRef.__Vsampled_TOP__en)) 
                                  & ((IData)(vlSelfRef.__Vsampled_TOP__load_slot) 
                                     == (IData)(vlSelfRef.__Vsampled_TOP__compute_slot)))))) {
                    VL_WRITEF_NX("[%0t] %%Error: Processing_Element.sv:53: Assertion failed in %m: Loading into the compute slot.\n",3, 'M',vlSymsp->name(),"PE", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("Processing_Element.sv", 53, "");
                }
            }
        }
    }
    if (vlSelfRef.rst_n) {
        if (vlSelfRef.en) {
            vlSelfRef.a_out = vlSelfRef.a;
            vlSelfRef.result = (0x000003ffU & (((0U 
                                                 == (IData)(vlSelfRef.a)) 
                                                | (0U 
                                                   == (IData)(vlSelfRef.PE__DOT__w)))
                                                ? (IData)(vlSelfRef.above_result)
                                                : ((IData)(vlSelfRef.above_result) 
                                                   + 
                                                   ((IData)(vlSelfRef.a) 
                                                    * (IData)(vlSelfRef.PE__DOT__w)))));
        }
        if (vlSelfRef.in_valid) {
            if ((1U & (~ (IData)(vlSelfRef.load_slot)))) {
                vlSelfRef.PE__DOT__b1 = vlSelfRef.b;
            }
            if (vlSelfRef.load_slot) {
                vlSelfRef.PE__DOT__b2 = vlSelfRef.b;
            }
        }
    } else {
        vlSelfRef.a_out = 0U;
        vlSelfRef.result = 0U;
        vlSelfRef.PE__DOT__b1 = 0U;
        vlSelfRef.PE__DOT__b2 = 0U;
    }
    vlSelfRef.b_out = ((IData)(vlSelfRef.load_slot)
                        ? (IData)(vlSelfRef.PE__DOT__b2)
                        : (IData)(vlSelfRef.PE__DOT__b1));
    vlSelfRef.PE__DOT__w = ((IData)(vlSelfRef.compute_slot)
                             ? (IData)(vlSelfRef.PE__DOT__b2)
                             : (IData)(vlSelfRef.PE__DOT__b1));
}

void VPE___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPE___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

void VPE___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPE___024root___trigger_clear__act\n"); );
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
void VPE___024root___eval_debug_assertions(VPE___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPE___024root___eval_debug_assertions\n"); );
    VPE__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");
    }
    if (VL_UNLIKELY(((vlSelfRef.rst_n & 0xfeU)))) {
        Verilated::overWidthError("rst_n");
    }
    if (VL_UNLIKELY(((vlSelfRef.in_valid & 0xfeU)))) {
        Verilated::overWidthError("in_valid");
    }
    if (VL_UNLIKELY(((vlSelfRef.load_slot & 0xfeU)))) {
        Verilated::overWidthError("load_slot");
    }
    if (VL_UNLIKELY(((vlSelfRef.compute_slot & 0xfeU)))) {
        Verilated::overWidthError("compute_slot");
    }
    if (VL_UNLIKELY(((vlSelfRef.en & 0xfeU)))) {
        Verilated::overWidthError("en");
    }
    if (VL_UNLIKELY(((vlSelfRef.a & 0xf0U)))) {
        Verilated::overWidthError("a");
    }
    if (VL_UNLIKELY(((vlSelfRef.b & 0xf0U)))) {
        Verilated::overWidthError("b");
    }
    if (VL_UNLIKELY(((vlSelfRef.above_result & 0xfc00U)))) {
        Verilated::overWidthError("above_result");
    }
}
#endif  // VL_DEBUG
