// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench_full.h for the primary calling header

#include "Vtestbench_full__pch.h"
#include "Vtestbench_full___024root.h"

VL_ATTR_COLD void Vtestbench_full___024root___eval_static(Vtestbench_full___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench_full__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench_full___024root___eval_static\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtestbench_full___024root___eval_final(Vtestbench_full___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench_full__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench_full___024root___eval_final\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtestbench_full___024root___eval_settle(Vtestbench_full___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench_full__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench_full___024root___eval_settle\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtestbench_full___024root___dump_triggers__act(Vtestbench_full___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench_full__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench_full___024root___dump_triggers__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge testbench_full.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtestbench_full___024root___dump_triggers__nba(Vtestbench_full___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench_full__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench_full___024root___dump_triggers__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge testbench_full.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtestbench_full___024root___ctor_var_reset(Vtestbench_full___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench_full__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench_full___024root___ctor_var_reset\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->testbench_full__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->testbench_full__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->testbench_full__DOT__start = VL_RAND_RESET_I(1);
    vlSelf->testbench_full__DOT__message_in = VL_RAND_RESET_I(32);
    vlSelf->testbench_full__DOT__done = VL_RAND_RESET_I(1);
    vlSelf->testbench_full__DOT__golden_modexp__Vstatic__result = VL_RAND_RESET_Q(64);
    vlSelf->testbench_full__DOT__golden_modexp__Vstatic__b = VL_RAND_RESET_Q(64);
    vlSelf->testbench_full__DOT__golden_modexp__Vstatic__e = VL_RAND_RESET_I(32);
    vlSelf->testbench_full__DOT__golden_modexp__Vstatic__i = VL_RAND_RESET_I(32);
    vlSelf->testbench_full__DOT__pass_count = VL_RAND_RESET_I(32);
    vlSelf->testbench_full__DOT__fail_count = VL_RAND_RESET_I(32);
    vlSelf->testbench_full__DOT__check_count = VL_RAND_RESET_I(32);
    vlSelf->testbench_full__DOT__bus_capture = VL_RAND_RESET_I(32);
    vlSelf->testbench_full__DOT__bus_bit_cnt = VL_RAND_RESET_I(6);
    vlSelf->testbench_full__DOT__bus_active = VL_RAND_RESET_I(1);
    vlSelf->testbench_full__DOT__bus_capture_valid = VL_RAND_RESET_I(1);
    vlSelf->testbench_full__DOT__bus_framing_error = VL_RAND_RESET_I(1);
    vlSelf->testbench_full__DOT__mosi_glitch_error = VL_RAND_RESET_I(1);
    vlSelf->testbench_full__DOT__sclk_prev = VL_RAND_RESET_I(1);
    vlSelf->testbench_full__DOT__mosi_at_high = VL_RAND_RESET_I(1);
    vlSelf->testbench_full__DOT__timeout = VL_RAND_RESET_I(32);
    vlSelf->testbench_full__DOT__run_test__Vstatic__exp_cipher = VL_RAND_RESET_I(32);
    vlSelf->testbench_full__DOT__run_test__Vstatic__exp_plain = VL_RAND_RESET_I(32);
    vlSelf->testbench_full__DOT__done_pulses = VL_RAND_RESET_I(32);
    vlSelf->testbench_full__DOT__r = VL_RAND_RESET_I(32);
    vlSelf->testbench_full__DOT__rnd_idx = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(320, vlSelf->testbench_full__DOT__rnd_label);
    vlSelf->testbench_full__DOT__u_dut__DOT__state = VL_RAND_RESET_I(4);
    vlSelf->testbench_full__DOT__u_dut__DOT__enc_start = VL_RAND_RESET_I(1);
    vlSelf->testbench_full__DOT__u_dut__DOT__enc_done = VL_RAND_RESET_I(1);
    vlSelf->testbench_full__DOT__u_dut__DOT__cipher_w = VL_RAND_RESET_I(32);
    vlSelf->testbench_full__DOT__u_dut__DOT__spi_start = VL_RAND_RESET_I(1);
    vlSelf->testbench_full__DOT__u_dut__DOT__spi_done = VL_RAND_RESET_I(1);
    vlSelf->testbench_full__DOT__u_dut__DOT__sclk_w = VL_RAND_RESET_I(1);
    vlSelf->testbench_full__DOT__u_dut__DOT__mosi_w = VL_RAND_RESET_I(1);
    vlSelf->testbench_full__DOT__u_dut__DOT__ss_n_w = VL_RAND_RESET_I(1);
    vlSelf->testbench_full__DOT__u_dut__DOT__slave_done = VL_RAND_RESET_I(1);
    vlSelf->testbench_full__DOT__u_dut__DOT__received_w = VL_RAND_RESET_I(32);
    vlSelf->testbench_full__DOT__u_dut__DOT__dec_start = VL_RAND_RESET_I(1);
    vlSelf->testbench_full__DOT__u_dut__DOT__dec_done = VL_RAND_RESET_I(1);
    vlSelf->testbench_full__DOT__u_dut__DOT__decrypted_w = VL_RAND_RESET_I(32);
    vlSelf->testbench_full__DOT__u_dut__DOT__u_enc__DOT__u_mod_exp_enc__DOT__acc = VL_RAND_RESET_Q(64);
    vlSelf->testbench_full__DOT__u_dut__DOT__u_enc__DOT__u_mod_exp_enc__DOT__base_r = VL_RAND_RESET_Q(64);
    vlSelf->testbench_full__DOT__u_dut__DOT__u_enc__DOT__u_mod_exp_enc__DOT__exp_r = VL_RAND_RESET_I(32);
    vlSelf->testbench_full__DOT__u_dut__DOT__u_enc__DOT__u_mod_exp_enc__DOT__bit_cnt = VL_RAND_RESET_I(6);
    vlSelf->testbench_full__DOT__u_dut__DOT__u_enc__DOT__u_mod_exp_enc__DOT__busy = VL_RAND_RESET_I(1);
    vlSelf->testbench_full__DOT__u_dut__DOT__u_spi_m__DOT__state = VL_RAND_RESET_I(1);
    vlSelf->testbench_full__DOT__u_dut__DOT__u_spi_m__DOT__shift_reg = VL_RAND_RESET_I(32);
    vlSelf->testbench_full__DOT__u_dut__DOT__u_spi_m__DOT__bit_cnt = VL_RAND_RESET_I(6);
    vlSelf->testbench_full__DOT__u_dut__DOT__u_spi_m__DOT__clk_cnt = VL_RAND_RESET_I(6);
    vlSelf->testbench_full__DOT__u_dut__DOT__u_spi_m__DOT__sclk_en = VL_RAND_RESET_I(1);
    vlSelf->testbench_full__DOT__u_dut__DOT__u_spi_s__DOT__sclk_d1 = VL_RAND_RESET_I(1);
    vlSelf->testbench_full__DOT__u_dut__DOT__u_spi_s__DOT__sclk_d2 = VL_RAND_RESET_I(1);
    vlSelf->testbench_full__DOT__u_dut__DOT__u_spi_s__DOT__shift_reg = VL_RAND_RESET_I(32);
    vlSelf->testbench_full__DOT__u_dut__DOT__u_spi_s__DOT__bit_cnt = VL_RAND_RESET_I(6);
    vlSelf->testbench_full__DOT__u_dut__DOT__u_spi_s__DOT__active = VL_RAND_RESET_I(1);
    vlSelf->testbench_full__DOT__u_dut__DOT__u_dec__DOT__u_mod_exp_dec__DOT__acc = VL_RAND_RESET_Q(64);
    vlSelf->testbench_full__DOT__u_dut__DOT__u_dec__DOT__u_mod_exp_dec__DOT__base_r = VL_RAND_RESET_Q(64);
    vlSelf->testbench_full__DOT__u_dut__DOT__u_dec__DOT__u_mod_exp_dec__DOT__exp_r = VL_RAND_RESET_I(32);
    vlSelf->testbench_full__DOT__u_dut__DOT__u_dec__DOT__u_mod_exp_dec__DOT__bit_cnt = VL_RAND_RESET_I(6);
    vlSelf->testbench_full__DOT__u_dut__DOT__u_dec__DOT__u_mod_exp_dec__DOT__busy = VL_RAND_RESET_I(1);
    vlSelf->__Vtask_testbench_full__DOT__run_test__77__msg = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__testbench_full__DOT__clk__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
