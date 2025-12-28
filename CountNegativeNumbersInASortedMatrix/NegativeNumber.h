#pragma once
#include <vector>

static int countNegatives(std::vector<std::vector<int>>& grid) {
	int m = grid.size();
	int n = grid[0].size();

	int r = 0;
	int c = n - 1;
	int count = 0;

	while (r < m && c >= 0) {
		if (grid[r][c] < 0) {
			count += (m - r);
			c--;
		}
		else {
			r++;
		}
	}

	return count;
}