// Copyright 2024 ETH Zurich and University of Bologna.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0
//
// Philippe Sauter <phsauter@iis.ee.ethz.ch>

#include "print.h"
#include "util.h"
#include "config.h"
#include "uart.h"

const char print_lookup[16] = {'0', '1', '2', '3', '4', '5', '6', '7',
                                '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};

void printf(const char *fmt, ...) {
    va_list args;
    va_start(args, fmt);

    while (*fmt) {
        if (*fmt == '%') {
            fmt++;
            if (*fmt == '#') fmt++;
            while ('0' <= *fmt && *fmt <= '9') fmt++;

            if (*fmt == 'd' || *fmt == 'u') { // decimal
                unsigned int decimal;
                if (*fmt == 'd') {
                    int signed_decimal = va_arg(args, int);
                    if (signed_decimal < 0) {
                        putchar('-');
                        decimal = -signed_decimal;
                    } else {
                        decimal = signed_decimal;
                    }
                } else {
                    decimal = va_arg(args, unsigned int);
                }

                char out[12] = {0};
                char* str = &out[11];

                if (decimal == 0) *--str = '0';
                while (decimal > 0) {
                    *--str = '0' + (decimal % 10);
                    decimal /= 10;
                }
                while (*str) {
                    putchar(*str++);
                }

            } else if (*fmt == 'x' || *fmt == 'p') { // hex
                unsigned int hex = *fmt == 'x' ? va_arg(args, unsigned int) : (unsigned int) va_arg(args, void*);

                char buffer[11];  // holds string while assembling
                unsigned int i = 0;

                if (hex == 0) {
                    putchar('0');
                } else {
                    while (hex > 0) {
                        buffer[i++] = print_lookup[hex & 0xF];
                        hex >>= 4;
                    }
                    // print from stack
                    for (int j = i - 1; j >= 0; j--) {
                        putchar(buffer[j]);
                    }
                }
            } else if (*fmt == 'c') { // char
                char chr = (char) va_arg(args, int);
                putchar(chr);
            } else if (*fmt == 's') { // string
                char *str = va_arg(args, char *);
                while (*str) {
                    putchar(*str++);
                }
            }
        } else {
            putchar(*fmt);
        }
        fmt++;
    }
    va_end(args);

#ifdef CROC_FLUSH_AFTER_PRINT
    uart_write_flush();
#endif
}
