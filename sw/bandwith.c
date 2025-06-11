#include "uart.h"
#include "print.h"
#include "timer.h"
#include "gpio.h"
#include "util.h"

#include "sdmmcvar.h"
#include "sdhcvar.h"

struct sdmmc_softc sc = { 0 };
struct sdhc_host hp = { 0 };

static unsigned int s_Seed = 1;
unsigned int rand(void) {
    s_Seed = s_Seed * 1103515245 + 12345;
    return s_Seed;
}

inline uint32_t mcycle() {
    uint32_t register r;
    asm volatile("csrr %0, mcycle" : "=r"(r) : : "memory");
    return r;
}

#define SIZE     512
static u_char scratch[SIZE] = { 0 };

int main() {
    uart_init(); // setup the uart peripheral
    printf("Hello World!\n");
    uint32_t start, end;

    start = mcycle();
    ASSERT_OK(sdhc_init(&hp, SDHCI_BASE_ADDR, 0, 0));
    int err = sdhc_bus_width(&hp, 4);
    if (err) printf("sdhc_bus_width errored: %x\n", err);
    sdmmc_init(&sc, &hp, scratch);
    end = mcycle();

    printf("SD Card initialized in %d cycles\n", end - start);


    int blocks = 1;
    for (int j = 0; j < 10; j++) {
        printf("Start RW for %d blocks\n", blocks);

        int size = SIZE * blocks;
        for (int i = 0; i < SIZE; i++) scratch[i] = i + j;

        start = mcycle();
        ASSERT_OK(sdmmc_mem_write_block(&sc.sc_card, 0, scratch, size));
        end = mcycle();
        uint32_t write_cycles = end - start;

        printf("Wrote %d blocks in %d cycles\n", blocks, end - start);

        memset(scratch, 0xFF, SIZE);

        start = mcycle();
        ASSERT_OK(sdmmc_mem_read_block(&sc.sc_card, 0, scratch, size));
        end = mcycle();

        printf("Read %d blocks in %d cycles\n", blocks, end - start);

        for (int i = 0; i < SIZE; i++) {
            if (scratch[i] != (u_char) (i + j)) {
                printf("RW invalid for %d blocks, got %d, want %d\n", blocks, scratch[i], (u_char) (i+j));
                return 1;
            }
        }

        blocks *= 2;
    }

    printf("\n");
    uart_write_flush();

    return 1;
}
