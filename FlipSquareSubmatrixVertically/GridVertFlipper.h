#pragma once
#include <vector>

static std::vector<std::vector<int>> reverseSubmatrix(std::vector<std::vector<int>>& grid, int x, int y, int k) {
	for (int r = 0; r < k / 2; r++) {
		for (int c = 0; c < k; c++) {
			int temp = grid[x + r][y + c];
			grid[x + r][y + c] = grid[x + k - r - 1][y + c];
			grid[x + k - r - 1][y + c] = temp;
			// swap(grid[x + i][y + j], grid[x + k - 1 - i][y + j]);
		}
	}

	return grid;
}