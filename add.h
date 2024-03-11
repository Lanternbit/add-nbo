// add.h
#pragma once
#include <stdint.h>
#include <stdio.h>

uint32_t add(uint32_t f, uint32_t s);

int size_check(FILE *fp);

uint32_t correction(int size, uint32_t arr);

void print_result(uint32_t f, uint32_t s, uint32_t result);
