// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VProcessing_Element.h for the primary calling header

#include "VProcessing_Element__pch.h"

VL_ATTR_COLD void VProcessing_Element___024root___eval_static(VProcessing_Element___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VProcessing_Element___024root___eval_static\n"); );
    VProcessing_Element__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__PE_tb__DOT__clk__0 
        = vlSelfRef.PE_tb__DOT__clk;
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((IData)(1U) + vlSelfRef.__Vi);
    } while ((0U >= vlSelfRef.__Vi));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VProcessing_Element___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

VL_ATTR_COLD bool VProcessing_Element___024root___eval_stl(VProcessing_Element___024root* vlSelf, CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VProcessing_Element___024root___eval_stl\n"); );
    VProcessing_Element__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (IData)((IData)(firstIteration)));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VProcessing_Element___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    return (0U);
}

VL_ATTR_COLD void VProcessing_Element___024root___eval_dump_triggers__stl(VProcessing_Element___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VProcessing_Element___024root___eval_dump_triggers__stl\n"); );
    VProcessing_Element__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    VProcessing_Element___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VProcessing_Element___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

VL_ATTR_COLD void VProcessing_Element___024root___eval_dump_triggers__ico(VProcessing_Element___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VProcessing_Element___024root___eval_dump_triggers__ico\n"); );
    VProcessing_Element__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    VProcessing_Element___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VProcessing_Element___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

VL_ATTR_COLD void VProcessing_Element___024root___eval_dump_triggers__act(VProcessing_Element___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VProcessing_Element___024root___eval_dump_triggers__act\n"); );
    VProcessing_Element__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    VProcessing_Element___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
}

VL_ATTR_COLD void VProcessing_Element___024root___eval_dump_triggers__nba(VProcessing_Element___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VProcessing_Element___024root___eval_dump_triggers__nba\n"); );
    VProcessing_Element__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    VProcessing_Element___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
}

VL_ATTR_COLD void VProcessing_Element___024root___eval_dump_triggers__obs(VProcessing_Element___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VProcessing_Element___024root___eval_dump_triggers__obs\n"); );
    VProcessing_Element__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void VProcessing_Element___024root___eval_dump_triggers__react(VProcessing_Element___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VProcessing_Element___024root___eval_dump_triggers__react\n"); );
    VProcessing_Element__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void VProcessing_Element___024root___eval_final(VProcessing_Element___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VProcessing_Element___024root___eval_final\n"); );
    VProcessing_Element__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD bool VProcessing_Element___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void VProcessing_Element___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VProcessing_Element___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(VProcessing_Element___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool VProcessing_Element___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VProcessing_Element___024root___trigger_anySet__stl\n"); );
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

bool VProcessing_Element___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void VProcessing_Element___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VProcessing_Element___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(VProcessing_Element___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

bool VProcessing_Element___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void VProcessing_Element___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VProcessing_Element___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(VProcessing_Element___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge PE_tb.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VProcessing_Element___024root___ctor_var_reset(VProcessing_Element___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VProcessing_Element___024root___ctor_var_reset\n"); );
    VProcessing_Element__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->PE_tb__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11143928408294970508ull);
    vlSelf->PE_tb__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8005540888764420902ull);
    vlSelf->PE_tb__DOT__w_load = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4061654438632992877ull);
    vlSelf->PE_tb__DOT__slot = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4460839808925681812ull);
    vlSelf->PE_tb__DOT__en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6182424404087487695ull);
    vlSelf->PE_tb__DOT__drain_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16204537058027000232ull);
    vlSelf->PE_tb__DOT__a = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 590285468412714985ull);
    vlSelf->PE_tb__DOT__b = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17535757425702766766ull);
    vlSelf->PE_tb__DOT__above_result = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 18334131568242605850ull);
    vlSelf->PE_tb__DOT__result = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 2789053527543106787ull);
    vlSelf->PE_tb__DOT__dut__DOT__b1 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2234444741082669735ull);
    vlSelf->PE_tb__DOT__dut__DOT__b2 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8500445703966705449ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VicoTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggeredAcc[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__PE_tb__DOT__clk__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    vlSelf->__Vi = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
