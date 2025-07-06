#pragma once

static bool isPowerOfThree(int n) {
	if (n < 1) return false;
	while (n > 1) {
		if (n % 3 != 0) return false;
		n /= 3;
	}
	return true;
}

static bool isPowerOfThreeMath(int n) {
	const int MAX_POWA = 1162261467;
	return n > 0 && MAX_POWA % n == 0;
}