#pragma once
#include <vector>

static bool canPartitionGrid(std::vector<std::vector<int>>& grid) {
	int m = grid.size();
	int n = grid[0].size();
	long total = 0;

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			total += grid[i][j];
		}
	}
	
	if (total % 2 == 1) return false;

	long half = total / 2;
	long prefix = 0;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			prefix += grid[i][j];
		}

		if (prefix == half) return true;
	}

	prefix = 0;
	for (int j = 0; j < n; j++) {
		for (int i = 0; i < m; i++) {
			prefix += grid[i][j];
		}

		if (prefix == half) return true;
	}

	return false;
}