// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "VProcessing_Element__Syms.h"


VL_ATTR_COLD void VProcessing_Element___024root__trace_init_sub__TOP__0(VProcessing_Element___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VProcessing_Element___024root__trace_init_sub__TOP__0\n"); );
    VProcessing_Element__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_PUSH_PREFIX(tracep, "PE_tb", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+11,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"rst_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1,0,"in_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+2,0,"slot",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+3,0,"en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+4,0,"drain_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+5,0,"a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+6,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+7,0,"above_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_DECL_BUS(tracep,c+8,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_PUSH_PREFIX(tracep, "dut", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+11,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1,0,"in_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+2,0,"slot",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+3,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+4,0,"drain_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+5,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+6,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+7,0,"above_result",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_DECL_BUS(tracep,c+8,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_DECL_BUS(tracep,c+9,0,"b1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+10,0,"b2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+12,0,"mult_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_DECL_BIT(tracep,c+13,0,"zeroed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+14,0,"temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void VProcessing_Element___024root__trace_init_top(VProcessing_Element___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VProcessing_Element___024root__trace_init_top\n"); );
    VProcessing_Element__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VProcessing_Element___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VProcessing_Element___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void VProcessing_Element___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VProcessing_Element___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VProcessing_Element___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VProcessing_Element___024root__trace_register(VProcessing_Element___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VProcessing_Element___024root__trace_register\n"); );
    VProcessing_Element__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&VProcessing_Element___024root__trace_const_0, 0, vlSelf);
    tracep->addFullCb(&VProcessing_Element___024root__trace_full_0, 0, vlSelf);
    tracep->addChgCb(&VProcessing_Element___024root__trace_chg_0, 0, vlSelf);
    tracep->addCleanupCb(&VProcessing_Element___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VProcessing_Element___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VProcessing_Element___024root__trace_const_0\n"); );
    // Body
    VProcessing_Element___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VProcessing_Element___024root*>(voidSelf);
    VProcessing_Element__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
}

VL_ATTR_COLD void VProcessing_Element___024root__trace_full_0_sub_0(VProcessing_Element___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VProcessing_Element___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VProcessing_Element___024root__trace_full_0\n"); );
    // Body
    VProcessing_Element___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VProcessing_Element___024root*>(voidSelf);
    VProcessing_Element__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VProcessing_Element___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VProcessing_Element___024root__trace_full_0_sub_0(VProcessing_Element___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VProcessing_Element___024root__trace_full_0_sub_0\n"); );
    VProcessing_Element__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullBit(oldp+0,(vlSelfRef.PE_tb__DOT__rst_n));
    bufp->fullBit(oldp+1,(vlSelfRef.PE_tb__DOT__in_valid));
    bufp->fullBit(oldp+2,(vlSelfRef.PE_tb__DOT__slot));
    bufp->fullBit(oldp+3,(vlSelfRef.PE_tb__DOT__en));
    bufp->fullBit(oldp+4,(vlSelfRef.PE_tb__DOT__drain_en));
    bufp->fullCData(oldp+5,(vlSelfRef.PE_tb__DOT__a),4);
    bufp->fullCData(oldp+6,(vlSelfRef.PE_tb__DOT__b),4);
    bufp->fullSData(oldp+7,(vlSelfRef.PE_tb__DOT__above_result),10);
    bufp->fullSData(oldp+8,(vlSelfRef.PE_tb__DOT__result),10);
    bufp->fullCData(oldp+9,(vlSelfRef.PE_tb__DOT__dut__DOT__b1),4);
    bufp->fullCData(oldp+10,(vlSelfRef.PE_tb__DOT__dut__DOT__b2),4);
    bufp->fullBit(oldp+11,(vlSelfRef.PE_tb__DOT__clk));
    bufp->fullSData(oldp+12,((0x000003ffU & ((IData)(vlSelfRef.PE_tb__DOT__slot)
                                              ? ((IData)(vlSelfRef.PE_tb__DOT__dut__DOT__b2) 
                                                 * (IData)(vlSelfRef.PE_tb__DOT__a))
                                              : ((IData)(vlSelfRef.PE_tb__DOT__dut__DOT__b1) 
                                                 * (IData)(vlSelfRef.PE_tb__DOT__a))))),10);
    bufp->fullBit(oldp+13,((0U == ((IData)(vlSelfRef.PE_tb__DOT__slot)
                                    ? ((IData)(vlSelfRef.PE_tb__DOT__a) 
                                       | (IData)(vlSelfRef.PE_tb__DOT__dut__DOT__b1))
                                    : ((IData)(vlSelfRef.PE_tb__DOT__a) 
                                       | (IData)(vlSelfRef.PE_tb__DOT__dut__DOT__b2))))));
    bufp->fullCData(oldp+14,(((IData)(vlSelfRef.PE_tb__DOT__slot)
                               ? ((IData)(vlSelfRef.PE_tb__DOT__a) 
                                  | (IData)(vlSelfRef.PE_tb__DOT__dut__DOT__b1))
                               : ((IData)(vlSelfRef.PE_tb__DOT__a) 
                                  | (IData)(vlSelfRef.PE_tb__DOT__dut__DOT__b2)))),4);
}
