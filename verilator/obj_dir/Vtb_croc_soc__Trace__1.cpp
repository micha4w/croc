// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_croc_soc__Syms.h"


void Vtb_croc_soc___024root__trace_chg_0_sub_1(Vtb_croc_soc___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root__trace_chg_0_sub_1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 4233);
    // Body
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[0x3aU])) {
        bufp->chgBit(oldp+0,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_normal_and_error_interrupt_status_buffer_write_ready__q));
        bufp->chgBit(oldp+1,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_normal_and_error_interrupt_status_buffer_read_ready__q));
        bufp->chgBit(oldp+2,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_normal_and_error_interrupt_status_card_insertion__q));
        bufp->chgBit(oldp+3,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_normal_and_error_interrupt_status_card_removal__q));
        bufp->chgBit(oldp+4,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_normal_and_error_interrupt_status_card_interrupt__q));
        bufp->chgCData(oldp+5,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_normal_and_error_interrupt_status_rsvd_14__q),6);
        bufp->chgBit(oldp+6,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_normal_and_error_interrupt_status_error_interrupt__q));
        bufp->chgBit(oldp+7,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_normal_and_error_interrupt_status_command_timeout_error__q));
        bufp->chgBit(oldp+8,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_normal_and_error_interrupt_status_command_crc_error__q));
        bufp->chgBit(oldp+9,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_normal_and_error_interrupt_status_command_end_bit_error__q));
        bufp->chgBit(oldp+10,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_normal_and_error_interrupt_status_command_index_error__q));
        bufp->chgBit(oldp+11,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_normal_and_error_interrupt_status_data_timeout_error__q));
        bufp->chgBit(oldp+12,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_normal_and_error_interrupt_status_data_crc_error__q));
        bufp->chgBit(oldp+13,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_normal_and_error_interrupt_status_data_end_bit_error__q));
        bufp->chgBit(oldp+14,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_normal_and_error_interrupt_status_current_limit_error__q));
        bufp->chgBit(oldp+15,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_normal_and_error_interrupt_status_auto_cmd12_error__q));
        bufp->chgCData(oldp+16,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_normal_and_error_interrupt_status_rsvd_27__q),3);
        bufp->chgCData(oldp+17,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_normal_and_error_interrupt_status_vendor_specific_error_status__q),4);
        bufp->chgBit(oldp+18,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_normal_and_error_interrupt_status_enable_command_complete_status_enable__q));
        bufp->chgBit(oldp+19,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_normal_and_error_interrupt_status_enable_transfer_complete_status_enable__q));
        bufp->chgBit(oldp+20,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_normal_and_error_interrupt_status_enable_block_gap_event_status_enable__q));
        bufp->chgBit(oldp+21,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_normal_and_error_interrupt_status_enable_dma_interrupt_status_enable__q));
        bufp->chgBit(oldp+22,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_normal_and_error_interrupt_status_enable_buffer_write_ready_status_enable__q));
        bufp->chgBit(oldp+23,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_normal_and_error_interrupt_status_enable_buffer_read_ready_status_enable__q));
        bufp->chgBit(oldp+24,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_normal_and_error_interrupt_status_enable_card_insertion_status_enable__q));
        bufp->chgBit(oldp+25,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_normal_and_error_interrupt_status_enable_card_removal_status_enable__q));
        bufp->chgBit(oldp+26,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_normal_and_error_interrupt_status_enable_card_interrupt_status_enable__q));
        bufp->chgCData(oldp+27,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_normal_and_error_interrupt_status_enable_rsvd_14__q),6);
        bufp->chgBit(oldp+28,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_normal_and_error_interrupt_status_enable_fixed_to_0__q));
        bufp->chgBit(oldp+29,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_normal_and_error_interrupt_status_enable_command_timeout_error_status_enable__q));
        bufp->chgBit(oldp+30,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_normal_and_error_interrupt_status_enable_command_crc_error_status_enable__q));
        bufp->chgBit(oldp+31,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_normal_and_error_interrupt_status_enable_command_end_bit_error_status_enable__q));
        bufp->chgBit(oldp+32,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_normal_and_error_interrupt_status_enable_command_index_error_status_enable__q));
        bufp->chgBit(oldp+33,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_normal_and_error_interrupt_status_enable_data_timeout_error_status_enable__q));
        bufp->chgBit(oldp+34,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_normal_and_error_interrupt_status_enable_data_crc_error_status_enable__q));
        bufp->chgBit(oldp+35,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_normal_and_error_interrupt_status_enable_data_end_bit_error_status_enable__q));
        bufp->chgBit(oldp+36,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_normal_and_error_interrupt_status_enable_current_limit_error_status_enable__q));
        bufp->chgBit(oldp+37,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_normal_and_error_interrupt_status_enable_auto_cmd12_error_status_enable__q));
        bufp->chgCData(oldp+38,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_normal_and_error_interrupt_status_enable_rsvd_27__q),3);
        bufp->chgCData(oldp+39,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_normal_and_error_interrupt_status_enable_vendor_specific_error_status_enable__q),4);
        bufp->chgBit(oldp+40,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_normal_and_error_interrupt_signal_enable_command_complete_signal_enable__q));
        bufp->chgBit(oldp+41,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_normal_and_error_interrupt_signal_enable_transfer_complete_signal_enable__q));
        bufp->chgBit(oldp+42,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_normal_and_error_interrupt_signal_enable_block_gap_event_signal_enable__q));
        bufp->chgBit(oldp+43,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_normal_and_error_interrupt_signal_enable_dma_interrupt_signal_enable__q));
        bufp->chgBit(oldp+44,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_normal_and_error_interrupt_signal_enable_buffer_write_ready_signal_enable__q));
        bufp->chgBit(oldp+45,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_normal_and_error_interrupt_signal_enable_buffer_read_ready_signal_enable__q));
        bufp->chgBit(oldp+46,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_normal_and_error_interrupt_signal_enable_card_insertion_signal_enable__q));
        bufp->chgBit(oldp+47,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_normal_and_error_interrupt_signal_enable_card_removal_signal_enable__q));
        bufp->chgBit(oldp+48,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_normal_and_error_interrupt_signal_enable_card_interrupt_signal_enable__q));
        bufp->chgCData(oldp+49,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_normal_and_error_interrupt_signal_enable_rsvd_14__q),6);
        bufp->chgBit(oldp+50,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_normal_and_error_interrupt_signal_enable_fixed_to_0__q));
        bufp->chgBit(oldp+51,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_normal_and_error_interrupt_signal_enable_command_timeout_error_signal_enable__q));
        bufp->chgBit(oldp+52,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_normal_and_error_interrupt_signal_enable_command_crc_error_signal_enable__q));
        bufp->chgBit(oldp+53,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_normal_and_error_interrupt_signal_enable_command_end_bit_error_signal_enable__q));
        bufp->chgBit(oldp+54,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_normal_and_error_interrupt_signal_enable_command_index_error_signal_enable__q));
        bufp->chgBit(oldp+55,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_normal_and_error_interrupt_signal_enable_data_timeout_error_signal_enable__q));
        bufp->chgBit(oldp+56,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_normal_and_error_interrupt_signal_enable_data_crc_error_signal_enable__q));
        bufp->chgBit(oldp+57,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_normal_and_error_interrupt_signal_enable_data_end_bit_error_signal_enable__q));
        bufp->chgBit(oldp+58,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_normal_and_error_interrupt_signal_enable_current_limit_error_signal_enable__q));
        bufp->chgBit(oldp+59,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_normal_and_error_interrupt_signal_enable_auto_cmd12_error_signal_enable__q));
        bufp->chgCData(oldp+60,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_normal_and_error_interrupt_signal_enable_rsvd_27__q),3);
        bufp->chgCData(oldp+61,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_normal_and_error_interrupt_signal_enable_vendor_specific_error_signal_enable__q),4);
        bufp->chgBit(oldp+62,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_auto_cmd12_error_status_auto_cmd12_not_executed__q));
        bufp->chgBit(oldp+63,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_auto_cmd12_error_status_auto_cmd12_timeout_error__q));
        bufp->chgBit(oldp+64,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_auto_cmd12_error_status_auto_cmd12_crc_error__q));
        bufp->chgBit(oldp+65,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_auto_cmd12_error_status_auto_cmd12_end_bit_error__q));
        bufp->chgBit(oldp+66,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_auto_cmd12_error_status_auto_cmd12_index_error__q));
        bufp->chgCData(oldp+67,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_auto_cmd12_error_status_rsvd_6__q),2);
        bufp->chgBit(oldp+68,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_auto_cmd12_error_status_command_not_issued_by_auto_cmd12_error__q));
        bufp->chgCData(oldp+69,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_auto_cmd12_error_status_rsvd_15__q),8);
        bufp->chgCData(oldp+70,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_capabilities_timeout_clock_frequency__q),6);
        bufp->chgBit(oldp+71,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_capabilities_rsvd_6__q));
        bufp->chgBit(oldp+72,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_capabilities_timeout_clock_unit__q));
        bufp->chgCData(oldp+73,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_capabilities_base_clock_frequency_for_sd_clock__q),6);
        bufp->chgCData(oldp+74,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_capabilities_rsvd_15__q),2);
        bufp->chgCData(oldp+75,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_capabilities_max_block_length__q),2);
        bufp->chgCData(oldp+76,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_capabilities_rsvd_20__q),3);
        bufp->chgBit(oldp+77,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_capabilities_high_speed_support__q));
        bufp->chgBit(oldp+78,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_capabilities_dma_support__q));
        bufp->chgBit(oldp+79,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_capabilities_suspend_resume_support__q));
        bufp->chgBit(oldp+80,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_capabilities_voltage_support_3_3v__q));
        bufp->chgBit(oldp+81,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_capabilities_voltage_support_3_0v__q));
        bufp->chgBit(oldp+82,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_capabilities_voltage_support_1_8v__q));
        bufp->chgCData(oldp+83,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_capabilities_rsvd_63__q),5);
        bufp->chgCData(oldp+84,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_maximum_current_capabilities_maximum_current_for_3_3v__q),8);
        bufp->chgCData(oldp+85,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_maximum_current_capabilities_maximum_current_for_3_0v__q),8);
        bufp->chgCData(oldp+86,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_maximum_current_capabilities_maximum_current_for_1_8v__q),8);
        bufp->chgCData(oldp+87,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_maximum_current_capabilities_rsvd_63__q),8);
        bufp->chgCData(oldp+88,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_slot_interrupt_status_and_host_controller_version_interrupt_signal_for_each_slot__q),8);
        bufp->chgCData(oldp+89,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_slot_interrupt_status_and_host_controller_version_rsvd_15__q),8);
        bufp->chgCData(oldp+90,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_slot_interrupt_status_and_host_controller_version_specification_version_number__q),8);
        bufp->chgCData(oldp+91,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_slot_interrupt_status_and_host_controller_version_vendor_version_number__q),8);
        bufp->chgBit(oldp+92,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_argument__DOT__qe));
        bufp->chgBit(oldp+93,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_auto_cmd12_error_status_auto_cmd12_crc_error__DOT__qe));
        bufp->chgBit(oldp+94,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_auto_cmd12_error_status_auto_cmd12_end_bit_error__DOT__qe));
        bufp->chgBit(oldp+95,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_auto_cmd12_error_status_auto_cmd12_index_error__DOT__qe));
        bufp->chgBit(oldp+96,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_auto_cmd12_error_status_auto_cmd12_not_executed__DOT__qe));
        bufp->chgBit(oldp+97,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_auto_cmd12_error_status_auto_cmd12_timeout_error__DOT__qe));
        bufp->chgBit(oldp+98,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_auto_cmd12_error_status_command_not_issued_by_auto_cmd12_error__DOT__qe));
        bufp->chgBit(oldp+99,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_auto_cmd12_error_status_rsvd_15__DOT__qe));
        bufp->chgBit(oldp+100,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_auto_cmd12_error_status_rsvd_6__DOT__qe));
        bufp->chgBit(oldp+101,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_block_size_and_count_blocks_count_for_current_transfer__DOT__qe));
        bufp->chgBit(oldp+102,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_block_size_and_count_host_dma_buffer_boundary__DOT__qe));
        bufp->chgBit(oldp+103,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_block_size_and_count_rsvd_15__DOT__qe));
        bufp->chgBit(oldp+104,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_block_size_and_count_transfer_block_size__DOT__qe));
        bufp->chgBit(oldp+105,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_buffer_data_port__DOT__qe));
        bufp->chgBit(oldp+106,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_capabilities_base_clock_frequency_for_sd_clock__DOT__qe));
        bufp->chgBit(oldp+107,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_capabilities_dma_support__DOT__qe));
        bufp->chgBit(oldp+108,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_capabilities_high_speed_support__DOT__qe));
        bufp->chgBit(oldp+109,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_capabilities_max_block_length__DOT__qe));
        bufp->chgBit(oldp+110,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_capabilities_rsvd_15__DOT__qe));
        bufp->chgBit(oldp+111,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_capabilities_rsvd_20__DOT__qe));
        bufp->chgBit(oldp+112,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_capabilities_rsvd_6__DOT__qe));
        bufp->chgBit(oldp+113,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_capabilities_rsvd_63__DOT__qe));
        bufp->chgBit(oldp+114,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_capabilities_suspend_resume_support__DOT__qe));
        bufp->chgBit(oldp+115,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_capabilities_timeout_clock_frequency__DOT__qe));
        bufp->chgBit(oldp+116,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_capabilities_timeout_clock_unit__DOT__qe));
        bufp->chgBit(oldp+117,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_capabilities_voltage_support_1_8v__DOT__qe));
        bufp->chgBit(oldp+118,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_capabilities_voltage_support_3_0v__DOT__qe));
        bufp->chgBit(oldp+119,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_capabilities_voltage_support_3_3v__DOT__qe));
        bufp->chgBit(oldp+120,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_clock_and_timeout_control_and_software_reset_data_timeout_counter_value__DOT__qe));
        bufp->chgBit(oldp+121,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_clock_and_timeout_control_and_software_reset_internal_clock_enable__DOT__qe));
        bufp->chgBit(oldp+122,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_clock_and_timeout_control_and_software_reset_internal_clock_stable__DOT__qe));
        bufp->chgBit(oldp+123,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_clock_and_timeout_control_and_software_reset_rsvd_23__DOT__qe));
        bufp->chgBit(oldp+124,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_clock_and_timeout_control_and_software_reset_rsvd_31__DOT__qe));
        bufp->chgBit(oldp+125,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_clock_and_timeout_control_and_software_reset_rsvd_7__DOT__qe));
        bufp->chgBit(oldp+126,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_clock_and_timeout_control_and_software_reset_sd_clock_enable__DOT__qe));
        bufp->chgBit(oldp+127,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_clock_and_timeout_control_and_software_reset_sdclk_frequency_select__DOT__qe));
        bufp->chgBit(oldp+128,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_clock_and_timeout_control_and_software_reset_software_reset_for_all__DOT__qe));
        bufp->chgBit(oldp+129,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_clock_and_timeout_control_and_software_reset_software_reset_for_cmd_line__DOT__qe));
        bufp->chgBit(oldp+130,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_clock_and_timeout_control_and_software_reset_software_reset_for_dat_line__DOT__qe));
        bufp->chgBit(oldp+131,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_host_and_power_and_block_gap_and_wakeup_control_continue_request__DOT__qe));
        bufp->chgBit(oldp+132,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_host_and_power_and_block_gap_and_wakeup_control_data_transfer_width__DOT__qe));
        bufp->chgBit(oldp+133,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_host_and_power_and_block_gap_and_wakeup_control_high_speed_enable__DOT__qe));
        bufp->chgBit(oldp+134,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_host_and_power_and_block_gap_and_wakeup_control_interrupt_at_block_gap__DOT__qe));
        bufp->chgBit(oldp+135,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_host_and_power_and_block_gap_and_wakeup_control_led_control__DOT__qe));
        bufp->chgBit(oldp+136,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_host_and_power_and_block_gap_and_wakeup_control_read_wait_control__DOT__qe));
        bufp->chgBit(oldp+137,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_host_and_power_and_block_gap_and_wakeup_control_rsvd_15__DOT__qe));
        bufp->chgBit(oldp+138,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_host_and_power_and_block_gap_and_wakeup_control_rsvd_23__DOT__qe));
        bufp->chgBit(oldp+139,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_host_and_power_and_block_gap_and_wakeup_control_rsvd_31__DOT__qe));
        bufp->chgBit(oldp+140,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_host_and_power_and_block_gap_and_wakeup_control_rsvd_7__DOT__qe));
        bufp->chgBit(oldp+141,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_host_and_power_and_block_gap_and_wakeup_control_sd_bus_power__DOT__qe));
        bufp->chgBit(oldp+142,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_host_and_power_and_block_gap_and_wakeup_control_sd_bus_voltage_select__DOT__qe));
        bufp->chgBit(oldp+143,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_host_and_power_and_block_gap_and_wakeup_control_stop_at_block_gap_request__DOT__qe));
        bufp->chgBit(oldp+144,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_host_and_power_and_block_gap_and_wakeup_control_wakeup_event_enable_on_card_interrupt__DOT__qe));
        bufp->chgBit(oldp+145,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_host_and_power_and_block_gap_and_wakeup_control_wakeup_event_enable_on_sd_card_insertion__DOT__qe));
        bufp->chgBit(oldp+146,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_host_and_power_and_block_gap_and_wakeup_control_wakeup_event_enable_on_sd_card_removal__DOT__qe));
        bufp->chgBit(oldp+147,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_maximum_current_capabilities_maximum_current_for_1_8v__DOT__qe));
        bufp->chgBit(oldp+148,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_maximum_current_capabilities_maximum_current_for_3_0v__DOT__qe));
        bufp->chgBit(oldp+149,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_maximum_current_capabilities_maximum_current_for_3_3v__DOT__qe));
        bufp->chgBit(oldp+150,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_maximum_current_capabilities_rsvd_63__DOT__qe));
        bufp->chgBit(oldp+151,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_normal_and_error_interrupt_signal_enable_auto_cmd12_error_signal_enable__DOT__qe));
        bufp->chgBit(oldp+152,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_normal_and_error_interrupt_signal_enable_block_gap_event_signal_enable__DOT__qe));
        bufp->chgBit(oldp+153,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_normal_and_error_interrupt_signal_enable_buffer_read_ready_signal_enable__DOT__qe));
        bufp->chgBit(oldp+154,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_normal_and_error_interrupt_signal_enable_buffer_write_ready_signal_enable__DOT__qe));
        bufp->chgBit(oldp+155,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_normal_and_error_interrupt_signal_enable_card_insertion_signal_enable__DOT__qe));
        bufp->chgBit(oldp+156,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_normal_and_error_interrupt_signal_enable_card_interrupt_signal_enable__DOT__qe));
        bufp->chgBit(oldp+157,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_normal_and_error_interrupt_signal_enable_card_removal_signal_enable__DOT__qe));
        bufp->chgBit(oldp+158,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_normal_and_error_interrupt_signal_enable_command_complete_signal_enable__DOT__qe));
        bufp->chgBit(oldp+159,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_normal_and_error_interrupt_signal_enable_command_crc_error_signal_enable__DOT__qe));
        bufp->chgBit(oldp+160,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_normal_and_error_interrupt_signal_enable_command_end_bit_error_signal_enable__DOT__qe));
        bufp->chgBit(oldp+161,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_normal_and_error_interrupt_signal_enable_command_index_error_signal_enable__DOT__qe));
        bufp->chgBit(oldp+162,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_normal_and_error_interrupt_signal_enable_command_timeout_error_signal_enable__DOT__qe));
        bufp->chgBit(oldp+163,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_normal_and_error_interrupt_signal_enable_current_limit_error_signal_enable__DOT__qe));
        bufp->chgBit(oldp+164,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_normal_and_error_interrupt_signal_enable_data_crc_error_signal_enable__DOT__qe));
        bufp->chgBit(oldp+165,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_normal_and_error_interrupt_signal_enable_data_end_bit_error_signal_enable__DOT__qe));
        bufp->chgBit(oldp+166,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_normal_and_error_interrupt_signal_enable_data_timeout_error_signal_enable__DOT__qe));
        bufp->chgBit(oldp+167,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_normal_and_error_interrupt_signal_enable_dma_interrupt_signal_enable__DOT__qe));
        bufp->chgBit(oldp+168,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_normal_and_error_interrupt_signal_enable_fixed_to_0__DOT__qe));
        bufp->chgBit(oldp+169,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_normal_and_error_interrupt_signal_enable_rsvd_14__DOT__qe));
        bufp->chgBit(oldp+170,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_normal_and_error_interrupt_signal_enable_rsvd_27__DOT__qe));
        bufp->chgBit(oldp+171,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_normal_and_error_interrupt_signal_enable_transfer_complete_signal_enable__DOT__qe));
        bufp->chgBit(oldp+172,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_normal_and_error_interrupt_signal_enable_vendor_specific_error_signal_enable__DOT__qe));
        bufp->chgBit(oldp+173,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_normal_and_error_interrupt_status_auto_cmd12_error__DOT__qe));
        bufp->chgBit(oldp+174,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_normal_and_error_interrupt_status_block_gap_event__DOT__qe));
        bufp->chgBit(oldp+175,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_normal_and_error_interrupt_status_buffer_read_ready__DOT__qe));
        bufp->chgBit(oldp+176,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_normal_and_error_interrupt_status_buffer_write_ready__DOT__qe));
        bufp->chgBit(oldp+177,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_normal_and_error_interrupt_status_card_insertion__DOT__qe));
        bufp->chgBit(oldp+178,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_normal_and_error_interrupt_status_card_interrupt__DOT__qe));
        bufp->chgBit(oldp+179,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_normal_and_error_interrupt_status_card_removal__DOT__qe));
        bufp->chgBit(oldp+180,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_normal_and_error_interrupt_status_command_complete__DOT__qe));
        bufp->chgBit(oldp+181,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_normal_and_error_interrupt_status_command_crc_error__DOT__qe));
        bufp->chgBit(oldp+182,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_normal_and_error_interrupt_status_command_end_bit_error__DOT__qe));
        bufp->chgBit(oldp+183,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_normal_and_error_interrupt_status_command_index_error__DOT__qe));
        bufp->chgBit(oldp+184,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_normal_and_error_interrupt_status_command_timeout_error__DOT__qe));
        bufp->chgBit(oldp+185,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_normal_and_error_interrupt_status_current_limit_error__DOT__qe));
        bufp->chgBit(oldp+186,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_normal_and_error_interrupt_status_data_crc_error__DOT__qe));
        bufp->chgBit(oldp+187,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_normal_and_error_interrupt_status_data_end_bit_error__DOT__qe));
        bufp->chgBit(oldp+188,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_normal_and_error_interrupt_status_data_timeout_error__DOT__qe));
        bufp->chgBit(oldp+189,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_normal_and_error_interrupt_status_dma_interrupt__DOT__qe));
        bufp->chgBit(oldp+190,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_normal_and_error_interrupt_status_enable_auto_cmd12_error_status_enable__DOT__qe));
        bufp->chgBit(oldp+191,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_normal_and_error_interrupt_status_enable_block_gap_event_status_enable__DOT__qe));
        bufp->chgBit(oldp+192,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_normal_and_error_interrupt_status_enable_buffer_read_ready_status_enable__DOT__qe));
        bufp->chgBit(oldp+193,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_normal_and_error_interrupt_status_enable_buffer_write_ready_status_enable__DOT__qe));
        bufp->chgBit(oldp+194,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_normal_and_error_interrupt_status_enable_card_insertion_status_enable__DOT__qe));
        bufp->chgBit(oldp+195,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_normal_and_error_interrupt_status_enable_card_interrupt_status_enable__DOT__qe));
        bufp->chgBit(oldp+196,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_normal_and_error_interrupt_status_enable_card_removal_status_enable__DOT__qe));
        bufp->chgBit(oldp+197,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_normal_and_error_interrupt_status_enable_command_complete_status_enable__DOT__qe));
        bufp->chgBit(oldp+198,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_normal_and_error_interrupt_status_enable_command_crc_error_status_enable__DOT__qe));
        bufp->chgBit(oldp+199,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_normal_and_error_interrupt_status_enable_command_end_bit_error_status_enable__DOT__qe));
        bufp->chgBit(oldp+200,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_normal_and_error_interrupt_status_enable_command_index_error_status_enable__DOT__qe));
        bufp->chgBit(oldp+201,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_normal_and_error_interrupt_status_enable_command_timeout_error_status_enable__DOT__qe));
        bufp->chgBit(oldp+202,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_normal_and_error_interrupt_status_enable_current_limit_error_status_enable__DOT__qe));
        bufp->chgBit(oldp+203,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_normal_and_error_interrupt_status_enable_data_crc_error_status_enable__DOT__qe));
        bufp->chgBit(oldp+204,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_normal_and_error_interrupt_status_enable_data_end_bit_error_status_enable__DOT__qe));
        bufp->chgBit(oldp+205,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_normal_and_error_interrupt_status_enable_data_timeout_error_status_enable__DOT__qe));
        bufp->chgBit(oldp+206,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_normal_and_error_interrupt_status_enable_dma_interrupt_status_enable__DOT__qe));
        bufp->chgBit(oldp+207,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_normal_and_error_interrupt_status_enable_fixed_to_0__DOT__qe));
        bufp->chgBit(oldp+208,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_normal_and_error_interrupt_status_enable_rsvd_14__DOT__qe));
        bufp->chgBit(oldp+209,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_normal_and_error_interrupt_status_enable_rsvd_27__DOT__qe));
        bufp->chgBit(oldp+210,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_normal_and_error_interrupt_status_enable_transfer_complete_status_enable__DOT__qe));
        bufp->chgBit(oldp+211,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_normal_and_error_interrupt_status_enable_vendor_specific_error_status_enable__DOT__qe));
        bufp->chgBit(oldp+212,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_normal_and_error_interrupt_status_error_interrupt__DOT__qe));
        bufp->chgBit(oldp+213,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_normal_and_error_interrupt_status_rsvd_14__DOT__qe));
        bufp->chgBit(oldp+214,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_normal_and_error_interrupt_status_rsvd_27__DOT__qe));
        bufp->chgBit(oldp+215,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_normal_and_error_interrupt_status_transfer_complete__DOT__qe));
        bufp->chgBit(oldp+216,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_normal_and_error_interrupt_status_vendor_specific_error_status__DOT__qe));
        bufp->chgBit(oldp+217,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_present_state_buffer_read_enable__DOT__qe));
        bufp->chgBit(oldp+218,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_present_state_buffer_write_enable__DOT__qe));
        bufp->chgBit(oldp+219,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_present_state_card_detect_pin_level__DOT__qe));
        bufp->chgBit(oldp+220,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_present_state_card_inserted__DOT__qe));
        bufp->chgBit(oldp+221,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_present_state_card_state_stable__DOT__qe));
        bufp->chgBit(oldp+222,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_present_state_cmd_line_signal_level__DOT__qe));
        bufp->chgBit(oldp+223,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_present_state_command_inhibit_cmd__DOT__qe));
        bufp->chgBit(oldp+224,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_present_state_command_inhibit_dat__DOT__qe));
        bufp->chgBit(oldp+225,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_present_state_dat_line_active__DOT__qe));
        bufp->chgBit(oldp+226,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_present_state_dat_line_signal_level__DOT__qe));
        bufp->chgBit(oldp+227,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_present_state_read_transfer_active__DOT__qe));
        bufp->chgBit(oldp+228,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_present_state_rsvd_15__DOT__qe));
        bufp->chgBit(oldp+229,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_present_state_rsvd_31__DOT__qe));
        bufp->chgBit(oldp+230,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_present_state_rsvd_7__DOT__qe));
        bufp->chgBit(oldp+231,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_present_state_write_protect_switch_pin_level__DOT__qe));
        bufp->chgBit(oldp+232,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_present_state_write_transfer_active__DOT__qe));
        bufp->chgBit(oldp+233,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_response0__DOT__qe));
        bufp->chgBit(oldp+234,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_response1__DOT__qe));
        bufp->chgBit(oldp+235,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_response2__DOT__qe));
        bufp->chgBit(oldp+236,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_response3__DOT__qe));
        bufp->chgBit(oldp+237,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_slot_interrupt_status_and_host_controller_version_interrupt_signal_for_each_slot__DOT__qe));
        bufp->chgBit(oldp+238,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_slot_interrupt_status_and_host_controller_version_rsvd_15__DOT__qe));
        bufp->chgBit(oldp+239,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_slot_interrupt_status_and_host_controller_version_specification_version_number__DOT__qe));
        bufp->chgBit(oldp+240,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_slot_interrupt_status_and_host_controller_version_vendor_version_number__DOT__qe));
        bufp->chgBit(oldp+241,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__u_system_address__DOT__qe));
        bufp->chgBit(oldp+242,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_transfer_mode_and_command_auto_cmd12_enable__qe));
        bufp->chgBit(oldp+243,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_transfer_mode_and_command_block_count_enable__qe));
        bufp->chgBit(oldp+244,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_transfer_mode_and_command_command_crc_check_enable__qe));
        bufp->chgBit(oldp+245,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_transfer_mode_and_command_command_index__qe));
        bufp->chgBit(oldp+246,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_transfer_mode_and_command_command_index_check_enable__qe));
        bufp->chgBit(oldp+247,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_transfer_mode_and_command_command_type__qe));
        bufp->chgBit(oldp+248,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_transfer_mode_and_command_data_present_select__qe));
        bufp->chgBit(oldp+249,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_transfer_mode_and_command_data_transfer_direction_select__qe));
        bufp->chgBit(oldp+250,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_transfer_mode_and_command_dma_enable__qe));
        bufp->chgBit(oldp+251,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_transfer_mode_and_command_multi_single_bit_block_select__qe));
        bufp->chgBit(oldp+252,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_transfer_mode_and_command_response_type_select__qe));
        bufp->chgBit(oldp+253,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_transfer_mode_and_command_rsvd_15__qe));
        bufp->chgBit(oldp+254,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_transfer_mode_and_command_rsvd_18__qe));
        bufp->chgBit(oldp+255,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_transfer_mode_and_command_rsvd_3__qe));
        bufp->chgBit(oldp+256,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT____Vcellout__u_transfer_mode_and_command_rsvd_31__qe));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0x3aU] 
                     | vlSelfRef.__Vm_traceActivity
                     [0x48U]))) {
        bufp->chgBit(oldp+257,(((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_ED_CTS__DOT__iDd)) 
                                & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iMSR_CTS))));
        bufp->chgBit(oldp+258,(((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iMSR_CTS)) 
                                & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_ED_CTS__DOT__iDd))));
        bufp->chgBit(oldp+259,(((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_ED_DSR__DOT__iDd)) 
                                & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iMSR_DSR))));
        bufp->chgBit(oldp+260,(((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iMSR_DSR)) 
                                & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_ED_DSR__DOT__iDd))));
        bufp->chgBit(oldp+261,(((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_ED_DCD__DOT__iDd)) 
                                & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iMSR_DCD))));
        bufp->chgBit(oldp+262,(((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iMSR_DCD)) 
                                & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_ED_DCD__DOT__iDd))));
        bufp->chgBit(oldp+263,(((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_ED_RI__DOT__iDd)) 
                                & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iMSR_RI))));
        bufp->chgBit(oldp+264,(((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iMSR_RI)) 
                                & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_ED_RI__DOT__iDd))));
        bufp->chgBit(oldp+265,((((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iIER) 
                                 >> 2U) & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLSR_OE) 
                                           | ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLSR_PE) 
                                              | ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLSR_BI) 
                                                 | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLSR_FE)))))));
        bufp->chgBit(oldp+266,(((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iIER) 
                                & (((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iFCR_FIFOEnable)) 
                                    & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLSR_DR)) 
                                   | ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iFCR_FIFOEnable) 
                                      & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iRXFIFOTrigger))))));
        bufp->chgBit(oldp+267,(((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iIER) 
                                & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iCharTimeout))));
        bufp->chgBit(oldp+268,((((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iIER) 
                                 >> 1U) & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iTHRInterrupt))));
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[0x3bU])) {
        bufp->chgCData(oldp+269,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__error_q),2);
        bufp->chgCData(oldp+270,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__address_q),7);
        bufp->chgCData(oldp+271,(((3U == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__state_q))
                                   ? 2U : 1U)),2);
        bufp->chgIData(oldp+272,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__data_q),32);
        bufp->chgCData(oldp+273,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__state_q),3);
        bufp->chgBit(oldp+274,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__s_src_clear_ack_q));
        bufp->chgBit(oldp+275,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__s_src_ready));
        bufp->chgBit(oldp+276,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__s_src_isolate_ack_q));
        bufp->chgBit(oldp+277,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_src__DOT__req_src_q));
        bufp->chgBit(oldp+278,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__req_src_q));
        bufp->chgCData(oldp+279,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__data_src_q),2);
        bufp->chgBit(oldp+280,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_dst__DOT__ack_dst_q));
        bufp->chgCData(oldp+281,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_state_q),4);
        bufp->chgCData(oldp+282,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__receiver_phase_q),2);
        bufp->chgBit(oldp+283,((1U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_dst__DOT__i_sync__DOT__reg_q) 
                                      >> 1U))));
        bufp->chgCData(oldp+284,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_dst__DOT__state_q),2);
        bufp->chgCData(oldp+285,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_dst__DOT__i_sync__DOT__reg_q),2);
        bufp->chgBit(oldp+286,((1U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__i_sync__DOT__reg_q) 
                                      >> 1U))));
        bufp->chgCData(oldp+287,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__state_q),2);
        bufp->chgCData(oldp+288,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__i_sync__DOT__reg_q),2);
        bufp->chgBit(oldp+289,((1U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_src__DOT__i_sync__DOT__reg_q) 
                                      >> 2U))));
        bufp->chgCData(oldp+290,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_src__DOT__i_sync__DOT__reg_q),3);
        bufp->chgBit(oldp+291,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__s_dst_clear_ack_q));
        bufp->chgBit(oldp+292,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__s_dst_valid));
        bufp->chgBit(oldp+293,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__s_dst_isolate_ack_q));
        bufp->chgBit(oldp+294,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__ack_dst_q));
        bufp->chgBit(oldp+295,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_dst__DOT__ack_dst_q));
        bufp->chgBit(oldp+296,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__req_src_q));
        bufp->chgCData(oldp+297,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__data_src_q),2);
        bufp->chgCData(oldp+298,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_state_q),4);
        bufp->chgCData(oldp+299,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__receiver_phase_q),2);
        bufp->chgBit(oldp+300,((1U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_dst__DOT__i_sync__DOT__reg_q) 
                                      >> 1U))));
        bufp->chgCData(oldp+301,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_dst__DOT__state_q),2);
        bufp->chgCData(oldp+302,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_dst__DOT__i_sync__DOT__reg_q),2);
        bufp->chgBit(oldp+303,((1U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__i_sync__DOT__reg_q) 
                                      >> 1U))));
        bufp->chgCData(oldp+304,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__state_q),2);
        bufp->chgCData(oldp+305,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__i_sync__DOT__reg_q),2);
        bufp->chgBit(oldp+306,((1U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__i_sync__DOT__reg_q) 
                                      >> 2U))));
        bufp->chgBit(oldp+307,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__req_synced_q1));
        bufp->chgCData(oldp+308,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__i_sync__DOT__reg_q),3);
        bufp->chgCData(oldp+309,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__tap_state_q),4);
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[0x3cU])) {
        bufp->chgCData(oldp+310,((0x7fU & (IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                   >> 0x22U)))),7);
        bufp->chgCData(oldp+311,((3U & (IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                >> 0x20U)))),2);
        bufp->chgIData(oldp+312,((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q)),32);
        bufp->chgCData(oldp+313,((3U & (IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                >> 0x20U)))),2);
        bufp->chgCData(oldp+314,((0x7fU & (IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                   >> 0x22U)))),8);
        bufp->chgCData(oldp+315,((0xfU & ((IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                   >> 0x22U)) 
                                          - (IData)(4U)))),4);
        bufp->chgIData(oldp+316,((IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_src__DOT__data_src_q 
                                          >> 2U))),32);
        bufp->chgCData(oldp+317,((3U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_src__DOT__data_src_q))),2);
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[0x3dU])) {
        bufp->chgIData(oldp+318,((IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__data_dst_q 
                                          >> 2U))),32);
        bufp->chgCData(oldp+319,((3U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__data_dst_q))),2);
        bufp->chgCData(oldp+320,((0x7fU & (IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_src__DOT__data_src_q 
                                                   >> 0x22U)))),7);
        bufp->chgCData(oldp+321,((3U & (IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_src__DOT__data_src_q 
                                                >> 0x20U)))),2);
        bufp->chgIData(oldp+322,((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_src__DOT__data_src_q)),32);
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[0x48U])) {
        bufp->chgBit(oldp+323,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__s_dst_valid));
        bufp->chgBit(oldp+324,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__ack_dst_q));
        bufp->chgBit(oldp+325,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_dst__DOT__ack_dst_q));
        bufp->chgBit(oldp+326,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__req_src_q));
        bufp->chgCData(oldp+327,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__data_src_q),2);
        bufp->chgBit(oldp+328,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__s_src_ready));
        bufp->chgBit(oldp+329,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_src__DOT__req_src_q));
        bufp->chgBit(oldp+330,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__req_src_q));
        bufp->chgCData(oldp+331,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__data_src_q),2);
        bufp->chgBit(oldp+332,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_dst__DOT__ack_dst_q));
        bufp->chgCData(oldp+333,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iRBR),8);
        bufp->chgCData(oldp+334,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iDLL),8);
        bufp->chgCData(oldp+335,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iDLM),8);
        bufp->chgCData(oldp+336,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iIER),8);
        bufp->chgCData(oldp+337,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iIIR),8);
        bufp->chgCData(oldp+338,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLCR),8);
        bufp->chgCData(oldp+339,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iMCR),8);
        bufp->chgCData(oldp+340,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iMSR),8);
        bufp->chgCData(oldp+341,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iSCR),8);
        bufp->chgBit(oldp+342,((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iIER))));
        bufp->chgBit(oldp+343,((1U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iIER) 
                                      >> 1U))));
        bufp->chgBit(oldp+344,((1U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iIER) 
                                      >> 2U))));
        bufp->chgBit(oldp+345,((1U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iIER) 
                                      >> 3U))));
        bufp->chgBit(oldp+346,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLCR_STB));
        bufp->chgBit(oldp+347,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLCR_PEN));
        bufp->chgBit(oldp+348,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLCR_EPS));
        bufp->chgBit(oldp+349,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLCR_SP));
        bufp->chgBit(oldp+350,((1U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLCR) 
                                      >> 6U))));
        bufp->chgBit(oldp+351,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLCR_DLAB));
        bufp->chgBit(oldp+352,((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iMCR))));
        bufp->chgBit(oldp+353,((1U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iMCR) 
                                      >> 1U))));
        bufp->chgBit(oldp+354,((1U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iMCR) 
                                      >> 2U))));
        bufp->chgBit(oldp+355,((1U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iMCR) 
                                      >> 3U))));
        bufp->chgBit(oldp+356,((1U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iMCR) 
                                      >> 4U))));
        bufp->chgBit(oldp+357,((1U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iMCR) 
                                      >> 5U))));
        bufp->chgBit(oldp+358,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iMSR_CTS));
        bufp->chgBit(oldp+359,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iMSR_DSR));
        bufp->chgBit(oldp+360,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iMSR_RI));
        bufp->chgBit(oldp+361,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iMSR_DCD));
        bufp->chgSData(oldp+362,((((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iDLM) 
                                   << 8U) | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iDLL))),16);
        bufp->chgBit(oldp+363,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iRCLK));
        bufp->chgCData(oldp+364,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__iDOUT),8);
        bufp->chgCData(oldp+365,((0xfU & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iIER))),4);
        bufp->chgBit(oldp+366,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_IIC__DOT__iMSRInterrupt));
        bufp->chgCData(oldp+367,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__iBaudCount),4);
        bufp->chgBit(oldp+368,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__iBaudStep));
        bufp->chgBit(oldp+369,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__iBaudStepD));
        bufp->chgBit(oldp+370,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__RX_MVF__DOT__iQ));
        bufp->chgBit(oldp+371,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__iFStopBit));
        bufp->chgCData(oldp+372,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__iDataCount),4);
        bufp->chgCData(oldp+373,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__RX_IFSB__DOT__iCount),3);
        bufp->chgCData(oldp+374,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__RX_MVF__DOT__iCounter),5);
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[0x49U])) {
        bufp->chgBit(oldp+375,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__dtmcs_select));
        bufp->chgSData(oldp+376,((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__dtmcs_q 
                                  >> 0x12U)),14);
        bufp->chgBit(oldp+377,((1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__dtmcs_q 
                                      >> 0x11U))));
        bufp->chgBit(oldp+378,((1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__dtmcs_q 
                                      >> 0x10U))));
        bufp->chgBit(oldp+379,((1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__dtmcs_q 
                                      >> 0xfU))));
        bufp->chgCData(oldp+380,((7U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__dtmcs_q 
                                        >> 0xcU))),3);
        bufp->chgCData(oldp+381,((3U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__dtmcs_q 
                                        >> 0xaU))),2);
        bufp->chgCData(oldp+382,((0x3fU & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__dtmcs_q 
                                           >> 4U))),6);
        bufp->chgCData(oldp+383,((0xfU & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__dtmcs_q)),4);
        bufp->chgBit(oldp+384,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__dmi_select));
        bufp->chgBit(oldp+385,((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__dr_q))));
        bufp->chgQData(oldp+386,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__dr_q),41);
        bufp->chgCData(oldp+388,((0x7fU & (IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__dr_q 
                                                   >> 0x22U)))),7);
        bufp->chgIData(oldp+389,((IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__dr_q 
                                          >> 2U))),32);
        bufp->chgCData(oldp+390,((3U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__dr_q))),2);
        bufp->chgBit(oldp+391,((1U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__dtmcs_q)));
        bufp->chgCData(oldp+392,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__jtag_ir_shift_q),5);
        bufp->chgCData(oldp+393,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__jtag_ir_q),5);
        bufp->chgIData(oldp+394,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__idcode_q),32);
        bufp->chgBit(oldp+395,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__idcode_select));
        bufp->chgBit(oldp+396,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__bypass_select));
        bufp->chgBit(oldp+397,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__bypass_q));
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[0x4bU])) {
        bufp->chgBit(oldp+398,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__iParity));
        bufp->chgBit(oldp+399,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__TX_PAR__DOT__iP40));
        bufp->chgBit(oldp+400,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__TX_PAR__DOT__iP50));
        bufp->chgBit(oldp+401,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__TX_PAR__DOT__iP60));
        bufp->chgBit(oldp+402,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__TX_PAR__DOT__iP70));
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[0x56U])) {
        bufp->chgCData(oldp+403,((0x7fU & (IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_d 
                                                   >> 0x22U)))),7);
        bufp->chgCData(oldp+404,((3U & (IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_d 
                                                >> 0x20U)))),2);
        bufp->chgIData(oldp+405,((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_d)),32);
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[0x59U])) {
        bufp->chgCData(oldp+406,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iTSR),8);
        bufp->chgCData(oldp+407,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLSR),8);
        bufp->chgCData(oldp+408,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iLCR_WLS),2);
        bufp->chgBit(oldp+409,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iTXFIFORead));
        bufp->chgBit(oldp+410,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TXFF__DOT__iFULL));
        bufp->chgCData(oldp+411,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iTXFIFOQ),8);
        bufp->chgBit(oldp+412,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iTXStart));
        bufp->chgBit(oldp+413,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__iFinished));
        bufp->chgBit(oldp+414,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iTXRunning));
        bufp->chgBit(oldp+415,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iRXFE));
        bufp->chgBit(oldp+416,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iTXEnable));
        bufp->chgCData(oldp+417,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__tx_State),2);
        bufp->chgCData(oldp+418,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__CState),3);
        bufp->chgBit(oldp+419,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__iDataCountFinish));
        bufp->chgCData(oldp+420,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__CState),4);
        bufp->chgBit(oldp+421,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__iLast));
        bufp->chgCData(oldp+422,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TXFF__DOT__iRDAddr),7);
    }
    bufp->chgBit(oldp+423,(vlSelfRef.tb_croc_soc__DOT__i_clk_rst_sys__DOT__clk));
    bufp->chgBit(oldp+424,(vlSelfRef.tb_croc_soc__DOT__rst_n));
    bufp->chgBit(oldp+425,(vlSelfRef.tb_croc_soc__DOT__i_clk_rst_rtc__DOT__clk));
    bufp->chgBit(oldp+426,(vlSelfRef.tb_croc_soc__DOT__i_clk_jtag__DOT__clk));
    bufp->chgBit(oldp+427,(vlSelfRef.tb_croc_soc__DOT__jtag_trst_ni));
    bufp->chgBit(oldp+428,(vlSelfRef.tb_croc_soc__DOT__jtag_tms_i));
    bufp->chgBit(oldp+429,(vlSelfRef.tb_croc_soc__DOT__jtag_tdi_i));
    bufp->chgBit(oldp+430,(vlSelfRef.tb_croc_soc__DOT__jtag_tdo_o));
    bufp->chgBit(oldp+431,(vlSelfRef.tb_croc_soc__DOT__uart_rx_i));
    bufp->chgBit(oldp+432,(vlSelfRef.tb_croc_soc__DOT__fetch_en_i));
    bufp->chgIData(oldp+433,(vlSelfRef.tb_croc_soc__DOT__jtag_load_hex__Vstatic__file),32);
    bufp->chgBit(oldp+434,(vlSelfRef.tb_croc_soc__DOT__uart_reading_byte));
    bufp->chgIData(oldp+435,(vlSelfRef.tb_croc_soc__DOT__tb_data),32);
    bufp->chgBit(oldp+436,(vlSelfRef.tb_croc_soc__DOT__i_clk_jtag__DOT__rst_no));
    bufp->chgIData(oldp+437,(vlSelfRef.tb_croc_soc__DOT__i_clk_jtag__DOT__unnamedblk1__DOT__rst_cnt),32);
    bufp->chgBit(oldp+438,(vlSelfRef.tb_croc_soc__DOT__i_clk_rst_rtc__DOT__rst_no));
    bufp->chgIData(oldp+439,(vlSelfRef.tb_croc_soc__DOT__i_clk_rst_rtc__DOT__unnamedblk1__DOT__rst_cnt),32);
    bufp->chgIData(oldp+440,(vlSelfRef.tb_croc_soc__DOT__i_clk_rst_sys__DOT__unnamedblk1__DOT__rst_cnt),32);
    bufp->chgBit(oldp+441,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_rstgen__DOT__init_no));
    bufp->chgIData(oldp+442,((IData)((((0xb8U >= ((IData)(2U) 
                                                  + 
                                                  (0xffU 
                                                   & ((IData)(0x25U) 
                                                      * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__0__KET____DOT__i_demux__DOT__select_q)))))
                                        ? (0x7ffffffffULL 
                                           & (((QData)((IData)(
                                                               vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_demux__BRA__0__KET____DOT__i_demux__mgr_ports_rsp_i[
                                                               (((IData)(0x24U) 
                                                                 + 
                                                                 (0xffU 
                                                                  & ((IData)(0x25U) 
                                                                     * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__0__KET____DOT__i_demux__DOT__select_q)))) 
                                                                >> 5U)])) 
                                               << (
                                                   (0U 
                                                    == 
                                                    (0x1fU 
                                                     & ((IData)(2U) 
                                                        + 
                                                        (0xffU 
                                                         & ((IData)(0x25U) 
                                                            * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__0__KET____DOT__i_demux__DOT__select_q))))))
                                                    ? 0x20U
                                                    : 
                                                   ((IData)(0x40U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(2U) 
                                                        + 
                                                        (0xffU 
                                                         & ((IData)(0x25U) 
                                                            * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__0__KET____DOT__i_demux__DOT__select_q)))))))) 
                                              | (((0U 
                                                   == 
                                                   (0x1fU 
                                                    & ((IData)(2U) 
                                                       + 
                                                       (0xffU 
                                                        & ((IData)(0x25U) 
                                                           * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__0__KET____DOT__i_demux__DOT__select_q))))))
                                                   ? 0ULL
                                                   : 
                                                  ((QData)((IData)(
                                                                   vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_demux__BRA__0__KET____DOT__i_demux__mgr_ports_rsp_i[
                                                                   (((IData)(0x21U) 
                                                                     + 
                                                                     (0xffU 
                                                                      & ((IData)(0x25U) 
                                                                         * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__0__KET____DOT__i_demux__DOT__select_q)))) 
                                                                    >> 5U)])) 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(2U) 
                                                        + 
                                                        (0xffU 
                                                         & ((IData)(0x25U) 
                                                            * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__0__KET____DOT__i_demux__DOT__select_q)))))))) 
                                                 | ((QData)((IData)(
                                                                    vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_demux__BRA__0__KET____DOT__i_demux__mgr_ports_rsp_i[
                                                                    (((IData)(2U) 
                                                                      + 
                                                                      (0xffU 
                                                                       & ((IData)(0x25U) 
                                                                          * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__0__KET____DOT__i_demux__DOT__select_q)))) 
                                                                     >> 5U)])) 
                                                    >> 
                                                    (0x1fU 
                                                     & ((IData)(2U) 
                                                        + 
                                                        (0xffU 
                                                         & ((IData)(0x25U) 
                                                            * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__0__KET____DOT__i_demux__DOT__select_q)))))))))
                                        : 0ULL) >> 3U))),32);
    bufp->chgBit(oldp+443,((1U & (IData)((((0xb8U >= 
                                            ((IData)(2U) 
                                             + (0xffU 
                                                & ((IData)(0x25U) 
                                                   * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__0__KET____DOT__i_demux__DOT__select_q)))))
                                            ? (0x7ffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_demux__BRA__0__KET____DOT__i_demux__mgr_ports_rsp_i[
                                                                   (((IData)(0x24U) 
                                                                     + 
                                                                     (0xffU 
                                                                      & ((IData)(0x25U) 
                                                                         * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__0__KET____DOT__i_demux__DOT__select_q)))) 
                                                                    >> 5U)])) 
                                                   << 
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(2U) 
                                                         + 
                                                         (0xffU 
                                                          & ((IData)(0x25U) 
                                                             * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__0__KET____DOT__i_demux__DOT__select_q))))))
                                                     ? 0x20U
                                                     : 
                                                    ((IData)(0x40U) 
                                                     - 
                                                     (0x1fU 
                                                      & ((IData)(2U) 
                                                         + 
                                                         (0xffU 
                                                          & ((IData)(0x25U) 
                                                             * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__0__KET____DOT__i_demux__DOT__select_q)))))))) 
                                                  | (((0U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(2U) 
                                                           + 
                                                           (0xffU 
                                                            & ((IData)(0x25U) 
                                                               * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__0__KET____DOT__i_demux__DOT__select_q))))))
                                                       ? 0ULL
                                                       : 
                                                      ((QData)((IData)(
                                                                       vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_demux__BRA__0__KET____DOT__i_demux__mgr_ports_rsp_i[
                                                                       (((IData)(0x21U) 
                                                                         + 
                                                                         (0xffU 
                                                                          & ((IData)(0x25U) 
                                                                             * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__0__KET____DOT__i_demux__DOT__select_q)))) 
                                                                        >> 5U)])) 
                                                       << 
                                                       ((IData)(0x20U) 
                                                        - 
                                                        (0x1fU 
                                                         & ((IData)(2U) 
                                                            + 
                                                            (0xffU 
                                                             & ((IData)(0x25U) 
                                                                * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__0__KET____DOT__i_demux__DOT__select_q)))))))) 
                                                     | ((QData)((IData)(
                                                                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_demux__BRA__0__KET____DOT__i_demux__mgr_ports_rsp_i[
                                                                        (((IData)(2U) 
                                                                          + 
                                                                          (0xffU 
                                                                           & ((IData)(0x25U) 
                                                                              * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__0__KET____DOT__i_demux__DOT__select_q)))) 
                                                                         >> 5U)])) 
                                                        >> 
                                                        (0x1fU 
                                                         & ((IData)(2U) 
                                                            + 
                                                            (0xffU 
                                                             & ((IData)(0x25U) 
                                                                * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__0__KET____DOT__i_demux__DOT__select_q)))))))))
                                            : 0ULL) 
                                          >> 2U)))));
    bufp->chgBit(oldp+444,((1U & (IData)((((0xb8U >= 
                                            ((IData)(2U) 
                                             + (0xffU 
                                                & ((IData)(0x25U) 
                                                   * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__0__KET____DOT__i_demux__DOT__select_q)))))
                                            ? (0x7ffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_demux__BRA__0__KET____DOT__i_demux__mgr_ports_rsp_i[
                                                                   (((IData)(0x24U) 
                                                                     + 
                                                                     (0xffU 
                                                                      & ((IData)(0x25U) 
                                                                         * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__0__KET____DOT__i_demux__DOT__select_q)))) 
                                                                    >> 5U)])) 
                                                   << 
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(2U) 
                                                         + 
                                                         (0xffU 
                                                          & ((IData)(0x25U) 
                                                             * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__0__KET____DOT__i_demux__DOT__select_q))))))
                                                     ? 0x20U
                                                     : 
                                                    ((IData)(0x40U) 
                                                     - 
                                                     (0x1fU 
                                                      & ((IData)(2U) 
                                                         + 
                                                         (0xffU 
                                                          & ((IData)(0x25U) 
                                                             * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__0__KET____DOT__i_demux__DOT__select_q)))))))) 
                                                  | (((0U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(2U) 
                                                           + 
                                                           (0xffU 
                                                            & ((IData)(0x25U) 
                                                               * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__0__KET____DOT__i_demux__DOT__select_q))))))
                                                       ? 0ULL
                                                       : 
                                                      ((QData)((IData)(
                                                                       vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_demux__BRA__0__KET____DOT__i_demux__mgr_ports_rsp_i[
                                                                       (((IData)(0x21U) 
                                                                         + 
                                                                         (0xffU 
                                                                          & ((IData)(0x25U) 
                                                                             * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__0__KET____DOT__i_demux__DOT__select_q)))) 
                                                                        >> 5U)])) 
                                                       << 
                                                       ((IData)(0x20U) 
                                                        - 
                                                        (0x1fU 
                                                         & ((IData)(2U) 
                                                            + 
                                                            (0xffU 
                                                             & ((IData)(0x25U) 
                                                                * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__0__KET____DOT__i_demux__DOT__select_q)))))))) 
                                                     | ((QData)((IData)(
                                                                        vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_demux__BRA__0__KET____DOT__i_demux__mgr_ports_rsp_i[
                                                                        (((IData)(2U) 
                                                                          + 
                                                                          (0xffU 
                                                                           & ((IData)(0x25U) 
                                                                              * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__0__KET____DOT__i_demux__DOT__select_q)))) 
                                                                         >> 5U)])) 
                                                        >> 
                                                        (0x1fU 
                                                         & ((IData)(2U) 
                                                            + 
                                                            (0xffU 
                                                             & ((IData)(0x25U) 
                                                                * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__0__KET____DOT__i_demux__DOT__select_q)))))))))
                                            : 0ULL) 
                                          >> 1U)))));
    bufp->chgBit(oldp+445,((1U & (IData)(((0xb8U >= 
                                           ((IData)(2U) 
                                            + (0xffU 
                                               & ((IData)(0x25U) 
                                                  * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__0__KET____DOT__i_demux__DOT__select_q)))))
                                           ? (0x7ffffffffULL 
                                              & (((QData)((IData)(
                                                                  vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_demux__BRA__0__KET____DOT__i_demux__mgr_ports_rsp_i[
                                                                  (((IData)(0x24U) 
                                                                    + 
                                                                    (0xffU 
                                                                     & ((IData)(0x25U) 
                                                                        * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__0__KET____DOT__i_demux__DOT__select_q)))) 
                                                                   >> 5U)])) 
                                                  << 
                                                  ((0U 
                                                    == 
                                                    (0x1fU 
                                                     & ((IData)(2U) 
                                                        + 
                                                        (0xffU 
                                                         & ((IData)(0x25U) 
                                                            * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__0__KET____DOT__i_demux__DOT__select_q))))))
                                                    ? 0x20U
                                                    : 
                                                   ((IData)(0x40U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(2U) 
                                                        + 
                                                        (0xffU 
                                                         & ((IData)(0x25U) 
                                                            * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__0__KET____DOT__i_demux__DOT__select_q)))))))) 
                                                 | (((0U 
                                                      == 
                                                      (0x1fU 
                                                       & ((IData)(2U) 
                                                          + 
                                                          (0xffU 
                                                           & ((IData)(0x25U) 
                                                              * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__0__KET____DOT__i_demux__DOT__select_q))))))
                                                      ? 0ULL
                                                      : 
                                                     ((QData)((IData)(
                                                                      vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_demux__BRA__0__KET____DOT__i_demux__mgr_ports_rsp_i[
                                                                      (((IData)(0x21U) 
                                                                        + 
                                                                        (0xffU 
                                                                         & ((IData)(0x25U) 
                                                                            * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__0__KET____DOT__i_demux__DOT__select_q)))) 
                                                                       >> 5U)])) 
                                                      << 
                                                      ((IData)(0x20U) 
                                                       - 
                                                       (0x1fU 
                                                        & ((IData)(2U) 
                                                           + 
                                                           (0xffU 
                                                            & ((IData)(0x25U) 
                                                               * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__0__KET____DOT__i_demux__DOT__select_q)))))))) 
                                                    | ((QData)((IData)(
                                                                       vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_demux__BRA__0__KET____DOT__i_demux__mgr_ports_rsp_i[
                                                                       (((IData)(2U) 
                                                                         + 
                                                                         (0xffU 
                                                                          & ((IData)(0x25U) 
                                                                             * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__0__KET____DOT__i_demux__DOT__select_q)))) 
                                                                        >> 5U)])) 
                                                       >> 
                                                       (0x1fU 
                                                        & ((IData)(2U) 
                                                           + 
                                                           (0xffU 
                                                            & ((IData)(0x25U) 
                                                               * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_demux__BRA__0__KET____DOT__i_demux__DOT__select_q)))))))))
                                           : 0ULL)))));
    bufp->chgBit(oldp+446,(((0xb8U >= ((IData)(1U) 
                                       + (0xffU & ((IData)(0x25U) 
                                                   * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__0__KET____DOT__i_addr_decode__idx_o))))) 
                            && (1U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellinp__gen_demux__BRA__0__KET____DOT__i_demux__mgr_ports_rsp_i[
                                      (((IData)(1U) 
                                        + (0xffU & 
                                           ((IData)(0x25U) 
                                            * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__0__KET____DOT__i_addr_decode__idx_o)))) 
                                       >> 5U)] >> (0x1fU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(0x25U) 
                                                          * (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__0__KET____DOT__i_addr_decode__idx_o))))))))));
    bufp->chgBit(oldp+447,((1U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart_translate__DOT__r_valid_q) 
                                  >> 2U))));
    bufp->chgBit(oldp+448,((1U & ((0x7fffffffU & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellout__i_uart_translate__gnt_o)) 
                                  | ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart_translate__DOT__r_valid_q) 
                                     >> 1U)))));
    bufp->chgBit(oldp+449,((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart_translate__DOT__r_valid_q))));
    bufp->chgBit(oldp+450,(((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__s_src_isolate_req)) 
                            & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__s_src_ready))));
    bufp->chgIData(oldp+451,((IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__uart_reg_rsp 
                                      >> 2U))),32);
    bufp->chgBit(oldp+452,((1U & (IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__uart_reg_rsp 
                                          >> 1U)))));
    bufp->chgBit(oldp+453,((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__uart_reg_rsp))));
    bufp->chgCData(oldp+454,(((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mcountinhibit_we)
                               ? (5U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__csr_wdata_int)
                               : (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__cs_registers_i__DOT__mcountinhibit_q))),3);
    bufp->chgBit(oldp+455,((((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__pc_set)) 
                             & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__instr_new_id_d)) 
                            | ((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__instr_valid_clear)) 
                               & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__instr_valid_id_q)))));
    bufp->chgBit(oldp+456,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__instr_new_id_d));
    bufp->chgBit(oldp+457,(((1U & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q) 
                            && (1U & ((2U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
                                       ? (IData)((2U 
                                                  == 
                                                  (3U 
                                                   & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q))))
                                       : ((IData)((vlSelfRef.__VdfgRegularize_hd87f99a1_4_6 
                                                   >> 1U)) 
                                          & ((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q)) 
                                             & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))))))));
    bufp->chgBit(oldp+458,(((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellinp__i_core_wrap__instr_gnt_i)) 
                            & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__valid_req))));
    bufp->chgBit(oldp+459,(((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT____Vcellinp__i_core_wrap__instr_gnt_i)) 
                            & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT____VdfgRegularize_h70a13e6b_0_6))));
    bufp->chgCData(oldp+460,(((((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__pc_set)) 
                                & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgRegularize_h24d1f03a_0_22)) 
                               << 2U) | ((((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__pc_set)) 
                                           & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgRegularize_h24d1f03a_0_17)) 
                                          << 1U) | 
                                         ((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__pc_set)) 
                                          & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgRegularize_h24d1f03a_0_11))))),3);
    bufp->chgCData(oldp+461,((((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgRegularize_h24d1f03a_0_22) 
                               << 2U) | (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgRegularize_h24d1f03a_0_17) 
                                          << 1U) | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgRegularize_h24d1f03a_0_11)))),3);
    bufp->chgCData(oldp+462,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__entry_en),3);
    bufp->chgBit(oldp+463,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__pop_fifo));
    bufp->chgIData(oldp+464,(((2U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
                               ? ((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_q[1U] 
                                   << 0x10U) | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata 
                                                >> 0x10U))
                               : (((IData)((vlSelfRef.__VdfgRegularize_hd87f99a1_4_6 
                                            >> 3U)) 
                                   << 0x10U) | (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata 
                                                >> 0x10U)))),32);
    bufp->chgBit(oldp+465,((1U & ((2U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
                                   ? (((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__unaligned_is_compressed)) 
                                       & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q) 
                                          >> 1U)) | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q))
                                   : (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                                       & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q)) 
                                      | ((IData)((vlSelfRef.__VdfgRegularize_hd87f99a1_4_6 
                                                  >> 1U)) 
                                         & ((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q)) 
                                            | (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__unaligned_is_compressed)))))))));
    bufp->chgBit(oldp+466,((1U & ((2U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
                                   ? (IData)((2U == 
                                              (3U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q))))
                                   : ((IData)((vlSelfRef.__VdfgRegularize_hd87f99a1_4_6 
                                               >> 1U)) 
                                      & ((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q)) 
                                         & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q)))))));
    bufp->chgBit(oldp+467,((1U & (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                                   >> 1U) | ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                                             & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_valid))))));
    bufp->chgIData(oldp+468,((0x7fffffffU & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                             + ((2U 
                                                 & ((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two)) 
                                                    << 1U)) 
                                                | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two))))),31);
    bufp->chgIData(oldp+469,((0x7fffffffU & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__pc_set)
                                              ? (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__fetch_addr_n 
                                                 >> 1U)
                                              : (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                                 + 
                                                 ((2U 
                                                   & ((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two)) 
                                                      << 1U)) 
                                                  | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two)))))),31);
    bufp->chgBit(oldp+470,(((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__pc_set) 
                            | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgRegularize_h24d1f03a_0_9))));
    bufp->chgIData(oldp+471,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__wb_i__DOT__rf_wdata_wb_mux[0]),32);
    bufp->chgIData(oldp+472,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_core_wrap__DOT__i_ibex__DOT__wb_i__DOT__rf_wdata_wb_mux[1]),32);
    bufp->chgIData(oldp+473,(((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbaddr_q) 
                              + ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__addr_incr_en)
                                  ? ((IData)(1U) << 
                                     (7U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                            >> 0x11U)))
                                  : 0U))),32);
    bufp->chgIData(oldp+474,(VL_SHIFTR_III(32,32,32, (IData)(
                                                             (vlSelfRef.__VdfgRegularize_hd87f99a1_4_4 
                                                              >> 3U)), 
                                           VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__be_idx_masked), 3U))),32);
    bufp->chgCData(oldp+475,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__status_cnt_n),2);
    bufp->chgIData(oldp+476,(((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__addr_incr_en)
                               ? ((IData)(1U) << (7U 
                                                  & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                                     >> 0x11U)))
                               : 0U)),32);
    bufp->chgBit(oldp+477,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__tdo_oe_o));
    bufp->chgCData(oldp+478,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__state_d),3);
    bufp->chgBit(oldp+479,(((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__core_clear_pending_q)) 
                            & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__s_dst_isolate_req))));
    bufp->chgBit(oldp+480,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_dst__DOT__data_valid));
    bufp->chgBit(oldp+481,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__receiver_phase_ack));
    bufp->chgBit(oldp+482,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__receiver_isolate_out));
    bufp->chgBit(oldp+483,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__receiver_clear_out));
    bufp->chgBit(oldp+484,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_dst__DOT__ack_dst_d));
    bufp->chgCData(oldp+485,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_dst__DOT__state_d),2);
    bufp->chgBit(oldp+486,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__initiator_phase_transition_ack));
    bufp->chgBit(oldp+487,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_dst__DOT__data_valid));
    bufp->chgBit(oldp+488,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__receiver_phase_ack));
    bufp->chgBit(oldp+489,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__receiver_isolate_out));
    bufp->chgBit(oldp+490,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__receiver_clear_out));
    bufp->chgBit(oldp+491,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_dst__DOT__ack_dst_d));
    bufp->chgCData(oldp+492,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_dst__DOT__state_d),2);
    bufp->chgBit(oldp+493,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__req_src_d));
    bufp->chgCData(oldp+494,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__data_src_d),2);
    bufp->chgCData(oldp+495,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_src__DOT__state_d),2);
    bufp->chgBit(oldp+496,(((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__s_dst_isolate_req)) 
                            & (2U != (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dm_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__status_cnt_q)))));
    bufp->chgBit(oldp+497,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__initiator_phase_transition_ack));
    bufp->chgBit(oldp+498,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_dst__DOT__data_valid));
    bufp->chgBit(oldp+499,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__receiver_phase_ack));
    bufp->chgBit(oldp+500,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__receiver_isolate_out));
    bufp->chgBit(oldp+501,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__receiver_clear_out));
    bufp->chgBit(oldp+502,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_dst__DOT__ack_dst_d));
    bufp->chgCData(oldp+503,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_dst__DOT__state_d),2);
    bufp->chgBit(oldp+504,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__req_src_d));
    bufp->chgCData(oldp+505,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__data_src_d),2);
    bufp->chgCData(oldp+506,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_a__DOT__i_state_transition_cdc_src__DOT__state_d),2);
    bufp->chgBit(oldp+507,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_dst__DOT__data_valid));
    bufp->chgBit(oldp+508,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__receiver_phase_ack));
    bufp->chgBit(oldp+509,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__receiver_isolate_out));
    bufp->chgBit(oldp+510,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__receiver_clear_out));
    bufp->chgBit(oldp+511,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_dst__DOT__ack_dst_d));
    bufp->chgCData(oldp+512,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_cdc_reset_ctrlr__DOT__i_cdc_reset_ctrlr_half_b__DOT__i_state_transition_cdc_dst__DOT__state_d),2);
    bufp->chgIData(oldp+513,((IData)((vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__data_dst_d 
                                      >> 2U))),32);
    bufp->chgCData(oldp+514,((3U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__data_dst_d))),2);
    bufp->chgBit(oldp+515,((1U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__shift_ir)
                                   ? (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__jtag_ir_shift_q)
                                   : ((1U == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__jtag_ir_q))
                                       ? vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__idcode_q
                                       : ((0x10U == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__jtag_ir_q))
                                           ? vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__dtmcs_q
                                           : ((0x11U 
                                               == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__jtag_ir_q))
                                               ? (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__dr_q)
                                               : (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_dmi_jtag__DOT__i_dmi_jtag_tap__DOT__bypass_q))))))));
    bufp->chgBit(oldp+516,((1U & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_clk_jtag__DOT__clk)))));
    bufp->chgBit(oldp+517,(vlSelfRef.__VdfgRegularize_hd87f99a1_4_15));
    bufp->chgCData(oldp+518,(((8U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__3__KET____DOT__i_demux__mgr_ports_req_o[0U] 
                                     << 3U)) | ((4U 
                                                 & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__2__KET____DOT__i_demux__mgr_ports_req_o[0U] 
                                                    << 2U)) 
                                                | ((2U 
                                                    & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__1__KET____DOT__i_demux__mgr_ports_req_o[0U] 
                                                       << 1U)) 
                                                   | (1U 
                                                      & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__0__KET____DOT__i_demux__mgr_ports_req_o[0U]))))),4);
    bufp->chgCData(oldp+519,((((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_4_13) 
                               << 3U) | (((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_4_14) 
                                          << 2U) | 
                                         (((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_4_15) 
                                           << 1U) | 
                                          (1U & ((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                 & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                    >> 1U))))))),4);
    bufp->chgCData(oldp+520,((3U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__index_nodes))),2);
    bufp->chgBit(oldp+521,((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__req_nodes))));
    bufp->chgCData(oldp+522,((3U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__index_nodes) 
                                    >> 2U))),2);
    bufp->chgCData(oldp+523,((3U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__index_nodes) 
                                    >> 4U))),2);
    bufp->chgCData(oldp+524,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gnt_nodes),3);
    bufp->chgCData(oldp+525,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__req_nodes),3);
    bufp->chgCData(oldp+526,((3U & (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__gnt_i) 
                                     & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__req_nodes))
                                     ? ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                         ? (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)
                                         : (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))
                                     : (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__rr_q)))),2);
    bufp->chgCData(oldp+527,((3U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes))),2);
    bufp->chgCData(oldp+528,((3U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))),2);
    bufp->chgCData(oldp+529,((3U & ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                     ? (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)
                                     : (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)))),2);
    bufp->chgBit(oldp+530,((1U & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->chgBit(oldp+531,((1U & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->chgCData(oldp+532,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes),4);
    bufp->chgCData(oldp+533,((3U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes) 
                                    >> 2U))),2);
    bufp->chgCData(oldp+534,((3U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes) 
                                    >> 4U))),2);
    bufp->chgCData(oldp+535,((3U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes) 
                                    >> 6U))),2);
    bufp->chgCData(oldp+536,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes),4);
    bufp->chgCData(oldp+537,((3U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes) 
                                    >> 2U))),2);
    bufp->chgCData(oldp+538,((3U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes) 
                                    >> 4U))),2);
    bufp->chgCData(oldp+539,((3U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes) 
                                    >> 6U))),2);
    bufp->chgBit(oldp+540,((1U & ((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__gnt_i)) 
                                  & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__req_nodes)))));
    bufp->chgBit(oldp+541,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__0__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
    bufp->chgBit(oldp+542,(vlSelfRef.__VdfgRegularize_hd87f99a1_4_26));
    bufp->chgCData(oldp+543,(((8U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__3__KET____DOT__i_demux__mgr_ports_req_o[2U] 
                                     >> 5U)) | ((4U 
                                                 & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__2__KET____DOT__i_demux__mgr_ports_req_o[2U] 
                                                    >> 6U)) 
                                                | ((2U 
                                                    & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__1__KET____DOT__i_demux__mgr_ports_req_o[2U] 
                                                       >> 7U)) 
                                                   | (1U 
                                                      & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__0__KET____DOT__i_demux__mgr_ports_req_o[2U] 
                                                         >> 8U)))))),4);
    bufp->chgCData(oldp+544,((((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_4_24) 
                               << 3U) | (((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_4_25) 
                                          << 2U) | 
                                         (((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_4_26) 
                                           << 1U) | 
                                          (1U & ((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                 & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                    >> 1U))))))),4);
    bufp->chgBit(oldp+545,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_obi_demux__DOT__cnt_down));
    bufp->chgBit(oldp+546,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__gen_no_id_assign__DOT__i_fifo__DOT__read_pointer_n));
    bufp->chgCData(oldp+547,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gnt_nodes),3);
    bufp->chgCData(oldp+548,((3U & (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__gnt_i) 
                                     & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__req_nodes))
                                     ? ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                         ? (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)
                                         : (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))
                                     : (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__rr_q)))),2);
    bufp->chgCData(oldp+549,((3U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes))),2);
    bufp->chgCData(oldp+550,((3U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))),2);
    bufp->chgCData(oldp+551,((3U & ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                     ? (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)
                                     : (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)))),2);
    bufp->chgBit(oldp+552,((1U & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->chgBit(oldp+553,((1U & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->chgCData(oldp+554,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes),4);
    bufp->chgCData(oldp+555,((3U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes) 
                                    >> 2U))),2);
    bufp->chgCData(oldp+556,((3U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes) 
                                    >> 4U))),2);
    bufp->chgCData(oldp+557,((3U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes) 
                                    >> 6U))),2);
    bufp->chgCData(oldp+558,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes),4);
    bufp->chgCData(oldp+559,((3U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes) 
                                    >> 2U))),2);
    bufp->chgCData(oldp+560,((3U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes) 
                                    >> 4U))),2);
    bufp->chgCData(oldp+561,((3U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes) 
                                    >> 6U))),2);
    bufp->chgBit(oldp+562,((1U & ((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__gnt_i)) 
                                  & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__req_nodes)))));
    bufp->chgBit(oldp+563,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__1__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
    bufp->chgBit(oldp+564,(vlSelfRef.__VdfgRegularize_hd87f99a1_4_37));
    bufp->chgCData(oldp+565,(((8U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__3__KET____DOT__i_demux__mgr_ports_req_o[4U] 
                                     >> 0xdU)) | ((4U 
                                                   & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__2__KET____DOT__i_demux__mgr_ports_req_o[4U] 
                                                      >> 0xeU)) 
                                                  | ((2U 
                                                      & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__1__KET____DOT__i_demux__mgr_ports_req_o[4U] 
                                                         >> 0xfU)) 
                                                     | (1U 
                                                        & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__0__KET____DOT__i_demux__mgr_ports_req_o[4U] 
                                                           >> 0x10U)))))),4);
    bufp->chgCData(oldp+566,((((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_4_35) 
                               << 3U) | (((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_4_36) 
                                          << 2U) | 
                                         (((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_4_37) 
                                           << 1U) | 
                                          (1U & ((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                 & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                    >> 1U))))))),4);
    bufp->chgCData(oldp+567,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gnt_nodes),3);
    bufp->chgCData(oldp+568,((3U & (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__gnt_i) 
                                     & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__req_nodes))
                                     ? ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                         ? (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)
                                         : (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))
                                     : (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__rr_q)))),2);
    bufp->chgCData(oldp+569,((3U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes))),2);
    bufp->chgCData(oldp+570,((3U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))),2);
    bufp->chgCData(oldp+571,((3U & ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                     ? (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)
                                     : (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)))),2);
    bufp->chgBit(oldp+572,((1U & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->chgBit(oldp+573,((1U & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->chgCData(oldp+574,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes),4);
    bufp->chgCData(oldp+575,((3U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes) 
                                    >> 2U))),2);
    bufp->chgCData(oldp+576,((3U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes) 
                                    >> 4U))),2);
    bufp->chgCData(oldp+577,((3U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes) 
                                    >> 6U))),2);
    bufp->chgCData(oldp+578,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes),4);
    bufp->chgCData(oldp+579,((3U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes) 
                                    >> 2U))),2);
    bufp->chgCData(oldp+580,((3U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes) 
                                    >> 4U))),2);
    bufp->chgCData(oldp+581,((3U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes) 
                                    >> 6U))),2);
    bufp->chgBit(oldp+582,((1U & ((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__gnt_i)) 
                                  & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__req_nodes)))));
    bufp->chgBit(oldp+583,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__2__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
    bufp->chgBit(oldp+584,(vlSelfRef.__VdfgRegularize_hd87f99a1_4_48));
    bufp->chgCData(oldp+585,(((8U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__3__KET____DOT__i_demux__mgr_ports_req_o[6U] 
                                     >> 0x15U)) | (
                                                   (4U 
                                                    & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__2__KET____DOT__i_demux__mgr_ports_req_o[6U] 
                                                       >> 0x16U)) 
                                                   | ((2U 
                                                       & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__1__KET____DOT__i_demux__mgr_ports_req_o[6U] 
                                                          >> 0x17U)) 
                                                      | (1U 
                                                         & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__0__KET____DOT__i_demux__mgr_ports_req_o[6U] 
                                                            >> 0x18U)))))),4);
    bufp->chgCData(oldp+586,((((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_4_46) 
                               << 3U) | (((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_4_47) 
                                          << 2U) | 
                                         (((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_4_48) 
                                           << 1U) | 
                                          (1U & ((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                 & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                    >> 1U))))))),4);
    bufp->chgCData(oldp+587,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gnt_nodes),3);
    bufp->chgCData(oldp+588,((3U & (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__gnt_i) 
                                     & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__req_nodes))
                                     ? ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                         ? (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)
                                         : (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))
                                     : (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__rr_q)))),2);
    bufp->chgCData(oldp+589,((3U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes))),2);
    bufp->chgCData(oldp+590,((3U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))),2);
    bufp->chgCData(oldp+591,((3U & ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                     ? (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)
                                     : (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)))),2);
    bufp->chgBit(oldp+592,((1U & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->chgBit(oldp+593,((1U & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->chgCData(oldp+594,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes),4);
    bufp->chgCData(oldp+595,((3U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes) 
                                    >> 2U))),2);
    bufp->chgCData(oldp+596,((3U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes) 
                                    >> 4U))),2);
    bufp->chgCData(oldp+597,((3U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes) 
                                    >> 6U))),2);
    bufp->chgCData(oldp+598,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes),4);
    bufp->chgCData(oldp+599,((3U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes) 
                                    >> 2U))),2);
    bufp->chgCData(oldp+600,((3U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes) 
                                    >> 4U))),2);
    bufp->chgCData(oldp+601,((3U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes) 
                                    >> 6U))),2);
    bufp->chgBit(oldp+602,((1U & ((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__gnt_i)) 
                                  & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__req_nodes)))));
    bufp->chgBit(oldp+603,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__3__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
    bufp->chgBit(oldp+604,(vlSelfRef.__VdfgRegularize_hd87f99a1_4_59));
    bufp->chgCData(oldp+605,(((8U & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__3__KET____DOT__i_demux__mgr_ports_req_o[9U] 
                                     << 3U)) | ((4U 
                                                 & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__2__KET____DOT__i_demux__mgr_ports_req_o[9U] 
                                                    << 2U)) 
                                                | ((2U 
                                                    & (vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__1__KET____DOT__i_demux__mgr_ports_req_o[9U] 
                                                       << 1U)) 
                                                   | (1U 
                                                      & vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT____Vcellout__gen_demux__BRA__0__KET____DOT__i_demux__mgr_ports_req_o[9U]))))),4);
    bufp->chgCData(oldp+606,((((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_4_57) 
                               << 3U) | (((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_4_58) 
                                          << 2U) | 
                                         (((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_4_59) 
                                           << 1U) | 
                                          (1U & ((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                 & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                    >> 1U))))))),4);
    bufp->chgCData(oldp+607,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gnt_nodes),3);
    bufp->chgCData(oldp+608,((3U & (((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__gnt_i) 
                                     & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__req_nodes))
                                     ? ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                         ? (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)
                                         : (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))
                                     : (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__rr_q)))),2);
    bufp->chgCData(oldp+609,((3U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes))),2);
    bufp->chgCData(oldp+610,((3U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))),2);
    bufp->chgCData(oldp+611,((3U & ((1U & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                     ? (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)
                                     : (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)))),2);
    bufp->chgBit(oldp+612,((1U & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->chgBit(oldp+613,((1U & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)))));
    bufp->chgCData(oldp+614,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes),4);
    bufp->chgCData(oldp+615,((3U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes) 
                                    >> 2U))),2);
    bufp->chgCData(oldp+616,((3U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes) 
                                    >> 4U))),2);
    bufp->chgCData(oldp+617,((3U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes) 
                                    >> 6U))),2);
    bufp->chgCData(oldp+618,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes),4);
    bufp->chgCData(oldp+619,((3U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes) 
                                    >> 2U))),2);
    bufp->chgCData(oldp+620,((3U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes) 
                                    >> 4U))),2);
    bufp->chgCData(oldp+621,((3U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes) 
                                    >> 6U))),2);
    bufp->chgBit(oldp+622,((1U & ((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT____Vcellinp__i_rr_arb__gnt_i)) 
                                  & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__req_nodes)))));
    bufp->chgBit(oldp+623,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_main_xbar__DOT__gen_mux__BRA__4__KET____DOT__i_mux__DOT__i_rr_arb__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
    bufp->chgBit(oldp+624,(((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_obi_demux__DOT__cnt_up) 
                            ^ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_obi_demux__DOT__cnt_down))));
    bufp->chgIData(oldp+625,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT____Vcellout__i_apb_uart__PRDATA),32);
    bufp->chgBit(oldp+626,((1U & (~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_rstgen__DOT__init_no)))));
    bufp->chgBit(oldp+627,(((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iTXRunning)) 
                            & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TXFF__DOT__iEMPTY))));
    bufp->chgBit(oldp+628,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iTXFIFOWrite));
    bufp->chgBit(oldp+629,((1U & ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iFCR_FIFO64E)
                                   ? (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TXFF__DOT__iFULL)
                                   : ((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TXFF__DOT__iUSAGE) 
                                      >> 4U)))));
    bufp->chgBit(oldp+630,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iSOUT));
    bufp->chgBit(oldp+631,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iSIN));
    bufp->chgBit(oldp+632,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__iRXFinished));
    bufp->chgBit(oldp+633,(((0U == (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__iDOUT)) 
                            & ((~ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__iParityReceived)) 
                               & (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__iRXFE)))));
    bufp->chgCData(oldp+634,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__NState),3);
    bufp->chgBit(oldp+635,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__iBaudCountClear));
    bufp->chgBit(oldp+636,(((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__iBaudCountClear) 
                            | (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__iBaudStepD))));
    bufp->chgBit(oldp+637,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__iParity));
    bufp->chgBit(oldp+638,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_RX__DOT__iDataCountInit));
    bufp->chgCData(oldp+639,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__NState),4);
    bufp->chgBit(oldp+640,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_croc__DOT__i_uart__DOT__i_apb_uart__DOT__UART_TX__DOT__iSout));
    bufp->chgCData(oldp+641,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_rstgen__DOT__i_rstgen_bypass__DOT__synch_regs_q),4);
    bufp->chgIData(oldp+642,(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_user_sdhci__DOT__i_regs__DOT__reg_rdata_next),32);
    bufp->chgBit(oldp+643,(((IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_obi_demux__DOT__cnt_up) 
                            ^ (IData)(vlSelfRef.tb_croc_soc__DOT__i_croc_soc__DOT__i_user__DOT__i_obi_demux__DOT__cnt_down))));
    bufp->chgBit(oldp+644,(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[0]));
    bufp->chgBit(oldp+645,(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[1]));
    bufp->chgBit(oldp+646,(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[2]));
    bufp->chgBit(oldp+647,(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[3]));
    bufp->chgBit(oldp+648,(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[4]));
    bufp->chgBit(oldp+649,(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[5]));
    bufp->chgBit(oldp+650,(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[6]));
    bufp->chgBit(oldp+651,(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[7]));
    bufp->chgBit(oldp+652,(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[8]));
    bufp->chgBit(oldp+653,(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[9]));
    bufp->chgBit(oldp+654,(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[10]));
    bufp->chgBit(oldp+655,(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[11]));
    bufp->chgBit(oldp+656,(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[12]));
    bufp->chgBit(oldp+657,(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[13]));
    bufp->chgBit(oldp+658,(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[14]));
    bufp->chgBit(oldp+659,(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[15]));
    bufp->chgBit(oldp+660,(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[16]));
    bufp->chgBit(oldp+661,(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[17]));
    bufp->chgBit(oldp+662,(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[18]));
    bufp->chgBit(oldp+663,(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[19]));
    bufp->chgBit(oldp+664,(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[20]));
    bufp->chgBit(oldp+665,(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[21]));
    bufp->chgBit(oldp+666,(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[22]));
    bufp->chgBit(oldp+667,(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[23]));
    bufp->chgBit(oldp+668,(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[24]));
    bufp->chgBit(oldp+669,(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[25]));
    bufp->chgBit(oldp+670,(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[26]));
    bufp->chgBit(oldp+671,(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[27]));
    bufp->chgBit(oldp+672,(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[28]));
    bufp->chgBit(oldp+673,(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[29]));
    bufp->chgBit(oldp+674,(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[30]));
    bufp->chgBit(oldp+675,(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data[31]));
    bufp->chgIData(oldp+676,(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dtmcs__Vstatic__write_data_packed),32);
    bufp->chgIData(oldp+677,(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__reset_dmi__Vstatic__dmireset),32);
    bufp->chgQData(oldp+678,(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__write_dmi__Vstatic__write_data_packed),41);
    bufp->chgCData(oldp+680,(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__ir_select),5);
    bufp->chgBit(oldp+681,(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[0]));
    bufp->chgBit(oldp+682,(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[1]));
    bufp->chgBit(oldp+683,(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[2]));
    bufp->chgBit(oldp+684,(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[3]));
    bufp->chgBit(oldp+685,(vlSelfRef.tb_croc_soc__DOT__jtag_dbg__DOT__jtag__DOT__set_ir__Vstatic__opcode_unpacked[4]));
    bufp->chgCData(oldp+686,(vlSelfRef.tb_croc_soc__DOT__unnamedblk7__DOT__bite),8);
}

void Vtb_croc_soc___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_croc_soc___024root__trace_cleanup\n"); );
    // Init
    Vtb_croc_soc___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_croc_soc___024root*>(voidSelf);
    Vtb_croc_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    IData/*31:0*/ __Vilp1;
    __Vilp1 = 0U;
    while ((__Vilp1 <= 0x79U)) {
        vlSymsp->TOP.__Vm_traceActivity[__Vilp1] = 0U;
        __Vilp1 = ((IData)(1U) + __Vilp1);
    }
}
