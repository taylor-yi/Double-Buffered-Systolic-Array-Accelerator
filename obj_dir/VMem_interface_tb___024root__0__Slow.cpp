// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMem_interface_tb.h for the primary calling header

#include "VMem_interface_tb__pch.h"

void VMem_interface_tb___024root___timing_ready(VMem_interface_tb___024root* vlSelf);

VL_ATTR_COLD void VMem_interface_tb___024root___eval_static(VMem_interface_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMem_interface_tb___024root___eval_static\n"); );
    VMem_interface_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_static__TOP
        vlSelfRef.Mem_interface_tb__DOT__checks = 0U;
        vlSelfRef.Mem_interface_tb__DOT__errors = 0U;
        vlSelfRef.Mem_interface_tb__DOT__test_errors = 0U;
    }
    vlSelfRef.__Vtrigprevexpr___TOP__Mem_interface_tb__DOT__clk__0 
        = vlSelfRef.Mem_interface_tb__DOT__clk;
    VMem_interface_tb___024root___timing_ready(vlSelf);
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((IData)(1U) + vlSelfRef.__Vi);
    } while ((0U >= vlSelfRef.__Vi));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VMem_interface_tb___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VMem_interface_tb___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);
VL_ATTR_COLD void VMem_interface_tb___024root___stl_sequent__TOP__0(VMem_interface_tb___024root* vlSelf);

VL_ATTR_COLD bool VMem_interface_tb___024root___eval_stl(VMem_interface_tb___024root* vlSelf, CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMem_interface_tb___024root___eval_stl\n"); );
    VMem_interface_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (IData)((IData)(firstIteration)));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VMem_interface_tb___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = VMem_interface_tb___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        {
            // Inlined CFunc: _eval_body__stl
            if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
                VMem_interface_tb___024root___stl_sequent__TOP__0(vlSelf);
                {
                    // Inlined CFunc: __Vm_traceActivitySetAll
                    vlSelfRef.__Vm_traceActivity[0U] = 1U;
                    vlSelfRef.__Vm_traceActivity[1U] = 1U;
                    vlSelfRef.__Vm_traceActivity[2U] = 1U;
                    vlSelfRef.__Vm_traceActivity[3U] = 1U;
                    vlSelfRef.__Vm_traceActivity[4U] = 1U;
                    vlSelfRef.__Vm_traceActivity[5U] = 1U;
                    vlSelfRef.__Vm_traceActivity[6U] = 1U;
                }
            }
        }
    }
    return (__VstlExecute);
}

VL_ATTR_COLD void VMem_interface_tb___024root___eval_dump_triggers__stl(VMem_interface_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMem_interface_tb___024root___eval_dump_triggers__stl\n"); );
    VMem_interface_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    VMem_interface_tb___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VMem_interface_tb___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

VL_ATTR_COLD void VMem_interface_tb___024root___eval_dump_triggers__ico(VMem_interface_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMem_interface_tb___024root___eval_dump_triggers__ico\n"); );
    VMem_interface_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    VMem_interface_tb___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VMem_interface_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

VL_ATTR_COLD void VMem_interface_tb___024root___eval_dump_triggers__act(VMem_interface_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMem_interface_tb___024root___eval_dump_triggers__act\n"); );
    VMem_interface_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    VMem_interface_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
}

VL_ATTR_COLD void VMem_interface_tb___024root___eval_dump_triggers__nba(VMem_interface_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMem_interface_tb___024root___eval_dump_triggers__nba\n"); );
    VMem_interface_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    VMem_interface_tb___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
}

VL_ATTR_COLD void VMem_interface_tb___024root___eval_dump_triggers__obs(VMem_interface_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMem_interface_tb___024root___eval_dump_triggers__obs\n"); );
    VMem_interface_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void VMem_interface_tb___024root___eval_dump_triggers__react(VMem_interface_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMem_interface_tb___024root___eval_dump_triggers__react\n"); );
    VMem_interface_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void VMem_interface_tb___024root___eval_final(VMem_interface_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMem_interface_tb___024root___eval_final\n"); );
    VMem_interface_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VMem_interface_tb___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMem_interface_tb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(VMem_interface_tb___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool VMem_interface_tb___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMem_interface_tb___024root___trigger_anySet__stl\n"); );
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

VL_ATTR_COLD void VMem_interface_tb___024root___stl_sequent__TOP__0(VMem_interface_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMem_interface_tb___024root___stl_sequent__TOP__0\n"); );
    VMem_interface_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.Mem_interface_tb__DOT__dut__DOT__deskewed[0U] 
        = vlSelfRef.Mem_interface_tb__DOT__dut__DOT__unskew__BRA__0__KET____DOT__genblk1__DOT__dly[1U];
    vlSelfRef.Mem_interface_tb__DOT__dut__DOT__deskewed[1U] 
        = vlSelfRef.Mem_interface_tb__DOT__dut__DOT__unskew__BRA__1__KET____DOT__genblk1__DOT__dly[0U];
    vlSelfRef.Mem_interface_tb__DOT____Vcellout__dut__b_out[0U][0U] 
        = vlSelfRef.Mem_interface_tb__DOT__dut__DOT__B_buf
        [vlSelfRef.Mem_interface_tb__DOT__load_slot][0U][0U];
    vlSelfRef.Mem_interface_tb__DOT____Vcellout__dut__b_out[0U][1U] 
        = vlSelfRef.Mem_interface_tb__DOT__dut__DOT__B_buf
        [vlSelfRef.Mem_interface_tb__DOT__load_slot][0U][1U];
    vlSelfRef.Mem_interface_tb__DOT____Vcellout__dut__b_out[0U][2U] 
        = vlSelfRef.Mem_interface_tb__DOT__dut__DOT__B_buf
        [vlSelfRef.Mem_interface_tb__DOT__load_slot][0U][2U];
    vlSelfRef.Mem_interface_tb__DOT____Vcellout__dut__b_out[1U][0U] 
        = vlSelfRef.Mem_interface_tb__DOT__dut__DOT__B_buf
        [vlSelfRef.Mem_interface_tb__DOT__load_slot][1U][0U];
    vlSelfRef.Mem_interface_tb__DOT____Vcellout__dut__b_out[1U][1U] 
        = vlSelfRef.Mem_interface_tb__DOT__dut__DOT__B_buf
        [vlSelfRef.Mem_interface_tb__DOT__load_slot][1U][1U];
    vlSelfRef.Mem_interface_tb__DOT____Vcellout__dut__b_out[1U][2U] 
        = vlSelfRef.Mem_interface_tb__DOT__dut__DOT__B_buf
        [vlSelfRef.Mem_interface_tb__DOT__load_slot][1U][2U];
    vlSelfRef.Mem_interface_tb__DOT____Vcellout__dut__b_out[2U][0U] 
        = vlSelfRef.Mem_interface_tb__DOT__dut__DOT__B_buf
        [vlSelfRef.Mem_interface_tb__DOT__load_slot][2U][0U];
    vlSelfRef.Mem_interface_tb__DOT____Vcellout__dut__b_out[2U][1U] 
        = vlSelfRef.Mem_interface_tb__DOT__dut__DOT__B_buf
        [vlSelfRef.Mem_interface_tb__DOT__load_slot][2U][1U];
    vlSelfRef.Mem_interface_tb__DOT____Vcellout__dut__b_out[2U][2U] 
        = vlSelfRef.Mem_interface_tb__DOT__dut__DOT__B_buf
        [vlSelfRef.Mem_interface_tb__DOT__load_slot][2U][2U];
    vlSelfRef.Mem_interface_tb__DOT____Vcellinp__dut__results_in[0U] 
        = vlSelfRef.Mem_interface_tb__DOT__results_in[0U];
    vlSelfRef.Mem_interface_tb__DOT____Vcellinp__dut__results_in[1U] 
        = vlSelfRef.Mem_interface_tb__DOT__results_in[1U];
    vlSelfRef.Mem_interface_tb__DOT____Vcellinp__dut__results_in[2U] 
        = vlSelfRef.Mem_interface_tb__DOT__results_in[2U];
    vlSelfRef.Mem_interface_tb__DOT____Vcellout__dut__skewed_slot[0U] 
        = vlSelfRef.Mem_interface_tb__DOT__row_slot;
    vlSelfRef.Mem_interface_tb__DOT____Vcellout__dut__skewed_slot[1U] 
        = vlSelfRef.Mem_interface_tb__DOT__dut__DOT__genblk2__BRA__1__KET____DOT__genblk1__DOT__slot_dly[0U];
    vlSelfRef.Mem_interface_tb__DOT____Vcellout__dut__skewed_slot[2U] 
        = vlSelfRef.Mem_interface_tb__DOT__dut__DOT__genblk2__BRA__2__KET____DOT__genblk1__DOT__slot_dly[1U];
    vlSelfRef.Mem_interface_tb__DOT____Vcellout__dut__a_skewed[1U] 
        = vlSelfRef.Mem_interface_tb__DOT__dut__DOT__genblk2__BRA__1__KET____DOT__genblk1__DOT__a_dly[0U];
    vlSelfRef.Mem_interface_tb__DOT____Vcellout__dut__a_skewed[2U] 
        = vlSelfRef.Mem_interface_tb__DOT__dut__DOT__genblk2__BRA__2__KET____DOT__genblk1__DOT__a_dly[1U];
    vlSelfRef.Mem_interface_tb__DOT__dut__DOT__a_internal[0U][0U] 
        = (0x0000000fU & (IData)(vlSelfRef.Mem_interface_tb__DOT__a_packed));
    vlSelfRef.Mem_interface_tb__DOT__dut__DOT__b_internal[0U][0U] 
        = (0x0000000fU & (IData)(vlSelfRef.Mem_interface_tb__DOT__b_packed));
    vlSelfRef.Mem_interface_tb__DOT__dut__DOT__a_internal[0U][1U] 
        = (0x0000000fU & (IData)((vlSelfRef.Mem_interface_tb__DOT__a_packed 
                                  >> 4U)));
    vlSelfRef.Mem_interface_tb__DOT__dut__DOT__b_internal[0U][1U] 
        = (0x0000000fU & (IData)((vlSelfRef.Mem_interface_tb__DOT__b_packed 
                                  >> 4U)));
    vlSelfRef.Mem_interface_tb__DOT__dut__DOT__a_internal[0U][2U] 
        = (0x0000000fU & (IData)((vlSelfRef.Mem_interface_tb__DOT__a_packed 
                                  >> 8U)));
    vlSelfRef.Mem_interface_tb__DOT__dut__DOT__b_internal[0U][2U] 
        = (0x0000000fU & (IData)((vlSelfRef.Mem_interface_tb__DOT__b_packed 
                                  >> 8U)));
    vlSelfRef.Mem_interface_tb__DOT__dut__DOT__a_internal[1U][0U] 
        = (0x0000000fU & (IData)((vlSelfRef.Mem_interface_tb__DOT__a_packed 
                                  >> 0x0cU)));
    vlSelfRef.Mem_interface_tb__DOT__dut__DOT__b_internal[1U][0U] 
        = (0x0000000fU & (IData)((vlSelfRef.Mem_interface_tb__DOT__b_packed 
                                  >> 0x0cU)));
    vlSelfRef.Mem_interface_tb__DOT__dut__DOT__a_internal[1U][1U] 
        = (0x0000000fU & (IData)((vlSelfRef.Mem_interface_tb__DOT__a_packed 
                                  >> 0x10U)));
    vlSelfRef.Mem_interface_tb__DOT__dut__DOT__b_internal[1U][1U] 
        = (0x0000000fU & (IData)((vlSelfRef.Mem_interface_tb__DOT__b_packed 
                                  >> 0x10U)));
    vlSelfRef.Mem_interface_tb__DOT__dut__DOT__a_internal[1U][2U] 
        = (0x0000000fU & (IData)((vlSelfRef.Mem_interface_tb__DOT__a_packed 
                                  >> 0x14U)));
    vlSelfRef.Mem_interface_tb__DOT__dut__DOT__b_internal[1U][2U] 
        = (0x0000000fU & (IData)((vlSelfRef.Mem_interface_tb__DOT__b_packed 
                                  >> 0x14U)));
    vlSelfRef.Mem_interface_tb__DOT__dut__DOT__a_internal[2U][0U] 
        = (0x0000000fU & (IData)((vlSelfRef.Mem_interface_tb__DOT__a_packed 
                                  >> 0x18U)));
    vlSelfRef.Mem_interface_tb__DOT__dut__DOT__b_internal[2U][0U] 
        = (0x0000000fU & (IData)((vlSelfRef.Mem_interface_tb__DOT__b_packed 
                                  >> 0x18U)));
    vlSelfRef.Mem_interface_tb__DOT__dut__DOT__a_internal[2U][1U] 
        = (0x0000000fU & (IData)((vlSelfRef.Mem_interface_tb__DOT__a_packed 
                                  >> 0x1cU)));
    vlSelfRef.Mem_interface_tb__DOT__dut__DOT__b_internal[2U][1U] 
        = (0x0000000fU & (IData)((vlSelfRef.Mem_interface_tb__DOT__b_packed 
                                  >> 0x1cU)));
    vlSelfRef.Mem_interface_tb__DOT__dut__DOT__a_internal[2U][2U] 
        = (0x0000000fU & (IData)((vlSelfRef.Mem_interface_tb__DOT__a_packed 
                                  >> 0x20U)));
    vlSelfRef.Mem_interface_tb__DOT__dut__DOT__b_internal[2U][2U] 
        = (0x0000000fU & (IData)((vlSelfRef.Mem_interface_tb__DOT__b_packed 
                                  >> 0x20U)));
    vlSelfRef.Mem_interface_tb__DOT__results_packed[0U] 
        = ((0xfff00000U & vlSelfRef.Mem_interface_tb__DOT__results_packed[0U]) 
           | (((IData)(vlSelfRef.Mem_interface_tb__DOT__dut__DOT__results_internal[2U][1U]) 
               << 0x0000000aU) | vlSelfRef.Mem_interface_tb__DOT__dut__DOT__results_internal[2U][0U]));
    vlSelfRef.Mem_interface_tb__DOT__results_packed[0U] 
        = ((0x000fffffU & vlSelfRef.Mem_interface_tb__DOT__results_packed[0U]) 
           | ((((IData)(vlSelfRef.Mem_interface_tb__DOT__dut__DOT__results_internal[1U][0U]) 
                << 0x0000000aU) | vlSelfRef.Mem_interface_tb__DOT__dut__DOT__results_internal[2U][2U]) 
              << 0x00000014U));
    vlSelfRef.Mem_interface_tb__DOT__results_packed[1U] 
        = ((0xffffff00U & vlSelfRef.Mem_interface_tb__DOT__results_packed[1U]) 
           | ((((IData)(vlSelfRef.Mem_interface_tb__DOT__dut__DOT__results_internal[1U][0U]) 
                << 0x0000000aU) | vlSelfRef.Mem_interface_tb__DOT__dut__DOT__results_internal[2U][2U]) 
              >> 0x0000000cU));
    vlSelfRef.Mem_interface_tb__DOT__results_packed[1U] 
        = ((0xf00000ffU & vlSelfRef.Mem_interface_tb__DOT__results_packed[1U]) 
           | ((((IData)(vlSelfRef.Mem_interface_tb__DOT__dut__DOT__results_internal[1U][2U]) 
                << 0x0000000aU) | vlSelfRef.Mem_interface_tb__DOT__dut__DOT__results_internal[1U][1U]) 
              << 8U));
    vlSelfRef.Mem_interface_tb__DOT__results_packed[1U] 
        = ((0x0fffffffU & vlSelfRef.Mem_interface_tb__DOT__results_packed[1U]) 
           | ((((IData)(vlSelfRef.Mem_interface_tb__DOT__dut__DOT__results_internal[0U][1U]) 
                << 0x0000000aU) | vlSelfRef.Mem_interface_tb__DOT__dut__DOT__results_internal[0U][0U]) 
              << 0x0000001cU));
    vlSelfRef.Mem_interface_tb__DOT__results_packed[2U] 
        = ((0x03ff0000U & vlSelfRef.Mem_interface_tb__DOT__results_packed[2U]) 
           | (0x03ffffffU & ((((IData)(vlSelfRef.Mem_interface_tb__DOT__dut__DOT__results_internal[0U][1U]) 
                               << 0x0000000aU) | vlSelfRef.Mem_interface_tb__DOT__dut__DOT__results_internal[0U][0U]) 
                             >> 4U)));
    vlSelfRef.Mem_interface_tb__DOT__results_packed[2U] 
        = ((0x0000ffffU & vlSelfRef.Mem_interface_tb__DOT__results_packed[2U]) 
           | (0x03ffffffU & ((IData)(vlSelfRef.Mem_interface_tb__DOT__dut__DOT__results_internal[0U][2U]) 
                             << 0x00000010U)));
    if (vlSelfRef.Mem_interface_tb__DOT__feed) {
        vlSelfRef.Mem_interface_tb__DOT__dut__DOT__a_row[0U] 
            = vlSelfRef.Mem_interface_tb__DOT__dut__DOT__A_buf
            [vlSelfRef.Mem_interface_tb__DOT__row_slot]
            [((2U >= (IData)(vlSelfRef.Mem_interface_tb__DOT__row_idx))
               ? (IData)(vlSelfRef.Mem_interface_tb__DOT__row_idx)
               : 0U)][0U];
        vlSelfRef.Mem_interface_tb__DOT__dut__DOT__a_row[1U] 
            = vlSelfRef.Mem_interface_tb__DOT__dut__DOT__A_buf
            [vlSelfRef.Mem_interface_tb__DOT__row_slot]
            [((2U >= (IData)(vlSelfRef.Mem_interface_tb__DOT__row_idx))
               ? (IData)(vlSelfRef.Mem_interface_tb__DOT__row_idx)
               : 0U)][1U];
        vlSelfRef.Mem_interface_tb__DOT__dut__DOT__a_row[2U] 
            = vlSelfRef.Mem_interface_tb__DOT__dut__DOT__A_buf
            [vlSelfRef.Mem_interface_tb__DOT__row_slot]
            [((2U >= (IData)(vlSelfRef.Mem_interface_tb__DOT__row_idx))
               ? (IData)(vlSelfRef.Mem_interface_tb__DOT__row_idx)
               : 0U)][2U];
    } else {
        vlSelfRef.Mem_interface_tb__DOT__dut__DOT__a_row[0U] = 0U;
        vlSelfRef.Mem_interface_tb__DOT__dut__DOT__a_row[1U] = 0U;
        vlSelfRef.Mem_interface_tb__DOT__dut__DOT__a_row[2U] = 0U;
    }
    vlSelfRef.Mem_interface_tb__DOT__b_out[0U][0U] 
        = vlSelfRef.Mem_interface_tb__DOT____Vcellout__dut__b_out[0U][0U];
    vlSelfRef.Mem_interface_tb__DOT__b_out[0U][1U] 
        = vlSelfRef.Mem_interface_tb__DOT____Vcellout__dut__b_out[0U][1U];
    vlSelfRef.Mem_interface_tb__DOT__b_out[0U][2U] 
        = vlSelfRef.Mem_interface_tb__DOT____Vcellout__dut__b_out[0U][2U];
    vlSelfRef.Mem_interface_tb__DOT__b_out[1U][0U] 
        = vlSelfRef.Mem_interface_tb__DOT____Vcellout__dut__b_out[1U][0U];
    vlSelfRef.Mem_interface_tb__DOT__b_out[1U][1U] 
        = vlSelfRef.Mem_interface_tb__DOT____Vcellout__dut__b_out[1U][1U];
    vlSelfRef.Mem_interface_tb__DOT__b_out[1U][2U] 
        = vlSelfRef.Mem_interface_tb__DOT____Vcellout__dut__b_out[1U][2U];
    vlSelfRef.Mem_interface_tb__DOT__b_out[2U][0U] 
        = vlSelfRef.Mem_interface_tb__DOT____Vcellout__dut__b_out[2U][0U];
    vlSelfRef.Mem_interface_tb__DOT__b_out[2U][1U] 
        = vlSelfRef.Mem_interface_tb__DOT____Vcellout__dut__b_out[2U][1U];
    vlSelfRef.Mem_interface_tb__DOT__b_out[2U][2U] 
        = vlSelfRef.Mem_interface_tb__DOT____Vcellout__dut__b_out[2U][2U];
    vlSelfRef.Mem_interface_tb__DOT__dut__DOT__deskewed[2U] 
        = vlSelfRef.Mem_interface_tb__DOT____Vcellinp__dut__results_in[2U];
    vlSelfRef.Mem_interface_tb__DOT__skewed_slot[0U] 
        = vlSelfRef.Mem_interface_tb__DOT____Vcellout__dut__skewed_slot[0U];
    vlSelfRef.Mem_interface_tb__DOT__skewed_slot[1U] 
        = vlSelfRef.Mem_interface_tb__DOT____Vcellout__dut__skewed_slot[1U];
    vlSelfRef.Mem_interface_tb__DOT__skewed_slot[2U] 
        = vlSelfRef.Mem_interface_tb__DOT____Vcellout__dut__skewed_slot[2U];
    vlSelfRef.Mem_interface_tb__DOT____Vcellout__dut__a_skewed[0U] 
        = vlSelfRef.Mem_interface_tb__DOT__dut__DOT__a_row[0U];
    vlSelfRef.Mem_interface_tb__DOT__a_skewed[0U] = vlSelfRef.Mem_interface_tb__DOT____Vcellout__dut__a_skewed[0U];
    vlSelfRef.Mem_interface_tb__DOT__a_skewed[1U] = vlSelfRef.Mem_interface_tb__DOT____Vcellout__dut__a_skewed[1U];
    vlSelfRef.Mem_interface_tb__DOT__a_skewed[2U] = vlSelfRef.Mem_interface_tb__DOT____Vcellout__dut__a_skewed[2U];
}

bool VMem_interface_tb___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void VMem_interface_tb___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMem_interface_tb___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(VMem_interface_tb___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

bool VMem_interface_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void VMem_interface_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMem_interface_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(VMem_interface_tb___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge Mem_interface_tb.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @(negedge Mem_interface_tb.clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VMem_interface_tb___024root___ctor_var_reset(VMem_interface_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMem_interface_tb___024root___ctor_var_reset\n"); );
    VMem_interface_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->Mem_interface_tb__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8795947371490294580ull);
    vlSelf->Mem_interface_tb__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3707454285538077799ull);
    vlSelf->Mem_interface_tb__DOT__load_slot = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7659367599905024546ull);
    vlSelf->Mem_interface_tb__DOT__feed = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17473687574594655673ull);
    vlSelf->Mem_interface_tb__DOT__row_slot = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6607652216890094722ull);
    vlSelf->Mem_interface_tb__DOT__en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3758350280005970612ull);
    vlSelf->Mem_interface_tb__DOT__done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7324638982593685813ull);
    vlSelf->Mem_interface_tb__DOT__row_idx = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8068336424098086418ull);
    vlSelf->Mem_interface_tb__DOT__entry_valid = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1054846541782009634ull);
    vlSelf->Mem_interface_tb__DOT__in_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16465240009499241257ull);
    vlSelf->Mem_interface_tb__DOT__a_packed = VL_SCOPED_RAND_RESET_Q(36, __VscopeHash, 15923268302406893647ull);
    vlSelf->Mem_interface_tb__DOT__b_packed = VL_SCOPED_RAND_RESET_Q(36, __VscopeHash, 13855736178113283989ull);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->Mem_interface_tb__DOT__a_skewed[__Vi0] = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16543984744952553567ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->Mem_interface_tb__DOT__skewed_slot[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12411190868248730592ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->Mem_interface_tb__DOT__b_out[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6847598374752214847ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->Mem_interface_tb__DOT__results_in[__Vi0] = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 661824522597099746ull);
    }
    VL_SCOPED_RAND_RESET_W(90, vlSelf->Mem_interface_tb__DOT__results_packed, __VscopeHash, 12390138737439204907ull);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->Mem_interface_tb__DOT____Vcellinp__dut__results_in[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->Mem_interface_tb__DOT____Vcellout__dut__b_out[__Vi0][__Vi1] = 0;
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->Mem_interface_tb__DOT____Vcellout__dut__skewed_slot[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->Mem_interface_tb__DOT____Vcellout__dut__a_skewed[__Vi0] = 0;
    }
    vlSelf->Mem_interface_tb__DOT__m = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->Mem_interface_tb__DOT__A[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9987693653004153175ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->Mem_interface_tb__DOT__A2[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16256521199654559717ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->Mem_interface_tb__DOT__B[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10886876270513350937ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->Mem_interface_tb__DOT__B2[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16969747026083681562ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->Mem_interface_tb__DOT__dut__DOT__a_internal[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10957370336116024656ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->Mem_interface_tb__DOT__dut__DOT__b_internal[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9758202849504479269ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            for (int __Vi2 = 0; __Vi2 < 3; ++__Vi2) {
                vlSelf->Mem_interface_tb__DOT__dut__DOT__A_buf[__Vi0][__Vi1][__Vi2] = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13466433276492499270ull);
            }
        }
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            for (int __Vi2 = 0; __Vi2 < 3; ++__Vi2) {
                vlSelf->Mem_interface_tb__DOT__dut__DOT__B_buf[__Vi0][__Vi1][__Vi2] = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14236987778397007855ull);
            }
        }
    }
    vlSelf->Mem_interface_tb__DOT__dut__DOT__wr_ptr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10150767559908935238ull);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->Mem_interface_tb__DOT__dut__DOT__a_row[__Vi0] = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15749893319362137314ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->Mem_interface_tb__DOT__dut__DOT__skew_a[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8290541200716884667ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->Mem_interface_tb__DOT__dut__DOT__results_internal[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 10548526185492560012ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->Mem_interface_tb__DOT__dut__DOT__deskewed[__Vi0] = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 7140244624527722655ull);
    }
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->Mem_interface_tb__DOT__dut__DOT__mark[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15342548942393879214ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->Mem_interface_tb__DOT__dut__DOT__genblk2__BRA__1__KET____DOT__genblk1__DOT__a_dly[__Vi0] = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4524326414154714348ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->Mem_interface_tb__DOT__dut__DOT__genblk2__BRA__1__KET____DOT__genblk1__DOT__slot_dly[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2545145376044040910ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->Mem_interface_tb__DOT__dut__DOT__genblk2__BRA__2__KET____DOT__genblk1__DOT__a_dly[__Vi0] = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1001979734140460522ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->Mem_interface_tb__DOT__dut__DOT__genblk2__BRA__2__KET____DOT__genblk1__DOT__slot_dly[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15393152451588797464ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->Mem_interface_tb__DOT__dut__DOT__unskew__BRA__0__KET____DOT__genblk1__DOT__dly[__Vi0] = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 6268885527011602287ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->Mem_interface_tb__DOT__dut__DOT__unskew__BRA__1__KET____DOT__genblk1__DOT__dly[__Vi0] = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 8540368062144126208ull);
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
    vlSelf->__Vtrigprevexpr___TOP__Mem_interface_tb__DOT__clk__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    vlSelf->__Vi = 0;
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
