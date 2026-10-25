// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VController_tb.h for the primary calling header

#include "VController_tb__pch.h"

VL_ATTR_COLD void VController_tb___024root___eval_static__TOP(VController_tb___024root* vlSelf);
void VController_tb___024root___timing_ready(VController_tb___024root* vlSelf);

VL_ATTR_COLD void VController_tb___024root___eval_static(VController_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VController_tb___024root___eval_static\n"); );
    VController_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VController_tb___024root___eval_static__TOP(vlSelf);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vtrigprevexpr___TOP__Controller_tb__DOT__clk__0 
        = vlSelfRef.Controller_tb__DOT__clk;
    VController_tb___024root___timing_ready(vlSelf);
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((IData)(1U) + vlSelfRef.__Vi);
    } while ((0U >= vlSelfRef.__Vi));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VController_tb___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VController_tb___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);
VL_ATTR_COLD void VController_tb___024root___stl_sequent__TOP__0(VController_tb___024root* vlSelf);

VL_ATTR_COLD bool VController_tb___024root___eval_stl(VController_tb___024root* vlSelf, CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VController_tb___024root___eval_stl\n"); );
    VController_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (IData)((IData)(firstIteration)));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VController_tb___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = VController_tb___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        {
            // Inlined CFunc: _eval_body__stl
            if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
                VController_tb___024root___stl_sequent__TOP__0(vlSelf);
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

VL_ATTR_COLD void VController_tb___024root___eval_dump_triggers__stl(VController_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VController_tb___024root___eval_dump_triggers__stl\n"); );
    VController_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    VController_tb___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VController_tb___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

VL_ATTR_COLD void VController_tb___024root___eval_dump_triggers__ico(VController_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VController_tb___024root___eval_dump_triggers__ico\n"); );
    VController_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    VController_tb___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VController_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

VL_ATTR_COLD void VController_tb___024root___eval_dump_triggers__act(VController_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VController_tb___024root___eval_dump_triggers__act\n"); );
    VController_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    VController_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
}

VL_ATTR_COLD void VController_tb___024root___eval_dump_triggers__nba(VController_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VController_tb___024root___eval_dump_triggers__nba\n"); );
    VController_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    VController_tb___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
}

VL_ATTR_COLD void VController_tb___024root___eval_dump_triggers__obs(VController_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VController_tb___024root___eval_dump_triggers__obs\n"); );
    VController_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void VController_tb___024root___eval_dump_triggers__react(VController_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VController_tb___024root___eval_dump_triggers__react\n"); );
    VController_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void VController_tb___024root___eval_final(VController_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VController_tb___024root___eval_final\n"); );
    VController_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void VController_tb___024root___eval_static__TOP(VController_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VController_tb___024root___eval_static__TOP\n"); );
    VController_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.Controller_tb__DOT__errors = 0U;
    vlSelfRef.Controller_tb__DOT__checks = 0U;
    vlSelfRef.Controller_tb__DOT__e_w_load[0U] = 0U;
    vlSelfRef.Controller_tb__DOT__e_w_load[1U] = 1U;
    vlSelfRef.Controller_tb__DOT__e_w_load[2U] = 1U;
    vlSelfRef.Controller_tb__DOT__e_w_load[3U] = 1U;
    vlSelfRef.Controller_tb__DOT__e_w_load[4U] = 1U;
    vlSelfRef.Controller_tb__DOT__e_w_load[5U] = 0U;
    vlSelfRef.Controller_tb__DOT__e_w_load[6U] = 0U;
    vlSelfRef.Controller_tb__DOT__e_w_load[7U] = 0U;
    vlSelfRef.Controller_tb__DOT__e_w_load[8U] = 0U;
    vlSelfRef.Controller_tb__DOT__e_w_load[9U] = 0U;
    vlSelfRef.Controller_tb__DOT__e_w_load[10U] = 0U;
    vlSelfRef.Controller_tb__DOT__e_w_load[11U] = 0U;
    vlSelfRef.Controller_tb__DOT__e_w_load[12U] = 0U;
    vlSelfRef.Controller_tb__DOT__e_w_load[13U] = 0U;
    vlSelfRef.Controller_tb__DOT__e_load_slot[0U] = 0U;
    vlSelfRef.Controller_tb__DOT__e_load_slot[1U] = 0U;
    vlSelfRef.Controller_tb__DOT__e_load_slot[2U] = 1U;
    vlSelfRef.Controller_tb__DOT__e_load_slot[3U] = 1U;
    vlSelfRef.Controller_tb__DOT__e_load_slot[4U] = 1U;
    vlSelfRef.Controller_tb__DOT__e_load_slot[5U] = 0U;
    vlSelfRef.Controller_tb__DOT__e_load_slot[6U] = 0U;
    vlSelfRef.Controller_tb__DOT__e_load_slot[7U] = 0U;
    vlSelfRef.Controller_tb__DOT__e_load_slot[8U] = 0U;
    vlSelfRef.Controller_tb__DOT__e_load_slot[9U] = 0U;
    vlSelfRef.Controller_tb__DOT__e_load_slot[10U] = 0U;
    vlSelfRef.Controller_tb__DOT__e_load_slot[11U] = 0U;
    vlSelfRef.Controller_tb__DOT__e_load_slot[12U] = 0U;
    vlSelfRef.Controller_tb__DOT__e_load_slot[13U] = 0U;
    vlSelfRef.Controller_tb__DOT__e_en[0U] = 0U;
    vlSelfRef.Controller_tb__DOT__e_en[1U] = 0U;
    vlSelfRef.Controller_tb__DOT__e_en[2U] = 1U;
    vlSelfRef.Controller_tb__DOT__e_en[3U] = 1U;
    vlSelfRef.Controller_tb__DOT__e_en[4U] = 1U;
    vlSelfRef.Controller_tb__DOT__e_en[5U] = 1U;
    vlSelfRef.Controller_tb__DOT__e_en[6U] = 1U;
    vlSelfRef.Controller_tb__DOT__e_en[7U] = 1U;
    vlSelfRef.Controller_tb__DOT__e_en[8U] = 1U;
    vlSelfRef.Controller_tb__DOT__e_en[9U] = 1U;
    vlSelfRef.Controller_tb__DOT__e_en[10U] = 1U;
    vlSelfRef.Controller_tb__DOT__e_en[11U] = 1U;
    vlSelfRef.Controller_tb__DOT__e_en[12U] = 0U;
    vlSelfRef.Controller_tb__DOT__e_en[13U] = 0U;
    vlSelfRef.Controller_tb__DOT__e_feed[0U] = 0U;
    vlSelfRef.Controller_tb__DOT__e_feed[1U] = 0U;
    vlSelfRef.Controller_tb__DOT__e_feed[2U] = 1U;
    vlSelfRef.Controller_tb__DOT__e_feed[3U] = 1U;
    vlSelfRef.Controller_tb__DOT__e_feed[4U] = 1U;
    vlSelfRef.Controller_tb__DOT__e_feed[5U] = 1U;
    vlSelfRef.Controller_tb__DOT__e_feed[6U] = 1U;
    vlSelfRef.Controller_tb__DOT__e_feed[7U] = 1U;
    vlSelfRef.Controller_tb__DOT__e_feed[8U] = 0U;
    vlSelfRef.Controller_tb__DOT__e_feed[9U] = 0U;
    vlSelfRef.Controller_tb__DOT__e_feed[10U] = 0U;
    vlSelfRef.Controller_tb__DOT__e_feed[11U] = 0U;
    vlSelfRef.Controller_tb__DOT__e_feed[12U] = 0U;
    vlSelfRef.Controller_tb__DOT__e_feed[13U] = 0U;
    vlSelfRef.Controller_tb__DOT__e_row_slot[0U] = 0U;
    vlSelfRef.Controller_tb__DOT__e_row_slot[1U] = 0U;
    vlSelfRef.Controller_tb__DOT__e_row_slot[2U] = 0U;
    vlSelfRef.Controller_tb__DOT__e_row_slot[3U] = 0U;
    vlSelfRef.Controller_tb__DOT__e_row_slot[4U] = 0U;
    vlSelfRef.Controller_tb__DOT__e_row_slot[5U] = 1U;
    vlSelfRef.Controller_tb__DOT__e_row_slot[6U] = 1U;
    vlSelfRef.Controller_tb__DOT__e_row_slot[7U] = 1U;
    vlSelfRef.Controller_tb__DOT__e_row_slot[8U] = 1U;
    vlSelfRef.Controller_tb__DOT__e_row_slot[9U] = 1U;
    vlSelfRef.Controller_tb__DOT__e_row_slot[10U] = 1U;
    vlSelfRef.Controller_tb__DOT__e_row_slot[11U] = 1U;
    vlSelfRef.Controller_tb__DOT__e_row_slot[12U] = 0U;
    vlSelfRef.Controller_tb__DOT__e_row_slot[13U] = 0U;
    vlSelfRef.Controller_tb__DOT__e_row_idx[0U] = 0U;
    vlSelfRef.Controller_tb__DOT__e_row_idx[1U] = 0U;
    vlSelfRef.Controller_tb__DOT__e_row_idx[2U] = 0U;
    vlSelfRef.Controller_tb__DOT__e_row_idx[3U] = 1U;
    vlSelfRef.Controller_tb__DOT__e_row_idx[4U] = 2U;
    vlSelfRef.Controller_tb__DOT__e_row_idx[5U] = 0U;
    vlSelfRef.Controller_tb__DOT__e_row_idx[6U] = 1U;
    vlSelfRef.Controller_tb__DOT__e_row_idx[7U] = 2U;
    vlSelfRef.Controller_tb__DOT__e_row_idx[8U] = 0U;
    vlSelfRef.Controller_tb__DOT__e_row_idx[9U] = 0U;
    vlSelfRef.Controller_tb__DOT__e_row_idx[10U] = 0U;
    vlSelfRef.Controller_tb__DOT__e_row_idx[11U] = 0U;
    vlSelfRef.Controller_tb__DOT__e_row_idx[12U] = 0U;
    vlSelfRef.Controller_tb__DOT__e_row_idx[13U] = 0U;
    vlSelfRef.Controller_tb__DOT__e_done[0U] = 0U;
    vlSelfRef.Controller_tb__DOT__e_done[1U] = 0U;
    vlSelfRef.Controller_tb__DOT__e_done[2U] = 0U;
    vlSelfRef.Controller_tb__DOT__e_done[3U] = 0U;
    vlSelfRef.Controller_tb__DOT__e_done[4U] = 0U;
    vlSelfRef.Controller_tb__DOT__e_done[5U] = 0U;
    vlSelfRef.Controller_tb__DOT__e_done[6U] = 0U;
    vlSelfRef.Controller_tb__DOT__e_done[7U] = 0U;
    vlSelfRef.Controller_tb__DOT__e_done[8U] = 0U;
    vlSelfRef.Controller_tb__DOT__e_done[9U] = 0U;
    vlSelfRef.Controller_tb__DOT__e_done[10U] = 0U;
    vlSelfRef.Controller_tb__DOT__e_done[11U] = 0U;
    vlSelfRef.Controller_tb__DOT__e_done[12U] = 1U;
    vlSelfRef.Controller_tb__DOT__e_done[13U] = 0U;
    vlSelfRef.Controller_tb__DOT__e_state[0U] = 0U;
    vlSelfRef.Controller_tb__DOT__e_state[1U] = 1U;
    vlSelfRef.Controller_tb__DOT__e_state[2U] = 2U;
    vlSelfRef.Controller_tb__DOT__e_state[3U] = 2U;
    vlSelfRef.Controller_tb__DOT__e_state[4U] = 2U;
    vlSelfRef.Controller_tb__DOT__e_state[5U] = 3U;
    vlSelfRef.Controller_tb__DOT__e_state[6U] = 3U;
    vlSelfRef.Controller_tb__DOT__e_state[7U] = 3U;
    vlSelfRef.Controller_tb__DOT__e_state[8U] = 4U;
    vlSelfRef.Controller_tb__DOT__e_state[9U] = 4U;
    vlSelfRef.Controller_tb__DOT__e_state[10U] = 4U;
    vlSelfRef.Controller_tb__DOT__e_state[11U] = 4U;
    vlSelfRef.Controller_tb__DOT__e_state[12U] = 5U;
    vlSelfRef.Controller_tb__DOT__e_state[13U] = 0U;
    vlSelfRef.Controller_tb__DOT__s_w_load[0U] = 0U;
    vlSelfRef.Controller_tb__DOT__s_w_load[1U] = 1U;
    vlSelfRef.Controller_tb__DOT__s_w_load[2U] = 0U;
    vlSelfRef.Controller_tb__DOT__s_w_load[3U] = 0U;
    vlSelfRef.Controller_tb__DOT__s_w_load[4U] = 0U;
    vlSelfRef.Controller_tb__DOT__s_w_load[5U] = 0U;
    vlSelfRef.Controller_tb__DOT__s_w_load[6U] = 0U;
    vlSelfRef.Controller_tb__DOT__s_w_load[7U] = 0U;
    vlSelfRef.Controller_tb__DOT__s_w_load[8U] = 0U;
    vlSelfRef.Controller_tb__DOT__s_w_load[9U] = 0U;
    vlSelfRef.Controller_tb__DOT__s_w_load[10U] = 0U;
    vlSelfRef.Controller_tb__DOT__s_load_slot[0U] = 0U;
    vlSelfRef.Controller_tb__DOT__s_load_slot[1U] = 0U;
    vlSelfRef.Controller_tb__DOT__s_load_slot[2U] = 0U;
    vlSelfRef.Controller_tb__DOT__s_load_slot[3U] = 0U;
    vlSelfRef.Controller_tb__DOT__s_load_slot[4U] = 0U;
    vlSelfRef.Controller_tb__DOT__s_load_slot[5U] = 0U;
    vlSelfRef.Controller_tb__DOT__s_load_slot[6U] = 0U;
    vlSelfRef.Controller_tb__DOT__s_load_slot[7U] = 0U;
    vlSelfRef.Controller_tb__DOT__s_load_slot[8U] = 0U;
    vlSelfRef.Controller_tb__DOT__s_load_slot[9U] = 0U;
    vlSelfRef.Controller_tb__DOT__s_load_slot[10U] = 0U;
    vlSelfRef.Controller_tb__DOT__s_en[0U] = 0U;
    vlSelfRef.Controller_tb__DOT__s_en[1U] = 0U;
    vlSelfRef.Controller_tb__DOT__s_en[2U] = 1U;
    vlSelfRef.Controller_tb__DOT__s_en[3U] = 1U;
    vlSelfRef.Controller_tb__DOT__s_en[4U] = 1U;
    vlSelfRef.Controller_tb__DOT__s_en[5U] = 1U;
    vlSelfRef.Controller_tb__DOT__s_en[6U] = 1U;
    vlSelfRef.Controller_tb__DOT__s_en[7U] = 1U;
    vlSelfRef.Controller_tb__DOT__s_en[8U] = 1U;
    vlSelfRef.Controller_tb__DOT__s_en[9U] = 0U;
    vlSelfRef.Controller_tb__DOT__s_en[10U] = 0U;
    vlSelfRef.Controller_tb__DOT__s_feed[0U] = 0U;
    vlSelfRef.Controller_tb__DOT__s_feed[1U] = 0U;
    vlSelfRef.Controller_tb__DOT__s_feed[2U] = 1U;
    vlSelfRef.Controller_tb__DOT__s_feed[3U] = 1U;
    vlSelfRef.Controller_tb__DOT__s_feed[4U] = 1U;
    vlSelfRef.Controller_tb__DOT__s_feed[5U] = 0U;
    vlSelfRef.Controller_tb__DOT__s_feed[6U] = 0U;
    vlSelfRef.Controller_tb__DOT__s_feed[7U] = 0U;
    vlSelfRef.Controller_tb__DOT__s_feed[8U] = 0U;
    vlSelfRef.Controller_tb__DOT__s_feed[9U] = 0U;
    vlSelfRef.Controller_tb__DOT__s_feed[10U] = 0U;
    vlSelfRef.Controller_tb__DOT__s_row_slot[0U] = 0U;
    vlSelfRef.Controller_tb__DOT__s_row_slot[1U] = 0U;
    vlSelfRef.Controller_tb__DOT__s_row_slot[2U] = 0U;
    vlSelfRef.Controller_tb__DOT__s_row_slot[3U] = 0U;
    vlSelfRef.Controller_tb__DOT__s_row_slot[4U] = 0U;
    vlSelfRef.Controller_tb__DOT__s_row_slot[5U] = 1U;
    vlSelfRef.Controller_tb__DOT__s_row_slot[6U] = 1U;
    vlSelfRef.Controller_tb__DOT__s_row_slot[7U] = 1U;
    vlSelfRef.Controller_tb__DOT__s_row_slot[8U] = 1U;
    vlSelfRef.Controller_tb__DOT__s_row_slot[9U] = 0U;
    vlSelfRef.Controller_tb__DOT__s_row_slot[10U] = 0U;
    vlSelfRef.Controller_tb__DOT__s_row_idx[0U] = 0U;
    vlSelfRef.Controller_tb__DOT__s_row_idx[1U] = 0U;
    vlSelfRef.Controller_tb__DOT__s_row_idx[2U] = 0U;
    vlSelfRef.Controller_tb__DOT__s_row_idx[3U] = 1U;
    vlSelfRef.Controller_tb__DOT__s_row_idx[4U] = 2U;
    vlSelfRef.Controller_tb__DOT__s_row_idx[5U] = 0U;
    vlSelfRef.Controller_tb__DOT__s_row_idx[6U] = 0U;
    vlSelfRef.Controller_tb__DOT__s_row_idx[7U] = 0U;
    vlSelfRef.Controller_tb__DOT__s_row_idx[8U] = 0U;
    vlSelfRef.Controller_tb__DOT__s_row_idx[9U] = 0U;
    vlSelfRef.Controller_tb__DOT__s_row_idx[10U] = 0U;
    vlSelfRef.Controller_tb__DOT__s_done[0U] = 0U;
    vlSelfRef.Controller_tb__DOT__s_done[1U] = 0U;
    vlSelfRef.Controller_tb__DOT__s_done[2U] = 0U;
    vlSelfRef.Controller_tb__DOT__s_done[3U] = 0U;
    vlSelfRef.Controller_tb__DOT__s_done[4U] = 0U;
    vlSelfRef.Controller_tb__DOT__s_done[5U] = 0U;
    vlSelfRef.Controller_tb__DOT__s_done[6U] = 0U;
    vlSelfRef.Controller_tb__DOT__s_done[7U] = 0U;
    vlSelfRef.Controller_tb__DOT__s_done[8U] = 0U;
    vlSelfRef.Controller_tb__DOT__s_done[9U] = 1U;
    vlSelfRef.Controller_tb__DOT__s_done[10U] = 0U;
    vlSelfRef.Controller_tb__DOT__s_state[0U] = 0U;
    vlSelfRef.Controller_tb__DOT__s_state[1U] = 1U;
    vlSelfRef.Controller_tb__DOT__s_state[2U] = 2U;
    vlSelfRef.Controller_tb__DOT__s_state[3U] = 2U;
    vlSelfRef.Controller_tb__DOT__s_state[4U] = 2U;
    vlSelfRef.Controller_tb__DOT__s_state[5U] = 4U;
    vlSelfRef.Controller_tb__DOT__s_state[6U] = 4U;
    vlSelfRef.Controller_tb__DOT__s_state[7U] = 4U;
    vlSelfRef.Controller_tb__DOT__s_state[8U] = 4U;
    vlSelfRef.Controller_tb__DOT__s_state[9U] = 5U;
    vlSelfRef.Controller_tb__DOT__s_state[10U] = 0U;
    vlSelfRef.Controller_tb__DOT__l_w_load[0U] = 0U;
    vlSelfRef.Controller_tb__DOT__l_w_load[1U] = 1U;
    vlSelfRef.Controller_tb__DOT__l_w_load[2U] = 0U;
    vlSelfRef.Controller_tb__DOT__l_w_load[3U] = 0U;
    vlSelfRef.Controller_tb__DOT__l_w_load[4U] = 1U;
    vlSelfRef.Controller_tb__DOT__l_w_load[5U] = 0U;
    vlSelfRef.Controller_tb__DOT__l_w_load[6U] = 0U;
    vlSelfRef.Controller_tb__DOT__l_w_load[7U] = 0U;
    vlSelfRef.Controller_tb__DOT__l_w_load[8U] = 0U;
    vlSelfRef.Controller_tb__DOT__l_w_load[9U] = 0U;
    vlSelfRef.Controller_tb__DOT__l_w_load[10U] = 0U;
    vlSelfRef.Controller_tb__DOT__l_w_load[11U] = 0U;
    vlSelfRef.Controller_tb__DOT__l_w_load[12U] = 0U;
    vlSelfRef.Controller_tb__DOT__l_w_load[13U] = 0U;
    vlSelfRef.Controller_tb__DOT__l_load_slot[0U] = 0U;
    vlSelfRef.Controller_tb__DOT__l_load_slot[1U] = 0U;
    vlSelfRef.Controller_tb__DOT__l_load_slot[2U] = 0U;
    vlSelfRef.Controller_tb__DOT__l_load_slot[3U] = 0U;
    vlSelfRef.Controller_tb__DOT__l_load_slot[4U] = 1U;
    vlSelfRef.Controller_tb__DOT__l_load_slot[5U] = 0U;
    vlSelfRef.Controller_tb__DOT__l_load_slot[6U] = 0U;
    vlSelfRef.Controller_tb__DOT__l_load_slot[7U] = 0U;
    vlSelfRef.Controller_tb__DOT__l_load_slot[8U] = 0U;
    vlSelfRef.Controller_tb__DOT__l_load_slot[9U] = 0U;
    vlSelfRef.Controller_tb__DOT__l_load_slot[10U] = 0U;
    vlSelfRef.Controller_tb__DOT__l_load_slot[11U] = 0U;
    vlSelfRef.Controller_tb__DOT__l_load_slot[12U] = 0U;
    vlSelfRef.Controller_tb__DOT__l_load_slot[13U] = 0U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VController_tb___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VController_tb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(VController_tb___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool VController_tb___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VController_tb___024root___trigger_anySet__stl\n"); );
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

extern const VlUnpacked<CData/*0:0*/, 128> VController_tb__ConstPool__TABLE_h82a00311_0;
extern const VlUnpacked<CData/*0:0*/, 128> VController_tb__ConstPool__TABLE_hbabea407_0;
extern const VlUnpacked<CData/*0:0*/, 128> VController_tb__ConstPool__TABLE_h757529b2_0;
extern const VlUnpacked<CData/*1:0*/, 128> VController_tb__ConstPool__TABLE_h35b5d552_0;

VL_ATTR_COLD void VController_tb___024root___stl_sequent__TOP__0(VController_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VController_tb___024root___stl_sequent__TOP__0\n"); );
    VController_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.Controller_tb__DOT__dut__DOT__a_wire[0U][0U] 
        = vlSelfRef.Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__PE__a_out;
    vlSelfRef.Controller_tb__DOT__dut__DOT__a_wire[0U][1U] 
        = vlSelfRef.Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__PE__a_out;
    vlSelfRef.Controller_tb__DOT__dut__DOT__a_wire[0U][2U] 
        = vlSelfRef.Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__PE__a_out;
    vlSelfRef.Controller_tb__DOT__dut__DOT__a_wire[1U][0U] 
        = vlSelfRef.Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__PE__a_out;
    vlSelfRef.Controller_tb__DOT__dut__DOT__a_wire[1U][1U] 
        = vlSelfRef.Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__PE__a_out;
    vlSelfRef.Controller_tb__DOT__dut__DOT__a_wire[1U][2U] 
        = vlSelfRef.Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__PE__a_out;
    vlSelfRef.Controller_tb__DOT__dut__DOT__a_wire[2U][0U] 
        = vlSelfRef.Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__PE__a_out;
    vlSelfRef.Controller_tb__DOT__dut__DOT__a_wire[2U][1U] 
        = vlSelfRef.Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__PE__a_out;
    vlSelfRef.Controller_tb__DOT__dut__DOT__a_wire[2U][2U] 
        = vlSelfRef.Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__PE__a_out;
    vlSelfRef.Controller_tb__DOT__dut__DOT__p_wire[0U][0U] 
        = vlSelfRef.Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__PE__result;
    vlSelfRef.Controller_tb__DOT__dut__DOT__p_wire[0U][1U] 
        = vlSelfRef.Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__PE__result;
    vlSelfRef.Controller_tb__DOT__dut__DOT__p_wire[0U][2U] 
        = vlSelfRef.Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__PE__result;
    vlSelfRef.Controller_tb__DOT__dut__DOT__p_wire[1U][0U] 
        = vlSelfRef.Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__PE__result;
    vlSelfRef.Controller_tb__DOT__dut__DOT__p_wire[1U][1U] 
        = vlSelfRef.Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__PE__result;
    vlSelfRef.Controller_tb__DOT__dut__DOT__p_wire[1U][2U] 
        = vlSelfRef.Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__PE__result;
    vlSelfRef.Controller_tb__DOT__dut__DOT__p_wire[2U][0U] 
        = vlSelfRef.Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__PE__result;
    vlSelfRef.Controller_tb__DOT__dut__DOT__p_wire[2U][1U] 
        = vlSelfRef.Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__PE__result;
    vlSelfRef.Controller_tb__DOT__dut__DOT__p_wire[2U][2U] 
        = vlSelfRef.Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__PE__result;
    vlSelfRef.Controller_tb__DOT__dut__DOT__slot_wire[0U][0U] 
        = vlSelfRef.Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__PE__slot_out;
    vlSelfRef.Controller_tb__DOT__dut__DOT__slot_wire[0U][1U] 
        = vlSelfRef.Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__PE__slot_out;
    vlSelfRef.Controller_tb__DOT__dut__DOT__slot_wire[0U][2U] 
        = vlSelfRef.Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__PE__slot_out;
    vlSelfRef.Controller_tb__DOT__dut__DOT__slot_wire[1U][0U] 
        = vlSelfRef.Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__PE__slot_out;
    vlSelfRef.Controller_tb__DOT__dut__DOT__slot_wire[1U][1U] 
        = vlSelfRef.Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__PE__slot_out;
    vlSelfRef.Controller_tb__DOT__dut__DOT__slot_wire[1U][2U] 
        = vlSelfRef.Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__PE__slot_out;
    vlSelfRef.Controller_tb__DOT__dut__DOT__slot_wire[2U][0U] 
        = vlSelfRef.Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__PE__slot_out;
    vlSelfRef.Controller_tb__DOT__dut__DOT__slot_wire[2U][1U] 
        = vlSelfRef.Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__PE__slot_out;
    vlSelfRef.Controller_tb__DOT__dut__DOT__slot_wire[2U][2U] 
        = vlSelfRef.Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__PE__slot_out;
    vlSelfRef.__VdfgRegularize_hebeb780c_0_0 = (((IData)(vlSelfRef.Controller_tb__DOT__entry_valid) 
                                                 << 5U) 
                                                | (((IData)(vlSelfRef.Controller_tb__DOT__ctrl__DOT__cycle_count) 
                                                    << 3U) 
                                                   | (IData)(vlSelfRef.Controller_tb__DOT__ctrl__DOT__state)));
    vlSelfRef.Controller_tb__DOT____Vcellout__dut__result_matrix[0U] 
        = vlSelfRef.Controller_tb__DOT__dut__DOT__p_wire[2U][0U];
    vlSelfRef.Controller_tb__DOT____Vcellout__dut__result_matrix[1U] 
        = vlSelfRef.Controller_tb__DOT__dut__DOT__p_wire[2U][1U];
    vlSelfRef.Controller_tb__DOT____Vcellout__dut__result_matrix[2U] 
        = vlSelfRef.Controller_tb__DOT__dut__DOT__p_wire[2U][2U];
    vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__w 
        = (vlSelfRef.Controller_tb__DOT__dut__DOT__slot_wire[2U][1U]
            ? (IData)(vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__b2)
            : (IData)(vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__b1));
    vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__w 
        = (vlSelfRef.Controller_tb__DOT__dut__DOT__slot_wire[2U][0U]
            ? (IData)(vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__b2)
            : (IData)(vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__b1));
    vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__w 
        = (vlSelfRef.Controller_tb__DOT__dut__DOT__slot_wire[1U][1U]
            ? (IData)(vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__b2)
            : (IData)(vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__b1));
    vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__w 
        = (vlSelfRef.Controller_tb__DOT__dut__DOT__slot_wire[1U][0U]
            ? (IData)(vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__b2)
            : (IData)(vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__b1));
    vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__w 
        = (vlSelfRef.Controller_tb__DOT__dut__DOT__slot_wire[0U][1U]
            ? (IData)(vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__b2)
            : (IData)(vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__b1));
    vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__w 
        = (vlSelfRef.Controller_tb__DOT__dut__DOT__slot_wire[0U][0U]
            ? (IData)(vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__b2)
            : (IData)(vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__b1));
    if (VController_tb__ConstPool__TABLE_h82a00311_0
        [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]) {
        vlSelfRef.Controller_tb__DOT__b_in[0U][0U] 
            = vlSelfRef.Controller_tb__DOT__W2[0U][0U];
        vlSelfRef.Controller_tb__DOT__b_in[0U][1U] 
            = vlSelfRef.Controller_tb__DOT__W2[0U][1U];
        vlSelfRef.Controller_tb__DOT__b_in[0U][2U] 
            = vlSelfRef.Controller_tb__DOT__W2[0U][2U];
        vlSelfRef.Controller_tb__DOT__b_in[1U][0U] 
            = vlSelfRef.Controller_tb__DOT__W2[1U][0U];
        vlSelfRef.Controller_tb__DOT__b_in[1U][1U] 
            = vlSelfRef.Controller_tb__DOT__W2[1U][1U];
        vlSelfRef.Controller_tb__DOT__b_in[1U][2U] 
            = vlSelfRef.Controller_tb__DOT__W2[1U][2U];
        vlSelfRef.Controller_tb__DOT__b_in[2U][0U] 
            = vlSelfRef.Controller_tb__DOT__W2[2U][0U];
        vlSelfRef.Controller_tb__DOT__b_in[2U][1U] 
            = vlSelfRef.Controller_tb__DOT__W2[2U][1U];
        vlSelfRef.Controller_tb__DOT__b_in[2U][2U] 
            = vlSelfRef.Controller_tb__DOT__W2[2U][2U];
    } else {
        vlSelfRef.Controller_tb__DOT__b_in[0U][0U] 
            = vlSelfRef.Controller_tb__DOT__W[0U][0U];
        vlSelfRef.Controller_tb__DOT__b_in[0U][1U] 
            = vlSelfRef.Controller_tb__DOT__W[0U][1U];
        vlSelfRef.Controller_tb__DOT__b_in[0U][2U] 
            = vlSelfRef.Controller_tb__DOT__W[0U][2U];
        vlSelfRef.Controller_tb__DOT__b_in[1U][0U] 
            = vlSelfRef.Controller_tb__DOT__W[1U][0U];
        vlSelfRef.Controller_tb__DOT__b_in[1U][1U] 
            = vlSelfRef.Controller_tb__DOT__W[1U][1U];
        vlSelfRef.Controller_tb__DOT__b_in[1U][2U] 
            = vlSelfRef.Controller_tb__DOT__W[1U][2U];
        vlSelfRef.Controller_tb__DOT__b_in[2U][0U] 
            = vlSelfRef.Controller_tb__DOT__W[2U][0U];
        vlSelfRef.Controller_tb__DOT__b_in[2U][1U] 
            = vlSelfRef.Controller_tb__DOT__W[2U][1U];
        vlSelfRef.Controller_tb__DOT__b_in[2U][2U] 
            = vlSelfRef.Controller_tb__DOT__W[2U][2U];
    }
    if (VController_tb__ConstPool__TABLE_hbabea407_0
        [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]) {
        if (VController_tb__ConstPool__TABLE_h757529b2_0
            [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]) {
            vlSelfRef.Controller_tb__DOT__cur_a[0U] 
                = vlSelfRef.Controller_tb__DOT__A2[
                ((2U >= VController_tb__ConstPool__TABLE_h35b5d552_0
                  [vlSelfRef.__VdfgRegularize_hebeb780c_0_0])
                  ? VController_tb__ConstPool__TABLE_h35b5d552_0
                 [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]
                  : 0U)][0U];
            vlSelfRef.Controller_tb__DOT__cur_a[1U] 
                = vlSelfRef.Controller_tb__DOT__A2[
                ((2U >= VController_tb__ConstPool__TABLE_h35b5d552_0
                  [vlSelfRef.__VdfgRegularize_hebeb780c_0_0])
                  ? VController_tb__ConstPool__TABLE_h35b5d552_0
                 [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]
                  : 0U)][1U];
            vlSelfRef.Controller_tb__DOT__cur_a[2U] 
                = vlSelfRef.Controller_tb__DOT__A2[
                ((2U >= VController_tb__ConstPool__TABLE_h35b5d552_0
                  [vlSelfRef.__VdfgRegularize_hebeb780c_0_0])
                  ? VController_tb__ConstPool__TABLE_h35b5d552_0
                 [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]
                  : 0U)][2U];
        } else {
            vlSelfRef.Controller_tb__DOT__cur_a[0U] 
                = vlSelfRef.Controller_tb__DOT__A[(
                                                   (2U 
                                                    >= VController_tb__ConstPool__TABLE_h35b5d552_0
                                                    [vlSelfRef.__VdfgRegularize_hebeb780c_0_0])
                                                    ? VController_tb__ConstPool__TABLE_h35b5d552_0
                                                   [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]
                                                    : 0U)][0U];
            vlSelfRef.Controller_tb__DOT__cur_a[1U] 
                = vlSelfRef.Controller_tb__DOT__A[(
                                                   (2U 
                                                    >= VController_tb__ConstPool__TABLE_h35b5d552_0
                                                    [vlSelfRef.__VdfgRegularize_hebeb780c_0_0])
                                                    ? VController_tb__ConstPool__TABLE_h35b5d552_0
                                                   [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]
                                                    : 0U)][1U];
            vlSelfRef.Controller_tb__DOT__cur_a[2U] 
                = vlSelfRef.Controller_tb__DOT__A[(
                                                   (2U 
                                                    >= VController_tb__ConstPool__TABLE_h35b5d552_0
                                                    [vlSelfRef.__VdfgRegularize_hebeb780c_0_0])
                                                    ? VController_tb__ConstPool__TABLE_h35b5d552_0
                                                   [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]
                                                    : 0U)][2U];
        }
    } else {
        vlSelfRef.Controller_tb__DOT__cur_a[0U] = 0U;
        vlSelfRef.Controller_tb__DOT__cur_a[1U] = 0U;
        vlSelfRef.Controller_tb__DOT__cur_a[2U] = 0U;
    }
    vlSelfRef.Controller_tb__DOT__a_in[0U] = vlSelfRef.Controller_tb__DOT__cur_a[0U];
    vlSelfRef.Controller_tb__DOT__a_in[1U] = vlSelfRef.Controller_tb__DOT__dly_a[0U][1U];
    vlSelfRef.Controller_tb__DOT__a_in[2U] = vlSelfRef.Controller_tb__DOT__dly_a[1U][2U];
    vlSelfRef.Controller_tb__DOT__cur_s = VController_tb__ConstPool__TABLE_h757529b2_0
        [vlSelfRef.__VdfgRegularize_hebeb780c_0_0];
    vlSelfRef.Controller_tb__DOT__slot_in[0U] = vlSelfRef.Controller_tb__DOT__cur_s;
    vlSelfRef.Controller_tb__DOT__slot_in[1U] = vlSelfRef.Controller_tb__DOT__dly_s[0U];
    vlSelfRef.Controller_tb__DOT__slot_in[2U] = vlSelfRef.Controller_tb__DOT__dly_s[1U];
    vlSelfRef.Controller_tb__DOT__result_matrix[0U] 
        = vlSelfRef.Controller_tb__DOT____Vcellout__dut__result_matrix[0U];
    vlSelfRef.Controller_tb__DOT__result_matrix[1U] 
        = vlSelfRef.Controller_tb__DOT____Vcellout__dut__result_matrix[1U];
    vlSelfRef.Controller_tb__DOT__result_matrix[2U] 
        = vlSelfRef.Controller_tb__DOT____Vcellout__dut__result_matrix[2U];
    vlSelfRef.Controller_tb__DOT____Vcellinp__dut__b_in[0U][0U] 
        = vlSelfRef.Controller_tb__DOT__b_in[0U][0U];
    vlSelfRef.Controller_tb__DOT____Vcellinp__dut__b_in[0U][1U] 
        = vlSelfRef.Controller_tb__DOT__b_in[0U][1U];
    vlSelfRef.Controller_tb__DOT____Vcellinp__dut__b_in[0U][2U] 
        = vlSelfRef.Controller_tb__DOT__b_in[0U][2U];
    vlSelfRef.Controller_tb__DOT____Vcellinp__dut__b_in[1U][0U] 
        = vlSelfRef.Controller_tb__DOT__b_in[1U][0U];
    vlSelfRef.Controller_tb__DOT____Vcellinp__dut__b_in[1U][1U] 
        = vlSelfRef.Controller_tb__DOT__b_in[1U][1U];
    vlSelfRef.Controller_tb__DOT____Vcellinp__dut__b_in[1U][2U] 
        = vlSelfRef.Controller_tb__DOT__b_in[1U][2U];
    vlSelfRef.Controller_tb__DOT____Vcellinp__dut__b_in[2U][0U] 
        = vlSelfRef.Controller_tb__DOT__b_in[2U][0U];
    vlSelfRef.Controller_tb__DOT____Vcellinp__dut__b_in[2U][1U] 
        = vlSelfRef.Controller_tb__DOT__b_in[2U][1U];
    vlSelfRef.Controller_tb__DOT____Vcellinp__dut__b_in[2U][2U] 
        = vlSelfRef.Controller_tb__DOT__b_in[2U][2U];
    vlSelfRef.Controller_tb__DOT____Vcellinp__dut__a_in[0U] 
        = vlSelfRef.Controller_tb__DOT__a_in[0U];
    vlSelfRef.Controller_tb__DOT____Vcellinp__dut__a_in[1U] 
        = vlSelfRef.Controller_tb__DOT__a_in[1U];
    vlSelfRef.Controller_tb__DOT____Vcellinp__dut__a_in[2U] 
        = vlSelfRef.Controller_tb__DOT__a_in[2U];
    vlSelfRef.Controller_tb__DOT____Vcellinp__dut__slot_in[0U] 
        = vlSelfRef.Controller_tb__DOT__slot_in[0U];
    vlSelfRef.Controller_tb__DOT____Vcellinp__dut__slot_in[1U] 
        = vlSelfRef.Controller_tb__DOT__slot_in[1U];
    vlSelfRef.Controller_tb__DOT____Vcellinp__dut__slot_in[2U] 
        = vlSelfRef.Controller_tb__DOT__slot_in[2U];
    vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__w 
        = (vlSelfRef.Controller_tb__DOT____Vcellinp__dut__slot_in[2U]
            ? (IData)(vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__b2)
            : (IData)(vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__b1));
    vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__w 
        = (vlSelfRef.Controller_tb__DOT____Vcellinp__dut__slot_in[1U]
            ? (IData)(vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__b2)
            : (IData)(vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__b1));
    vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__w 
        = (vlSelfRef.Controller_tb__DOT____Vcellinp__dut__slot_in[0U]
            ? (IData)(vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__b2)
            : (IData)(vlSelfRef.Controller_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__b1));
}

bool VController_tb___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void VController_tb___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VController_tb___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(VController_tb___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

bool VController_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void VController_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VController_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(VController_tb___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge Controller_tb.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @(negedge Controller_tb.clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VController_tb___024root___ctor_var_reset(VController_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VController_tb___024root___ctor_var_reset\n"); );
    VController_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->Controller_tb__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16472362457320313746ull);
    vlSelf->Controller_tb__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15470033625732903150ull);
    vlSelf->Controller_tb__DOT__start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14444462797707788332ull);
    vlSelf->Controller_tb__DOT__entry_valid = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1121544518955158546ull);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->Controller_tb__DOT__slot_in[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2102094341880973476ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->Controller_tb__DOT__a_in[__Vi0] = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10040728574474357922ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->Controller_tb__DOT__b_in[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8837008139707114394ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->Controller_tb__DOT__result_matrix[__Vi0] = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 10130684156913657696ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->Controller_tb__DOT____Vcellout__dut__result_matrix[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->Controller_tb__DOT____Vcellinp__dut__b_in[__Vi0][__Vi1] = 0;
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->Controller_tb__DOT____Vcellinp__dut__a_in[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->Controller_tb__DOT____Vcellinp__dut__slot_in[__Vi0] = 0;
    }
    vlSelf->Controller_tb__DOT__test_errors = 0;
    vlSelf->Controller_tb__DOT__m = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->Controller_tb__DOT__A[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 561561138018567697ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->Controller_tb__DOT__A2[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15544636406287304489ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->Controller_tb__DOT__W[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8703800156982854447ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->Controller_tb__DOT__W2[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6103819909929672220ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->Controller_tb__DOT__C_exp[__Vi0][__Vi1] = 0;
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->Controller_tb__DOT__C_exp2[__Vi0][__Vi1] = 0;
        }
    }
    vlSelf->Controller_tb__DOT__push0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8938039027904408697ull);
    vlSelf->Controller_tb__DOT__push1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1075121472533360797ull);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->Controller_tb__DOT__cur_a[__Vi0] = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10284743887777545488ull);
    }
    vlSelf->Controller_tb__DOT__cur_s = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16710907370392113981ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->Controller_tb__DOT__dly_a[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5165233202692181595ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->Controller_tb__DOT__dly_s[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11091059495335715414ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->Controller_tb__DOT__dut__DOT__a_wire[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13640541768639062865ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->Controller_tb__DOT__dut__DOT__p_wire[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 13114436124875229933ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->Controller_tb__DOT__dut__DOT__slot_wire[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7764497654507008237ull);
        }
    }
    vlSelf->Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__PE__result = 0;
    vlSelf->Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__PE__a_out = 0;
    vlSelf->Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__PE__slot_out = 0;
    vlSelf->Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__PE__result = 0;
    vlSelf->Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__PE__a_out = 0;
    vlSelf->Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__PE__slot_out = 0;
    vlSelf->Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__PE__result = 0;
    vlSelf->Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__PE__a_out = 0;
    vlSelf->Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__PE__slot_out = 0;
    vlSelf->Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__PE__result = 0;
    vlSelf->Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__PE__a_out = 0;
    vlSelf->Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__PE__slot_out = 0;
    vlSelf->Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__PE__result = 0;
    vlSelf->Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__PE__a_out = 0;
    vlSelf->Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__PE__slot_out = 0;
    vlSelf->Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__PE__result = 0;
    vlSelf->Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__PE__a_out = 0;
    vlSelf->Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__PE__slot_out = 0;
    vlSelf->Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__PE__result = 0;
    vlSelf->Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__PE__a_out = 0;
    vlSelf->Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__PE__slot_out = 0;
    vlSelf->Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__PE__result = 0;
    vlSelf->Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__PE__a_out = 0;
    vlSelf->Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__PE__slot_out = 0;
    vlSelf->Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__PE__result = 0;
    vlSelf->Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__PE__a_out = 0;
    vlSelf->Controller_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__PE__slot_out = 0;
    vlSelf->Controller_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__b1 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12797357307967053772ull);
    vlSelf->Controller_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__b2 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 533727953143680466ull);
    vlSelf->Controller_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__w = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1410852382032624739ull);
    vlSelf->Controller_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__b1 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2876753126001702699ull);
    vlSelf->Controller_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__b2 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10575233852734507058ull);
    vlSelf->Controller_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__w = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7934597006150192211ull);
    vlSelf->Controller_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__b1 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7785389589253129958ull);
    vlSelf->Controller_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__b2 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8802005373058888810ull);
    vlSelf->Controller_tb__DOT__dut__DOT__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__w = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10077271266009828069ull);
    vlSelf->Controller_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__b1 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9237409846924082879ull);
    vlSelf->Controller_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__b2 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11209346329331012978ull);
    vlSelf->Controller_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__w = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11351877368638346576ull);
    vlSelf->Controller_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__b1 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5976600141735170895ull);
    vlSelf->Controller_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__b2 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1457829684153730663ull);
    vlSelf->Controller_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__w = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13431197427935946987ull);
    vlSelf->Controller_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__b1 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12026139130487949374ull);
    vlSelf->Controller_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__b2 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4193098464645439009ull);
    vlSelf->Controller_tb__DOT__dut__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__w = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7701903191232637398ull);
    vlSelf->Controller_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__b1 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15514353975981426775ull);
    vlSelf->Controller_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__b2 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 982251038581026185ull);
    vlSelf->Controller_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__w = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11958900307801602231ull);
    vlSelf->Controller_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__b1 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 381233707805953975ull);
    vlSelf->Controller_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__b2 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16562109495406531103ull);
    vlSelf->Controller_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__w = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14342421378538968198ull);
    vlSelf->Controller_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__b1 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14666330542563868981ull);
    vlSelf->Controller_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__b2 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1538903462520341530ull);
    vlSelf->Controller_tb__DOT__dut__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__w = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17937256264485605343ull);
    vlSelf->Controller_tb__DOT__ctrl__DOT__state = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 3825204076512747705ull);
    vlSelf->Controller_tb__DOT__ctrl__DOT__cycle_count = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2117821697455378878ull);
    vlSelf->__VdfgRegularize_hebeb780c_0_0 = 0;
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
    vlSelf->__Vtrigprevexpr___TOP__Controller_tb__DOT__clk__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    vlSelf->__Vi = 0;
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
