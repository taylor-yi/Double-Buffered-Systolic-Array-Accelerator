// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSA_tb.h for the primary calling header

#include "VSA_tb__pch.h"

void VSA_tb___024root___timing_ready(VSA_tb___024root* vlSelf);

VL_ATTR_COLD void VSA_tb___024root___eval_static(VSA_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSA_tb___024root___eval_static\n"); );
    VSA_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_static__TOP
        vlSelfRef.SA_tb__DOT__errors = 0U;
        vlSelfRef.SA_tb__DOT__checks = 0U;
        vlSelfRef.SA_tb__DOT__test_num = 0U;
    }
    vlSelfRef.__Vtrigprevexpr___TOP__SA_tb__DOT__clk__0 
        = vlSelfRef.SA_tb__DOT__clk;
    VSA_tb___024root___timing_ready(vlSelf);
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((IData)(1U) + vlSelfRef.__Vi);
    } while ((0U >= vlSelfRef.__Vi));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VSA_tb___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VSA_tb___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);
VL_ATTR_COLD void VSA_tb___024root___stl_sequent__TOP__0(VSA_tb___024root* vlSelf);

VL_ATTR_COLD bool VSA_tb___024root___eval_stl(VSA_tb___024root* vlSelf, CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSA_tb___024root___eval_stl\n"); );
    VSA_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (IData)((IData)(firstIteration)));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VSA_tb___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = VSA_tb___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        {
            // Inlined CFunc: _eval_body__stl
            if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
                VSA_tb___024root___stl_sequent__TOP__0(vlSelf);
                {
                    // Inlined CFunc: __Vm_traceActivitySetAll
                    vlSelfRef.__Vm_traceActivity[0U] = 1U;
                    vlSelfRef.__Vm_traceActivity[1U] = 1U;
                    vlSelfRef.__Vm_traceActivity[2U] = 1U;
                    vlSelfRef.__Vm_traceActivity[3U] = 1U;
                    vlSelfRef.__Vm_traceActivity[4U] = 1U;
                    vlSelfRef.__Vm_traceActivity[5U] = 1U;
                }
            }
        }
    }
    return (__VstlExecute);
}

VL_ATTR_COLD void VSA_tb___024root___eval_dump_triggers__stl(VSA_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSA_tb___024root___eval_dump_triggers__stl\n"); );
    VSA_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    VSA_tb___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VSA_tb___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

VL_ATTR_COLD void VSA_tb___024root___eval_dump_triggers__ico(VSA_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSA_tb___024root___eval_dump_triggers__ico\n"); );
    VSA_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    VSA_tb___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VSA_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

VL_ATTR_COLD void VSA_tb___024root___eval_dump_triggers__act(VSA_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSA_tb___024root___eval_dump_triggers__act\n"); );
    VSA_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    VSA_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
}

VL_ATTR_COLD void VSA_tb___024root___eval_dump_triggers__nba(VSA_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSA_tb___024root___eval_dump_triggers__nba\n"); );
    VSA_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    VSA_tb___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
}

VL_ATTR_COLD void VSA_tb___024root___eval_dump_triggers__obs(VSA_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSA_tb___024root___eval_dump_triggers__obs\n"); );
    VSA_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void VSA_tb___024root___eval_dump_triggers__react(VSA_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSA_tb___024root___eval_dump_triggers__react\n"); );
    VSA_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void VSA_tb___024root___eval_final(VSA_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSA_tb___024root___eval_final\n"); );
    VSA_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VSA_tb___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSA_tb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(VSA_tb___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool VSA_tb___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSA_tb___024root___trigger_anySet__stl\n"); );
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

VL_ATTR_COLD void VSA_tb___024root___stl_sequent__TOP__0(VSA_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSA_tb___024root___stl_sequent__TOP__0\n"); );
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
    vlSelfRef.SA_tb__DOT__pe_b1[0U][0U] = vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__b1;
    vlSelfRef.SA_tb__DOT__pe_b2[0U][0U] = vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__b2;
    vlSelfRef.SA_tb__DOT__pe_b1[0U][1U] = vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__b1;
    vlSelfRef.SA_tb__DOT__pe_b2[0U][1U] = vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__b2;
    vlSelfRef.SA_tb__DOT__pe_b1[0U][2U] = vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__b1;
    vlSelfRef.SA_tb__DOT__pe_b2[0U][2U] = vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__b2;
    vlSelfRef.SA_tb__DOT__pe_b1[1U][0U] = vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__b1;
    vlSelfRef.SA_tb__DOT__pe_b2[1U][0U] = vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__b2;
    vlSelfRef.SA_tb__DOT__pe_b1[1U][1U] = vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__b1;
    vlSelfRef.SA_tb__DOT__pe_b2[1U][1U] = vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__b2;
    vlSelfRef.SA_tb__DOT__pe_b1[1U][2U] = vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__b1;
    vlSelfRef.SA_tb__DOT__pe_b2[1U][2U] = vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__b2;
    vlSelfRef.SA_tb__DOT__pe_b1[2U][0U] = vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__b1;
    vlSelfRef.SA_tb__DOT__pe_b2[2U][0U] = vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__b2;
    vlSelfRef.SA_tb__DOT__pe_b1[2U][1U] = vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__b1;
    vlSelfRef.SA_tb__DOT__pe_b2[2U][1U] = vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__b2;
    vlSelfRef.SA_tb__DOT__pe_b1[2U][2U] = vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__b1;
    vlSelfRef.SA_tb__DOT__pe_b2[2U][2U] = vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__b2;
    vlSelfRef.SA_tb__DOT____Vcellinp__dut__slot_in[0U] 
        = vlSelfRef.SA_tb__DOT__slot_in[0U];
    vlSelfRef.SA_tb__DOT____Vcellinp__dut__slot_in[1U] 
        = vlSelfRef.SA_tb__DOT__slot_in[1U];
    vlSelfRef.SA_tb__DOT____Vcellinp__dut__slot_in[2U] 
        = vlSelfRef.SA_tb__DOT__slot_in[2U];
    vlSelfRef.SA_tb__DOT__dut__DOT__p_wire[0U][0U] 
        = vlSelfRef.SA_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__PE__result;
    vlSelfRef.SA_tb__DOT__dut__DOT__p_wire[0U][1U] 
        = vlSelfRef.SA_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__PE__result;
    vlSelfRef.SA_tb__DOT__dut__DOT__p_wire[0U][2U] 
        = vlSelfRef.SA_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__PE__result;
    vlSelfRef.SA_tb__DOT__dut__DOT__p_wire[1U][0U] 
        = vlSelfRef.SA_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__PE__result;
    vlSelfRef.SA_tb__DOT__dut__DOT__p_wire[1U][1U] 
        = vlSelfRef.SA_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__PE__result;
    vlSelfRef.SA_tb__DOT__dut__DOT__p_wire[1U][2U] 
        = vlSelfRef.SA_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__PE__result;
    vlSelfRef.SA_tb__DOT__dut__DOT__p_wire[2U][0U] 
        = vlSelfRef.SA_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__PE__result;
    vlSelfRef.SA_tb__DOT__dut__DOT__p_wire[2U][1U] 
        = vlSelfRef.SA_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__PE__result;
    vlSelfRef.SA_tb__DOT__dut__DOT__p_wire[2U][2U] 
        = vlSelfRef.SA_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__PE__result;
    vlSelfRef.SA_tb__DOT____Vcellinp__dut__a_in[0U] 
        = vlSelfRef.SA_tb__DOT__a_in[0U];
    vlSelfRef.SA_tb__DOT____Vcellinp__dut__a_in[1U] 
        = vlSelfRef.SA_tb__DOT__a_in[1U];
    vlSelfRef.SA_tb__DOT____Vcellinp__dut__a_in[2U] 
        = vlSelfRef.SA_tb__DOT__a_in[2U];
    vlSelfRef.SA_tb__DOT__dut__DOT__slot_wire[0U][0U] 
        = vlSelfRef.SA_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__PE__slot_out;
    vlSelfRef.SA_tb__DOT__dut__DOT__slot_wire[0U][1U] 
        = vlSelfRef.SA_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__PE__slot_out;
    vlSelfRef.SA_tb__DOT__dut__DOT__slot_wire[0U][2U] 
        = vlSelfRef.SA_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__PE__slot_out;
    vlSelfRef.SA_tb__DOT__dut__DOT__slot_wire[1U][0U] 
        = vlSelfRef.SA_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__PE__slot_out;
    vlSelfRef.SA_tb__DOT__dut__DOT__slot_wire[1U][1U] 
        = vlSelfRef.SA_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__PE__slot_out;
    vlSelfRef.SA_tb__DOT__dut__DOT__slot_wire[1U][2U] 
        = vlSelfRef.SA_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__PE__slot_out;
    vlSelfRef.SA_tb__DOT__dut__DOT__slot_wire[2U][0U] 
        = vlSelfRef.SA_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__PE__slot_out;
    vlSelfRef.SA_tb__DOT__dut__DOT__slot_wire[2U][1U] 
        = vlSelfRef.SA_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__PE__slot_out;
    vlSelfRef.SA_tb__DOT__dut__DOT__slot_wire[2U][2U] 
        = vlSelfRef.SA_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__PE__slot_out;
    vlSelfRef.SA_tb__DOT__dut__DOT__a_wire[0U][0U] 
        = vlSelfRef.SA_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__PE__a_out;
    vlSelfRef.SA_tb__DOT__dut__DOT__a_wire[0U][1U] 
        = vlSelfRef.SA_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__PE__a_out;
    vlSelfRef.SA_tb__DOT__dut__DOT__a_wire[0U][2U] 
        = vlSelfRef.SA_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__PE__a_out;
    vlSelfRef.SA_tb__DOT__dut__DOT__a_wire[1U][0U] 
        = vlSelfRef.SA_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__PE__a_out;
    vlSelfRef.SA_tb__DOT__dut__DOT__a_wire[1U][1U] 
        = vlSelfRef.SA_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__PE__a_out;
    vlSelfRef.SA_tb__DOT__dut__DOT__a_wire[1U][2U] 
        = vlSelfRef.SA_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__PE__a_out;
    vlSelfRef.SA_tb__DOT__dut__DOT__a_wire[2U][0U] 
        = vlSelfRef.SA_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__PE__a_out;
    vlSelfRef.SA_tb__DOT__dut__DOT__a_wire[2U][1U] 
        = vlSelfRef.SA_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__PE__a_out;
    vlSelfRef.SA_tb__DOT__dut__DOT__a_wire[2U][2U] 
        = vlSelfRef.SA_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__PE__a_out;
    vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__w 
        = (vlSelfRef.SA_tb__DOT____Vcellinp__dut__slot_in[2U]
            ? (IData)(vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__b2)
            : (IData)(vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__b1));
    vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__w 
        = (vlSelfRef.SA_tb__DOT____Vcellinp__dut__slot_in[1U]
            ? (IData)(vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__b2)
            : (IData)(vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__b1));
    vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__w 
        = (vlSelfRef.SA_tb__DOT____Vcellinp__dut__slot_in[0U]
            ? (IData)(vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__b2)
            : (IData)(vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__b1));
    vlSelfRef.SA_tb__DOT____Vcellout__dut__result_matrix[0U] 
        = vlSelfRef.SA_tb__DOT__dut__DOT__p_wire[2U][0U];
    vlSelfRef.SA_tb__DOT____Vcellout__dut__result_matrix[1U] 
        = vlSelfRef.SA_tb__DOT__dut__DOT__p_wire[2U][1U];
    vlSelfRef.SA_tb__DOT____Vcellout__dut__result_matrix[2U] 
        = vlSelfRef.SA_tb__DOT__dut__DOT__p_wire[2U][2U];
    vlSelfRef.SA_tb__DOT__pe_a[0U][0U] = vlSelfRef.SA_tb__DOT____Vcellinp__dut__a_in[0U];
    vlSelfRef.SA_tb__DOT__pe_a[1U][0U] = vlSelfRef.SA_tb__DOT____Vcellinp__dut__a_in[1U];
    vlSelfRef.SA_tb__DOT__pe_a[2U][0U] = vlSelfRef.SA_tb__DOT____Vcellinp__dut__a_in[2U];
    vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__w 
        = (vlSelfRef.SA_tb__DOT__dut__DOT__slot_wire[2U][1U]
            ? (IData)(vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__b2)
            : (IData)(vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__b1));
    vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__w 
        = (vlSelfRef.SA_tb__DOT__dut__DOT__slot_wire[2U][0U]
            ? (IData)(vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__b2)
            : (IData)(vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__b1));
    vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__w 
        = (vlSelfRef.SA_tb__DOT__dut__DOT__slot_wire[1U][1U]
            ? (IData)(vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__b2)
            : (IData)(vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__b1));
    vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__w 
        = (vlSelfRef.SA_tb__DOT__dut__DOT__slot_wire[1U][0U]
            ? (IData)(vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__b2)
            : (IData)(vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__b1));
    vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__w 
        = (vlSelfRef.SA_tb__DOT__dut__DOT__slot_wire[0U][1U]
            ? (IData)(vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__b2)
            : (IData)(vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__b1));
    vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__w 
        = (vlSelfRef.SA_tb__DOT__dut__DOT__slot_wire[0U][0U]
            ? (IData)(vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__b2)
            : (IData)(vlSelfRef.SA_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__b1));
    vlSelfRef.SA_tb__DOT__pe_a[0U][1U] = vlSelfRef.SA_tb__DOT__dut__DOT__a_wire[0U][0U];
    vlSelfRef.SA_tb__DOT__pe_a[0U][2U] = vlSelfRef.SA_tb__DOT__dut__DOT__a_wire[0U][1U];
    vlSelfRef.SA_tb__DOT__pe_a[1U][1U] = vlSelfRef.SA_tb__DOT__dut__DOT__a_wire[1U][0U];
    vlSelfRef.SA_tb__DOT__pe_a[1U][2U] = vlSelfRef.SA_tb__DOT__dut__DOT__a_wire[1U][1U];
    vlSelfRef.SA_tb__DOT__pe_a[2U][1U] = vlSelfRef.SA_tb__DOT__dut__DOT__a_wire[2U][0U];
    vlSelfRef.SA_tb__DOT__pe_a[2U][2U] = vlSelfRef.SA_tb__DOT__dut__DOT__a_wire[2U][1U];
    vlSelfRef.SA_tb__DOT__result_matrix[0U] = vlSelfRef.SA_tb__DOT____Vcellout__dut__result_matrix[0U];
    vlSelfRef.SA_tb__DOT__result_matrix[1U] = vlSelfRef.SA_tb__DOT____Vcellout__dut__result_matrix[1U];
    vlSelfRef.SA_tb__DOT__result_matrix[2U] = vlSelfRef.SA_tb__DOT____Vcellout__dut__result_matrix[2U];
}

bool VSA_tb___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void VSA_tb___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSA_tb___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(VSA_tb___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

bool VSA_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void VSA_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSA_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(VSA_tb___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge SA_tb.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @(negedge SA_tb.clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VSA_tb___024root___ctor_var_reset(VSA_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSA_tb___024root___ctor_var_reset\n"); );
    VSA_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->SA_tb__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3997569300437417340ull);
    vlSelf->SA_tb__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17421915413369725284ull);
    vlSelf->SA_tb__DOT__en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 993594287464268169ull);
    vlSelf->SA_tb__DOT__w_load = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1199651774044942958ull);
    vlSelf->SA_tb__DOT__load_slot = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16987950063606348361ull);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->SA_tb__DOT__slot_in[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3167102969799550723ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->SA_tb__DOT__a_in[__Vi0] = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3719910490804805420ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->SA_tb__DOT__b_in[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2671173649143004560ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->SA_tb__DOT__result_matrix[__Vi0] = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 12593246315104676402ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->SA_tb__DOT____Vcellout__dut__result_matrix[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->SA_tb__DOT____Vcellinp__dut__b_in[__Vi0][__Vi1] = 0;
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->SA_tb__DOT____Vcellinp__dut__a_in[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->SA_tb__DOT____Vcellinp__dut__slot_in[__Vi0] = 0;
    }
    vlSelf->SA_tb__DOT__test_errors = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->SA_tb__DOT__hist[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5899490509119023379ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->SA_tb__DOT__A[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9616899088422468868ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->SA_tb__DOT__W[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3853366366410878791ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->SA_tb__DOT__C_exp[__Vi0][__Vi1] = 0;
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->SA_tb__DOT__pe_a[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2640333568504805349ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->SA_tb__DOT__pe_b1[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7394986299880439647ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->SA_tb__DOT__pe_b2[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15527897916713061422ull);
        }
    }
    vlSelf->SA_tb__DOT__expected_temp = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3967798650738167132ull);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->SA_tb__DOT__A2[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16640598853857071760ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->SA_tb__DOT__W2[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1386105824099030213ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->SA_tb__DOT__C_exp2[__Vi0][__Vi1] = 0;
        }
    }
    vlSelf->SA_tb__DOT__m = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->SA_tb__DOT__dut__DOT__a_wire[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12294323925784714138ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->SA_tb__DOT__dut__DOT__p_wire[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 17470595555961965206ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->SA_tb__DOT__dut__DOT__slot_wire[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11647624817620483031ull);
        }
    }
    vlSelf->SA_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__PE__result = 0;
    vlSelf->SA_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__PE__a_out = 0;
    vlSelf->SA_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__PE__slot_out = 0;
    vlSelf->SA_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__PE__result = 0;
    vlSelf->SA_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__PE__a_out = 0;
    vlSelf->SA_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__PE__slot_out = 0;
    vlSelf->SA_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__PE__result = 0;
    vlSelf->SA_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__PE__a_out = 0;
    vlSelf->SA_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__PE__slot_out = 0;
    vlSelf->SA_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__PE__result = 0;
    vlSelf->SA_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__PE__a_out = 0;
    vlSelf->SA_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__PE__slot_out = 0;
    vlSelf->SA_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__PE__result = 0;
    vlSelf->SA_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__PE__a_out = 0;
    vlSelf->SA_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__PE__slot_out = 0;
    vlSelf->SA_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__PE__result = 0;
    vlSelf->SA_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__PE__a_out = 0;
    vlSelf->SA_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__PE__slot_out = 0;
    vlSelf->SA_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__PE__result = 0;
    vlSelf->SA_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__PE__a_out = 0;
    vlSelf->SA_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__PE__slot_out = 0;
    vlSelf->SA_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__PE__result = 0;
    vlSelf->SA_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__PE__a_out = 0;
    vlSelf->SA_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__PE__slot_out = 0;
    vlSelf->SA_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__PE__result = 0;
    vlSelf->SA_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__PE__a_out = 0;
    vlSelf->SA_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__PE__slot_out = 0;
    vlSelf->SA_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__b1 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1189768635442446182ull);
    vlSelf->SA_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__b2 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12636926162553401089ull);
    vlSelf->SA_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__w = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11136057828368389464ull);
    vlSelf->SA_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__b1 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12533479585721104222ull);
    vlSelf->SA_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__b2 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3809599841866919857ull);
    vlSelf->SA_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__w = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15191311793212283849ull);
    vlSelf->SA_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__b1 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14761701887681747783ull);
    vlSelf->SA_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__b2 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7876544836378124549ull);
    vlSelf->SA_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__w = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14511275047494941007ull);
    vlSelf->SA_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__b1 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12559007443924351498ull);
    vlSelf->SA_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__b2 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14400894400994197240ull);
    vlSelf->SA_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__w = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2988979593163319715ull);
    vlSelf->SA_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__b1 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5026252271225763626ull);
    vlSelf->SA_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__b2 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 374271246235347556ull);
    vlSelf->SA_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__w = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10942960559956835728ull);
    vlSelf->SA_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__b1 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10397070908122914171ull);
    vlSelf->SA_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__b2 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15870821642065219137ull);
    vlSelf->SA_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__w = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13155239199249552153ull);
    vlSelf->SA_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__b1 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13722842640343918818ull);
    vlSelf->SA_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__b2 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3244913777069145700ull);
    vlSelf->SA_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__w = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7748731645490900162ull);
    vlSelf->SA_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__b1 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16557218127007235894ull);
    vlSelf->SA_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__b2 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9367822949170755483ull);
    vlSelf->SA_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__w = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3161419506053476478ull);
    vlSelf->SA_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__b1 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17271450722932505661ull);
    vlSelf->SA_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__b2 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6975568810565014985ull);
    vlSelf->SA_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__w = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5045493215159357563ull);
    vlSelf->__Vsampled_TOP__SA_tb__DOT__w_load = 0;
    vlSelf->__Vsampled_TOP__SA_tb__DOT__en = 0;
    vlSelf->__Vsampled_TOP__SA_tb__DOT__load_slot = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->__Vsampled_TOP__SA_tb__DOT__dut__DOT__slot_wire[__Vi0][__Vi1] = 0;
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vsampled_TOP__SA_tb__DOT____Vcellinp__dut__slot_in[__Vi0] = 0;
    }
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
    vlSelf->__Vtrigprevexpr___TOP__SA_tb__DOT__clk__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    vlSelf->__Vi = 0;
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
