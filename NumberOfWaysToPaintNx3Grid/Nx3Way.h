#pragma once

static int numOfWays(int n) {
	int MOD = 1000000007;
	long twoColorPattern = 6;
	long threeColorPattern = 6;

	for (int i = 2; i <= n; i++) {
		int temp = twoColorPattern;
		twoColorPattern = (twoColorPattern * 3 + threeColorPattern * 2) % MOD;
		threeColorPattern = (temp * 2 + threeColorPattern * 2) % MOD;
	}

	return (int)((twoColorPattern + threeColorPattern) % MOD);
}