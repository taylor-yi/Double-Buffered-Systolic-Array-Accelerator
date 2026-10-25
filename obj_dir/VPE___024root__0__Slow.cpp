// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPE.h for the primary calling header

#include "VPE__pch.h"

VL_ATTR_COLD void VPE___024root___eval_static(VPE___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPE___024root___eval_static\n"); );
    VPE__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__rst_n__0 = vlSelfRef.rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__w_load__0 = vlSelfRef.w_load;
    vlSelfRef.__Vtrigprevexpr___TOP__load_slot__0 = vlSelfRef.load_slot;
    vlSelfRef.__Vtrigprevexpr___TOP__compute_slot__0 
        = vlSelfRef.compute_slot;
    vlSelfRef.__Vtrigprevexpr___TOP__en__0 = vlSelfRef.en;
    vlSelfRef.__Vtrigprevexpr___TOP__a__0 = vlSelfRef.a;
    vlSelfRef.__Vtrigprevexpr___TOP__b__0 = vlSelfRef.b;
    vlSelfRef.__Vtrigprevexpr___TOP__above_result__0 
        = vlSelfRef.above_result;
    vlSelfRef.__Vtrigprevexpr___TOP__clk__1 = vlSelfRef.clk;
}

VL_ATTR_COLD void VPE___024root___eval_initial(VPE___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPE___024root___eval_initial\n"); );
    VPE__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VPE___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VPE___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

VL_ATTR_COLD bool VPE___024root___eval_stl(VPE___024root* vlSelf, CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPE___024root___eval_stl\n"); );
    VPE__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (IData)((IData)(firstIteration)));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VPE___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = VPE___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        {
            // Inlined CFunc: _eval_body__stl
            if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
                {
                    // Inlined CFunc: _stl_sequent__TOP__0
                    vlSelfRef.b_out = ((IData)(vlSelfRef.load_slot)
                                        ? (IData)(vlSelfRef.PE__DOT__b2)
                                        : (IData)(vlSelfRef.PE__DOT__b1));
                    vlSelfRef.PE__DOT__w = ((IData)(vlSelfRef.compute_slot)
                                             ? (IData)(vlSelfRef.PE__DOT__b2)
                                             : (IData)(vlSelfRef.PE__DOT__b1));
                }
            }
        }
    }
    return (__VstlExecute);
}

VL_ATTR_COLD void VPE___024root___eval_dump_triggers__stl(VPE___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPE___024root___eval_dump_triggers__stl\n"); );
    VPE__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    VPE___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VPE___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag);
#endif  // VL_DEBUG

VL_ATTR_COLD void VPE___024root___eval_dump_triggers__ico(VPE___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPE___024root___eval_dump_triggers__ico\n"); );
    VPE__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    VPE___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VPE___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

VL_ATTR_COLD void VPE___024root___eval_dump_triggers__act(VPE___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPE___024root___eval_dump_triggers__act\n"); );
    VPE__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    VPE___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
}

VL_ATTR_COLD void VPE___024root___eval_dump_triggers__nba(VPE___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPE___024root___eval_dump_triggers__nba\n"); );
    VPE__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    VPE___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
}

VL_ATTR_COLD void VPE___024root___eval_dump_triggers__obs(VPE___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPE___024root___eval_dump_triggers__obs\n"); );
    VPE__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void VPE___024root___eval_dump_triggers__react(VPE___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPE___024root___eval_dump_triggers__react\n"); );
    VPE__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void VPE___024root___eval_final(VPE___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPE___024root___eval_final\n"); );
    VPE__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VPE___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPE___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(VPE___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool VPE___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPE___024root___trigger_anySet__stl\n"); );
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

bool VPE___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 2> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void VPE___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPE___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(VPE___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @( clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @( rst_n)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @( w_load)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @( load_slot)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 4U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 4 is active: @( compute_slot)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 5U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 5 is active: @( en)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 6U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 6 is active: @( a)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 7U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 7 is active: @( b)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 8U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 8 is active: @( above_result)\n");
    }
    if ((1U & (IData)(triggers[1U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 64 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

bool VPE___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void VPE___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPE___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(VPE___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VPE___024root___ctor_var_reset(VPE___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPE___024root___ctor_var_reset\n"); );
    VPE__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1638864771569018232ull);
    vlSelf->w_load = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2339549897027650563ull);
    vlSelf->load_slot = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16155472259003433849ull);
    vlSelf->compute_slot = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18320552714153338017ull);
    vlSelf->en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7710216835639188562ull);
    vlSelf->a = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 510903276987443985ull);
    vlSelf->b = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16900879642891266615ull);
    vlSelf->above_result = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 15566245257595413799ull);
    vlSelf->a_out = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3703527555082827583ull);
    vlSelf->b_out = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3498339381559185570ull);
    vlSelf->result = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 16664408842984530663ull);
    vlSelf->PE__DOT__b1 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11681864142246038082ull);
    vlSelf->PE__DOT__b2 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4423196875510867675ull);
    vlSelf->PE__DOT__w = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6224390298995171609ull);
    vlSelf->PE__DOT__mult_result = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 11595297484112848227ull);
    vlSelf->__Vsampled_TOP__w_load = 0;
    vlSelf->__Vsampled_TOP__en = 0;
    vlSelf->__Vsampled_TOP__load_slot = 0;
    vlSelf->__Vsampled_TOP__compute_slot = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__VicoTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__rst_n__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__w_load__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__load_slot__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__compute_slot__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__en__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__a__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__b__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__above_result__0 = 0;
    vlSelf->__VicoDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__clk__1 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
}
