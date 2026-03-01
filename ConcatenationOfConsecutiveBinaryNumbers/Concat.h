#pragma once

static int concatenatedBinary(int n) {
	int bitLength = 0;
	long long ans = 0;

	for (int i = 1; i <= n; i++) {
		if ((i & (i - 1)) == 0)
			bitLength++;

		ans = ((ans << bitLength) | i) % 1000000007;
	}

	return ans;
}