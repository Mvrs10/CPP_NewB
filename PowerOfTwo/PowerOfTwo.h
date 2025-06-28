#pragma once

static bool isPowerOfTwo(int n) {
	if (n <= 0 || (n%2 != 0 && n > 1)) return false;
	if (n == 1) return true;
	return isPowerOfTwo(n/2);
}

static bool isPowerOfTwoBitWise(int n) {
	return n > 0 && (n & (n - 1)) == 0;
}