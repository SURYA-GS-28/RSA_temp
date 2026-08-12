// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtestbench_full__Syms.h"


void Vtestbench_full___024root__trace_chg_0_sub_0(Vtestbench_full___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtestbench_full___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench_full___024root__trace_chg_0\n"); );
    // Init
    Vtestbench_full___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtestbench_full___024root*>(voidSelf);
    Vtestbench_full__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtestbench_full___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtestbench_full___024root__trace_chg_0_sub_0(Vtestbench_full___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench_full__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench_full___024root__trace_chg_0_sub_0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U] 
                     | vlSelfRef.__Vm_traceActivity
                     [2U]))) {
        bufp->chgBit(oldp+0,(vlSelfRef.testbench_full__DOT__rst_n));
        bufp->chgBit(oldp+1,(vlSelfRef.testbench_full__DOT__start));
        bufp->chgIData(oldp+2,(vlSelfRef.testbench_full__DOT__message_in),32);
        bufp->chgQData(oldp+3,(vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__result),64);
        bufp->chgQData(oldp+5,(vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__b),64);
        bufp->chgIData(oldp+7,(vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__e),32);
        bufp->chgIData(oldp+8,(vlSelfRef.testbench_full__DOT__golden_modexp__Vstatic__i),32);
        bufp->chgIData(oldp+9,(vlSelfRef.testbench_full__DOT__pass_count),32);
        bufp->chgIData(oldp+10,(vlSelfRef.testbench_full__DOT__fail_count),32);
        bufp->chgIData(oldp+11,(vlSelfRef.testbench_full__DOT__check_count),32);
        bufp->chgIData(oldp+12,(vlSelfRef.testbench_full__DOT__timeout),32);
        bufp->chgIData(oldp+13,(vlSelfRef.testbench_full__DOT__run_test__Vstatic__exp_cipher),32);
        bufp->chgIData(oldp+14,(vlSelfRef.testbench_full__DOT__run_test__Vstatic__exp_plain),32);
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+15,(vlSelfRef.testbench_full__DOT__done_pulses),32);
        bufp->chgIData(oldp+16,(vlSelfRef.testbench_full__DOT__r),32);
        bufp->chgIData(oldp+17,(vlSelfRef.testbench_full__DOT__rnd_idx),32);
        bufp->chgWData(oldp+18,(vlSelfRef.testbench_full__DOT__rnd_label),320);
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[3U])) {
        bufp->chgIData(oldp+28,(vlSelfRef.testbench_full__DOT__u_dut__DOT__cipher_w),32);
        bufp->chgIData(oldp+29,(vlSelfRef.testbench_full__DOT__u_dut__DOT__received_w),32);
        bufp->chgIData(oldp+30,(vlSelfRef.testbench_full__DOT__u_dut__DOT__decrypted_w),32);
        bufp->chgBit(oldp+31,(vlSelfRef.testbench_full__DOT__done));
        bufp->chgBit(oldp+32,(vlSelfRef.testbench_full__DOT__u_dut__DOT__sclk_w));
        bufp->chgBit(oldp+33,(vlSelfRef.testbench_full__DOT__u_dut__DOT__mosi_w));
        bufp->chgBit(oldp+34,(vlSelfRef.testbench_full__DOT__u_dut__DOT__ss_n_w));
        bufp->chgIData(oldp+35,(vlSelfRef.testbench_full__DOT__bus_capture),32);
        bufp->chgCData(oldp+36,(vlSelfRef.testbench_full__DOT__bus_bit_cnt),6);
        bufp->chgBit(oldp+37,(vlSelfRef.testbench_full__DOT__bus_active));
        bufp->chgBit(oldp+38,(vlSelfRef.testbench_full__DOT__bus_capture_valid));
        bufp->chgBit(oldp+39,(vlSelfRef.testbench_full__DOT__sclk_prev));
        bufp->chgBit(oldp+40,(vlSelfRef.testbench_full__DOT__mosi_at_high));
        bufp->chgCData(oldp+41,(vlSelfRef.testbench_full__DOT__u_dut__DOT__state),4);
        bufp->chgBit(oldp+42,(vlSelfRef.testbench_full__DOT__u_dut__DOT__enc_start));
        bufp->chgBit(oldp+43,(vlSelfRef.testbench_full__DOT__u_dut__DOT__enc_done));
        bufp->chgBit(oldp+44,(vlSelfRef.testbench_full__DOT__u_dut__DOT__spi_start));
        bufp->chgBit(oldp+45,(vlSelfRef.testbench_full__DOT__u_dut__DOT__spi_done));
        bufp->chgBit(oldp+46,(vlSelfRef.testbench_full__DOT__u_dut__DOT__slave_done));
        bufp->chgBit(oldp+47,(vlSelfRef.testbench_full__DOT__u_dut__DOT__dec_start));
        bufp->chgBit(oldp+48,(vlSelfRef.testbench_full__DOT__u_dut__DOT__dec_done));
        bufp->chgQData(oldp+49,(vlSelfRef.testbench_full__DOT__u_dut__DOT__u_dec__DOT__u_mod_exp_dec__DOT__acc),64);
        bufp->chgQData(oldp+51,(vlSelfRef.testbench_full__DOT__u_dut__DOT__u_dec__DOT__u_mod_exp_dec__DOT__base_r),64);
        bufp->chgIData(oldp+53,(vlSelfRef.testbench_full__DOT__u_dut__DOT__u_dec__DOT__u_mod_exp_dec__DOT__exp_r),32);
        bufp->chgCData(oldp+54,(vlSelfRef.testbench_full__DOT__u_dut__DOT__u_dec__DOT__u_mod_exp_dec__DOT__bit_cnt),6);
        bufp->chgBit(oldp+55,(vlSelfRef.testbench_full__DOT__u_dut__DOT__u_dec__DOT__u_mod_exp_dec__DOT__busy));
        bufp->chgQData(oldp+56,(vlSelfRef.testbench_full__DOT__u_dut__DOT__u_enc__DOT__u_mod_exp_enc__DOT__acc),64);
        bufp->chgQData(oldp+58,(vlSelfRef.testbench_full__DOT__u_dut__DOT__u_enc__DOT__u_mod_exp_enc__DOT__base_r),64);
        bufp->chgIData(oldp+60,(vlSelfRef.testbench_full__DOT__u_dut__DOT__u_enc__DOT__u_mod_exp_enc__DOT__exp_r),32);
        bufp->chgCData(oldp+61,(vlSelfRef.testbench_full__DOT__u_dut__DOT__u_enc__DOT__u_mod_exp_enc__DOT__bit_cnt),6);
        bufp->chgBit(oldp+62,(vlSelfRef.testbench_full__DOT__u_dut__DOT__u_enc__DOT__u_mod_exp_enc__DOT__busy));
        bufp->chgBit(oldp+63,(vlSelfRef.testbench_full__DOT__u_dut__DOT__u_spi_m__DOT__state));
        bufp->chgIData(oldp+64,(vlSelfRef.testbench_full__DOT__u_dut__DOT__u_spi_m__DOT__shift_reg),32);
        bufp->chgCData(oldp+65,(vlSelfRef.testbench_full__DOT__u_dut__DOT__u_spi_m__DOT__bit_cnt),6);
        bufp->chgCData(oldp+66,(vlSelfRef.testbench_full__DOT__u_dut__DOT__u_spi_m__DOT__clk_cnt),6);
        bufp->chgBit(oldp+67,(vlSelfRef.testbench_full__DOT__u_dut__DOT__u_spi_m__DOT__sclk_en));
        bufp->chgBit(oldp+68,(vlSelfRef.testbench_full__DOT__u_dut__DOT__u_spi_s__DOT__sclk_d1));
        bufp->chgBit(oldp+69,(vlSelfRef.testbench_full__DOT__u_dut__DOT__u_spi_s__DOT__sclk_d2));
        bufp->chgBit(oldp+70,(((~ (IData)(vlSelfRef.testbench_full__DOT__u_dut__DOT__u_spi_s__DOT__sclk_d2)) 
                               & (IData)(vlSelfRef.testbench_full__DOT__u_dut__DOT__u_spi_s__DOT__sclk_d1))));
        bufp->chgIData(oldp+71,(vlSelfRef.testbench_full__DOT__u_dut__DOT__u_spi_s__DOT__shift_reg),32);
        bufp->chgCData(oldp+72,(vlSelfRef.testbench_full__DOT__u_dut__DOT__u_spi_s__DOT__bit_cnt),6);
        bufp->chgBit(oldp+73,(vlSelfRef.testbench_full__DOT__u_dut__DOT__u_spi_s__DOT__active));
    }
    bufp->chgBit(oldp+74,(vlSelfRef.testbench_full__DOT__clk));
    bufp->chgBit(oldp+75,(vlSelfRef.testbench_full__DOT__bus_framing_error));
    bufp->chgBit(oldp+76,(vlSelfRef.testbench_full__DOT__mosi_glitch_error));
}

void Vtestbench_full___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench_full___024root__trace_cleanup\n"); );
    // Init
    Vtestbench_full___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtestbench_full___024root*>(voidSelf);
    Vtestbench_full__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
