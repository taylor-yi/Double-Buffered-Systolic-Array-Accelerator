// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "VMem_interface_tb__Syms.h"


VL_ATTR_COLD void VMem_interface_tb___024root__trace_init_dtype____14(VMem_interface_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);
VL_ATTR_COLD void VMem_interface_tb___024root__trace_init_dtype____15(VMem_interface_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);
VL_ATTR_COLD void VMem_interface_tb___024root__trace_init_dtype____17(VMem_interface_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);
VL_ATTR_COLD void VMem_interface_tb___024root__trace_init_dtype____18(VMem_interface_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);
VL_ATTR_COLD void VMem_interface_tb___024root__trace_init_dtype____20(VMem_interface_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);
VL_ATTR_COLD void VMem_interface_tb___024root__trace_init_dtype____21(VMem_interface_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);
VL_ATTR_COLD void VMem_interface_tb___024root__trace_init_dtype____22(VMem_interface_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);
VL_ATTR_COLD void VMem_interface_tb___024root__trace_init_dtype____23(VMem_interface_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);
VL_ATTR_COLD void VMem_interface_tb___024root__trace_init_dtype____24(VMem_interface_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);
VL_ATTR_COLD void VMem_interface_tb___024root__trace_init_dtype____25(VMem_interface_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);
VL_ATTR_COLD void VMem_interface_tb___024root__trace_init_dtype____26(VMem_interface_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void VMem_interface_tb___024root__trace_init_sub__TOP__0(VMem_interface_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMem_interface_tb___024root__trace_init_sub__TOP__0\n"); );
    VMem_interface_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_PUSH_PREFIX(tracep, "Mem_interface_tb", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+166,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"rst_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1,0,"load_slot",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+2,0,"feed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+3,0,"row_slot",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+4,0,"en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+5,0,"done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+6,0,"row_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+100,0,"entry_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+7,0,"in_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_QUAD(tracep,c+8,0,"a_packed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 35,0);
    VL_TRACE_DECL_QUAD(tracep,c+10,0,"b_packed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 35,0);
    VL_TRACE_PUSH_PREFIX(tracep, "a_skewed", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 2);
    for (int i = 0; i < 3; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+73+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (i + 0), 3,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "skewed_slot", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 2);
    for (int i = 0; i < 3; ++i) {
        VL_TRACE_DECL_BIT_ARRAY(tracep,c+76+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (i + 0));
    }
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "b_out", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 2);
    VL_TRACE_PUSH_PREFIX(tracep, "[0]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 2);
    VL_TRACE_DECL_BUS(tracep,c+79,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+80,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+81,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[1]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 2);
    VL_TRACE_DECL_BUS(tracep,c+82,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+83,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+84,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[2]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 2);
    VL_TRACE_DECL_BUS(tracep,c+85,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+86,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+87,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "results_in", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 2);
    for (int i = 0; i < 3; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+12+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (i + 0), 9,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_DECL_WIDE(tracep,c+101,0,"results_packed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 89,0);
    VL_TRACE_DECL_BIT(tracep,c+104,0,"out_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+167,0,"checks",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+168,0,"errors",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+169,0,"test_errors",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+15,0,"m",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_PUSH_PREFIX(tracep, "A", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 2);
    VL_TRACE_PUSH_PREFIX(tracep, "[0]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 2);
    VL_TRACE_DECL_BUS(tracep,c+16,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+17,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+18,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[1]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 2);
    VL_TRACE_DECL_BUS(tracep,c+19,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+20,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+21,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[2]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 2);
    VL_TRACE_DECL_BUS(tracep,c+22,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+23,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+24,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "A2", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 2);
    VL_TRACE_PUSH_PREFIX(tracep, "[0]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 2);
    VL_TRACE_DECL_BUS(tracep,c+25,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+26,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+27,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[1]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 2);
    VL_TRACE_DECL_BUS(tracep,c+28,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+29,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+30,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[2]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 2);
    VL_TRACE_DECL_BUS(tracep,c+31,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+32,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+33,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "B", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 2);
    VL_TRACE_PUSH_PREFIX(tracep, "[0]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 2);
    VL_TRACE_DECL_BUS(tracep,c+34,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+35,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+36,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[1]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 2);
    VL_TRACE_DECL_BUS(tracep,c+37,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+38,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+39,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[2]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 2);
    VL_TRACE_DECL_BUS(tracep,c+40,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+41,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+42,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "B2", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 2);
    VL_TRACE_PUSH_PREFIX(tracep, "[0]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 2);
    VL_TRACE_DECL_BUS(tracep,c+43,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+44,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+45,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[1]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 2);
    VL_TRACE_DECL_BUS(tracep,c+46,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+47,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+48,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[2]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 2);
    VL_TRACE_DECL_BUS(tracep,c+49,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+50,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+51,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "dut", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+179,0,"SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+166,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1,0,"load_slot",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+2,0,"feed",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+3,0,"row_slot",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+4,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+5,0,"done",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+6,0,"row_idx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+100,0,"entry_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+7,0,"in_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_QUAD(tracep,c+8,0,"a_packed",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 35,0);
    VL_TRACE_DECL_QUAD(tracep,c+10,0,"b_packed",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 35,0);
    VL_TRACE_PUSH_PREFIX(tracep, "a_skewed", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 2);
    for (int i = 0; i < 3; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+170+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, (i + 0), 3,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "skewed_slot", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 2);
    for (int i = 0; i < 3; ++i) {
        VL_TRACE_DECL_BIT_ARRAY(tracep,c+173+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, (i + 0));
    }
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "b_out", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 2);
    VL_TRACE_PUSH_PREFIX(tracep, "[0]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 2);
    VL_TRACE_DECL_BUS(tracep,c+88,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+89,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+90,0,"[2]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[1]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 2);
    VL_TRACE_DECL_BUS(tracep,c+91,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+92,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+93,0,"[2]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[2]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 2);
    VL_TRACE_DECL_BUS(tracep,c+94,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+95,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+96,0,"[2]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "results_in", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 2);
    for (int i = 0; i < 3; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+52+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, (i + 0), 9,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_DECL_WIDE(tracep,c+101,0,"results_packed",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 89,0);
    VL_TRACE_DECL_BIT(tracep,c+104,0,"out_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+180,0,"RW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_PUSH_PREFIX(tracep, "a_internal", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 2);
    VL_TRACE_PUSH_PREFIX(tracep, "[0]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 2);
    VL_TRACE_DECL_BUS(tracep,c+55,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+56,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+57,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[1]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 2);
    VL_TRACE_DECL_BUS(tracep,c+58,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+59,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+60,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[2]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 2);
    VL_TRACE_DECL_BUS(tracep,c+61,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+62,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+63,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "b_internal", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 2);
    VL_TRACE_PUSH_PREFIX(tracep, "[0]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 2);
    VL_TRACE_DECL_BUS(tracep,c+64,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+65,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+66,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[1]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 2);
    VL_TRACE_DECL_BUS(tracep,c+67,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+68,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+69,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[2]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 2);
    VL_TRACE_DECL_BUS(tracep,c+70,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+71,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+72,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);

    VMem_interface_tb___024root__trace_init_dtype____14(vlSelf, tracep, "A_buf", 0, c+105, VerilatedTraceSigDirection::NONE);

    VMem_interface_tb___024root__trace_init_dtype____15(vlSelf, tracep, "B_buf", 0, c+123, VerilatedTraceSigDirection::NONE);
    VL_TRACE_DECL_BIT(tracep,c+141,0,"wr_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_PUSH_PREFIX(tracep, "a_row", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 2);
    for (int i = 0; i < 3; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+97+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (i + 0), 3,0);
    }
    VL_TRACE_POP_PREFIX(tracep);

    VMem_interface_tb___024root__trace_init_dtype____17(vlSelf, tracep, "skew_a", 0, c+181, VerilatedTraceSigDirection::NONE);

    VMem_interface_tb___024root__trace_init_dtype____18(vlSelf, tracep, "results_internal", 0, c+142, VerilatedTraceSigDirection::NONE);
    VL_TRACE_PUSH_PREFIX(tracep, "deskewed", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 2);
    for (int i = 0; i < 3; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+176+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (i + 0), 9,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_DECL_BUS(tracep,c+190,0,"MARK_DLY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);

    VMem_interface_tb___024root__trace_init_dtype____20(vlSelf, tracep, "mark", 0, c+151, VerilatedTraceSigDirection::NONE);
    VL_TRACE_PUSH_PREFIX(tracep, "genblk2[1]", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_PUSH_PREFIX(tracep, "genblk1", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);

    VMem_interface_tb___024root__trace_init_dtype____21(vlSelf, tracep, "a_dly", 0, c+157, VerilatedTraceSigDirection::NONE);

    VMem_interface_tb___024root__trace_init_dtype____22(vlSelf, tracep, "slot_dly", 0, c+158, VerilatedTraceSigDirection::NONE);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "genblk2[2]", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_PUSH_PREFIX(tracep, "genblk1", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);

    VMem_interface_tb___024root__trace_init_dtype____23(vlSelf, tracep, "a_dly", 0, c+159, VerilatedTraceSigDirection::NONE);

    VMem_interface_tb___024root__trace_init_dtype____24(vlSelf, tracep, "slot_dly", 0, c+161, VerilatedTraceSigDirection::NONE);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "unskew[0]", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_PUSH_PREFIX(tracep, "genblk1", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);

    VMem_interface_tb___024root__trace_init_dtype____25(vlSelf, tracep, "dly", 0, c+163, VerilatedTraceSigDirection::NONE);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "unskew[1]", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_PUSH_PREFIX(tracep, "genblk1", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);

    VMem_interface_tb___024root__trace_init_dtype____26(vlSelf, tracep, "dly", 0, c+165, VerilatedTraceSigDirection::NONE);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void VMem_interface_tb___024root__trace_init_dtype_sub____14(VMem_interface_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void VMem_interface_tb___024root__trace_init_dtype____14(VMem_interface_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMem_interface_tb___024root__trace_init_dtype____14\n"); );
    VMem_interface_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VMem_interface_tb___024root__trace_init_dtype_sub____14(vlSelf, tracep, name, fidx, c, direction);
}

VL_ATTR_COLD void VMem_interface_tb___024root__trace_init_dtype_sub____14(VMem_interface_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMem_interface_tb___024root__trace_init_dtype_sub____14\n"); );
    VMem_interface_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_TRACE_PUSH_PREFIX(tracep, name, VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 1);
    VL_TRACE_PUSH_PREFIX(tracep, "[0]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 2);
    VL_TRACE_PUSH_PREFIX(tracep, "[0]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 2);
    VL_TRACE_DECL_BUS(tracep,c+0,fidx,"[0]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+1,fidx,"[1]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+2,fidx,"[2]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[1]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 2);
    VL_TRACE_DECL_BUS(tracep,c+3,fidx,"[0]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+4,fidx,"[1]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+5,fidx,"[2]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[2]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 2);
    VL_TRACE_DECL_BUS(tracep,c+6,fidx,"[0]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+7,fidx,"[1]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+8,fidx,"[2]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[1]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 2);
    VL_TRACE_PUSH_PREFIX(tracep, "[0]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 2);
    VL_TRACE_DECL_BUS(tracep,c+9,fidx,"[0]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+10,fidx,"[1]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+11,fidx,"[2]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[1]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 2);
    VL_TRACE_DECL_BUS(tracep,c+12,fidx,"[0]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+13,fidx,"[1]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+14,fidx,"[2]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[2]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 2);
    VL_TRACE_DECL_BUS(tracep,c+15,fidx,"[0]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+16,fidx,"[1]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+17,fidx,"[2]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void VMem_interface_tb___024root__trace_init_dtype_sub____15(VMem_interface_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void VMem_interface_tb___024root__trace_init_dtype____15(VMem_interface_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMem_interface_tb___024root__trace_init_dtype____15\n"); );
    VMem_interface_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VMem_interface_tb___024root__trace_init_dtype_sub____15(vlSelf, tracep, name, fidx, c, direction);
}

VL_ATTR_COLD void VMem_interface_tb___024root__trace_init_dtype_sub____15(VMem_interface_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMem_interface_tb___024root__trace_init_dtype_sub____15\n"); );
    VMem_interface_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_TRACE_PUSH_PREFIX(tracep, name, VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 1);
    VL_TRACE_PUSH_PREFIX(tracep, "[0]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 2);
    VL_TRACE_PUSH_PREFIX(tracep, "[0]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 2);
    VL_TRACE_DECL_BUS(tracep,c+0,fidx,"[0]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+1,fidx,"[1]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+2,fidx,"[2]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[1]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 2);
    VL_TRACE_DECL_BUS(tracep,c+3,fidx,"[0]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+4,fidx,"[1]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+5,fidx,"[2]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[2]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 2);
    VL_TRACE_DECL_BUS(tracep,c+6,fidx,"[0]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+7,fidx,"[1]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+8,fidx,"[2]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[1]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 2);
    VL_TRACE_PUSH_PREFIX(tracep, "[0]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 2);
    VL_TRACE_DECL_BUS(tracep,c+9,fidx,"[0]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+10,fidx,"[1]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+11,fidx,"[2]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[1]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 2);
    VL_TRACE_DECL_BUS(tracep,c+12,fidx,"[0]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+13,fidx,"[1]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+14,fidx,"[2]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[2]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 2);
    VL_TRACE_DECL_BUS(tracep,c+15,fidx,"[0]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+16,fidx,"[1]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+17,fidx,"[2]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void VMem_interface_tb___024root__trace_init_dtype_sub____17(VMem_interface_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void VMem_interface_tb___024root__trace_init_dtype____17(VMem_interface_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMem_interface_tb___024root__trace_init_dtype____17\n"); );
    VMem_interface_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VMem_interface_tb___024root__trace_init_dtype_sub____17(vlSelf, tracep, name, fidx, c, direction);
}

VL_ATTR_COLD void VMem_interface_tb___024root__trace_init_dtype_sub____17(VMem_interface_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMem_interface_tb___024root__trace_init_dtype_sub____17\n"); );
    VMem_interface_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_TRACE_PUSH_PREFIX(tracep, name, VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 2);
    VL_TRACE_PUSH_PREFIX(tracep, "[0]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 2);
    VL_TRACE_DECL_BUS(tracep,c+0,fidx,"[0]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+1,fidx,"[1]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+2,fidx,"[2]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[1]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 2);
    VL_TRACE_DECL_BUS(tracep,c+3,fidx,"[0]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+4,fidx,"[1]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+5,fidx,"[2]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[2]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 2);
    VL_TRACE_DECL_BUS(tracep,c+6,fidx,"[0]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+7,fidx,"[1]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+8,fidx,"[2]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void VMem_interface_tb___024root__trace_init_dtype_sub____18(VMem_interface_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void VMem_interface_tb___024root__trace_init_dtype____18(VMem_interface_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMem_interface_tb___024root__trace_init_dtype____18\n"); );
    VMem_interface_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VMem_interface_tb___024root__trace_init_dtype_sub____18(vlSelf, tracep, name, fidx, c, direction);
}

VL_ATTR_COLD void VMem_interface_tb___024root__trace_init_dtype_sub____18(VMem_interface_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMem_interface_tb___024root__trace_init_dtype_sub____18\n"); );
    VMem_interface_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_TRACE_PUSH_PREFIX(tracep, name, VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 2);
    VL_TRACE_PUSH_PREFIX(tracep, "[0]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 2);
    VL_TRACE_DECL_BUS(tracep,c+0,fidx,"[0]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_DECL_BUS(tracep,c+1,fidx,"[1]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_DECL_BUS(tracep,c+2,fidx,"[2]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[1]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 2);
    VL_TRACE_DECL_BUS(tracep,c+3,fidx,"[0]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_DECL_BUS(tracep,c+4,fidx,"[1]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_DECL_BUS(tracep,c+5,fidx,"[2]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[2]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 2);
    VL_TRACE_DECL_BUS(tracep,c+6,fidx,"[0]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_DECL_BUS(tracep,c+7,fidx,"[1]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_DECL_BUS(tracep,c+8,fidx,"[2]",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void VMem_interface_tb___024root__trace_init_dtype_sub____20(VMem_interface_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void VMem_interface_tb___024root__trace_init_dtype____20(VMem_interface_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMem_interface_tb___024root__trace_init_dtype____20\n"); );
    VMem_interface_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VMem_interface_tb___024root__trace_init_dtype_sub____20(vlSelf, tracep, name, fidx, c, direction);
}

VL_ATTR_COLD void VMem_interface_tb___024root__trace_init_dtype_sub____20(VMem_interface_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMem_interface_tb___024root__trace_init_dtype_sub____20\n"); );
    VMem_interface_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_TRACE_PUSH_PREFIX(tracep, name, VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 5);
    for (int i = 0; i < 6; ++i) {
        VL_TRACE_DECL_BIT_ARRAY(tracep,c+0+i*1,fidx,"",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (i + 0));
    }
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void VMem_interface_tb___024root__trace_init_dtype_sub____21(VMem_interface_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void VMem_interface_tb___024root__trace_init_dtype____21(VMem_interface_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMem_interface_tb___024root__trace_init_dtype____21\n"); );
    VMem_interface_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VMem_interface_tb___024root__trace_init_dtype_sub____21(vlSelf, tracep, name, fidx, c, direction);
}

VL_ATTR_COLD void VMem_interface_tb___024root__trace_init_dtype_sub____21(VMem_interface_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMem_interface_tb___024root__trace_init_dtype_sub____21\n"); );
    VMem_interface_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_TRACE_PUSH_PREFIX(tracep, name, VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 0);
    for (int i = 0; i < 1; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+0+i*1,fidx,"",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (0 - i), 3,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void VMem_interface_tb___024root__trace_init_dtype_sub____22(VMem_interface_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void VMem_interface_tb___024root__trace_init_dtype____22(VMem_interface_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMem_interface_tb___024root__trace_init_dtype____22\n"); );
    VMem_interface_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VMem_interface_tb___024root__trace_init_dtype_sub____22(vlSelf, tracep, name, fidx, c, direction);
}

VL_ATTR_COLD void VMem_interface_tb___024root__trace_init_dtype_sub____22(VMem_interface_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMem_interface_tb___024root__trace_init_dtype_sub____22\n"); );
    VMem_interface_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_TRACE_PUSH_PREFIX(tracep, name, VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 0);
    for (int i = 0; i < 1; ++i) {
        VL_TRACE_DECL_BIT_ARRAY(tracep,c+0+i*1,fidx,"",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (0 - i));
    }
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void VMem_interface_tb___024root__trace_init_dtype_sub____23(VMem_interface_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void VMem_interface_tb___024root__trace_init_dtype____23(VMem_interface_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMem_interface_tb___024root__trace_init_dtype____23\n"); );
    VMem_interface_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VMem_interface_tb___024root__trace_init_dtype_sub____23(vlSelf, tracep, name, fidx, c, direction);
}

VL_ATTR_COLD void VMem_interface_tb___024root__trace_init_dtype_sub____23(VMem_interface_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMem_interface_tb___024root__trace_init_dtype_sub____23\n"); );
    VMem_interface_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_TRACE_PUSH_PREFIX(tracep, name, VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 1);
    for (int i = 0; i < 2; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+0+i*1,fidx,"",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (i + 0), 3,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void VMem_interface_tb___024root__trace_init_dtype_sub____24(VMem_interface_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void VMem_interface_tb___024root__trace_init_dtype____24(VMem_interface_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMem_interface_tb___024root__trace_init_dtype____24\n"); );
    VMem_interface_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VMem_interface_tb___024root__trace_init_dtype_sub____24(vlSelf, tracep, name, fidx, c, direction);
}

VL_ATTR_COLD void VMem_interface_tb___024root__trace_init_dtype_sub____24(VMem_interface_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMem_interface_tb___024root__trace_init_dtype_sub____24\n"); );
    VMem_interface_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_TRACE_PUSH_PREFIX(tracep, name, VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 1);
    for (int i = 0; i < 2; ++i) {
        VL_TRACE_DECL_BIT_ARRAY(tracep,c+0+i*1,fidx,"",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (i + 0));
    }
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void VMem_interface_tb___024root__trace_init_dtype_sub____25(VMem_interface_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void VMem_interface_tb___024root__trace_init_dtype____25(VMem_interface_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMem_interface_tb___024root__trace_init_dtype____25\n"); );
    VMem_interface_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VMem_interface_tb___024root__trace_init_dtype_sub____25(vlSelf, tracep, name, fidx, c, direction);
}

VL_ATTR_COLD void VMem_interface_tb___024root__trace_init_dtype_sub____25(VMem_interface_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMem_interface_tb___024root__trace_init_dtype_sub____25\n"); );
    VMem_interface_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_TRACE_PUSH_PREFIX(tracep, name, VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 1);
    for (int i = 0; i < 2; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+0+i*1,fidx,"",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (i + 0), 9,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void VMem_interface_tb___024root__trace_init_dtype_sub____26(VMem_interface_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void VMem_interface_tb___024root__trace_init_dtype____26(VMem_interface_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMem_interface_tb___024root__trace_init_dtype____26\n"); );
    VMem_interface_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VMem_interface_tb___024root__trace_init_dtype_sub____26(vlSelf, tracep, name, fidx, c, direction);
}

VL_ATTR_COLD void VMem_interface_tb___024root__trace_init_dtype_sub____26(VMem_interface_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMem_interface_tb___024root__trace_init_dtype_sub____26\n"); );
    VMem_interface_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_TRACE_PUSH_PREFIX(tracep, name, VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 0);
    for (int i = 0; i < 1; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+0+i*1,fidx,"",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (0 - i), 9,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void VMem_interface_tb___024root__trace_init_top(VMem_interface_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMem_interface_tb___024root__trace_init_top\n"); );
    VMem_interface_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VMem_interface_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VMem_interface_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void VMem_interface_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VMem_interface_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VMem_interface_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VMem_interface_tb___024root__trace_register(VMem_interface_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMem_interface_tb___024root__trace_register\n"); );
    VMem_interface_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&VMem_interface_tb___024root__trace_const_0, 0, vlSelf);
    tracep->addFullCb(&VMem_interface_tb___024root__trace_full_0, 0, vlSelf);
    tracep->addChgCb(&VMem_interface_tb___024root__trace_chg_0, 0, vlSelf);
    tracep->addCleanupCb(&VMem_interface_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VMem_interface_tb___024root__trace_const_0_sub_0(VMem_interface_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VMem_interface_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMem_interface_tb___024root__trace_const_0\n"); );
    // Body
    VMem_interface_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VMem_interface_tb___024root*>(voidSelf);
    VMem_interface_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VMem_interface_tb___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VMem_interface_tb___024root__trace_const_dtype____0(VMem_interface_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<VlUnpacked<CData/*3:0*/, 3>, 3>& __VdtypeVar);

VL_ATTR_COLD void VMem_interface_tb___024root__trace_const_0_sub_0(VMem_interface_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMem_interface_tb___024root__trace_const_0_sub_0\n"); );
    VMem_interface_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullIData(oldp+179,(3U),32);
    bufp->fullIData(oldp+180,(2U),32);
    VMem_interface_tb___024root__trace_const_dtype____0(vlSelf, bufp, 181, vlSelfRef.Mem_interface_tb__DOT__dut__DOT__skew_a);
    bufp->fullIData(oldp+190,(6U),32);
}

VL_ATTR_COLD void VMem_interface_tb___024root__trace_const_dtype____0(VMem_interface_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<VlUnpacked<CData/*3:0*/, 3>, 3>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMem_interface_tb___024root__trace_const_dtype____0\n"); );
    VMem_interface_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + offset);
    bufp->fullCData(oldp+0,(__VdtypeVar[0U][0U]),4);
    bufp->fullCData(oldp+1,(__VdtypeVar[0U][1U]),4);
    bufp->fullCData(oldp+2,(__VdtypeVar[0U][2U]),4);
    bufp->fullCData(oldp+3,(__VdtypeVar[1U][0U]),4);
    bufp->fullCData(oldp+4,(__VdtypeVar[1U][1U]),4);
    bufp->fullCData(oldp+5,(__VdtypeVar[1U][2U]),4);
    bufp->fullCData(oldp+6,(__VdtypeVar[2U][0U]),4);
    bufp->fullCData(oldp+7,(__VdtypeVar[2U][1U]),4);
    bufp->fullCData(oldp+8,(__VdtypeVar[2U][2U]),4);
}

VL_ATTR_COLD void VMem_interface_tb___024root__trace_full_0_sub_0(VMem_interface_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VMem_interface_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMem_interface_tb___024root__trace_full_0\n"); );
    // Body
    VMem_interface_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VMem_interface_tb___024root*>(voidSelf);
    VMem_interface_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VMem_interface_tb___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VMem_interface_tb___024root__trace_full_dtype____0(VMem_interface_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<VlUnpacked<VlUnpacked<CData/*3:0*/, 3>, 3>, 2>& __VdtypeVar);
VL_ATTR_COLD void VMem_interface_tb___024root__trace_full_dtype____1(VMem_interface_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<VlUnpacked<VlUnpacked<CData/*3:0*/, 3>, 3>, 2>& __VdtypeVar);
VL_ATTR_COLD void VMem_interface_tb___024root__trace_full_dtype____2(VMem_interface_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<VlUnpacked<SData/*9:0*/, 3>, 3>& __VdtypeVar);
VL_ATTR_COLD void VMem_interface_tb___024root__trace_full_dtype____3(VMem_interface_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*0:0*/, 6>& __VdtypeVar);
VL_ATTR_COLD void VMem_interface_tb___024root__trace_full_dtype____4(VMem_interface_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*3:0*/, 1>& __VdtypeVar);
VL_ATTR_COLD void VMem_interface_tb___024root__trace_full_dtype____5(VMem_interface_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*0:0*/, 1>& __VdtypeVar);
VL_ATTR_COLD void VMem_interface_tb___024root__trace_full_dtype____6(VMem_interface_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*3:0*/, 2>& __VdtypeVar);
VL_ATTR_COLD void VMem_interface_tb___024root__trace_full_dtype____7(VMem_interface_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*0:0*/, 2>& __VdtypeVar);
VL_ATTR_COLD void VMem_interface_tb___024root__trace_full_dtype____8(VMem_interface_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<SData/*9:0*/, 2>& __VdtypeVar);
VL_ATTR_COLD void VMem_interface_tb___024root__trace_full_dtype____9(VMem_interface_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<SData/*9:0*/, 1>& __VdtypeVar);

VL_ATTR_COLD void VMem_interface_tb___024root__trace_full_0_sub_0(VMem_interface_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMem_interface_tb___024root__trace_full_0_sub_0\n"); );
    VMem_interface_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullBit(oldp+0,(vlSelfRef.Mem_interface_tb__DOT__rst_n));
    bufp->fullBit(oldp+1,(vlSelfRef.Mem_interface_tb__DOT__load_slot));
    bufp->fullBit(oldp+2,(vlSelfRef.Mem_interface_tb__DOT__feed));
    bufp->fullBit(oldp+3,(vlSelfRef.Mem_interface_tb__DOT__row_slot));
    bufp->fullBit(oldp+4,(vlSelfRef.Mem_interface_tb__DOT__en));
    bufp->fullBit(oldp+5,(vlSelfRef.Mem_interface_tb__DOT__done));
    bufp->fullCData(oldp+6,(vlSelfRef.Mem_interface_tb__DOT__row_idx),2);
    bufp->fullBit(oldp+7,(vlSelfRef.Mem_interface_tb__DOT__in_valid));
    bufp->fullQData(oldp+8,(vlSelfRef.Mem_interface_tb__DOT__a_packed),36);
    bufp->fullQData(oldp+10,(vlSelfRef.Mem_interface_tb__DOT__b_packed),36);
    bufp->fullSData(oldp+12,(vlSelfRef.Mem_interface_tb__DOT__results_in[0]),10);
    bufp->fullSData(oldp+13,(vlSelfRef.Mem_interface_tb__DOT__results_in[1]),10);
    bufp->fullSData(oldp+14,(vlSelfRef.Mem_interface_tb__DOT__results_in[2]),10);
    bufp->fullIData(oldp+15,(vlSelfRef.Mem_interface_tb__DOT__m),32);
    bufp->fullCData(oldp+16,(vlSelfRef.Mem_interface_tb__DOT__A[0U][0U]),4);
    bufp->fullCData(oldp+17,(vlSelfRef.Mem_interface_tb__DOT__A[0U][1U]),4);
    bufp->fullCData(oldp+18,(vlSelfRef.Mem_interface_tb__DOT__A[0U][2U]),4);
    bufp->fullCData(oldp+19,(vlSelfRef.Mem_interface_tb__DOT__A[1U][0U]),4);
    bufp->fullCData(oldp+20,(vlSelfRef.Mem_interface_tb__DOT__A[1U][1U]),4);
    bufp->fullCData(oldp+21,(vlSelfRef.Mem_interface_tb__DOT__A[1U][2U]),4);
    bufp->fullCData(oldp+22,(vlSelfRef.Mem_interface_tb__DOT__A[2U][0U]),4);
    bufp->fullCData(oldp+23,(vlSelfRef.Mem_interface_tb__DOT__A[2U][1U]),4);
    bufp->fullCData(oldp+24,(vlSelfRef.Mem_interface_tb__DOT__A[2U][2U]),4);
    bufp->fullCData(oldp+25,(vlSelfRef.Mem_interface_tb__DOT__A2[0U][0U]),4);
    bufp->fullCData(oldp+26,(vlSelfRef.Mem_interface_tb__DOT__A2[0U][1U]),4);
    bufp->fullCData(oldp+27,(vlSelfRef.Mem_interface_tb__DOT__A2[0U][2U]),4);
    bufp->fullCData(oldp+28,(vlSelfRef.Mem_interface_tb__DOT__A2[1U][0U]),4);
    bufp->fullCData(oldp+29,(vlSelfRef.Mem_interface_tb__DOT__A2[1U][1U]),4);
    bufp->fullCData(oldp+30,(vlSelfRef.Mem_interface_tb__DOT__A2[1U][2U]),4);
    bufp->fullCData(oldp+31,(vlSelfRef.Mem_interface_tb__DOT__A2[2U][0U]),4);
    bufp->fullCData(oldp+32,(vlSelfRef.Mem_interface_tb__DOT__A2[2U][1U]),4);
    bufp->fullCData(oldp+33,(vlSelfRef.Mem_interface_tb__DOT__A2[2U][2U]),4);
    bufp->fullCData(oldp+34,(vlSelfRef.Mem_interface_tb__DOT__B[0U][0U]),4);
    bufp->fullCData(oldp+35,(vlSelfRef.Mem_interface_tb__DOT__B[0U][1U]),4);
    bufp->fullCData(oldp+36,(vlSelfRef.Mem_interface_tb__DOT__B[0U][2U]),4);
    bufp->fullCData(oldp+37,(vlSelfRef.Mem_interface_tb__DOT__B[1U][0U]),4);
    bufp->fullCData(oldp+38,(vlSelfRef.Mem_interface_tb__DOT__B[1U][1U]),4);
    bufp->fullCData(oldp+39,(vlSelfRef.Mem_interface_tb__DOT__B[1U][2U]),4);
    bufp->fullCData(oldp+40,(vlSelfRef.Mem_interface_tb__DOT__B[2U][0U]),4);
    bufp->fullCData(oldp+41,(vlSelfRef.Mem_interface_tb__DOT__B[2U][1U]),4);
    bufp->fullCData(oldp+42,(vlSelfRef.Mem_interface_tb__DOT__B[2U][2U]),4);
    bufp->fullCData(oldp+43,(vlSelfRef.Mem_interface_tb__DOT__B2[0U][0U]),4);
    bufp->fullCData(oldp+44,(vlSelfRef.Mem_interface_tb__DOT__B2[0U][1U]),4);
    bufp->fullCData(oldp+45,(vlSelfRef.Mem_interface_tb__DOT__B2[0U][2U]),4);
    bufp->fullCData(oldp+46,(vlSelfRef.Mem_interface_tb__DOT__B2[1U][0U]),4);
    bufp->fullCData(oldp+47,(vlSelfRef.Mem_interface_tb__DOT__B2[1U][1U]),4);
    bufp->fullCData(oldp+48,(vlSelfRef.Mem_interface_tb__DOT__B2[1U][2U]),4);
    bufp->fullCData(oldp+49,(vlSelfRef.Mem_interface_tb__DOT__B2[2U][0U]),4);
    bufp->fullCData(oldp+50,(vlSelfRef.Mem_interface_tb__DOT__B2[2U][1U]),4);
    bufp->fullCData(oldp+51,(vlSelfRef.Mem_interface_tb__DOT__B2[2U][2U]),4);
    bufp->fullSData(oldp+52,(vlSelfRef.Mem_interface_tb__DOT____Vcellinp__dut__results_in[0]),10);
    bufp->fullSData(oldp+53,(vlSelfRef.Mem_interface_tb__DOT____Vcellinp__dut__results_in[1]),10);
    bufp->fullSData(oldp+54,(vlSelfRef.Mem_interface_tb__DOT____Vcellinp__dut__results_in[2]),10);
    bufp->fullCData(oldp+55,(vlSelfRef.Mem_interface_tb__DOT__dut__DOT__a_internal[0U][0U]),4);
    bufp->fullCData(oldp+56,(vlSelfRef.Mem_interface_tb__DOT__dut__DOT__a_internal[0U][1U]),4);
    bufp->fullCData(oldp+57,(vlSelfRef.Mem_interface_tb__DOT__dut__DOT__a_internal[0U][2U]),4);
    bufp->fullCData(oldp+58,(vlSelfRef.Mem_interface_tb__DOT__dut__DOT__a_internal[1U][0U]),4);
    bufp->fullCData(oldp+59,(vlSelfRef.Mem_interface_tb__DOT__dut__DOT__a_internal[1U][1U]),4);
    bufp->fullCData(oldp+60,(vlSelfRef.Mem_interface_tb__DOT__dut__DOT__a_internal[1U][2U]),4);
    bufp->fullCData(oldp+61,(vlSelfRef.Mem_interface_tb__DOT__dut__DOT__a_internal[2U][0U]),4);
    bufp->fullCData(oldp+62,(vlSelfRef.Mem_interface_tb__DOT__dut__DOT__a_internal[2U][1U]),4);
    bufp->fullCData(oldp+63,(vlSelfRef.Mem_interface_tb__DOT__dut__DOT__a_internal[2U][2U]),4);
    bufp->fullCData(oldp+64,(vlSelfRef.Mem_interface_tb__DOT__dut__DOT__b_internal[0U][0U]),4);
    bufp->fullCData(oldp+65,(vlSelfRef.Mem_interface_tb__DOT__dut__DOT__b_internal[0U][1U]),4);
    bufp->fullCData(oldp+66,(vlSelfRef.Mem_interface_tb__DOT__dut__DOT__b_internal[0U][2U]),4);
    bufp->fullCData(oldp+67,(vlSelfRef.Mem_interface_tb__DOT__dut__DOT__b_internal[1U][0U]),4);
    bufp->fullCData(oldp+68,(vlSelfRef.Mem_interface_tb__DOT__dut__DOT__b_internal[1U][1U]),4);
    bufp->fullCData(oldp+69,(vlSelfRef.Mem_interface_tb__DOT__dut__DOT__b_internal[1U][2U]),4);
    bufp->fullCData(oldp+70,(vlSelfRef.Mem_interface_tb__DOT__dut__DOT__b_internal[2U][0U]),4);
    bufp->fullCData(oldp+71,(vlSelfRef.Mem_interface_tb__DOT__dut__DOT__b_internal[2U][1U]),4);
    bufp->fullCData(oldp+72,(vlSelfRef.Mem_interface_tb__DOT__dut__DOT__b_internal[2U][2U]),4);
    bufp->fullCData(oldp+73,(vlSelfRef.Mem_interface_tb__DOT__a_skewed[0]),4);
    bufp->fullCData(oldp+74,(vlSelfRef.Mem_interface_tb__DOT__a_skewed[1]),4);
    bufp->fullCData(oldp+75,(vlSelfRef.Mem_interface_tb__DOT__a_skewed[2]),4);
    bufp->fullBit(oldp+76,(vlSelfRef.Mem_interface_tb__DOT__skewed_slot[0]));
    bufp->fullBit(oldp+77,(vlSelfRef.Mem_interface_tb__DOT__skewed_slot[1]));
    bufp->fullBit(oldp+78,(vlSelfRef.Mem_interface_tb__DOT__skewed_slot[2]));
    bufp->fullCData(oldp+79,(vlSelfRef.Mem_interface_tb__DOT__b_out[0U][0U]),4);
    bufp->fullCData(oldp+80,(vlSelfRef.Mem_interface_tb__DOT__b_out[0U][1U]),4);
    bufp->fullCData(oldp+81,(vlSelfRef.Mem_interface_tb__DOT__b_out[0U][2U]),4);
    bufp->fullCData(oldp+82,(vlSelfRef.Mem_interface_tb__DOT__b_out[1U][0U]),4);
    bufp->fullCData(oldp+83,(vlSelfRef.Mem_interface_tb__DOT__b_out[1U][1U]),4);
    bufp->fullCData(oldp+84,(vlSelfRef.Mem_interface_tb__DOT__b_out[1U][2U]),4);
    bufp->fullCData(oldp+85,(vlSelfRef.Mem_interface_tb__DOT__b_out[2U][0U]),4);
    bufp->fullCData(oldp+86,(vlSelfRef.Mem_interface_tb__DOT__b_out[2U][1U]),4);
    bufp->fullCData(oldp+87,(vlSelfRef.Mem_interface_tb__DOT__b_out[2U][2U]),4);
    bufp->fullCData(oldp+88,(vlSelfRef.Mem_interface_tb__DOT____Vcellout__dut__b_out[0U][0U]),4);
    bufp->fullCData(oldp+89,(vlSelfRef.Mem_interface_tb__DOT____Vcellout__dut__b_out[0U][1U]),4);
    bufp->fullCData(oldp+90,(vlSelfRef.Mem_interface_tb__DOT____Vcellout__dut__b_out[0U][2U]),4);
    bufp->fullCData(oldp+91,(vlSelfRef.Mem_interface_tb__DOT____Vcellout__dut__b_out[1U][0U]),4);
    bufp->fullCData(oldp+92,(vlSelfRef.Mem_interface_tb__DOT____Vcellout__dut__b_out[1U][1U]),4);
    bufp->fullCData(oldp+93,(vlSelfRef.Mem_interface_tb__DOT____Vcellout__dut__b_out[1U][2U]),4);
    bufp->fullCData(oldp+94,(vlSelfRef.Mem_interface_tb__DOT____Vcellout__dut__b_out[2U][0U]),4);
    bufp->fullCData(oldp+95,(vlSelfRef.Mem_interface_tb__DOT____Vcellout__dut__b_out[2U][1U]),4);
    bufp->fullCData(oldp+96,(vlSelfRef.Mem_interface_tb__DOT____Vcellout__dut__b_out[2U][2U]),4);
    bufp->fullCData(oldp+97,(vlSelfRef.Mem_interface_tb__DOT__dut__DOT__a_row[0]),4);
    bufp->fullCData(oldp+98,(vlSelfRef.Mem_interface_tb__DOT__dut__DOT__a_row[1]),4);
    bufp->fullCData(oldp+99,(vlSelfRef.Mem_interface_tb__DOT__dut__DOT__a_row[2]),4);
    bufp->fullCData(oldp+100,(vlSelfRef.Mem_interface_tb__DOT__entry_valid),2);
    bufp->fullWData(oldp+101,(vlSelfRef.Mem_interface_tb__DOT__results_packed),90);
    bufp->fullBit(oldp+104,(vlSelfRef.Mem_interface_tb__DOT__dut__DOT__mark[5U]));
    VMem_interface_tb___024root__trace_full_dtype____0(vlSelf, bufp, 105, vlSelfRef.Mem_interface_tb__DOT__dut__DOT__A_buf);
    VMem_interface_tb___024root__trace_full_dtype____1(vlSelf, bufp, 123, vlSelfRef.Mem_interface_tb__DOT__dut__DOT__B_buf);
    bufp->fullBit(oldp+141,(vlSelfRef.Mem_interface_tb__DOT__dut__DOT__wr_ptr));
    VMem_interface_tb___024root__trace_full_dtype____2(vlSelf, bufp, 142, vlSelfRef.Mem_interface_tb__DOT__dut__DOT__results_internal);
    VMem_interface_tb___024root__trace_full_dtype____3(vlSelf, bufp, 151, vlSelfRef.Mem_interface_tb__DOT__dut__DOT__mark);
    VMem_interface_tb___024root__trace_full_dtype____4(vlSelf, bufp, 157, vlSelfRef.Mem_interface_tb__DOT__dut__DOT__genblk2__BRA__1__KET____DOT__genblk1__DOT__a_dly);
    VMem_interface_tb___024root__trace_full_dtype____5(vlSelf, bufp, 158, vlSelfRef.Mem_interface_tb__DOT__dut__DOT__genblk2__BRA__1__KET____DOT__genblk1__DOT__slot_dly);
    VMem_interface_tb___024root__trace_full_dtype____6(vlSelf, bufp, 159, vlSelfRef.Mem_interface_tb__DOT__dut__DOT__genblk2__BRA__2__KET____DOT__genblk1__DOT__a_dly);
    VMem_interface_tb___024root__trace_full_dtype____7(vlSelf, bufp, 161, vlSelfRef.Mem_interface_tb__DOT__dut__DOT__genblk2__BRA__2__KET____DOT__genblk1__DOT__slot_dly);
    VMem_interface_tb___024root__trace_full_dtype____8(vlSelf, bufp, 163, vlSelfRef.Mem_interface_tb__DOT__dut__DOT__unskew__BRA__0__KET____DOT__genblk1__DOT__dly);
    VMem_interface_tb___024root__trace_full_dtype____9(vlSelf, bufp, 165, vlSelfRef.Mem_interface_tb__DOT__dut__DOT__unskew__BRA__1__KET____DOT__genblk1__DOT__dly);
    bufp->fullBit(oldp+166,(vlSelfRef.Mem_interface_tb__DOT__clk));
    bufp->fullIData(oldp+167,(vlSelfRef.Mem_interface_tb__DOT__checks),32);
    bufp->fullIData(oldp+168,(vlSelfRef.Mem_interface_tb__DOT__errors),32);
    bufp->fullIData(oldp+169,(vlSelfRef.Mem_interface_tb__DOT__test_errors),32);
    bufp->fullCData(oldp+170,(vlSelfRef.Mem_interface_tb__DOT____Vcellout__dut__a_skewed[0]),4);
    bufp->fullCData(oldp+171,(vlSelfRef.Mem_interface_tb__DOT____Vcellout__dut__a_skewed[1]),4);
    bufp->fullCData(oldp+172,(vlSelfRef.Mem_interface_tb__DOT____Vcellout__dut__a_skewed[2]),4);
    bufp->fullBit(oldp+173,(vlSelfRef.Mem_interface_tb__DOT____Vcellout__dut__skewed_slot[0]));
    bufp->fullBit(oldp+174,(vlSelfRef.Mem_interface_tb__DOT____Vcellout__dut__skewed_slot[1]));
    bufp->fullBit(oldp+175,(vlSelfRef.Mem_interface_tb__DOT____Vcellout__dut__skewed_slot[2]));
    bufp->fullSData(oldp+176,(vlSelfRef.Mem_interface_tb__DOT__dut__DOT__deskewed[0]),10);
    bufp->fullSData(oldp+177,(vlSelfRef.Mem_interface_tb__DOT__dut__DOT__deskewed[1]),10);
    bufp->fullSData(oldp+178,(vlSelfRef.Mem_interface_tb__DOT__dut__DOT__deskewed[2]),10);
}

VL_ATTR_COLD void VMem_interface_tb___024root__trace_full_dtype____0(VMem_interface_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<VlUnpacked<VlUnpacked<CData/*3:0*/, 3>, 3>, 2>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMem_interface_tb___024root__trace_full_dtype____0\n"); );
    VMem_interface_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + offset);
    bufp->fullCData(oldp+0,(__VdtypeVar[0U][0U][0U]),4);
    bufp->fullCData(oldp+1,(__VdtypeVar[0U][0U][1U]),4);
    bufp->fullCData(oldp+2,(__VdtypeVar[0U][0U][2U]),4);
    bufp->fullCData(oldp+3,(__VdtypeVar[0U][1U][0U]),4);
    bufp->fullCData(oldp+4,(__VdtypeVar[0U][1U][1U]),4);
    bufp->fullCData(oldp+5,(__VdtypeVar[0U][1U][2U]),4);
    bufp->fullCData(oldp+6,(__VdtypeVar[0U][2U][0U]),4);
    bufp->fullCData(oldp+7,(__VdtypeVar[0U][2U][1U]),4);
    bufp->fullCData(oldp+8,(__VdtypeVar[0U][2U][2U]),4);
    bufp->fullCData(oldp+9,(__VdtypeVar[1U][0U][0U]),4);
    bufp->fullCData(oldp+10,(__VdtypeVar[1U][0U][1U]),4);
    bufp->fullCData(oldp+11,(__VdtypeVar[1U][0U][2U]),4);
    bufp->fullCData(oldp+12,(__VdtypeVar[1U][1U][0U]),4);
    bufp->fullCData(oldp+13,(__VdtypeVar[1U][1U][1U]),4);
    bufp->fullCData(oldp+14,(__VdtypeVar[1U][1U][2U]),4);
    bufp->fullCData(oldp+15,(__VdtypeVar[1U][2U][0U]),4);
    bufp->fullCData(oldp+16,(__VdtypeVar[1U][2U][1U]),4);
    bufp->fullCData(oldp+17,(__VdtypeVar[1U][2U][2U]),4);
}

VL_ATTR_COLD void VMem_interface_tb___024root__trace_full_dtype____1(VMem_interface_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<VlUnpacked<VlUnpacked<CData/*3:0*/, 3>, 3>, 2>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMem_interface_tb___024root__trace_full_dtype____1\n"); );
    VMem_interface_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + offset);
    bufp->fullCData(oldp+0,(__VdtypeVar[0U][0U][0U]),4);
    bufp->fullCData(oldp+1,(__VdtypeVar[0U][0U][1U]),4);
    bufp->fullCData(oldp+2,(__VdtypeVar[0U][0U][2U]),4);
    bufp->fullCData(oldp+3,(__VdtypeVar[0U][1U][0U]),4);
    bufp->fullCData(oldp+4,(__VdtypeVar[0U][1U][1U]),4);
    bufp->fullCData(oldp+5,(__VdtypeVar[0U][1U][2U]),4);
    bufp->fullCData(oldp+6,(__VdtypeVar[0U][2U][0U]),4);
    bufp->fullCData(oldp+7,(__VdtypeVar[0U][2U][1U]),4);
    bufp->fullCData(oldp+8,(__VdtypeVar[0U][2U][2U]),4);
    bufp->fullCData(oldp+9,(__VdtypeVar[1U][0U][0U]),4);
    bufp->fullCData(oldp+10,(__VdtypeVar[1U][0U][1U]),4);
    bufp->fullCData(oldp+11,(__VdtypeVar[1U][0U][2U]),4);
    bufp->fullCData(oldp+12,(__VdtypeVar[1U][1U][0U]),4);
    bufp->fullCData(oldp+13,(__VdtypeVar[1U][1U][1U]),4);
    bufp->fullCData(oldp+14,(__VdtypeVar[1U][1U][2U]),4);
    bufp->fullCData(oldp+15,(__VdtypeVar[1U][2U][0U]),4);
    bufp->fullCData(oldp+16,(__VdtypeVar[1U][2U][1U]),4);
    bufp->fullCData(oldp+17,(__VdtypeVar[1U][2U][2U]),4);
}

VL_ATTR_COLD void VMem_interface_tb___024root__trace_full_dtype____2(VMem_interface_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<VlUnpacked<SData/*9:0*/, 3>, 3>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMem_interface_tb___024root__trace_full_dtype____2\n"); );
    VMem_interface_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + offset);
    bufp->fullSData(oldp+0,(__VdtypeVar[0U][0U]),10);
    bufp->fullSData(oldp+1,(__VdtypeVar[0U][1U]),10);
    bufp->fullSData(oldp+2,(__VdtypeVar[0U][2U]),10);
    bufp->fullSData(oldp+3,(__VdtypeVar[1U][0U]),10);
    bufp->fullSData(oldp+4,(__VdtypeVar[1U][1U]),10);
    bufp->fullSData(oldp+5,(__VdtypeVar[1U][2U]),10);
    bufp->fullSData(oldp+6,(__VdtypeVar[2U][0U]),10);
    bufp->fullSData(oldp+7,(__VdtypeVar[2U][1U]),10);
    bufp->fullSData(oldp+8,(__VdtypeVar[2U][2U]),10);
}

VL_ATTR_COLD void VMem_interface_tb___024root__trace_full_dtype____3(VMem_interface_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*0:0*/, 6>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMem_interface_tb___024root__trace_full_dtype____3\n"); );
    VMem_interface_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + offset);
    bufp->fullBit(oldp+0,(__VdtypeVar[0]));
    bufp->fullBit(oldp+1,(__VdtypeVar[1]));
    bufp->fullBit(oldp+2,(__VdtypeVar[2]));
    bufp->fullBit(oldp+3,(__VdtypeVar[3]));
    bufp->fullBit(oldp+4,(__VdtypeVar[4]));
    bufp->fullBit(oldp+5,(__VdtypeVar[5]));
}

VL_ATTR_COLD void VMem_interface_tb___024root__trace_full_dtype____4(VMem_interface_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*3:0*/, 1>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMem_interface_tb___024root__trace_full_dtype____4\n"); );
    VMem_interface_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + offset);
    bufp->fullCData(oldp+0,(__VdtypeVar[0]),4);
}

VL_ATTR_COLD void VMem_interface_tb___024root__trace_full_dtype____5(VMem_interface_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*0:0*/, 1>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMem_interface_tb___024root__trace_full_dtype____5\n"); );
    VMem_interface_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + offset);
    bufp->fullBit(oldp+0,(__VdtypeVar[0]));
}

VL_ATTR_COLD void VMem_interface_tb___024root__trace_full_dtype____6(VMem_interface_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*3:0*/, 2>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMem_interface_tb___024root__trace_full_dtype____6\n"); );
    VMem_interface_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + offset);
    bufp->fullCData(oldp+0,(__VdtypeVar[0]),4);
    bufp->fullCData(oldp+1,(__VdtypeVar[1]),4);
}

VL_ATTR_COLD void VMem_interface_tb___024root__trace_full_dtype____7(VMem_interface_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*0:0*/, 2>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMem_interface_tb___024root__trace_full_dtype____7\n"); );
    VMem_interface_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + offset);
    bufp->fullBit(oldp+0,(__VdtypeVar[0]));
    bufp->fullBit(oldp+1,(__VdtypeVar[1]));
}

VL_ATTR_COLD void VMem_interface_tb___024root__trace_full_dtype____8(VMem_interface_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<SData/*9:0*/, 2>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMem_interface_tb___024root__trace_full_dtype____8\n"); );
    VMem_interface_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + offset);
    bufp->fullSData(oldp+0,(__VdtypeVar[0]),10);
    bufp->fullSData(oldp+1,(__VdtypeVar[1]),10);
}

VL_ATTR_COLD void VMem_interface_tb___024root__trace_full_dtype____9(VMem_interface_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<SData/*9:0*/, 1>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMem_interface_tb___024root__trace_full_dtype____9\n"); );
    VMem_interface_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + offset);
    bufp->fullSData(oldp+0,(__VdtypeVar[0]),10);
}
