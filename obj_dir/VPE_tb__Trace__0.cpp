// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "VPE_tb__Syms.h"


void VPE_tb___024root__trace_chg_0_sub_0(VPE_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VPE_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPE_tb___024root__trace_chg_0\n"); );
    // Body
    VPE_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VPE_tb___024root*>(voidSelf);
    VPE_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    VPE_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VPE_tb___024root__trace_chg_0_sub_0(VPE_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPE_tb___024root__trace_chg_0_sub_0\n"); );
    VPE_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity[2U])))) {
        bufp->chgBit(oldp+0,(vlSelfRef.PE_tb__DOT__rst_n));
        bufp->chgBit(oldp+1,(vlSelfRef.PE_tb__DOT__in_valid));
        bufp->chgBit(oldp+2,(vlSelfRef.PE_tb__DOT__slot));
        bufp->chgBit(oldp+3,(vlSelfRef.PE_tb__DOT__en));
        bufp->chgBit(oldp+4,(vlSelfRef.PE_tb__DOT__drain_en));
        bufp->chgCData(oldp+5,(vlSelfRef.PE_tb__DOT__a),4);
        bufp->chgCData(oldp+6,(vlSelfRef.PE_tb__DOT__b),4);
        bufp->chgSData(oldp+7,(vlSelfRef.PE_tb__DOT__above_result),10);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        bufp->chgSData(oldp+8,(vlSelfRef.PE_tb__DOT__result),10);
        bufp->chgCData(oldp+9,(vlSelfRef.PE_tb__DOT__dut__DOT__b1),4);
        bufp->chgCData(oldp+10,(vlSelfRef.PE_tb__DOT__dut__DOT__b2),4);
    }
    bufp->chgBit(oldp+11,(vlSelfRef.PE_tb__DOT__clk));
    bufp->chgSData(oldp+12,((0x000003ffU & ((IData)(vlSelfRef.PE_tb__DOT__slot)
                                             ? ((IData)(vlSelfRef.PE_tb__DOT__dut__DOT__b2) 
                                                * (IData)(vlSelfRef.PE_tb__DOT__a))
                                             : ((IData)(vlSelfRef.PE_tb__DOT__dut__DOT__b1) 
                                                * (IData)(vlSelfRef.PE_tb__DOT__a))))),10);
    bufp->chgBit(oldp+13,((0U == ((IData)(vlSelfRef.PE_tb__DOT__slot)
                                   ? ((IData)(vlSelfRef.PE_tb__DOT__a) 
                                      | (IData)(vlSelfRef.PE_tb__DOT__dut__DOT__b1))
                                   : ((IData)(vlSelfRef.PE_tb__DOT__a) 
                                      | (IData)(vlSelfRef.PE_tb__DOT__dut__DOT__b2))))));
    bufp->chgCData(oldp+14,(((IData)(vlSelfRef.PE_tb__DOT__slot)
                              ? ((IData)(vlSelfRef.PE_tb__DOT__a) 
                                 | (IData)(vlSelfRef.PE_tb__DOT__dut__DOT__b1))
                              : ((IData)(vlSelfRef.PE_tb__DOT__a) 
                                 | (IData)(vlSelfRef.PE_tb__DOT__dut__DOT__b2)))),4);
}

void VPE_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPE_tb___024root__trace_cleanup\n"); );
    // Body
    VPE_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VPE_tb___024root*>(voidSelf);
    VPE_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
