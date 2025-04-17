// Copyright (c) 2024 ETH Zurich and University of Bologna.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0/
//
// Authors:
// - Philippe Sauter <phsauter@iis.ee.ethz.ch>

#include "uart.h"
#include "print.h"
#include "timer.h"
#include "gpio.h"
#include "util.h"

#include "sdmmcvar.h"
#include "sdhcvar.h"


/// @brief Example integer square root
/// @return integer square root of n
uint32_t isqrt(uint32_t n) {
    uint32_t res = 0;
    uint32_t bit = (uint32_t)1 << 30;

    while (bit > n) bit >>= 2;

    while (bit) {
        if (n >= res + bit) {
            n -= res + bit;
            res = (res >> 1) + bit;
        } else {
            res >>= 1;
        }
        bit >>= 2;
    }
    return res;
}


struct sdhc_host hp = { 0 };
struct sdhc_softc hsc = { 0 };
struct sdmmc_softc sc = { 0 };

char text[] = "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Donec sodales ac orci eget aliquet. Sed id libero pharetra, suscipit lorem nec, pellentesque felis. Duis finibus tellus quis commodo varius. Sed convallis dolor vel nisi ultricies scelerisque. Nulla semper, massa ac lacinia facilisis, tortor sem semper nunc, vitae vehicula eros ante id risus. Sed in ultricies orci. Cras ultricies neque ac lorem interdum, et cursus erat iaculis. Mauris dui purus, lacinia ut efficitur vitae, tempor vel sem. Nam feugiat ante magna. Mauris vel pretium lorem. Phasellus fermentum eros pharetra ex malesuada sodales. Praesent finibus, orci quis convallis mollis, sem libero sollicitudin eros, a auctor purus tellus ac erat. Suspendisse ullamcorper dui et tortor blandit, nec efficitur lorem eleifend. Fusce imperdiet ornare leo. Vestibulum ante ipsum primis in faucibus orci luctus et ultrices posuere cubilia curae; Quisque a tellus placerat, hendrerit dui id, volutpat orci. Suspendisse aliquam lacus at ultrices efficitur. Suspendisse fermentum pretium dui, non condimentum diam gravida eu. Aenean in risus nisl. Sed luctus diam non consequat fermentum. Aliquam ipsum justo, bibendum eu urna non, iaculis semper mauris. Duis a faucibus velit, vel tincidunt diam. Nunc at massa convallis, ornare nulla at, viverra sem. Vivamus lobortis lacinia ex, eget ornare sem laoreet quis. Nunc lorem ex, ornare in mauris vitae, mattis tempus est. Morbi sagittis dolor ac ante scelerisque imperdiet. Proin gravida non nisi quis malesuada. Phasellus condimentum eros at velit gravida vehicula. Nunc eget sollicitudin lorem. Maecenas eu neque et mauris imperdiet pulvinar id a augue. Nunc sit amet ligula eu magna laoreet faucibus. Etiam lobortis sapien dolor, vitae laoreet nulla ornare eu. Etiam consequat cursus sem non ullamcorper. Proin molestie pulvinar risus a dapibus. Sed a purus vestibulum elit aliquam bibendum a a neque. Nulla neque purus, dapibus sit amet orci mollis, commodo interdum nisl. Donec consectetur augue luctus, luctus velit et, tristique nisl vel.";
u_char data[2048] = { 0 };

void test_rw(int size) {

    // Reset Block
    int err = sdmmc_mem_write_block(sc.sc_card, 0, data, size);
    if (err) printf("sdmmc_mem_write_block errored: %x", err);
    
    // To make sure the read actually reads
    memcpy(data, &text[512], size);

    err = sdmmc_mem_read_block(sc.sc_card, 0, data, size);
    if (err) printf("sdmmc_mem_read_block errored: %x", err);

    for (size_t i = 0; i < size; ++i) {
        if (data[i] != 0) {
            printf("data[%x] not as expected, should be 0, got %x", data[i]);
        }
    }

    err = sdmmc_mem_write_block(sc.sc_card, 0, (u_char*) text, size);
    if (err) printf("sdmmc_mem_write_block errored: %x", err);

    err = sdmmc_mem_read_block(sc.sc_card, 0, data, size);
    if (err) printf("sdmmc_mem_read_block errored: %x", err);

    for (size_t i = 0; i < sizeof(data); ++i) {
        if (data[i] != text[i]) {
            printf("data[%x] not as expected, should be %x, got %x", text[i], data[i]);
        }
    }
}

int main() {
    uart_init(); // setup the uart peripheral

    // simple printf support (only prints text and hex numbers)
    printf("Hello World!\n");
    
#define SDHC_TEST
#ifdef SDHC_TEST
    // *reg16(SDHCI_BASE_ADDR, SDHCI_CLOCK_CONTROL_OFFSET) = 0x0004;

    // for (int i = 0; i < 8; i++) {
    //     printf("Setting Clock Div Reg to %x!\n", 1 << i);
    //     *reg8(SDHCI_BASE_ADDR, SDHCI_CLOCK_CONTROL_OFFSET + 1) = 1 << i;
    // }


    // printf("Read rsvd: %x\n", (unsigned) *reg8(SDHCI_BASE_ADDR, SDHCI_TRANSFER_MODE + 1));
    // *reg8(SDHCI_BASE_ADDR, SDHCI_TRANSFER_MODE + 1) = 0xFF;
    // printf("Read rsvd after write: %x\n", (unsigned) *reg8(SDHCI_BASE_ADDR, SDHCI_TRANSFER_MODE + 1));
    // uart_write_flush();

    // *reg16(SDHCI_BASE_ADDR, SDHCI_NORMAL_INTERRUPT_SIGNAL_ENABLE) = 0xFFFF;

    // // while (!(*reg16(SDHCI_BASE_ADDR, SDHCI_NORMAL_INTERRUPT_STATUS) & 0b100000)) printf(".\n");
    // asm volatile("csrs mie, %0" ::"r"(1 << 19) : "memory");
    // wfi();
    // printf("Interrupted!\n");

    // *reg16(SDHCI_BASE_ADDR, SDHCI_NORMAL_INTERRUPT_STATUS) = 0xFFFF;

    // uint32_t word;
    // for (int i = 0; i < 4; i++) {
    //     word = *reg32(SDHCI_BASE_ADDR, SDHCI_BUFFER_DATA_PORT);
    //     printf("'%x'\n", word);
    // }

    // uint32_t read[2] = { 0 };
    // *reg32(SDHCI_BASE_ADDR, SDHCI_BUFFER_DATA_PORT) = *(uint32_t*) "SDHC";
    // printf("Write Success!\n");
    // *reg32(SDHCI_BASE_ADDR, SDHCI_BUFFER_DATA_PORT) = *(uint32_t*) "m4w!";
    // printf("Write Success!\n");

    // read[0] = *reg32(SDHCI_BASE_ADDR, SDHCI_BUFFER_DATA_PORT);
    // printf("Read Success: '%s'\n", (char*) &read);
    // read[0] = *reg32(SDHCI_BASE_ADDR, SDHCI_BUFFER_DATA_PORT);
    // printf("Read Success: '%s'\n", (char*) &read);

    // *reg32(SDHCI_BASE_ADDR, SDHCI_BUFFER_DATA_PORT) = *(uint32_t*) "test";
    // printf("Write Success!\n");
    // read[0] = *reg32(SDHCI_BASE_ADDR, SDHCI_BUFFER_DATA_PORT);
    // printf("Read Success: '%s'\n", (char*) &read);

    // *reg32(SDHCI_BASE_ADDR, SDHCI_BUFFER_DATA_PORT) = *(uint32_t*) "SDHC";

    // *reg32(SDHCI_BASE_ADDR, 0x00C) = 0;

    // uint32_t state = *reg32(SDHCI_BASE_ADDR, SDHCI_PRESENT_STATE_OFFSET);
    // printf("Read Present State: '%x'\n", state);

    // *reg8(SDHCI_BASE_ADDR, SDHCI_COMMAND_OFFSET + 1) = 0;
    // printf("Wrote to Command Index\n");

    // // asm volatile("csrs mie, %0" ::"r"(1 << 19) : "memory");
    // // wfi();

    // state = *reg32(SDHCI_BASE_ADDR, SDHCI_PRESENT_STATE_OFFSET);
    // printf("Read Present State: '%x'\n", state);

    int err = sdhc_init(&hp, &hsc, &sc, SDHCI_BASE_ADDR, 0, 0, 0);
    if (err) printf("sdhc_init errored: %x\n", err);

    // // Single block RW
    // test_rw(512);
    // // Multiple block RW
    // test_rw(2048);
    // // TODO half block rw?
    
#else
    // wait until uart has finished sending
    uart_write_flush();
 
    // toggling some GPIOs
    gpio_set_direction(0xFFFF, 0x000F); // lowest four as outputs
    gpio_write(0x0A);  // ready output pattern
    gpio_enable(0xFF); // enable lowest eight
    // wait a few cycles to give GPIO signal time to propagate
    asm volatile ("nop\n nop\n nop\n nop\n nop\n");
    printf("GPIO (expect 0xA0): 0x%x\n", gpio_read());

    gpio_toggle(0x0F); // toggle lower 8 GPIOs
    asm volatile ("nop\n nop\n nop\n nop\n nop\n");
    printf("GPIO (expect 0x50): 0x%x\n", gpio_read());
    uart_write_flush();

    // doing some compute
    uint32_t start = get_mcycle();
    uint32_t res   = isqrt(1234567890UL);
    uint32_t end   = get_mcycle();
    printf("Result: 0x%x, Cycles: 0x%x\n", res, end - start);
    uart_write_flush();

    // using the timer
    printf("Tick\n");
    sleep_ms(10);
    printf("Tock\n");
#endif

    return 1;
}
