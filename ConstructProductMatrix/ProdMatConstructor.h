#pragma once
#include <vector>

static std::vector<std::vector<int>> constructProductMatrix(std::vector<std::vector<int>>& grid) {
	const int MOD = 12345;
	int m = grid.size();
	int n = grid[0].size();

	std::vector<std::vector<int>> productMatrix(m, std::vector<int>(n));

	int total = m * n;
	std::vector<long long> prefixProduct(total + 1);
	prefixProduct[0] = 1;

	int i = 0;
	for (int j = 0; j < m; j++) {
		for (int k = 0; k < n; k++) {
			prefixProduct[i + 1] = (grid[j][k] * prefixProduct[i]) % MOD;
			i++;
		}
	}

	long long suffixProduct = 1;
	for (int i = m - 1; i >= 0; i--) {
		for (int j = n - 1; j >= 0; j--) {
			int k = i * n + j;
			productMatrix[i][j] = (int)((prefixProduct[k] * suffixProduct) % MOD);
			suffixProduct *= grid[i][j];
			suffixProduct %= MOD;
		}
	}

	return productMatrix;
}