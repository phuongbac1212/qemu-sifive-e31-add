/* Copyright 2019 SiFive, Inc */
/* SPDX-License-Identifier: Apache-2.0 */

#include <stdio.h>

extern int add(int x, int y);
extern int inc(int x);
int main() {

    printf("Hello, World!\n");

    int a = 0xF0;
    int b = 0x0E;

    //inc(b);
    int result = add(a,inc(b));
    printf("result is: 0x%x\n", result);
    return 0;
}
