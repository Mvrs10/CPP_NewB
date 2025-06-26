#pragma once
#include <cstdint>

static uint32_t ReverseBitsMovingN(uint32_t n) {
	uint32_t result = 0;
	for (int i = 31; i >= 0; i--) {
		uint32_t bit = (n >> 31 - i) & 1;
		result |= bit << i;
	}
	return result;
}

static uint32_t ReverseBitsMovingResult(uint32_t n) {
	uint32_t result = 0;
	for (int i = 0; i < 32; i++) {
		result <<= 1;
		result |= n & 1;
		n >>= 1;
	}
	return result;
}