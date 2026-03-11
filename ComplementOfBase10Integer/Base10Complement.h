#pragma once

static int bitwiseComplement(int n) {
	if (n == 0) return 1;

	int complement = 0;
	int msb = 0;

	while (n > 0) {
		int flip = (n & 1) == 0 ? 1 : 0;
		flip <<= msb++;
		complement |= flip;
		n >>= 1;
	}

	return complement;
}