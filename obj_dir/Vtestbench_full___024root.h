// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtestbench_full.h for the primary calling header

#ifndef VERILATED_VTESTBENCH_FULL___024ROOT_H_
#define VERILATED_VTESTBENCH_FULL___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtestbench_full__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtestbench_full___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ testbench_full__DOT__clk;
        CData/*0:0*/ testbench_full__DOT__rst_n;
        CData/*0:0*/ testbench_full__DOT__start;
        CData/*0:0*/ testbench_full__DOT__done;
        CData/*5:0*/ testbench_full__DOT__bus_bit_cnt;
        CData/*0:0*/ testbench_full__DOT__bus_active;
        CData/*0:0*/ testbench_full__DOT__bus_capture_valid;
        CData/*0:0*/ testbench_full__DOT__bus_framing_error;
        CData/*0:0*/ testbench_full__DOT__mosi_glitch_error;
        CData/*0:0*/ testbench_full__DOT__sclk_prev;
        CData/*0:0*/ testbench_full__DOT__mosi_at_high;
        CData/*3:0*/ testbench_full__DOT__u_dut__DOT__state;
        CData/*0:0*/ testbench_full__DOT__u_dut__DOT__enc_start;
        CData/*0:0*/ testbench_full__DOT__u_dut__DOT__enc_done;
        CData/*0:0*/ testbench_full__DOT__u_dut__DOT__spi_start;
        CData/*0:0*/ testbench_full__DOT__u_dut__DOT__spi_done;
        CData/*0:0*/ testbench_full__DOT__u_dut__DOT__sclk_w;
        CData/*0:0*/ testbench_full__DOT__u_dut__DOT__mosi_w;
        CData/*0:0*/ testbench_full__DOT__u_dut__DOT__ss_n_w;
        CData/*0:0*/ testbench_full__DOT__u_dut__DOT__slave_done;
        CData/*0:0*/ testbench_full__DOT__u_dut__DOT__dec_start;
        CData/*0:0*/ testbench_full__DOT__u_dut__DOT__dec_done;
        CData/*5:0*/ testbench_full__DOT__u_dut__DOT__u_enc__DOT__u_mod_exp_enc__DOT__bit_cnt;
        CData/*0:0*/ testbench_full__DOT__u_dut__DOT__u_enc__DOT__u_mod_exp_enc__DOT__busy;
        CData/*0:0*/ testbench_full__DOT__u_dut__DOT__u_spi_m__DOT__state;
        CData/*5:0*/ testbench_full__DOT__u_dut__DOT__u_spi_m__DOT__bit_cnt;
        CData/*5:0*/ testbench_full__DOT__u_dut__DOT__u_spi_m__DOT__clk_cnt;
        CData/*0:0*/ testbench_full__DOT__u_dut__DOT__u_spi_m__DOT__sclk_en;
        CData/*0:0*/ testbench_full__DOT__u_dut__DOT__u_spi_s__DOT__sclk_d1;
        CData/*0:0*/ testbench_full__DOT__u_dut__DOT__u_spi_s__DOT__sclk_d2;
        CData/*5:0*/ testbench_full__DOT__u_dut__DOT__u_spi_s__DOT__bit_cnt;
        CData/*0:0*/ testbench_full__DOT__u_dut__DOT__u_spi_s__DOT__active;
        CData/*5:0*/ testbench_full__DOT__u_dut__DOT__u_dec__DOT__u_mod_exp_dec__DOT__bit_cnt;
        CData/*0:0*/ testbench_full__DOT__u_dut__DOT__u_dec__DOT__u_mod_exp_dec__DOT__busy;
        CData/*0:0*/ __Vtrigprevexpr___TOP__testbench_full__DOT__clk__0;
        CData/*0:0*/ __VactContinue;
        IData/*31:0*/ testbench_full__DOT__message_in;
        IData/*31:0*/ testbench_full__DOT__golden_modexp__Vstatic__e;
        IData/*31:0*/ testbench_full__DOT__golden_modexp__Vstatic__i;
        IData/*31:0*/ testbench_full__DOT__pass_count;
        IData/*31:0*/ testbench_full__DOT__fail_count;
        IData/*31:0*/ testbench_full__DOT__check_count;
        IData/*31:0*/ testbench_full__DOT__bus_capture;
        IData/*31:0*/ testbench_full__DOT__timeout;
        IData/*31:0*/ testbench_full__DOT__run_test__Vstatic__exp_cipher;
        IData/*31:0*/ testbench_full__DOT__run_test__Vstatic__exp_plain;
        IData/*31:0*/ testbench_full__DOT__done_pulses;
        IData/*31:0*/ testbench_full__DOT__r;
        IData/*31:0*/ testbench_full__DOT__rnd_idx;
        VlWide<10>/*319:0*/ testbench_full__DOT__rnd_label;
        IData/*31:0*/ testbench_full__DOT__u_dut__DOT__cipher_w;
        IData/*31:0*/ testbench_full__DOT__u_dut__DOT__received_w;
        IData/*31:0*/ testbench_full__DOT__u_dut__DOT__decrypted_w;
        IData/*31:0*/ testbench_full__DOT__u_dut__DOT__u_enc__DOT__u_mod_exp_enc__DOT__exp_r;
        IData/*31:0*/ testbench_full__DOT__u_dut__DOT__u_spi_m__DOT__shift_reg;
        IData/*31:0*/ testbench_full__DOT__u_dut__DOT__u_spi_s__DOT__shift_reg;
        IData/*31:0*/ testbench_full__DOT__u_dut__DOT__u_dec__DOT__u_mod_exp_dec__DOT__exp_r;
        IData/*31:0*/ __Vtask_testbench_full__DOT__run_test__77__msg;
        IData/*31:0*/ __VactIterCount;
        QData/*63:0*/ testbench_full__DOT__golden_modexp__Vstatic__result;
        QData/*63:0*/ testbench_full__DOT__golden_modexp__Vstatic__b;
        QData/*63:0*/ testbench_full__DOT__u_dut__DOT__u_enc__DOT__u_mod_exp_enc__DOT__acc;
        QData/*63:0*/ testbench_full__DOT__u_dut__DOT__u_enc__DOT__u_mod_exp_enc__DOT__base_r;
        QData/*63:0*/ testbench_full__DOT__u_dut__DOT__u_dec__DOT__u_mod_exp_dec__DOT__acc;
    };
    struct {
        QData/*63:0*/ testbench_full__DOT__u_dut__DOT__u_dec__DOT__u_mod_exp_dec__DOT__base_r;
        VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    };
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h7bf023fa__0;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtestbench_full__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtestbench_full___024root(Vtestbench_full__Syms* symsp, const char* v__name);
    ~Vtestbench_full___024root();
    VL_UNCOPYABLE(Vtestbench_full___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
