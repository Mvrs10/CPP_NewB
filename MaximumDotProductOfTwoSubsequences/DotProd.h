#pragma once
#include <algorithm>
#include <vector>

static int maxDotProduct(std::vector<int>& nums1, std::vector<int>& nums2) {
	int m = nums1.size();
	int n = nums2.size();

	const int NEG_INF = -1000000000;
	std::vector<std::vector<int>> dp(m + 1, std::vector<int>(n+1, NEG_INF));

	for (int i = 1; i <= m; i++) {
		for (int j = 1; j <= n; j++) {
			int pair = nums1[i - 1] * nums2[j - 1];

			int usePair = std::max(pair, pair + dp[i - 1][j - 1]);

			dp[i][j] = std::max({ usePair, dp[i - 1][j], dp[i][j - 1] });

		}
	}

	return dp[m][n];
}