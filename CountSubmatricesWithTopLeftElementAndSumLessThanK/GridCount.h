#pragma once
#include <vector>

static int countSubmatrices(std::vector<std::vector<int>>& grid, int k) {
	int m = grid.size();
	int n = grid[0].size();
	std::vector<int> prefixRow(n);
	int cnt = 0;

	for (int i = 0; i < m; i++) {
		int current = 0;
		for (int j = 0; j < n; j++) {
			prefixRow[j] += grid[i][j];
			current += prefixRow[j];
			if (current <= k)
				cnt++;
		}
	}

	return cnt;
}