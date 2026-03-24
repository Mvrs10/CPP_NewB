#pragma once
#include <vector>

static int maxProductPath(std::vector<std::vector<int>>& grid) {
	int m = grid.size();
	int n = grid[0].size();
	const int MOD = 1000000007;

	std::vector<std::vector<long long>> maxDp(m, std::vector<long long>(n));
	maxDp[0][0] = grid[0][0];
	std::vector<std::vector<long long>> minDp(m, std::vector<long long>(n));
	minDp[0][0] = grid[0][0];

	for (int j = 1; j < n; j++) {
		maxDp[0][j] = maxDp[0][j - 1] * grid[0][j];
		minDp[0][j] = maxDp[0][j];
	}

	for (int i = 1; i < m; i++) {
		maxDp[i][0] = maxDp[i - 1][0] * grid[i][0];
		minDp[i][0] = maxDp[i][0];
	}

	for (int i = 1; i < m; i++) {
		for (int j = 1; j < n; j++) {
			long long val = grid[i][j];

			long long a = maxDp[i - 1][j] * val;
			long long b = minDp[i - 1][j] * val;
			long long c = maxDp[i][j - 1] * val;
			long long d = minDp[i][j - 1] * val;

			maxDp[i][j] = std::max(std::max(a, b), std::max(c, d));
			minDp[i][j] = std::min(std::min(a, b), std::min(c, d));
		}
	}

	return maxDp[m - 1][n - 1] < 0 ? -1 : (int)(maxDp[m - 1][n - 1] % MOD);
}