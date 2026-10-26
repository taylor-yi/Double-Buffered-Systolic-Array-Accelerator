// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsystolic_tb.h for the primary calling header

#include "Vsystolic_tb__pch.h"

void Vsystolic_tb___024root___timing_ready(Vsystolic_tb___024root* vlSelf);

VL_ATTR_COLD void Vsystolic_tb___024root___eval_static(Vsystolic_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_tb___024root___eval_static\n"); );
    Vsystolic_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_static__TOP
        vlSelfRef.systolic_tb__DOT__errors = 0U;
        vlSelfRef.systolic_tb__DOT__checks = 0U;
        vlSelfRef.systolic_tb__DOT__unnamedblk3__DOT__path = ""s;
        vlSelfRef.systolic_tb__DOT__unnamedblk3__DOT__fd = 0U;
        vlSelfRef.systolic_tb__DOT__unnamedblk3__DOT__num_tests = 0U;
        vlSelfRef.systolic_tb__DOT__unnamedblk3__DOT__n = 0U;
    }
    vlSelfRef.__Vtrigprevexpr___TOP__systolic_tb__DOT__clk__0 
        = vlSelfRef.systolic_tb__DOT__clk;
    Vsystolic_tb___024root___timing_ready(vlSelf);
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((IData)(1U) + vlSelfRef.__Vi);
    } while ((0U >= vlSelfRef.__Vi));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsystolic_tb___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vsystolic_tb___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);
VL_ATTR_COLD void Vsystolic_tb___024root___stl_sequent__TOP__0(Vsystolic_tb___024root* vlSelf);

VL_ATTR_COLD bool Vsystolic_tb___024root___eval_stl(Vsystolic_tb___024root* vlSelf, CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_tb___024root___eval_stl\n"); );
    Vsystolic_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (IData)((IData)(firstIteration)));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vsystolic_tb___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vsystolic_tb___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        {
            // Inlined CFunc: _eval_body__stl
            if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
                Vsystolic_tb___024root___stl_sequent__TOP__0(vlSelf);
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

VL_ATTR_COLD void Vsystolic_tb___024root___eval_dump_triggers__stl(Vsystolic_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_tb___024root___eval_dump_triggers__stl\n"); );
    Vsystolic_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vsystolic_tb___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsystolic_tb___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vsystolic_tb___024root___eval_dump_triggers__ico(Vsystolic_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_tb___024root___eval_dump_triggers__ico\n"); );
    Vsystolic_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vsystolic_tb___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsystolic_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vsystolic_tb___024root___eval_dump_triggers__act(Vsystolic_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_tb___024root___eval_dump_triggers__act\n"); );
    Vsystolic_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vsystolic_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
}

VL_ATTR_COLD void Vsystolic_tb___024root___eval_dump_triggers__nba(Vsystolic_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_tb___024root___eval_dump_triggers__nba\n"); );
    Vsystolic_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vsystolic_tb___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
}

VL_ATTR_COLD void Vsystolic_tb___024root___eval_dump_triggers__obs(Vsystolic_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_tb___024root___eval_dump_triggers__obs\n"); );
    Vsystolic_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vsystolic_tb___024root___eval_dump_triggers__react(Vsystolic_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_tb___024root___eval_dump_triggers__react\n"); );
    Vsystolic_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vsystolic_tb___024root___eval_final(Vsystolic_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_tb___024root___eval_final\n"); );
    Vsystolic_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsystolic_tb___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_tb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vsystolic_tb___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vsystolic_tb___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_tb___024root___trigger_anySet__stl\n"); );
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

extern const VlUnpacked<CData/*0:0*/, 128> Vsystolic_tb__ConstPool__TABLE_h82a00311_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vsystolic_tb__ConstPool__TABLE_h757529b2_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vsystolic_tb__ConstPool__TABLE_hbabea407_0;
extern const VlUnpacked<CData/*1:0*/, 128> Vsystolic_tb__ConstPool__TABLE_h35b5d552_0;

VL_ATTR_COLD void Vsystolic_tb___024root___stl_sequent__TOP__0(Vsystolic_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_tb___024root___stl_sequent__TOP__0\n"); );
    Vsystolic_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.systolic_tb__DOT__dut__DOT__slot_data[1U] 
        = vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__genblk2__BRA__1__KET____DOT__genblk1__DOT__slot_dly[0U];
    if (vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__genblk2__BRA__2__KET____DOT__genblk1__DOT__slot_dly[1U]) {
        vlSelfRef.systolic_tb__DOT__dut__DOT__slot_data[2U] = 1U;
        vlSelfRef.systolic_tb__DOT__dut__DOT__a_skewed[1U] 
            = vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__genblk2__BRA__1__KET____DOT__genblk1__DOT__a_dly[0U];
        vlSelfRef.systolic_tb__DOT__dut__DOT__a_skewed[2U] 
            = vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__genblk2__BRA__2__KET____DOT__genblk1__DOT__a_dly[1U];
        vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__w 
            = vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__b2;
    } else {
        vlSelfRef.systolic_tb__DOT__dut__DOT__slot_data[2U] = 0U;
        vlSelfRef.systolic_tb__DOT__dut__DOT__a_skewed[1U] 
            = vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__genblk2__BRA__1__KET____DOT__genblk1__DOT__a_dly[0U];
        vlSelfRef.systolic_tb__DOT__dut__DOT__a_skewed[2U] 
            = vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__genblk2__BRA__2__KET____DOT__genblk1__DOT__a_dly[1U];
        vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__w 
            = vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__b1;
    }
    vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__w 
        = (vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__genblk2__BRA__1__KET____DOT__genblk1__DOT__slot_dly[0U]
            ? (IData)(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__b2)
            : (IData)(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__b1));
    vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__deskewed[0U] 
        = vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__unskew__BRA__0__KET____DOT__genblk1__DOT__dly[1U];
    vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__deskewed[1U] 
        = vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__unskew__BRA__1__KET____DOT__genblk1__DOT__dly[0U];
    vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__a_wire[0U][0U] 
        = vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__PE__a_out;
    vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__a_wire[0U][1U] 
        = vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__PE__a_out;
    vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__a_wire[0U][2U] 
        = vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__PE__a_out;
    vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__a_wire[1U][0U] 
        = vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__PE__a_out;
    vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__a_wire[1U][1U] 
        = vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__PE__a_out;
    vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__a_wire[1U][2U] 
        = vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__PE__a_out;
    vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__a_wire[2U][0U] 
        = vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__PE__a_out;
    vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__a_wire[2U][1U] 
        = vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__PE__a_out;
    vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__a_wire[2U][2U] 
        = vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__PE__a_out;
    vlSelfRef.systolic_tb__DOT__dut__DOT__results_packed[0U] 
        = ((0xfff00000U & vlSelfRef.systolic_tb__DOT__dut__DOT__results_packed[0U]) 
           | (((IData)(vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__results_internal[2U][1U]) 
               << 0x0000000aU) | vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__results_internal[2U][0U]));
    vlSelfRef.systolic_tb__DOT__dut__DOT__results_packed[0U] 
        = ((0x000fffffU & vlSelfRef.systolic_tb__DOT__dut__DOT__results_packed[0U]) 
           | ((((IData)(vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__results_internal[1U][0U]) 
                << 0x0000000aU) | vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__results_internal[2U][2U]) 
              << 0x00000014U));
    vlSelfRef.systolic_tb__DOT__dut__DOT__results_packed[1U] 
        = ((0xffffff00U & vlSelfRef.systolic_tb__DOT__dut__DOT__results_packed[1U]) 
           | ((((IData)(vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__results_internal[1U][0U]) 
                << 0x0000000aU) | vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__results_internal[2U][2U]) 
              >> 0x0000000cU));
    vlSelfRef.systolic_tb__DOT__dut__DOT__results_packed[1U] 
        = ((0xf00000ffU & vlSelfRef.systolic_tb__DOT__dut__DOT__results_packed[1U]) 
           | ((((IData)(vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__results_internal[1U][2U]) 
                << 0x0000000aU) | vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__results_internal[1U][1U]) 
              << 8U));
    vlSelfRef.systolic_tb__DOT__dut__DOT__results_packed[1U] 
        = ((0x0fffffffU & vlSelfRef.systolic_tb__DOT__dut__DOT__results_packed[1U]) 
           | ((((IData)(vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__results_internal[0U][1U]) 
                << 0x0000000aU) | vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__results_internal[0U][0U]) 
              << 0x0000001cU));
    vlSelfRef.systolic_tb__DOT__dut__DOT__results_packed[2U] 
        = ((0x03ff0000U & vlSelfRef.systolic_tb__DOT__dut__DOT__results_packed[2U]) 
           | (0x03ffffffU & ((((IData)(vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__results_internal[0U][1U]) 
                               << 0x0000000aU) | vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__results_internal[0U][0U]) 
                             >> 4U)));
    vlSelfRef.systolic_tb__DOT__dut__DOT__results_packed[2U] 
        = ((0x0000ffffU & vlSelfRef.systolic_tb__DOT__dut__DOT__results_packed[2U]) 
           | (0x03ffffffU & ((IData)(vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__results_internal[0U][2U]) 
                             << 0x00000010U)));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_0 = (((IData)(vlSelfRef.systolic_tb__DOT__dut__DOT__entry_valid) 
                                                 << 5U) 
                                                | (((IData)(vlSelfRef.systolic_tb__DOT__dut__DOT__controlla__DOT__cycle_count) 
                                                    << 3U) 
                                                   | (IData)(vlSelfRef.systolic_tb__DOT__dut__DOT__controlla__DOT__state)));
    vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__p_wire[0U][0U] 
        = vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__PE__result;
    vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__slot_wire[0U][0U] 
        = vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__PE__slot_out;
    vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__p_wire[0U][1U] 
        = vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__PE__result;
    vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__slot_wire[0U][1U] 
        = vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__PE__slot_out;
    vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__p_wire[0U][2U] 
        = vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__PE__result;
    vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__slot_wire[0U][2U] 
        = vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__PE__slot_out;
    vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__p_wire[1U][0U] 
        = vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__PE__result;
    vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__slot_wire[1U][0U] 
        = vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__PE__slot_out;
    vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__p_wire[1U][1U] 
        = vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__PE__result;
    vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__slot_wire[1U][1U] 
        = vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__PE__slot_out;
    vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__p_wire[1U][2U] 
        = vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__PE__result;
    vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__slot_wire[1U][2U] 
        = vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__PE__slot_out;
    vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__p_wire[2U][0U] 
        = vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__PE__result;
    vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__slot_wire[2U][0U] 
        = vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__PE__slot_out;
    vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__p_wire[2U][1U] 
        = vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__PE__result;
    vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__slot_wire[2U][1U] 
        = vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__PE__slot_out;
    vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__p_wire[2U][2U] 
        = vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__PE__result;
    vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__slot_wire[2U][2U] 
        = vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__PE__slot_out;
    vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__a_packed 
        = (((QData)((IData)(vlSelfRef.systolic_tb__DOT__a33)) 
            << 0x00000020U) | (QData)((IData)(((((((IData)(vlSelfRef.systolic_tb__DOT__a32) 
                                                   << 0x0000000cU) 
                                                  | ((IData)(vlSelfRef.systolic_tb__DOT__a31) 
                                                     << 8U)) 
                                                 | (((IData)(vlSelfRef.systolic_tb__DOT__a23) 
                                                     << 4U) 
                                                    | (IData)(vlSelfRef.systolic_tb__DOT__a22))) 
                                                << 0x00000010U) 
                                               | ((((IData)(vlSelfRef.systolic_tb__DOT__a21) 
                                                    << 0x0000000cU) 
                                                   | ((IData)(vlSelfRef.systolic_tb__DOT__a13) 
                                                      << 8U)) 
                                                  | (((IData)(vlSelfRef.systolic_tb__DOT__a12) 
                                                      << 4U) 
                                                     | (IData)(vlSelfRef.systolic_tb__DOT__a11)))))));
    vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__b_packed 
        = (((QData)((IData)(vlSelfRef.systolic_tb__DOT__b33)) 
            << 0x00000020U) | (QData)((IData)(((((((IData)(vlSelfRef.systolic_tb__DOT__b32) 
                                                   << 0x0000000cU) 
                                                  | ((IData)(vlSelfRef.systolic_tb__DOT__b31) 
                                                     << 8U)) 
                                                 | (((IData)(vlSelfRef.systolic_tb__DOT__b23) 
                                                     << 4U) 
                                                    | (IData)(vlSelfRef.systolic_tb__DOT__b22))) 
                                                << 0x00000010U) 
                                               | ((((IData)(vlSelfRef.systolic_tb__DOT__b21) 
                                                    << 0x0000000cU) 
                                                   | ((IData)(vlSelfRef.systolic_tb__DOT__b13) 
                                                      << 8U)) 
                                                  | (((IData)(vlSelfRef.systolic_tb__DOT__b12) 
                                                      << 4U) 
                                                     | (IData)(vlSelfRef.systolic_tb__DOT__b11)))))));
    vlSelfRef.systolic_tb__DOT__C_got[0U][0U] = (0x000003ffU 
                                                 & vlSelfRef.systolic_tb__DOT__dut__DOT__results_packed[0U]);
    vlSelfRef.systolic_tb__DOT__C_got[0U][1U] = (0x000003ffU 
                                                 & (vlSelfRef.systolic_tb__DOT__dut__DOT__results_packed[0U] 
                                                    >> 0x0000000aU));
    vlSelfRef.systolic_tb__DOT__C_got[0U][2U] = (0x000003ffU 
                                                 & (vlSelfRef.systolic_tb__DOT__dut__DOT__results_packed[0U] 
                                                    >> 0x00000014U));
    vlSelfRef.systolic_tb__DOT__C_got[1U][0U] = (0x000003ffU 
                                                 & ((vlSelfRef.systolic_tb__DOT__dut__DOT__results_packed[1U] 
                                                     << 2U) 
                                                    | (vlSelfRef.systolic_tb__DOT__dut__DOT__results_packed[0U] 
                                                       >> 0x0000001eU)));
    vlSelfRef.systolic_tb__DOT__C_got[1U][1U] = (0x000003ffU 
                                                 & (vlSelfRef.systolic_tb__DOT__dut__DOT__results_packed[1U] 
                                                    >> 8U));
    vlSelfRef.systolic_tb__DOT__C_got[1U][2U] = (0x000003ffU 
                                                 & (vlSelfRef.systolic_tb__DOT__dut__DOT__results_packed[1U] 
                                                    >> 0x00000012U));
    vlSelfRef.systolic_tb__DOT__C_got[2U][0U] = (0x000003ffU 
                                                 & ((vlSelfRef.systolic_tb__DOT__dut__DOT__results_packed[2U] 
                                                     << 4U) 
                                                    | (vlSelfRef.systolic_tb__DOT__dut__DOT__results_packed[1U] 
                                                       >> 0x0000001cU)));
    vlSelfRef.systolic_tb__DOT__C_got[2U][1U] = (0x000003ffU 
                                                 & (vlSelfRef.systolic_tb__DOT__dut__DOT__results_packed[2U] 
                                                    >> 6U));
    vlSelfRef.systolic_tb__DOT__C_got[2U][2U] = (0x000003ffU 
                                                 & (vlSelfRef.systolic_tb__DOT__dut__DOT__results_packed[2U] 
                                                    >> 0x00000010U));
    vlSelfRef.systolic_tb__DOT__dut__DOT__b_wires[0U][0U] 
        = vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__B_buf
        [Vsystolic_tb__ConstPool__TABLE_h82a00311_0
        [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]][0U][0U];
    vlSelfRef.systolic_tb__DOT__dut__DOT__b_wires[0U][1U] 
        = vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__B_buf
        [Vsystolic_tb__ConstPool__TABLE_h82a00311_0
        [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]][0U][1U];
    vlSelfRef.systolic_tb__DOT__dut__DOT__b_wires[0U][2U] 
        = vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__B_buf
        [Vsystolic_tb__ConstPool__TABLE_h82a00311_0
        [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]][0U][2U];
    vlSelfRef.systolic_tb__DOT__dut__DOT__b_wires[1U][0U] 
        = vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__B_buf
        [Vsystolic_tb__ConstPool__TABLE_h82a00311_0
        [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]][1U][0U];
    vlSelfRef.systolic_tb__DOT__dut__DOT__b_wires[1U][1U] 
        = vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__B_buf
        [Vsystolic_tb__ConstPool__TABLE_h82a00311_0
        [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]][1U][1U];
    vlSelfRef.systolic_tb__DOT__dut__DOT__b_wires[1U][2U] 
        = vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__B_buf
        [Vsystolic_tb__ConstPool__TABLE_h82a00311_0
        [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]][1U][2U];
    vlSelfRef.systolic_tb__DOT__dut__DOT__b_wires[2U][0U] 
        = vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__B_buf
        [Vsystolic_tb__ConstPool__TABLE_h82a00311_0
        [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]][2U][0U];
    vlSelfRef.systolic_tb__DOT__dut__DOT__b_wires[2U][1U] 
        = vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__B_buf
        [Vsystolic_tb__ConstPool__TABLE_h82a00311_0
        [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]][2U][1U];
    vlSelfRef.systolic_tb__DOT__dut__DOT__b_wires[2U][2U] 
        = vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__B_buf
        [Vsystolic_tb__ConstPool__TABLE_h82a00311_0
        [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]][2U][2U];
    if (Vsystolic_tb__ConstPool__TABLE_h757529b2_0[vlSelfRef.__VdfgRegularize_hebeb780c_0_0]) {
        vlSelfRef.systolic_tb__DOT__dut__DOT__slot_data[0U] = 1U;
        vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__w 
            = vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__b2;
    } else {
        vlSelfRef.systolic_tb__DOT__dut__DOT__slot_data[0U] = 0U;
        vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__w 
            = vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__b1;
    }
    if (Vsystolic_tb__ConstPool__TABLE_hbabea407_0[vlSelfRef.__VdfgRegularize_hebeb780c_0_0]) {
        vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__a_row[0U] 
            = vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__A_buf
            [Vsystolic_tb__ConstPool__TABLE_h757529b2_0
            [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]]
            [((2U >= Vsystolic_tb__ConstPool__TABLE_h35b5d552_0
               [vlSelfRef.__VdfgRegularize_hebeb780c_0_0])
               ? Vsystolic_tb__ConstPool__TABLE_h35b5d552_0
              [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]
               : 0U)][0U];
        vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__a_row[1U] 
            = vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__A_buf
            [Vsystolic_tb__ConstPool__TABLE_h757529b2_0
            [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]]
            [((2U >= Vsystolic_tb__ConstPool__TABLE_h35b5d552_0
               [vlSelfRef.__VdfgRegularize_hebeb780c_0_0])
               ? Vsystolic_tb__ConstPool__TABLE_h35b5d552_0
              [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]
               : 0U)][1U];
        vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__a_row[2U] 
            = vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__A_buf
            [Vsystolic_tb__ConstPool__TABLE_h757529b2_0
            [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]]
            [((2U >= Vsystolic_tb__ConstPool__TABLE_h35b5d552_0
               [vlSelfRef.__VdfgRegularize_hebeb780c_0_0])
               ? Vsystolic_tb__ConstPool__TABLE_h35b5d552_0
              [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]
               : 0U)][2U];
    } else {
        vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__a_row[0U] = 0U;
        vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__a_row[1U] = 0U;
        vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__a_row[2U] = 0U;
    }
    vlSelfRef.systolic_tb__DOT__dut__DOT__result_matrix[0U] 
        = vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__p_wire[2U][0U];
    vlSelfRef.systolic_tb__DOT__dut__DOT__result_matrix[1U] 
        = vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__p_wire[2U][1U];
    vlSelfRef.systolic_tb__DOT__dut__DOT__result_matrix[2U] 
        = vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__p_wire[2U][2U];
    vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__w 
        = (vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__slot_wire[2U][1U]
            ? (IData)(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__b2)
            : (IData)(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__b1));
    vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__w 
        = (vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__slot_wire[2U][0U]
            ? (IData)(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__b2)
            : (IData)(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__b1));
    vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__w 
        = (vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__slot_wire[1U][1U]
            ? (IData)(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__b2)
            : (IData)(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__b1));
    vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__w 
        = (vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__slot_wire[1U][0U]
            ? (IData)(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__b2)
            : (IData)(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__b1));
    vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__w 
        = (vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__slot_wire[0U][1U]
            ? (IData)(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__b2)
            : (IData)(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__b1));
    vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__w 
        = (vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__slot_wire[0U][0U]
            ? (IData)(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__b2)
            : (IData)(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__b1));
    vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__a_internal[0U][0U] 
        = (0x0000000fU & (IData)(vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__a_packed));
    vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__a_internal[0U][1U] 
        = (0x0000000fU & (IData)((vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__a_packed 
                                  >> 4U)));
    vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__a_internal[0U][2U] 
        = (0x0000000fU & (IData)((vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__a_packed 
                                  >> 8U)));
    vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__a_internal[1U][0U] 
        = (0x0000000fU & (IData)((vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__a_packed 
                                  >> 0x0cU)));
    vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__a_internal[1U][1U] 
        = (0x0000000fU & (IData)((vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__a_packed 
                                  >> 0x10U)));
    vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__a_internal[1U][2U] 
        = (0x0000000fU & (IData)((vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__a_packed 
                                  >> 0x14U)));
    vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__a_internal[2U][0U] 
        = (0x0000000fU & (IData)((vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__a_packed 
                                  >> 0x18U)));
    vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__a_internal[2U][1U] 
        = (0x0000000fU & (IData)((vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__a_packed 
                                  >> 0x1cU)));
    vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__a_internal[2U][2U] 
        = (0x0000000fU & (IData)((vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__a_packed 
                                  >> 0x20U)));
    vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__b_internal[0U][0U] 
        = (0x0000000fU & (IData)(vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__b_packed));
    vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__b_internal[0U][1U] 
        = (0x0000000fU & (IData)((vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__b_packed 
                                  >> 4U)));
    vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__b_internal[0U][2U] 
        = (0x0000000fU & (IData)((vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__b_packed 
                                  >> 8U)));
    vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__b_internal[1U][0U] 
        = (0x0000000fU & (IData)((vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__b_packed 
                                  >> 0x0cU)));
    vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__b_internal[1U][1U] 
        = (0x0000000fU & (IData)((vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__b_packed 
                                  >> 0x10U)));
    vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__b_internal[1U][2U] 
        = (0x0000000fU & (IData)((vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__b_packed 
                                  >> 0x14U)));
    vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__b_internal[2U][0U] 
        = (0x0000000fU & (IData)((vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__b_packed 
                                  >> 0x18U)));
    vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__b_internal[2U][1U] 
        = (0x0000000fU & (IData)((vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__b_packed 
                                  >> 0x1cU)));
    vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__b_internal[2U][2U] 
        = (0x0000000fU & (IData)((vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__b_packed 
                                  >> 0x20U)));
    vlSelfRef.systolic_tb__DOT__dut__DOT__a_skewed[0U] 
        = vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__a_row[0U];
    vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__deskewed[2U] 
        = vlSelfRef.systolic_tb__DOT__dut__DOT__result_matrix[2U];
}

bool Vsystolic_tb___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsystolic_tb___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_tb___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(Vsystolic_tb___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

bool Vsystolic_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsystolic_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vsystolic_tb___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(negedge systolic_tb.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(posedge systolic_tb.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vsystolic_tb___024root___ctor_var_reset(Vsystolic_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_tb___024root___ctor_var_reset\n"); );
    Vsystolic_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->systolic_tb__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16764983383496287870ull);
    vlSelf->systolic_tb__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18251346359655984100ull);
    vlSelf->systolic_tb__DOT__a11 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2804892417081323838ull);
    vlSelf->systolic_tb__DOT__a12 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13752378675940134437ull);
    vlSelf->systolic_tb__DOT__a13 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6178855140444388748ull);
    vlSelf->systolic_tb__DOT__a21 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5981122683491789385ull);
    vlSelf->systolic_tb__DOT__a22 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1387764396827482913ull);
    vlSelf->systolic_tb__DOT__a23 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16605345023169168771ull);
    vlSelf->systolic_tb__DOT__a31 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3992797515228100402ull);
    vlSelf->systolic_tb__DOT__a32 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4039732620814947498ull);
    vlSelf->systolic_tb__DOT__a33 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5852036978387440225ull);
    vlSelf->systolic_tb__DOT__b11 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6307384290650254054ull);
    vlSelf->systolic_tb__DOT__b12 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6577029165740021212ull);
    vlSelf->systolic_tb__DOT__b13 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15715855839889120289ull);
    vlSelf->systolic_tb__DOT__b21 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3215051973630173411ull);
    vlSelf->systolic_tb__DOT__b22 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16510143754097216182ull);
    vlSelf->systolic_tb__DOT__b23 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8093065432548421803ull);
    vlSelf->systolic_tb__DOT__b31 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10908488002557873729ull);
    vlSelf->systolic_tb__DOT__b32 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3409230187707156878ull);
    vlSelf->systolic_tb__DOT__b33 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8452345785892882233ull);
    vlSelf->systolic_tb__DOT__in_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3468574684464264118ull);
    vlSelf->systolic_tb__DOT__test_errors = 0;
    vlSelf->systolic_tb__DOT__jobs = 0;
    vlSelf->systolic_tb__DOT__gap = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            for (int __Vi2 = 0; __Vi2 < 3; ++__Vi2) {
                vlSelf->systolic_tb__DOT__A[__Vi0][__Vi1][__Vi2] = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5828812403075450398ull);
            }
        }
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            for (int __Vi2 = 0; __Vi2 < 3; ++__Vi2) {
                vlSelf->systolic_tb__DOT__B[__Vi0][__Vi1][__Vi2] = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9107923043738196465ull);
            }
        }
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            for (int __Vi2 = 0; __Vi2 < 3; ++__Vi2) {
                vlSelf->systolic_tb__DOT__C_exp[__Vi0][__Vi1][__Vi2] = 0;
            }
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->systolic_tb__DOT__C_got[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 914701396726244234ull);
        }
    }
    vlSelf->systolic_tb__DOT__outs_seen = 0;
    vlSelf->systolic_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__k = 0;
    vlSelf->systolic_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk9__DOT__w = 0;
    vlSelf->systolic_tb__DOT__dut__DOT__entry_valid = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5271254808357773196ull);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->systolic_tb__DOT__dut__DOT__a_skewed[__Vi0] = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12774653380668572343ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->systolic_tb__DOT__dut__DOT__slot_data[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13144977378928710821ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->systolic_tb__DOT__dut__DOT__b_wires[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16046041385848899720ull);
        }
    }
    VL_SCOPED_RAND_RESET_W(90, vlSelf->systolic_tb__DOT__dut__DOT__results_packed, __VscopeHash, 13432270046584980824ull);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->systolic_tb__DOT__dut__DOT__result_matrix[__Vi0] = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 748417811703954552ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->systolic_tb__DOT__dut__DOT__array__DOT__a_wire[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9629925095052438601ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->systolic_tb__DOT__dut__DOT__array__DOT__p_wire[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 14610225565543990794ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->systolic_tb__DOT__dut__DOT__array__DOT__slot_wire[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16208291689843925385ull);
        }
    }
    vlSelf->systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__PE__result = 0;
    vlSelf->systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__PE__a_out = 0;
    vlSelf->systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__PE__slot_out = 0;
    vlSelf->systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__PE__result = 0;
    vlSelf->systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__PE__a_out = 0;
    vlSelf->systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__PE__slot_out = 0;
    vlSelf->systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__PE__result = 0;
    vlSelf->systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__PE__a_out = 0;
    vlSelf->systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__PE__slot_out = 0;
    vlSelf->systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__PE__result = 0;
    vlSelf->systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__PE__a_out = 0;
    vlSelf->systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__PE__slot_out = 0;
    vlSelf->systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__PE__result = 0;
    vlSelf->systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__PE__a_out = 0;
    vlSelf->systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__PE__slot_out = 0;
    vlSelf->systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__PE__result = 0;
    vlSelf->systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__PE__a_out = 0;
    vlSelf->systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__PE__slot_out = 0;
    vlSelf->systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__PE__result = 0;
    vlSelf->systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__PE__a_out = 0;
    vlSelf->systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__PE__slot_out = 0;
    vlSelf->systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__PE__result = 0;
    vlSelf->systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__PE__a_out = 0;
    vlSelf->systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__PE__slot_out = 0;
    vlSelf->systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__PE__result = 0;
    vlSelf->systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__PE__a_out = 0;
    vlSelf->systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__PE__slot_out = 0;
    vlSelf->systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__b1 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7002470949590753276ull);
    vlSelf->systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__b2 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14968150940187016123ull);
    vlSelf->systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__w = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15640902139125134745ull);
    vlSelf->systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__b1 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7178650322037559129ull);
    vlSelf->systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__b2 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10467093454069241179ull);
    vlSelf->systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__w = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3357751885730234245ull);
    vlSelf->systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__b1 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9008503485041262124ull);
    vlSelf->systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__b2 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8553747574378954416ull);
    vlSelf->systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__w = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14041742808780222193ull);
    vlSelf->systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__b1 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6662550137420451606ull);
    vlSelf->systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__b2 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5044001464202823768ull);
    vlSelf->systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__w = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12052195408419034132ull);
    vlSelf->systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__b1 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6222581990147556372ull);
    vlSelf->systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__b2 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17579505750357402946ull);
    vlSelf->systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__w = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3609312981214450574ull);
    vlSelf->systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__b1 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4461470967138805336ull);
    vlSelf->systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__b2 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4478043003867608914ull);
    vlSelf->systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__w = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13947811789807486901ull);
    vlSelf->systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__b1 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11746244856680707540ull);
    vlSelf->systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__b2 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17023531100378482581ull);
    vlSelf->systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__w = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13993849064650678924ull);
    vlSelf->systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__b1 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 18255684694930903110ull);
    vlSelf->systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__b2 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 195098024904459938ull);
    vlSelf->systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__w = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15104504681414918073ull);
    vlSelf->systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__b1 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4548416074748461696ull);
    vlSelf->systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__b2 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10278583171069416538ull);
    vlSelf->systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__w = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11238839009750226832ull);
    vlSelf->systolic_tb__DOT__dut__DOT__memi__DOT__a_packed = VL_SCOPED_RAND_RESET_Q(36, __VscopeHash, 6678899213767948792ull);
    vlSelf->systolic_tb__DOT__dut__DOT__memi__DOT__b_packed = VL_SCOPED_RAND_RESET_Q(36, __VscopeHash, 14789942418260584123ull);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->systolic_tb__DOT__dut__DOT__memi__DOT__a_internal[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7160243373824273605ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->systolic_tb__DOT__dut__DOT__memi__DOT__b_internal[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7374957002018242225ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            for (int __Vi2 = 0; __Vi2 < 3; ++__Vi2) {
                vlSelf->systolic_tb__DOT__dut__DOT__memi__DOT__A_buf[__Vi0][__Vi1][__Vi2] = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2415482254185169178ull);
            }
        }
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            for (int __Vi2 = 0; __Vi2 < 3; ++__Vi2) {
                vlSelf->systolic_tb__DOT__dut__DOT__memi__DOT__B_buf[__Vi0][__Vi1][__Vi2] = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14502290413828801305ull);
            }
        }
    }
    vlSelf->systolic_tb__DOT__dut__DOT__memi__DOT__wr_ptr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16587449011336471162ull);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->systolic_tb__DOT__dut__DOT__memi__DOT__a_row[__Vi0] = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11817096828873303139ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->systolic_tb__DOT__dut__DOT__memi__DOT__skew_a[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10180144617330297790ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->systolic_tb__DOT__dut__DOT__memi__DOT__results_internal[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 12161396807618564538ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->systolic_tb__DOT__dut__DOT__memi__DOT__deskewed[__Vi0] = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 14521493930013976026ull);
    }
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->systolic_tb__DOT__dut__DOT__memi__DOT__mark[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3587065451760102389ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->systolic_tb__DOT__dut__DOT__memi__DOT__genblk2__BRA__1__KET____DOT__genblk1__DOT__a_dly[__Vi0] = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 179437126386718827ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->systolic_tb__DOT__dut__DOT__memi__DOT__genblk2__BRA__1__KET____DOT__genblk1__DOT__slot_dly[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6408739290592337687ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->systolic_tb__DOT__dut__DOT__memi__DOT__genblk2__BRA__2__KET____DOT__genblk1__DOT__a_dly[__Vi0] = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10536335582766108114ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->systolic_tb__DOT__dut__DOT__memi__DOT__genblk2__BRA__2__KET____DOT__genblk1__DOT__slot_dly[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8666303360712848771ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->systolic_tb__DOT__dut__DOT__memi__DOT__unskew__BRA__0__KET____DOT__genblk1__DOT__dly[__Vi0] = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 12506160465836973623ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->systolic_tb__DOT__dut__DOT__memi__DOT__unskew__BRA__1__KET____DOT__genblk1__DOT__dly[__Vi0] = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 458469139198740303ull);
    }
    vlSelf->systolic_tb__DOT__dut__DOT__controlla__DOT__state = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 15556851704528956666ull);
    vlSelf->systolic_tb__DOT__dut__DOT__controlla__DOT__cycle_count = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16379135493887750712ull);
    vlSelf->__VdfgRegularize_hebeb780c_0_0 = 0;
    for (int __Vi0 = 0; __Vi0 < 128; ++__Vi0) {
        vlSelf->__Vsampled_TOP__TABLE_h08a72cc3_0[__Vi0] = 0;
    }
    vlSelf->__Vsampled_TOP____VdfgRegularize_hebeb780c_0_0 = 0;
    for (int __Vi0 = 0; __Vi0 < 128; ++__Vi0) {
        vlSelf->__Vsampled_TOP__TABLE_h028f018c_0[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 128; ++__Vi0) {
        vlSelf->__Vsampled_TOP__TABLE_h82a00311_0[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->__Vsampled_TOP__systolic_tb__DOT__dut__DOT__array__DOT__slot_wire[__Vi0][__Vi1] = 0;
        }
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vsampled_TOP__systolic_tb__DOT__dut__DOT__memi__DOT__genblk2__BRA__2__KET____DOT__genblk1__DOT__slot_dly[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__Vsampled_TOP__systolic_tb__DOT__dut__DOT__memi__DOT__genblk2__BRA__1__KET____DOT__genblk1__DOT__slot_dly[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 128; ++__Vi0) {
        vlSelf->__Vsampled_TOP__TABLE_h757529b2_0[__Vi0] = 0;
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
    vlSelf->__Vtrigprevexpr___TOP__systolic_tb__DOT__clk__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    vlSelf->__Vi = 0;
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
