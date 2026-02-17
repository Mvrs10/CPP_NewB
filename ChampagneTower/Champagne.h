#pragma once
#include <vector>

double champagneTower(int poured, int query_row, int query_glass) {
	std::vector<std::vector<double>> dp(query_row + 2);

	for (int i = 0; i < query_row + 1; i++) {
		dp[i] = std::vector<double>(i + 1);
	}

	dp[0][0] = poured;

	for (int r = 0; r <= query_row; r++) {
		for (int c = 0; c <= r; c++) {
			if (dp[r][c] > 1) {
				double overflow = (dp[r][c] - 1) / 2;
				dp[r + 1][c] += overflow;
				dp[r + 1][c + 1] += overflow;
				dp[r][c] = 1;
			}
		}
	}

	return dp[query_row][query_glass] > 1 ? 1 : dp[query_row][query_glass];
}