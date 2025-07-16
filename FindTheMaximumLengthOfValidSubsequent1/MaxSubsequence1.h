#pragma once
#include <vector>

static int maximumLength(std::vector<int> nums) {
	// dp[e,o]: max length counts with even and odd in 4 patterns
	int dp[2][2] = { {0,0}, {0,0} };
	int max = 0;

	for (int n : nums) {
		int parity = n % 2;

		int prevE = dp[0][parity];
		int prevO = dp[1][parity];

		dp[parity][0] = ++prevE; // EE || OE
		dp[parity][1] = ++prevO; // EO || OO

		max = std::max(max, std::max(dp[parity][0], dp[parity][1]));
	}
	return max;
}
