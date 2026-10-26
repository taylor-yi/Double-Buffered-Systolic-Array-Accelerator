// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vsystolic_tb__Syms.h"


VL_ATTR_COLD void Vsystolic_tb___024root__trace_init_dtype____4(Vsystolic_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);
VL_ATTR_COLD void Vsystolic_tb___024root__trace_init_dtype____5(Vsystolic_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);
VL_ATTR_COLD void Vsystolic_tb___024root__trace_init_dtype____6(Vsystolic_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);
VL_ATTR_COLD void Vsystolic_tb___024root__trace_init_dtype____7(Vsystolic_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);
VL_ATTR_COLD void Vsystolic_tb___024root__trace_init_dtype____21(Vsystolic_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);
VL_ATTR_COLD void Vsystolic_tb___024root__trace_init_dtype____22(Vsystolic_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);
VL_ATTR_COLD void Vsystolic_tb___024root__trace_init_dtype____24(Vsystolic_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);
VL_ATTR_COLD void Vsystolic_tb___024root__trace_init_dtype____25(Vsystolic_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);
VL_ATTR_COLD void Vsystolic_tb___024root__trace_init_dtype____27(Vsystolic_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);
VL_ATTR_COLD void Vsystolic_tb___024root__trace_init_dtype____28(Vsystolic_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);
VL_ATTR_COLD void Vsystolic_tb___024root__trace_init_dtype____29(Vsystolic_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);
VL_ATTR_COLD void Vsystolic_tb___024root__trace_init_dtype____30(Vsystolic_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);
VL_ATTR_COLD void Vsystolic_tb___024root__trace_init_dtype____31(Vsystolic_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);
VL_ATTR_COLD void Vsystolic_tb___024root__trace_init_dtype____32(Vsystolic_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);
VL_ATTR_COLD void Vsystolic_tb___024root__trace_init_dtype____33(Vsystolic_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void Vsystolic_tb___024root__trace_init_sub__TOP__0(Vsystolic_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_tb___024root__trace_init_sub__TOP__0\n"); );
    Vsystolic_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_PUSH_PREFIX(tracep, "systolic_tb", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"rst_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+339,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+1,0,"a11",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+2,0,"a12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+3,0,"a13",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+4,0,"a21",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+5,0,"a22",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+6,0,"a23",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+7,0,"a31",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+8,0,"a32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+9,0,"a33",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+10,0,"b11",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+11,0,"b12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+12,0,"b13",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+13,0,"b21",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+14,0,"b22",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+15,0,"b23",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+16,0,"b31",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+17,0,"b32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+18,0,"b33",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+19,0,"in_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+99,0,"C11",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_DECL_BUS(tracep,c+100,0,"C12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_DECL_BUS(tracep,c+101,0,"C13",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_DECL_BUS(tracep,c+102,0,"C21",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_DECL_BUS(tracep,c+103,0,"C22",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_DECL_BUS(tracep,c+104,0,"C23",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_DECL_BUS(tracep,c+105,0,"C31",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_DECL_BUS(tracep,c+106,0,"C32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_DECL_BUS(tracep,c+107,0,"C33",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_DECL_BIT(tracep,c+108,0,"out_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+340,0,"errors",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+341,0,"checks",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+20,0,"test_errors",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+21,0,"jobs",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+22,0,"gap",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_PUSH_PREFIX(tracep, "A", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 1);
    VL_TRACE_PUSH_PREFIX(tracep, "[0]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 2);
    VL_TRACE_PUSH_PREFIX(tracep, "[0]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 2);
    VL_TRACE_DECL_BUS(tracep,c+23,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+24,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+25,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[1]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 2);
    VL_TRACE_DECL_BUS(tracep,c+26,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+27,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+28,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[2]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 2);
    VL_TRACE_DECL_BUS(tracep,c+29,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+30,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+31,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[1]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 2);
    VL_TRACE_PUSH_PREFIX(tracep, "[0]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 2);
    VL_TRACE_DECL_BUS(tracep,c+32,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+33,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+34,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[1]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 2);
    VL_TRACE_DECL_BUS(tracep,c+35,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+36,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+37,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[2]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 2);
    VL_TRACE_DECL_BUS(tracep,c+38,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+39,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+40,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "B", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 1);
    VL_TRACE_PUSH_PREFIX(tracep, "[0]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 2);
    VL_TRACE_PUSH_PREFIX(tracep, "[0]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 2);
    VL_TRACE_DECL_BUS(tracep,c+41,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+42,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+43,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[1]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 2);
    VL_TRACE_DECL_BUS(tracep,c+44,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+45,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+46,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[2]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 2);
    VL_TRACE_DECL_BUS(tracep,c+47,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+48,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+49,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[1]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 2);
    VL_TRACE_PUSH_PREFIX(tracep, "[0]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 2);
    VL_TRACE_DECL_BUS(tracep,c+50,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+51,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+52,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[1]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 2);
    VL_TRACE_DECL_BUS(tracep,c+53,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+54,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+55,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[2]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 2);
    VL_TRACE_DECL_BUS(tracep,c+56,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+57,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+58,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "C_exp", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 1);
    VL_TRACE_PUSH_PREFIX(tracep, "[0]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 2);
    VL_TRACE_PUSH_PREFIX(tracep, "[0]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 2);
    VL_TRACE_DECL_BUS(tracep,c+59,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+60,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+61,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[1]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 2);
    VL_TRACE_DECL_BUS(tracep,c+62,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+63,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+64,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[2]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 2);
    VL_TRACE_DECL_BUS(tracep,c+65,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+66,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+67,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[1]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 2);
    VL_TRACE_PUSH_PREFIX(tracep, "[0]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 2);
    VL_TRACE_DECL_BUS(tracep,c+68,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+69,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+70,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[1]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 2);
    VL_TRACE_DECL_BUS(tracep,c+71,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+72,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+73,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[2]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 2);
    VL_TRACE_DECL_BUS(tracep,c+74,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+75,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+76,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "C_got", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 2);
    VL_TRACE_PUSH_PREFIX(tracep, "[0]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 2);
    VL_TRACE_DECL_BUS(tracep,c+109,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_DECL_BUS(tracep,c+110,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_DECL_BUS(tracep,c+111,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[1]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 2);
    VL_TRACE_DECL_BUS(tracep,c+112,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_DECL_BUS(tracep,c+113,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_DECL_BUS(tracep,c+114,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[2]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 2);
    VL_TRACE_DECL_BUS(tracep,c+115,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_DECL_BUS(tracep,c+116,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_DECL_BUS(tracep,c+117,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_DECL_BUS(tracep,c+342,0,"outs_seen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_PUSH_PREFIX(tracep, "dut", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+346,0,"SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+339,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+1,0,"a11",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+2,0,"a12",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+3,0,"a13",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+4,0,"a21",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+5,0,"a22",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+6,0,"a23",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+7,0,"a31",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+8,0,"a32",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+9,0,"a33",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+10,0,"b11",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+11,0,"b12",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+12,0,"b13",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+13,0,"b21",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+14,0,"b22",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+15,0,"b23",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+16,0,"b31",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+17,0,"b32",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+18,0,"b33",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+19,0,"in_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+99,0,"C11",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_DECL_BUS(tracep,c+100,0,"C12",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_DECL_BUS(tracep,c+101,0,"C13",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_DECL_BUS(tracep,c+102,0,"C21",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_DECL_BUS(tracep,c+103,0,"C22",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_DECL_BUS(tracep,c+104,0,"C23",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_DECL_BUS(tracep,c+105,0,"C31",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_DECL_BUS(tracep,c+106,0,"C32",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_DECL_BUS(tracep,c+107,0,"C33",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_DECL_BIT(tracep,c+108,0,"out_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_QUAD(tracep,c+77,0,"a_packed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 35,0);
    VL_TRACE_DECL_QUAD(tracep,c+79,0,"b_packed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 35,0);
    VL_TRACE_DECL_BUS(tracep,c+118,0,"entry_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+119,0,"w_load",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+120,0,"en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+121,0,"load_slot",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+122,0,"row_slot",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+123,0,"done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+124,0,"feed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+125,0,"row_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);

    Vsystolic_tb___024root__trace_init_dtype____4(vlSelf, tracep, "a_skewed", 0, c+126, VerilatedTraceSigDirection::NONE);

    Vsystolic_tb___024root__trace_init_dtype____5(vlSelf, tracep, "slot_data", 0, c+129, VerilatedTraceSigDirection::NONE);

    Vsystolic_tb___024root__trace_init_dtype____6(vlSelf, tracep, "b_wires", 0, c+132, VerilatedTraceSigDirection::NONE);
    VL_TRACE_DECL_WIDE(tracep,c+141,0,"results_packed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 89,0);

    Vsystolic_tb___024root__trace_init_dtype____7(vlSelf, tracep, "result_matrix", 0, c+144, VerilatedTraceSigDirection::NONE);
    VL_TRACE_PUSH_PREFIX(tracep, "array", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+346,0,"SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+339,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+120,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+119,0,"w_load",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+121,0,"load_slot",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_PUSH_PREFIX(tracep, "slot_in", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 2);
    for (int i = 0; i < 3; ++i) {
        VL_TRACE_DECL_BIT_ARRAY(tracep,c+129+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, (i + 0));
    }
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "a_in", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 2);
    for (int i = 0; i < 3; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+126+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, (i + 0), 3,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "b_in", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 2);
    VL_TRACE_PUSH_PREFIX(tracep, "[0]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 2);
    VL_TRACE_DECL_BUS(tracep,c+132,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+133,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+134,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[1]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 2);
    VL_TRACE_DECL_BUS(tracep,c+135,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+136,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+137,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[2]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 2);
    VL_TRACE_DECL_BUS(tracep,c+138,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+139,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+140,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "result_matrix", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 2);
    for (int i = 0; i < 3; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+144+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, (i + 0), 9,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "a_wire", VerilatedTracePrefixType::ARRAY_UNPACKED, 2, 0);
    VL_TRACE_PUSH_PREFIX(tracep, "[2]", VerilatedTracePrefixType::ARRAY_UNPACKED, 2, 0);
    VL_TRACE_DECL_BUS(tracep,c+147,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+148,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+149,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[1]", VerilatedTracePrefixType::ARRAY_UNPACKED, 2, 0);
    VL_TRACE_DECL_BUS(tracep,c+150,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+151,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+152,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[0]", VerilatedTracePrefixType::ARRAY_UNPACKED, 2, 0);
    VL_TRACE_DECL_BUS(tracep,c+153,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+154,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+155,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "p_wire", VerilatedTracePrefixType::ARRAY_UNPACKED, 2, 0);
    VL_TRACE_PUSH_PREFIX(tracep, "[2]", VerilatedTracePrefixType::ARRAY_UNPACKED, 2, 0);
    VL_TRACE_DECL_BUS(tracep,c+156,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_DECL_BUS(tracep,c+157,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_DECL_BUS(tracep,c+158,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[1]", VerilatedTracePrefixType::ARRAY_UNPACKED, 2, 0);
    VL_TRACE_DECL_BUS(tracep,c+159,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_DECL_BUS(tracep,c+160,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_DECL_BUS(tracep,c+161,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[0]", VerilatedTracePrefixType::ARRAY_UNPACKED, 2, 0);
    VL_TRACE_DECL_BUS(tracep,c+162,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_DECL_BUS(tracep,c+163,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_DECL_BUS(tracep,c+164,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "slot_wire", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 2);
    VL_TRACE_PUSH_PREFIX(tracep, "[0]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 2);
    VL_TRACE_DECL_BIT(tracep,c+165,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+166,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+167,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[1]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 2);
    VL_TRACE_DECL_BIT(tracep,c+168,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+169,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+170,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[2]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 2);
    VL_TRACE_DECL_BIT(tracep,c+171,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+172,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+173,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "row[0]", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_PUSH_PREFIX(tracep, "col[0]", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_PUSH_PREFIX(tracep, "PE", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+339,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+119,0,"w_load",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+121,0,"load_slot",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+122,0,"slot_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+120,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+174,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+175,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+347,0,"above_result",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_DECL_BIT(tracep,c+176,0,"slot_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+177,0,"a_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+178,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_DECL_BUS(tracep,c+179,0,"b1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+180,0,"b2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+181,0,"w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+182,0,"zeroed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "col[1]", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_PUSH_PREFIX(tracep, "PE", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+339,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+119,0,"w_load",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+121,0,"load_slot",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+183,0,"slot_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+120,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+184,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+185,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+347,0,"above_result",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_DECL_BIT(tracep,c+186,0,"slot_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+187,0,"a_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+188,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_DECL_BUS(tracep,c+189,0,"b1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+190,0,"b2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+191,0,"w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+192,0,"zeroed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "col[2]", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_PUSH_PREFIX(tracep, "PE", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+339,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+119,0,"w_load",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+121,0,"load_slot",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+193,0,"slot_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+120,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+194,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+195,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+347,0,"above_result",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_DECL_BIT(tracep,c+196,0,"slot_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+197,0,"a_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+198,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_DECL_BUS(tracep,c+199,0,"b1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+200,0,"b2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+201,0,"w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+202,0,"zeroed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "row[1]", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_PUSH_PREFIX(tracep, "col[0]", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_PUSH_PREFIX(tracep, "PE", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+339,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+119,0,"w_load",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+121,0,"load_slot",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+203,0,"slot_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+120,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+204,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+205,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+206,0,"above_result",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_DECL_BIT(tracep,c+207,0,"slot_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+208,0,"a_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+209,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_DECL_BUS(tracep,c+210,0,"b1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+211,0,"b2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+212,0,"w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+213,0,"zeroed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "col[1]", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_PUSH_PREFIX(tracep, "PE", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+339,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+119,0,"w_load",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+121,0,"load_slot",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+214,0,"slot_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+120,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+215,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+216,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+217,0,"above_result",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_DECL_BIT(tracep,c+218,0,"slot_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+219,0,"a_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+220,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_DECL_BUS(tracep,c+221,0,"b1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+222,0,"b2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+223,0,"w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+224,0,"zeroed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "col[2]", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_PUSH_PREFIX(tracep, "PE", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+339,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+119,0,"w_load",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+121,0,"load_slot",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+225,0,"slot_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+120,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+226,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+227,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+228,0,"above_result",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_DECL_BIT(tracep,c+229,0,"slot_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+230,0,"a_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+231,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_DECL_BUS(tracep,c+232,0,"b1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+233,0,"b2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+234,0,"w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+235,0,"zeroed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "row[2]", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_PUSH_PREFIX(tracep, "col[0]", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_PUSH_PREFIX(tracep, "PE", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+339,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+119,0,"w_load",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+121,0,"load_slot",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+236,0,"slot_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+120,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+237,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+238,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+239,0,"above_result",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_DECL_BIT(tracep,c+240,0,"slot_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+241,0,"a_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+242,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_DECL_BUS(tracep,c+243,0,"b1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+244,0,"b2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+245,0,"w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+246,0,"zeroed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "col[1]", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_PUSH_PREFIX(tracep, "PE", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+339,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+119,0,"w_load",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+121,0,"load_slot",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+247,0,"slot_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+120,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+248,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+249,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+250,0,"above_result",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_DECL_BIT(tracep,c+251,0,"slot_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+252,0,"a_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+253,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_DECL_BUS(tracep,c+254,0,"b1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+255,0,"b2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+256,0,"w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+257,0,"zeroed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "col[2]", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_PUSH_PREFIX(tracep, "PE", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+339,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+119,0,"w_load",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+121,0,"load_slot",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+258,0,"slot_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+120,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+259,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+260,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+261,0,"above_result",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_DECL_BIT(tracep,c+262,0,"slot_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+263,0,"a_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+264,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 9,0);
    VL_TRACE_DECL_BUS(tracep,c+265,0,"b1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+266,0,"b2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+267,0,"w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+268,0,"zeroed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "controlla", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+346,0,"SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+339,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+118,0,"entry_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+119,0,"w_load",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+120,0,"en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+121,0,"load_slot",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+122,0,"row_slot",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+123,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+124,0,"feed",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+125,0,"row_idx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+269,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+270,0,"next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+348,0,"DRAIN_CYCLES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+349,0,"PRELOAD_AT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+350,0,"CW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+271,0,"cycle_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "memi", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+346,0,"SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+339,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+121,0,"load_slot",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+124,0,"feed",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+122,0,"row_slot",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+120,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+123,0,"done",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+125,0,"row_idx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+118,0,"entry_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+19,0,"in_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_QUAD(tracep,c+77,0,"a_packed",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 35,0);
    VL_TRACE_DECL_QUAD(tracep,c+79,0,"b_packed",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 35,0);
    VL_TRACE_PUSH_PREFIX(tracep, "a_skewed", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 2);
    for (int i = 0; i < 3; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+126+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, (i + 0), 3,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "skewed_slot", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 2);
    for (int i = 0; i < 3; ++i) {
        VL_TRACE_DECL_BIT_ARRAY(tracep,c+129+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, (i + 0));
    }
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "b_out", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 2);
    VL_TRACE_PUSH_PREFIX(tracep, "[0]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 2);
    VL_TRACE_DECL_BUS(tracep,c+132,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+133,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+134,0,"[2]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[1]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 2);
    VL_TRACE_DECL_BUS(tracep,c+135,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+136,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+137,0,"[2]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[2]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 2);
    VL_TRACE_DECL_BUS(tracep,c+138,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+139,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+140,0,"[2]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "results_in", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 2);
    for (int i = 0; i < 3; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+144+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, (i + 0), 9,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_DECL_WIDE(tracep,c+141,0,"results_packed",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 89,0);
    VL_TRACE_DECL_BIT(tracep,c+108,0,"out_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+350,0,"RW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_PUSH_PREFIX(tracep, "a_internal", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 2);
    VL_TRACE_PUSH_PREFIX(tracep, "[0]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 2);
    VL_TRACE_DECL_BUS(tracep,c+81,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+82,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+83,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[1]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 2);
    VL_TRACE_DECL_BUS(tracep,c+84,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+85,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+86,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[2]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 2);
    VL_TRACE_DECL_BUS(tracep,c+87,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+88,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+89,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "b_internal", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 2);
    VL_TRACE_PUSH_PREFIX(tracep, "[0]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 2);
    VL_TRACE_DECL_BUS(tracep,c+90,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+91,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+92,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[1]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 2);
    VL_TRACE_DECL_BUS(tracep,c+93,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+94,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+95,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "[2]", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 2);
    VL_TRACE_DECL_BUS(tracep,c+96,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+97,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+98,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);

    Vsystolic_tb___024root__trace_init_dtype____21(vlSelf, tracep, "A_buf", 0, c+272, VerilatedTraceSigDirection::NONE);

    Vsystolic_tb___024root__trace_init_dtype____22(vlSelf, tracep, "B_buf", 0, c+290, VerilatedTraceSigDirection::NONE);
    VL_TRACE_DECL_BIT(tracep,c+308,0,"wr_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_PUSH_PREFIX(tracep, "a_row", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 2);
    for (int i = 0; i < 3; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+309+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (i + 0), 3,0);
    }
    VL_TRACE_POP_PREFIX(tracep);

    Vsystolic_tb___024root__trace_init_dtype____24(vlSelf, tracep, "skew_a", 0, c+351, VerilatedTraceSigDirection::NONE);

    Vsystolic_tb___024root__trace_init_dtype____25(vlSelf, tracep, "results_internal", 0, c+312, VerilatedTraceSigDirection::NONE);
    VL_TRACE_PUSH_PREFIX(tracep, "deskewed", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 2);
    for (int i = 0; i < 3; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+321+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (i + 0), 9,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_DECL_BUS(tracep,c+360,0,"MARK_DLY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);

    Vsystolic_tb___024root__trace_init_dtype____27(vlSelf, tracep, "mark", 0, c+324, VerilatedTraceSigDirection::NONE);
    VL_TRACE_PUSH_PREFIX(tracep, "genblk2[1]", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_PUSH_PREFIX(tracep, "genblk1", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);

    Vsystolic_tb___024root__trace_init_dtype____28(vlSelf, tracep, "a_dly", 0, c+330, VerilatedTraceSigDirection::NONE);

    Vsystolic_tb___024root__trace_init_dtype____29(vlSelf, tracep, "slot_dly", 0, c+331, VerilatedTraceSigDirection::NONE);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "genblk2[2]", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_PUSH_PREFIX(tracep, "genblk1", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);

    Vsystolic_tb___024root__trace_init_dtype____30(vlSelf, tracep, "a_dly", 0, c+332, VerilatedTraceSigDirection::NONE);

    Vsystolic_tb___024root__trace_init_dtype____31(vlSelf, tracep, "slot_dly", 0, c+334, VerilatedTraceSigDirection::NONE);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "unskew[0]", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_PUSH_PREFIX(tracep, "genblk1", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);

    Vsystolic_tb___024root__trace_init_dtype____32(vlSelf, tracep, "dly", 0, c+336, VerilatedTraceSigDirection::NONE);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "unskew[1]", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_PUSH_PREFIX(tracep, "genblk1", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);

    Vsystolic_tb___024root__trace_init_dtype____33(vlSelf, tracep, "dly", 0, c+338, VerilatedTraceSigDirection::NONE);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+343,0,"fd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+344,0,"num_tests",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+345,0,"n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vsystolic_tb___024root__trace_init_dtype_sub____4(Vsystolic_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void Vsystolic_tb___024root__trace_init_dtype____4(Vsystolic_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_tb___024root__trace_init_dtype____4\n"); );
    Vsystolic_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vsystolic_tb___024root__trace_init_dtype_sub____4(vlSelf, tracep, name, fidx, c, direction);
}

VL_ATTR_COLD void Vsystolic_tb___024root__trace_init_dtype_sub____4(Vsystolic_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_tb___024root__trace_init_dtype_sub____4\n"); );
    Vsystolic_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_TRACE_PUSH_PREFIX(tracep, name, VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 2);
    for (int i = 0; i < 3; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+0+i*1,fidx,"",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (i + 0), 3,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vsystolic_tb___024root__trace_init_dtype_sub____5(Vsystolic_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void Vsystolic_tb___024root__trace_init_dtype____5(Vsystolic_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_tb___024root__trace_init_dtype____5\n"); );
    Vsystolic_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vsystolic_tb___024root__trace_init_dtype_sub____5(vlSelf, tracep, name, fidx, c, direction);
}

VL_ATTR_COLD void Vsystolic_tb___024root__trace_init_dtype_sub____5(Vsystolic_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_tb___024root__trace_init_dtype_sub____5\n"); );
    Vsystolic_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_TRACE_PUSH_PREFIX(tracep, name, VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 2);
    for (int i = 0; i < 3; ++i) {
        VL_TRACE_DECL_BIT_ARRAY(tracep,c+0+i*1,fidx,"",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (i + 0));
    }
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vsystolic_tb___024root__trace_init_dtype_sub____6(Vsystolic_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void Vsystolic_tb___024root__trace_init_dtype____6(Vsystolic_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_tb___024root__trace_init_dtype____6\n"); );
    Vsystolic_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vsystolic_tb___024root__trace_init_dtype_sub____6(vlSelf, tracep, name, fidx, c, direction);
}

VL_ATTR_COLD void Vsystolic_tb___024root__trace_init_dtype_sub____6(Vsystolic_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_tb___024root__trace_init_dtype_sub____6\n"); );
    Vsystolic_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

VL_ATTR_COLD void Vsystolic_tb___024root__trace_init_dtype_sub____7(Vsystolic_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void Vsystolic_tb___024root__trace_init_dtype____7(Vsystolic_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_tb___024root__trace_init_dtype____7\n"); );
    Vsystolic_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vsystolic_tb___024root__trace_init_dtype_sub____7(vlSelf, tracep, name, fidx, c, direction);
}

VL_ATTR_COLD void Vsystolic_tb___024root__trace_init_dtype_sub____7(Vsystolic_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_tb___024root__trace_init_dtype_sub____7\n"); );
    Vsystolic_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_TRACE_PUSH_PREFIX(tracep, name, VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 2);
    for (int i = 0; i < 3; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+0+i*1,fidx,"",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (i + 0), 9,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vsystolic_tb___024root__trace_init_dtype_sub____21(Vsystolic_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void Vsystolic_tb___024root__trace_init_dtype____21(Vsystolic_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_tb___024root__trace_init_dtype____21\n"); );
    Vsystolic_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vsystolic_tb___024root__trace_init_dtype_sub____21(vlSelf, tracep, name, fidx, c, direction);
}

VL_ATTR_COLD void Vsystolic_tb___024root__trace_init_dtype_sub____21(Vsystolic_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_tb___024root__trace_init_dtype_sub____21\n"); );
    Vsystolic_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

VL_ATTR_COLD void Vsystolic_tb___024root__trace_init_dtype_sub____22(Vsystolic_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void Vsystolic_tb___024root__trace_init_dtype____22(Vsystolic_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_tb___024root__trace_init_dtype____22\n"); );
    Vsystolic_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vsystolic_tb___024root__trace_init_dtype_sub____22(vlSelf, tracep, name, fidx, c, direction);
}

VL_ATTR_COLD void Vsystolic_tb___024root__trace_init_dtype_sub____22(Vsystolic_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_tb___024root__trace_init_dtype_sub____22\n"); );
    Vsystolic_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

VL_ATTR_COLD void Vsystolic_tb___024root__trace_init_dtype_sub____24(Vsystolic_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void Vsystolic_tb___024root__trace_init_dtype____24(Vsystolic_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_tb___024root__trace_init_dtype____24\n"); );
    Vsystolic_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vsystolic_tb___024root__trace_init_dtype_sub____24(vlSelf, tracep, name, fidx, c, direction);
}

VL_ATTR_COLD void Vsystolic_tb___024root__trace_init_dtype_sub____24(Vsystolic_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_tb___024root__trace_init_dtype_sub____24\n"); );
    Vsystolic_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

VL_ATTR_COLD void Vsystolic_tb___024root__trace_init_dtype_sub____25(Vsystolic_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void Vsystolic_tb___024root__trace_init_dtype____25(Vsystolic_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_tb___024root__trace_init_dtype____25\n"); );
    Vsystolic_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vsystolic_tb___024root__trace_init_dtype_sub____25(vlSelf, tracep, name, fidx, c, direction);
}

VL_ATTR_COLD void Vsystolic_tb___024root__trace_init_dtype_sub____25(Vsystolic_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_tb___024root__trace_init_dtype_sub____25\n"); );
    Vsystolic_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

VL_ATTR_COLD void Vsystolic_tb___024root__trace_init_dtype_sub____27(Vsystolic_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void Vsystolic_tb___024root__trace_init_dtype____27(Vsystolic_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_tb___024root__trace_init_dtype____27\n"); );
    Vsystolic_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vsystolic_tb___024root__trace_init_dtype_sub____27(vlSelf, tracep, name, fidx, c, direction);
}

VL_ATTR_COLD void Vsystolic_tb___024root__trace_init_dtype_sub____27(Vsystolic_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_tb___024root__trace_init_dtype_sub____27\n"); );
    Vsystolic_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_TRACE_PUSH_PREFIX(tracep, name, VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 5);
    for (int i = 0; i < 6; ++i) {
        VL_TRACE_DECL_BIT_ARRAY(tracep,c+0+i*1,fidx,"",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (i + 0));
    }
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vsystolic_tb___024root__trace_init_dtype_sub____28(Vsystolic_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void Vsystolic_tb___024root__trace_init_dtype____28(Vsystolic_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_tb___024root__trace_init_dtype____28\n"); );
    Vsystolic_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vsystolic_tb___024root__trace_init_dtype_sub____28(vlSelf, tracep, name, fidx, c, direction);
}

VL_ATTR_COLD void Vsystolic_tb___024root__trace_init_dtype_sub____28(Vsystolic_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_tb___024root__trace_init_dtype_sub____28\n"); );
    Vsystolic_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_TRACE_PUSH_PREFIX(tracep, name, VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 0);
    for (int i = 0; i < 1; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+0+i*1,fidx,"",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (0 - i), 3,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vsystolic_tb___024root__trace_init_dtype_sub____29(Vsystolic_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void Vsystolic_tb___024root__trace_init_dtype____29(Vsystolic_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_tb___024root__trace_init_dtype____29\n"); );
    Vsystolic_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vsystolic_tb___024root__trace_init_dtype_sub____29(vlSelf, tracep, name, fidx, c, direction);
}

VL_ATTR_COLD void Vsystolic_tb___024root__trace_init_dtype_sub____29(Vsystolic_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_tb___024root__trace_init_dtype_sub____29\n"); );
    Vsystolic_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_TRACE_PUSH_PREFIX(tracep, name, VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 0);
    for (int i = 0; i < 1; ++i) {
        VL_TRACE_DECL_BIT_ARRAY(tracep,c+0+i*1,fidx,"",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (0 - i));
    }
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vsystolic_tb___024root__trace_init_dtype_sub____30(Vsystolic_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void Vsystolic_tb___024root__trace_init_dtype____30(Vsystolic_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_tb___024root__trace_init_dtype____30\n"); );
    Vsystolic_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vsystolic_tb___024root__trace_init_dtype_sub____30(vlSelf, tracep, name, fidx, c, direction);
}

VL_ATTR_COLD void Vsystolic_tb___024root__trace_init_dtype_sub____30(Vsystolic_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_tb___024root__trace_init_dtype_sub____30\n"); );
    Vsystolic_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_TRACE_PUSH_PREFIX(tracep, name, VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 1);
    for (int i = 0; i < 2; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+0+i*1,fidx,"",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (i + 0), 3,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vsystolic_tb___024root__trace_init_dtype_sub____31(Vsystolic_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void Vsystolic_tb___024root__trace_init_dtype____31(Vsystolic_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_tb___024root__trace_init_dtype____31\n"); );
    Vsystolic_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vsystolic_tb___024root__trace_init_dtype_sub____31(vlSelf, tracep, name, fidx, c, direction);
}

VL_ATTR_COLD void Vsystolic_tb___024root__trace_init_dtype_sub____31(Vsystolic_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_tb___024root__trace_init_dtype_sub____31\n"); );
    Vsystolic_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_TRACE_PUSH_PREFIX(tracep, name, VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 1);
    for (int i = 0; i < 2; ++i) {
        VL_TRACE_DECL_BIT_ARRAY(tracep,c+0+i*1,fidx,"",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (i + 0));
    }
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vsystolic_tb___024root__trace_init_dtype_sub____32(Vsystolic_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void Vsystolic_tb___024root__trace_init_dtype____32(Vsystolic_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_tb___024root__trace_init_dtype____32\n"); );
    Vsystolic_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vsystolic_tb___024root__trace_init_dtype_sub____32(vlSelf, tracep, name, fidx, c, direction);
}

VL_ATTR_COLD void Vsystolic_tb___024root__trace_init_dtype_sub____32(Vsystolic_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_tb___024root__trace_init_dtype_sub____32\n"); );
    Vsystolic_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_TRACE_PUSH_PREFIX(tracep, name, VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 1);
    for (int i = 0; i < 2; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+0+i*1,fidx,"",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (i + 0), 9,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vsystolic_tb___024root__trace_init_dtype_sub____33(Vsystolic_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void Vsystolic_tb___024root__trace_init_dtype____33(Vsystolic_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_tb___024root__trace_init_dtype____33\n"); );
    Vsystolic_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vsystolic_tb___024root__trace_init_dtype_sub____33(vlSelf, tracep, name, fidx, c, direction);
}

VL_ATTR_COLD void Vsystolic_tb___024root__trace_init_dtype_sub____33(Vsystolic_tb___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_tb___024root__trace_init_dtype_sub____33\n"); );
    Vsystolic_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_TRACE_PUSH_PREFIX(tracep, name, VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 0);
    for (int i = 0; i < 1; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+0+i*1,fidx,"",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (0 - i), 9,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vsystolic_tb___024root__trace_init_top(Vsystolic_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_tb___024root__trace_init_top\n"); );
    Vsystolic_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vsystolic_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vsystolic_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vsystolic_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vsystolic_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vsystolic_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vsystolic_tb___024root__trace_register(Vsystolic_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_tb___024root__trace_register\n"); );
    Vsystolic_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vsystolic_tb___024root__trace_const_0, 0, vlSelf);
    tracep->addFullCb(&Vsystolic_tb___024root__trace_full_0, 0, vlSelf);
    tracep->addChgCb(&Vsystolic_tb___024root__trace_chg_0, 0, vlSelf);
    tracep->addCleanupCb(&Vsystolic_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vsystolic_tb___024root__trace_const_0_sub_0(Vsystolic_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vsystolic_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_tb___024root__trace_const_0\n"); );
    // Body
    Vsystolic_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsystolic_tb___024root*>(voidSelf);
    Vsystolic_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vsystolic_tb___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vsystolic_tb___024root__trace_const_dtype____0(Vsystolic_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<VlUnpacked<CData/*3:0*/, 3>, 3>& __VdtypeVar);

VL_ATTR_COLD void Vsystolic_tb___024root__trace_const_0_sub_0(Vsystolic_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_tb___024root__trace_const_0_sub_0\n"); );
    Vsystolic_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullIData(oldp+346,(3U),32);
    bufp->fullSData(oldp+347,(0U),10);
    bufp->fullIData(oldp+348,(4U),32);
    bufp->fullIData(oldp+349,(1U),32);
    bufp->fullIData(oldp+350,(2U),32);
    Vsystolic_tb___024root__trace_const_dtype____0(vlSelf, bufp, 351, vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__skew_a);
    bufp->fullIData(oldp+360,(6U),32);
}

VL_ATTR_COLD void Vsystolic_tb___024root__trace_const_dtype____0(Vsystolic_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<VlUnpacked<CData/*3:0*/, 3>, 3>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_tb___024root__trace_const_dtype____0\n"); );
    Vsystolic_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

VL_ATTR_COLD void Vsystolic_tb___024root__trace_full_0_sub_0(Vsystolic_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vsystolic_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_tb___024root__trace_full_0\n"); );
    // Body
    Vsystolic_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsystolic_tb___024root*>(voidSelf);
    Vsystolic_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vsystolic_tb___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

extern const VlUnpacked<CData/*0:0*/, 128> Vsystolic_tb__ConstPool__TABLE_h08a72cc3_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vsystolic_tb__ConstPool__TABLE_h028f018c_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vsystolic_tb__ConstPool__TABLE_h82a00311_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vsystolic_tb__ConstPool__TABLE_h757529b2_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vsystolic_tb__ConstPool__TABLE_h0c797d14_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vsystolic_tb__ConstPool__TABLE_hbabea407_0;
extern const VlUnpacked<CData/*1:0*/, 128> Vsystolic_tb__ConstPool__TABLE_h35b5d552_0;
VL_ATTR_COLD void Vsystolic_tb___024root__trace_full_dtype____0(Vsystolic_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*3:0*/, 3>& __VdtypeVar);
VL_ATTR_COLD void Vsystolic_tb___024root__trace_full_dtype____1(Vsystolic_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*0:0*/, 3>& __VdtypeVar);
VL_ATTR_COLD void Vsystolic_tb___024root__trace_full_dtype____2(Vsystolic_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<VlUnpacked<CData/*3:0*/, 3>, 3>& __VdtypeVar);
VL_ATTR_COLD void Vsystolic_tb___024root__trace_full_dtype____3(Vsystolic_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<SData/*9:0*/, 3>& __VdtypeVar);
extern const VlUnpacked<CData/*2:0*/, 128> Vsystolic_tb__ConstPool__TABLE_hf261e1ac_0;
VL_ATTR_COLD void Vsystolic_tb___024root__trace_full_dtype____4(Vsystolic_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<VlUnpacked<VlUnpacked<CData/*3:0*/, 3>, 3>, 2>& __VdtypeVar);
VL_ATTR_COLD void Vsystolic_tb___024root__trace_full_dtype____5(Vsystolic_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<VlUnpacked<VlUnpacked<CData/*3:0*/, 3>, 3>, 2>& __VdtypeVar);
VL_ATTR_COLD void Vsystolic_tb___024root__trace_full_dtype____6(Vsystolic_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<VlUnpacked<SData/*9:0*/, 3>, 3>& __VdtypeVar);
VL_ATTR_COLD void Vsystolic_tb___024root__trace_full_dtype____7(Vsystolic_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*0:0*/, 6>& __VdtypeVar);
VL_ATTR_COLD void Vsystolic_tb___024root__trace_full_dtype____8(Vsystolic_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*3:0*/, 1>& __VdtypeVar);
VL_ATTR_COLD void Vsystolic_tb___024root__trace_full_dtype____9(Vsystolic_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*0:0*/, 1>& __VdtypeVar);
VL_ATTR_COLD void Vsystolic_tb___024root__trace_full_dtype____10(Vsystolic_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*3:0*/, 2>& __VdtypeVar);
VL_ATTR_COLD void Vsystolic_tb___024root__trace_full_dtype____11(Vsystolic_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*0:0*/, 2>& __VdtypeVar);
VL_ATTR_COLD void Vsystolic_tb___024root__trace_full_dtype____12(Vsystolic_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<SData/*9:0*/, 2>& __VdtypeVar);
VL_ATTR_COLD void Vsystolic_tb___024root__trace_full_dtype____13(Vsystolic_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<SData/*9:0*/, 1>& __VdtypeVar);

VL_ATTR_COLD void Vsystolic_tb___024root__trace_full_0_sub_0(Vsystolic_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_tb___024root__trace_full_0_sub_0\n"); );
    Vsystolic_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullBit(oldp+0,(vlSelfRef.systolic_tb__DOT__rst_n));
    bufp->fullCData(oldp+1,(vlSelfRef.systolic_tb__DOT__a11),4);
    bufp->fullCData(oldp+2,(vlSelfRef.systolic_tb__DOT__a12),4);
    bufp->fullCData(oldp+3,(vlSelfRef.systolic_tb__DOT__a13),4);
    bufp->fullCData(oldp+4,(vlSelfRef.systolic_tb__DOT__a21),4);
    bufp->fullCData(oldp+5,(vlSelfRef.systolic_tb__DOT__a22),4);
    bufp->fullCData(oldp+6,(vlSelfRef.systolic_tb__DOT__a23),4);
    bufp->fullCData(oldp+7,(vlSelfRef.systolic_tb__DOT__a31),4);
    bufp->fullCData(oldp+8,(vlSelfRef.systolic_tb__DOT__a32),4);
    bufp->fullCData(oldp+9,(vlSelfRef.systolic_tb__DOT__a33),4);
    bufp->fullCData(oldp+10,(vlSelfRef.systolic_tb__DOT__b11),4);
    bufp->fullCData(oldp+11,(vlSelfRef.systolic_tb__DOT__b12),4);
    bufp->fullCData(oldp+12,(vlSelfRef.systolic_tb__DOT__b13),4);
    bufp->fullCData(oldp+13,(vlSelfRef.systolic_tb__DOT__b21),4);
    bufp->fullCData(oldp+14,(vlSelfRef.systolic_tb__DOT__b22),4);
    bufp->fullCData(oldp+15,(vlSelfRef.systolic_tb__DOT__b23),4);
    bufp->fullCData(oldp+16,(vlSelfRef.systolic_tb__DOT__b31),4);
    bufp->fullCData(oldp+17,(vlSelfRef.systolic_tb__DOT__b32),4);
    bufp->fullCData(oldp+18,(vlSelfRef.systolic_tb__DOT__b33),4);
    bufp->fullBit(oldp+19,(vlSelfRef.systolic_tb__DOT__in_valid));
    bufp->fullIData(oldp+20,(vlSelfRef.systolic_tb__DOT__test_errors),32);
    bufp->fullIData(oldp+21,(vlSelfRef.systolic_tb__DOT__jobs),32);
    bufp->fullIData(oldp+22,(vlSelfRef.systolic_tb__DOT__gap),32);
    bufp->fullCData(oldp+23,(vlSelfRef.systolic_tb__DOT__A[0U][0U][0U]),4);
    bufp->fullCData(oldp+24,(vlSelfRef.systolic_tb__DOT__A[0U][0U][1U]),4);
    bufp->fullCData(oldp+25,(vlSelfRef.systolic_tb__DOT__A[0U][0U][2U]),4);
    bufp->fullCData(oldp+26,(vlSelfRef.systolic_tb__DOT__A[0U][1U][0U]),4);
    bufp->fullCData(oldp+27,(vlSelfRef.systolic_tb__DOT__A[0U][1U][1U]),4);
    bufp->fullCData(oldp+28,(vlSelfRef.systolic_tb__DOT__A[0U][1U][2U]),4);
    bufp->fullCData(oldp+29,(vlSelfRef.systolic_tb__DOT__A[0U][2U][0U]),4);
    bufp->fullCData(oldp+30,(vlSelfRef.systolic_tb__DOT__A[0U][2U][1U]),4);
    bufp->fullCData(oldp+31,(vlSelfRef.systolic_tb__DOT__A[0U][2U][2U]),4);
    bufp->fullCData(oldp+32,(vlSelfRef.systolic_tb__DOT__A[1U][0U][0U]),4);
    bufp->fullCData(oldp+33,(vlSelfRef.systolic_tb__DOT__A[1U][0U][1U]),4);
    bufp->fullCData(oldp+34,(vlSelfRef.systolic_tb__DOT__A[1U][0U][2U]),4);
    bufp->fullCData(oldp+35,(vlSelfRef.systolic_tb__DOT__A[1U][1U][0U]),4);
    bufp->fullCData(oldp+36,(vlSelfRef.systolic_tb__DOT__A[1U][1U][1U]),4);
    bufp->fullCData(oldp+37,(vlSelfRef.systolic_tb__DOT__A[1U][1U][2U]),4);
    bufp->fullCData(oldp+38,(vlSelfRef.systolic_tb__DOT__A[1U][2U][0U]),4);
    bufp->fullCData(oldp+39,(vlSelfRef.systolic_tb__DOT__A[1U][2U][1U]),4);
    bufp->fullCData(oldp+40,(vlSelfRef.systolic_tb__DOT__A[1U][2U][2U]),4);
    bufp->fullCData(oldp+41,(vlSelfRef.systolic_tb__DOT__B[0U][0U][0U]),4);
    bufp->fullCData(oldp+42,(vlSelfRef.systolic_tb__DOT__B[0U][0U][1U]),4);
    bufp->fullCData(oldp+43,(vlSelfRef.systolic_tb__DOT__B[0U][0U][2U]),4);
    bufp->fullCData(oldp+44,(vlSelfRef.systolic_tb__DOT__B[0U][1U][0U]),4);
    bufp->fullCData(oldp+45,(vlSelfRef.systolic_tb__DOT__B[0U][1U][1U]),4);
    bufp->fullCData(oldp+46,(vlSelfRef.systolic_tb__DOT__B[0U][1U][2U]),4);
    bufp->fullCData(oldp+47,(vlSelfRef.systolic_tb__DOT__B[0U][2U][0U]),4);
    bufp->fullCData(oldp+48,(vlSelfRef.systolic_tb__DOT__B[0U][2U][1U]),4);
    bufp->fullCData(oldp+49,(vlSelfRef.systolic_tb__DOT__B[0U][2U][2U]),4);
    bufp->fullCData(oldp+50,(vlSelfRef.systolic_tb__DOT__B[1U][0U][0U]),4);
    bufp->fullCData(oldp+51,(vlSelfRef.systolic_tb__DOT__B[1U][0U][1U]),4);
    bufp->fullCData(oldp+52,(vlSelfRef.systolic_tb__DOT__B[1U][0U][2U]),4);
    bufp->fullCData(oldp+53,(vlSelfRef.systolic_tb__DOT__B[1U][1U][0U]),4);
    bufp->fullCData(oldp+54,(vlSelfRef.systolic_tb__DOT__B[1U][1U][1U]),4);
    bufp->fullCData(oldp+55,(vlSelfRef.systolic_tb__DOT__B[1U][1U][2U]),4);
    bufp->fullCData(oldp+56,(vlSelfRef.systolic_tb__DOT__B[1U][2U][0U]),4);
    bufp->fullCData(oldp+57,(vlSelfRef.systolic_tb__DOT__B[1U][2U][1U]),4);
    bufp->fullCData(oldp+58,(vlSelfRef.systolic_tb__DOT__B[1U][2U][2U]),4);
    bufp->fullIData(oldp+59,(vlSelfRef.systolic_tb__DOT__C_exp[0U][0U][0U]),32);
    bufp->fullIData(oldp+60,(vlSelfRef.systolic_tb__DOT__C_exp[0U][0U][1U]),32);
    bufp->fullIData(oldp+61,(vlSelfRef.systolic_tb__DOT__C_exp[0U][0U][2U]),32);
    bufp->fullIData(oldp+62,(vlSelfRef.systolic_tb__DOT__C_exp[0U][1U][0U]),32);
    bufp->fullIData(oldp+63,(vlSelfRef.systolic_tb__DOT__C_exp[0U][1U][1U]),32);
    bufp->fullIData(oldp+64,(vlSelfRef.systolic_tb__DOT__C_exp[0U][1U][2U]),32);
    bufp->fullIData(oldp+65,(vlSelfRef.systolic_tb__DOT__C_exp[0U][2U][0U]),32);
    bufp->fullIData(oldp+66,(vlSelfRef.systolic_tb__DOT__C_exp[0U][2U][1U]),32);
    bufp->fullIData(oldp+67,(vlSelfRef.systolic_tb__DOT__C_exp[0U][2U][2U]),32);
    bufp->fullIData(oldp+68,(vlSelfRef.systolic_tb__DOT__C_exp[1U][0U][0U]),32);
    bufp->fullIData(oldp+69,(vlSelfRef.systolic_tb__DOT__C_exp[1U][0U][1U]),32);
    bufp->fullIData(oldp+70,(vlSelfRef.systolic_tb__DOT__C_exp[1U][0U][2U]),32);
    bufp->fullIData(oldp+71,(vlSelfRef.systolic_tb__DOT__C_exp[1U][1U][0U]),32);
    bufp->fullIData(oldp+72,(vlSelfRef.systolic_tb__DOT__C_exp[1U][1U][1U]),32);
    bufp->fullIData(oldp+73,(vlSelfRef.systolic_tb__DOT__C_exp[1U][1U][2U]),32);
    bufp->fullIData(oldp+74,(vlSelfRef.systolic_tb__DOT__C_exp[1U][2U][0U]),32);
    bufp->fullIData(oldp+75,(vlSelfRef.systolic_tb__DOT__C_exp[1U][2U][1U]),32);
    bufp->fullIData(oldp+76,(vlSelfRef.systolic_tb__DOT__C_exp[1U][2U][2U]),32);
    bufp->fullQData(oldp+77,(vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__a_packed),36);
    bufp->fullQData(oldp+79,(vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__b_packed),36);
    bufp->fullCData(oldp+81,(vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__a_internal[0U][0U]),4);
    bufp->fullCData(oldp+82,(vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__a_internal[0U][1U]),4);
    bufp->fullCData(oldp+83,(vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__a_internal[0U][2U]),4);
    bufp->fullCData(oldp+84,(vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__a_internal[1U][0U]),4);
    bufp->fullCData(oldp+85,(vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__a_internal[1U][1U]),4);
    bufp->fullCData(oldp+86,(vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__a_internal[1U][2U]),4);
    bufp->fullCData(oldp+87,(vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__a_internal[2U][0U]),4);
    bufp->fullCData(oldp+88,(vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__a_internal[2U][1U]),4);
    bufp->fullCData(oldp+89,(vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__a_internal[2U][2U]),4);
    bufp->fullCData(oldp+90,(vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__b_internal[0U][0U]),4);
    bufp->fullCData(oldp+91,(vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__b_internal[0U][1U]),4);
    bufp->fullCData(oldp+92,(vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__b_internal[0U][2U]),4);
    bufp->fullCData(oldp+93,(vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__b_internal[1U][0U]),4);
    bufp->fullCData(oldp+94,(vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__b_internal[1U][1U]),4);
    bufp->fullCData(oldp+95,(vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__b_internal[1U][2U]),4);
    bufp->fullCData(oldp+96,(vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__b_internal[2U][0U]),4);
    bufp->fullCData(oldp+97,(vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__b_internal[2U][1U]),4);
    bufp->fullCData(oldp+98,(vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__b_internal[2U][2U]),4);
    bufp->fullSData(oldp+99,((0x000003ffU & vlSelfRef.systolic_tb__DOT__dut__DOT__results_packed[0U])),10);
    bufp->fullSData(oldp+100,((0x000003ffU & (vlSelfRef.systolic_tb__DOT__dut__DOT__results_packed[0U] 
                                              >> 0x0000000aU))),10);
    bufp->fullSData(oldp+101,((0x000003ffU & (vlSelfRef.systolic_tb__DOT__dut__DOT__results_packed[0U] 
                                              >> 0x00000014U))),10);
    bufp->fullSData(oldp+102,((0x000003ffU & ((vlSelfRef.systolic_tb__DOT__dut__DOT__results_packed[1U] 
                                               << 2U) 
                                              | (vlSelfRef.systolic_tb__DOT__dut__DOT__results_packed[0U] 
                                                 >> 0x0000001eU)))),10);
    bufp->fullSData(oldp+103,((0x000003ffU & (vlSelfRef.systolic_tb__DOT__dut__DOT__results_packed[1U] 
                                              >> 8U))),10);
    bufp->fullSData(oldp+104,((0x000003ffU & (vlSelfRef.systolic_tb__DOT__dut__DOT__results_packed[1U] 
                                              >> 0x00000012U))),10);
    bufp->fullSData(oldp+105,((0x000003ffU & ((vlSelfRef.systolic_tb__DOT__dut__DOT__results_packed[2U] 
                                               << 4U) 
                                              | (vlSelfRef.systolic_tb__DOT__dut__DOT__results_packed[1U] 
                                                 >> 0x0000001cU)))),10);
    bufp->fullSData(oldp+106,((0x000003ffU & (vlSelfRef.systolic_tb__DOT__dut__DOT__results_packed[2U] 
                                              >> 6U))),10);
    bufp->fullSData(oldp+107,((0x000003ffU & (vlSelfRef.systolic_tb__DOT__dut__DOT__results_packed[2U] 
                                              >> 0x00000010U))),10);
    bufp->fullBit(oldp+108,(vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__mark[5U]));
    bufp->fullSData(oldp+109,(vlSelfRef.systolic_tb__DOT__C_got[0U][0U]),10);
    bufp->fullSData(oldp+110,(vlSelfRef.systolic_tb__DOT__C_got[0U][1U]),10);
    bufp->fullSData(oldp+111,(vlSelfRef.systolic_tb__DOT__C_got[0U][2U]),10);
    bufp->fullSData(oldp+112,(vlSelfRef.systolic_tb__DOT__C_got[1U][0U]),10);
    bufp->fullSData(oldp+113,(vlSelfRef.systolic_tb__DOT__C_got[1U][1U]),10);
    bufp->fullSData(oldp+114,(vlSelfRef.systolic_tb__DOT__C_got[1U][2U]),10);
    bufp->fullSData(oldp+115,(vlSelfRef.systolic_tb__DOT__C_got[2U][0U]),10);
    bufp->fullSData(oldp+116,(vlSelfRef.systolic_tb__DOT__C_got[2U][1U]),10);
    bufp->fullSData(oldp+117,(vlSelfRef.systolic_tb__DOT__C_got[2U][2U]),10);
    bufp->fullCData(oldp+118,(vlSelfRef.systolic_tb__DOT__dut__DOT__entry_valid),2);
    bufp->fullBit(oldp+119,(Vsystolic_tb__ConstPool__TABLE_h08a72cc3_0
                            [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]));
    bufp->fullBit(oldp+120,(Vsystolic_tb__ConstPool__TABLE_h028f018c_0
                            [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]));
    bufp->fullBit(oldp+121,(Vsystolic_tb__ConstPool__TABLE_h82a00311_0
                            [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]));
    bufp->fullBit(oldp+122,(Vsystolic_tb__ConstPool__TABLE_h757529b2_0
                            [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]));
    bufp->fullBit(oldp+123,(Vsystolic_tb__ConstPool__TABLE_h0c797d14_0
                            [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]));
    bufp->fullBit(oldp+124,(Vsystolic_tb__ConstPool__TABLE_hbabea407_0
                            [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]));
    bufp->fullCData(oldp+125,(Vsystolic_tb__ConstPool__TABLE_h35b5d552_0
                              [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]),2);
    Vsystolic_tb___024root__trace_full_dtype____0(vlSelf, bufp, 126, vlSelfRef.systolic_tb__DOT__dut__DOT__a_skewed);
    Vsystolic_tb___024root__trace_full_dtype____1(vlSelf, bufp, 129, vlSelfRef.systolic_tb__DOT__dut__DOT__slot_data);
    Vsystolic_tb___024root__trace_full_dtype____2(vlSelf, bufp, 132, vlSelfRef.systolic_tb__DOT__dut__DOT__b_wires);
    bufp->fullWData(oldp+141,(vlSelfRef.systolic_tb__DOT__dut__DOT__results_packed),90);
    Vsystolic_tb___024root__trace_full_dtype____3(vlSelf, bufp, 144, vlSelfRef.systolic_tb__DOT__dut__DOT__result_matrix);
    bufp->fullCData(oldp+147,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__a_wire[2U][2U]),4);
    bufp->fullCData(oldp+148,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__a_wire[2U][1U]),4);
    bufp->fullCData(oldp+149,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__a_wire[2U][0U]),4);
    bufp->fullCData(oldp+150,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__a_wire[1U][2U]),4);
    bufp->fullCData(oldp+151,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__a_wire[1U][1U]),4);
    bufp->fullCData(oldp+152,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__a_wire[1U][0U]),4);
    bufp->fullCData(oldp+153,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__a_wire[0U][2U]),4);
    bufp->fullCData(oldp+154,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__a_wire[0U][1U]),4);
    bufp->fullCData(oldp+155,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__a_wire[0U][0U]),4);
    bufp->fullSData(oldp+156,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__p_wire[2U][2U]),10);
    bufp->fullSData(oldp+157,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__p_wire[2U][1U]),10);
    bufp->fullSData(oldp+158,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__p_wire[2U][0U]),10);
    bufp->fullSData(oldp+159,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__p_wire[1U][2U]),10);
    bufp->fullSData(oldp+160,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__p_wire[1U][1U]),10);
    bufp->fullSData(oldp+161,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__p_wire[1U][0U]),10);
    bufp->fullSData(oldp+162,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__p_wire[0U][2U]),10);
    bufp->fullSData(oldp+163,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__p_wire[0U][1U]),10);
    bufp->fullSData(oldp+164,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__p_wire[0U][0U]),10);
    bufp->fullBit(oldp+165,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__slot_wire[0U][0U]));
    bufp->fullBit(oldp+166,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__slot_wire[0U][1U]));
    bufp->fullBit(oldp+167,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__slot_wire[0U][2U]));
    bufp->fullBit(oldp+168,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__slot_wire[1U][0U]));
    bufp->fullBit(oldp+169,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__slot_wire[1U][1U]));
    bufp->fullBit(oldp+170,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__slot_wire[1U][2U]));
    bufp->fullBit(oldp+171,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__slot_wire[2U][0U]));
    bufp->fullBit(oldp+172,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__slot_wire[2U][1U]));
    bufp->fullBit(oldp+173,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__slot_wire[2U][2U]));
    bufp->fullCData(oldp+174,(vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__a_row[0U]),4);
    bufp->fullCData(oldp+175,(vlSelfRef.systolic_tb__DOT__dut__DOT__b_wires[0U][0U]),4);
    bufp->fullBit(oldp+176,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__PE__slot_out));
    bufp->fullCData(oldp+177,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__PE__a_out),4);
    bufp->fullSData(oldp+178,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__PE__result),10);
    bufp->fullCData(oldp+179,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__b1),4);
    bufp->fullCData(oldp+180,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__b2),4);
    bufp->fullCData(oldp+181,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__w),4);
    bufp->fullBit(oldp+182,(((0U == vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__a_row[0U]) 
                             | (0U == (IData)(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__w)))));
    bufp->fullBit(oldp+183,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__slot_wire[0U][0U]));
    bufp->fullCData(oldp+184,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__a_wire[0U][0U]),4);
    bufp->fullCData(oldp+185,(vlSelfRef.systolic_tb__DOT__dut__DOT__b_wires[0U][1U]),4);
    bufp->fullBit(oldp+186,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__PE__slot_out));
    bufp->fullCData(oldp+187,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__PE__a_out),4);
    bufp->fullSData(oldp+188,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__PE__result),10);
    bufp->fullCData(oldp+189,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__b1),4);
    bufp->fullCData(oldp+190,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__b2),4);
    bufp->fullCData(oldp+191,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__w),4);
    bufp->fullBit(oldp+192,(((0U == vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__a_wire[0U][0U]) 
                             | (0U == (IData)(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__w)))));
    bufp->fullBit(oldp+193,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__slot_wire[0U][1U]));
    bufp->fullCData(oldp+194,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__a_wire[0U][1U]),4);
    bufp->fullCData(oldp+195,(vlSelfRef.systolic_tb__DOT__dut__DOT__b_wires[0U][2U]),4);
    bufp->fullBit(oldp+196,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__PE__slot_out));
    bufp->fullCData(oldp+197,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__PE__a_out),4);
    bufp->fullSData(oldp+198,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__PE__result),10);
    bufp->fullCData(oldp+199,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__b1),4);
    bufp->fullCData(oldp+200,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__b2),4);
    bufp->fullCData(oldp+201,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__w),4);
    bufp->fullBit(oldp+202,(((0U == vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__a_wire[0U][1U]) 
                             | (0U == (IData)(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__w)))));
    bufp->fullBit(oldp+203,(vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__genblk2__BRA__1__KET____DOT__genblk1__DOT__slot_dly[0U]));
    bufp->fullCData(oldp+204,(vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__genblk2__BRA__1__KET____DOT__genblk1__DOT__a_dly[0U]),4);
    bufp->fullCData(oldp+205,(vlSelfRef.systolic_tb__DOT__dut__DOT__b_wires[1U][0U]),4);
    bufp->fullSData(oldp+206,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__p_wire[0U][0U]),10);
    bufp->fullBit(oldp+207,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__PE__slot_out));
    bufp->fullCData(oldp+208,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__PE__a_out),4);
    bufp->fullSData(oldp+209,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__PE__result),10);
    bufp->fullCData(oldp+210,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__b1),4);
    bufp->fullCData(oldp+211,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__b2),4);
    bufp->fullCData(oldp+212,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__w),4);
    bufp->fullBit(oldp+213,(((0U == vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__genblk2__BRA__1__KET____DOT__genblk1__DOT__a_dly[0U]) 
                             | (0U == (IData)(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__w)))));
    bufp->fullBit(oldp+214,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__slot_wire[1U][0U]));
    bufp->fullCData(oldp+215,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__a_wire[1U][0U]),4);
    bufp->fullCData(oldp+216,(vlSelfRef.systolic_tb__DOT__dut__DOT__b_wires[1U][1U]),4);
    bufp->fullSData(oldp+217,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__p_wire[0U][1U]),10);
    bufp->fullBit(oldp+218,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__PE__slot_out));
    bufp->fullCData(oldp+219,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__PE__a_out),4);
    bufp->fullSData(oldp+220,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__PE__result),10);
    bufp->fullCData(oldp+221,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__b1),4);
    bufp->fullCData(oldp+222,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__b2),4);
    bufp->fullCData(oldp+223,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__w),4);
    bufp->fullBit(oldp+224,(((0U == vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__a_wire[1U][0U]) 
                             | (0U == (IData)(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__w)))));
    bufp->fullBit(oldp+225,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__slot_wire[1U][1U]));
    bufp->fullCData(oldp+226,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__a_wire[1U][1U]),4);
    bufp->fullCData(oldp+227,(vlSelfRef.systolic_tb__DOT__dut__DOT__b_wires[1U][2U]),4);
    bufp->fullSData(oldp+228,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__p_wire[0U][2U]),10);
    bufp->fullBit(oldp+229,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__PE__slot_out));
    bufp->fullCData(oldp+230,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__PE__a_out),4);
    bufp->fullSData(oldp+231,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__PE__result),10);
    bufp->fullCData(oldp+232,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__b1),4);
    bufp->fullCData(oldp+233,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__b2),4);
    bufp->fullCData(oldp+234,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__w),4);
    bufp->fullBit(oldp+235,(((0U == vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__a_wire[1U][1U]) 
                             | (0U == (IData)(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__w)))));
    bufp->fullBit(oldp+236,(vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__genblk2__BRA__2__KET____DOT__genblk1__DOT__slot_dly[1U]));
    bufp->fullCData(oldp+237,(vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__genblk2__BRA__2__KET____DOT__genblk1__DOT__a_dly[1U]),4);
    bufp->fullCData(oldp+238,(vlSelfRef.systolic_tb__DOT__dut__DOT__b_wires[2U][0U]),4);
    bufp->fullSData(oldp+239,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__p_wire[1U][0U]),10);
    bufp->fullBit(oldp+240,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__PE__slot_out));
    bufp->fullCData(oldp+241,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__PE__a_out),4);
    bufp->fullSData(oldp+242,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__PE__result),10);
    bufp->fullCData(oldp+243,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__b1),4);
    bufp->fullCData(oldp+244,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__b2),4);
    bufp->fullCData(oldp+245,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__w),4);
    bufp->fullBit(oldp+246,(((0U == vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__genblk2__BRA__2__KET____DOT__genblk1__DOT__a_dly[1U]) 
                             | (0U == (IData)(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__PE__DOT__w)))));
    bufp->fullBit(oldp+247,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__slot_wire[2U][0U]));
    bufp->fullCData(oldp+248,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__a_wire[2U][0U]),4);
    bufp->fullCData(oldp+249,(vlSelfRef.systolic_tb__DOT__dut__DOT__b_wires[2U][1U]),4);
    bufp->fullSData(oldp+250,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__p_wire[1U][1U]),10);
    bufp->fullBit(oldp+251,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__PE__slot_out));
    bufp->fullCData(oldp+252,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__PE__a_out),4);
    bufp->fullSData(oldp+253,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__PE__result),10);
    bufp->fullCData(oldp+254,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__b1),4);
    bufp->fullCData(oldp+255,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__b2),4);
    bufp->fullCData(oldp+256,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__w),4);
    bufp->fullBit(oldp+257,(((0U == vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__a_wire[2U][0U]) 
                             | (0U == (IData)(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__PE__DOT__w)))));
    bufp->fullBit(oldp+258,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__slot_wire[2U][1U]));
    bufp->fullCData(oldp+259,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__a_wire[2U][1U]),4);
    bufp->fullCData(oldp+260,(vlSelfRef.systolic_tb__DOT__dut__DOT__b_wires[2U][2U]),4);
    bufp->fullSData(oldp+261,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__p_wire[1U][2U]),10);
    bufp->fullBit(oldp+262,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__PE__slot_out));
    bufp->fullCData(oldp+263,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__PE__a_out),4);
    bufp->fullSData(oldp+264,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__PE__result),10);
    bufp->fullCData(oldp+265,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__b1),4);
    bufp->fullCData(oldp+266,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__b2),4);
    bufp->fullCData(oldp+267,(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__w),4);
    bufp->fullBit(oldp+268,(((0U == vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__a_wire[2U][1U]) 
                             | (0U == (IData)(vlSelfRef.systolic_tb__DOT__dut__DOT__array__DOT__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__PE__DOT__w)))));
    bufp->fullCData(oldp+269,(vlSelfRef.systolic_tb__DOT__dut__DOT__controlla__DOT__state),3);
    bufp->fullCData(oldp+270,(Vsystolic_tb__ConstPool__TABLE_hf261e1ac_0
                              [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]),3);
    bufp->fullCData(oldp+271,(vlSelfRef.systolic_tb__DOT__dut__DOT__controlla__DOT__cycle_count),2);
    Vsystolic_tb___024root__trace_full_dtype____4(vlSelf, bufp, 272, vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__A_buf);
    Vsystolic_tb___024root__trace_full_dtype____5(vlSelf, bufp, 290, vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__B_buf);
    bufp->fullBit(oldp+308,(vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__wr_ptr));
    bufp->fullCData(oldp+309,(vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__a_row[0]),4);
    bufp->fullCData(oldp+310,(vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__a_row[1]),4);
    bufp->fullCData(oldp+311,(vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__a_row[2]),4);
    Vsystolic_tb___024root__trace_full_dtype____6(vlSelf, bufp, 312, vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__results_internal);
    bufp->fullSData(oldp+321,(vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__deskewed[0]),10);
    bufp->fullSData(oldp+322,(vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__deskewed[1]),10);
    bufp->fullSData(oldp+323,(vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__deskewed[2]),10);
    Vsystolic_tb___024root__trace_full_dtype____7(vlSelf, bufp, 324, vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__mark);
    Vsystolic_tb___024root__trace_full_dtype____8(vlSelf, bufp, 330, vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__genblk2__BRA__1__KET____DOT__genblk1__DOT__a_dly);
    Vsystolic_tb___024root__trace_full_dtype____9(vlSelf, bufp, 331, vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__genblk2__BRA__1__KET____DOT__genblk1__DOT__slot_dly);
    Vsystolic_tb___024root__trace_full_dtype____10(vlSelf, bufp, 332, vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__genblk2__BRA__2__KET____DOT__genblk1__DOT__a_dly);
    Vsystolic_tb___024root__trace_full_dtype____11(vlSelf, bufp, 334, vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__genblk2__BRA__2__KET____DOT__genblk1__DOT__slot_dly);
    Vsystolic_tb___024root__trace_full_dtype____12(vlSelf, bufp, 336, vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__unskew__BRA__0__KET____DOT__genblk1__DOT__dly);
    Vsystolic_tb___024root__trace_full_dtype____13(vlSelf, bufp, 338, vlSelfRef.systolic_tb__DOT__dut__DOT__memi__DOT__unskew__BRA__1__KET____DOT__genblk1__DOT__dly);
    bufp->fullBit(oldp+339,(vlSelfRef.systolic_tb__DOT__clk));
    bufp->fullIData(oldp+340,(vlSelfRef.systolic_tb__DOT__errors),32);
    bufp->fullIData(oldp+341,(vlSelfRef.systolic_tb__DOT__checks),32);
    bufp->fullIData(oldp+342,(vlSelfRef.systolic_tb__DOT__outs_seen),32);
    bufp->fullIData(oldp+343,(vlSelfRef.systolic_tb__DOT__unnamedblk3__DOT__fd),32);
    bufp->fullIData(oldp+344,(vlSelfRef.systolic_tb__DOT__unnamedblk3__DOT__num_tests),32);
    bufp->fullIData(oldp+345,(vlSelfRef.systolic_tb__DOT__unnamedblk3__DOT__n),32);
}

VL_ATTR_COLD void Vsystolic_tb___024root__trace_full_dtype____0(Vsystolic_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*3:0*/, 3>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_tb___024root__trace_full_dtype____0\n"); );
    Vsystolic_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + offset);
    bufp->fullCData(oldp+0,(__VdtypeVar[0]),4);
    bufp->fullCData(oldp+1,(__VdtypeVar[1]),4);
    bufp->fullCData(oldp+2,(__VdtypeVar[2]),4);
}

VL_ATTR_COLD void Vsystolic_tb___024root__trace_full_dtype____1(Vsystolic_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*0:0*/, 3>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_tb___024root__trace_full_dtype____1\n"); );
    Vsystolic_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + offset);
    bufp->fullBit(oldp+0,(__VdtypeVar[0]));
    bufp->fullBit(oldp+1,(__VdtypeVar[1]));
    bufp->fullBit(oldp+2,(__VdtypeVar[2]));
}

VL_ATTR_COLD void Vsystolic_tb___024root__trace_full_dtype____2(Vsystolic_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<VlUnpacked<CData/*3:0*/, 3>, 3>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_tb___024root__trace_full_dtype____2\n"); );
    Vsystolic_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

VL_ATTR_COLD void Vsystolic_tb___024root__trace_full_dtype____3(Vsystolic_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<SData/*9:0*/, 3>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_tb___024root__trace_full_dtype____3\n"); );
    Vsystolic_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + offset);
    bufp->fullSData(oldp+0,(__VdtypeVar[0]),10);
    bufp->fullSData(oldp+1,(__VdtypeVar[1]),10);
    bufp->fullSData(oldp+2,(__VdtypeVar[2]),10);
}

VL_ATTR_COLD void Vsystolic_tb___024root__trace_full_dtype____4(Vsystolic_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<VlUnpacked<VlUnpacked<CData/*3:0*/, 3>, 3>, 2>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_tb___024root__trace_full_dtype____4\n"); );
    Vsystolic_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

VL_ATTR_COLD void Vsystolic_tb___024root__trace_full_dtype____5(Vsystolic_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<VlUnpacked<VlUnpacked<CData/*3:0*/, 3>, 3>, 2>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_tb___024root__trace_full_dtype____5\n"); );
    Vsystolic_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

VL_ATTR_COLD void Vsystolic_tb___024root__trace_full_dtype____6(Vsystolic_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<VlUnpacked<SData/*9:0*/, 3>, 3>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_tb___024root__trace_full_dtype____6\n"); );
    Vsystolic_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

VL_ATTR_COLD void Vsystolic_tb___024root__trace_full_dtype____7(Vsystolic_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*0:0*/, 6>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_tb___024root__trace_full_dtype____7\n"); );
    Vsystolic_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

VL_ATTR_COLD void Vsystolic_tb___024root__trace_full_dtype____8(Vsystolic_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*3:0*/, 1>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_tb___024root__trace_full_dtype____8\n"); );
    Vsystolic_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + offset);
    bufp->fullCData(oldp+0,(__VdtypeVar[0]),4);
}

VL_ATTR_COLD void Vsystolic_tb___024root__trace_full_dtype____9(Vsystolic_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*0:0*/, 1>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_tb___024root__trace_full_dtype____9\n"); );
    Vsystolic_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + offset);
    bufp->fullBit(oldp+0,(__VdtypeVar[0]));
}

VL_ATTR_COLD void Vsystolic_tb___024root__trace_full_dtype____10(Vsystolic_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*3:0*/, 2>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_tb___024root__trace_full_dtype____10\n"); );
    Vsystolic_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + offset);
    bufp->fullCData(oldp+0,(__VdtypeVar[0]),4);
    bufp->fullCData(oldp+1,(__VdtypeVar[1]),4);
}

VL_ATTR_COLD void Vsystolic_tb___024root__trace_full_dtype____11(Vsystolic_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*0:0*/, 2>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_tb___024root__trace_full_dtype____11\n"); );
    Vsystolic_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + offset);
    bufp->fullBit(oldp+0,(__VdtypeVar[0]));
    bufp->fullBit(oldp+1,(__VdtypeVar[1]));
}

VL_ATTR_COLD void Vsystolic_tb___024root__trace_full_dtype____12(Vsystolic_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<SData/*9:0*/, 2>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_tb___024root__trace_full_dtype____12\n"); );
    Vsystolic_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + offset);
    bufp->fullSData(oldp+0,(__VdtypeVar[0]),10);
    bufp->fullSData(oldp+1,(__VdtypeVar[1]),10);
}

VL_ATTR_COLD void Vsystolic_tb___024root__trace_full_dtype____13(Vsystolic_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<SData/*9:0*/, 1>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_tb___024root__trace_full_dtype____13\n"); );
    Vsystolic_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + offset);
    bufp->fullSData(oldp+0,(__VdtypeVar[0]),10);
}
