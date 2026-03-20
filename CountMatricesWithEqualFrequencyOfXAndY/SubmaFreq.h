#pragma once
#include <vector>

static int numberOfSubmatrice(std::vector<std::vector<char>>& grid) {
	int m = grid.size();
	int n = grid[0].size();

	std::vector<std::vector<int>> prefX(m + 1, std::vector<int>(n + 1));
	std::vector<std::vector<int>> prefY(m + 1, std::vector<int>(n + 1));
	int cnt = 0;

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			int x = grid[i][j] == 'X' ? 1 : 0;
			int y = grid[i][j] == 'Y' ? 1 : 0;

			prefX[i + 1][j + 1] = x + prefX[i][j + 1] + prefX[i + 1][j] - prefX[i][j];
			prefY[i + 1][j + 1] = y + prefY[i][j + 1] + prefY[i + 1][j] - prefY[i][j];

			if (prefX[i + 1][j + 1] == prefY[i + 1][j + 1] && prefX[i + 1][j + 1] > 0)
				cnt++;
		}
	}

	return cnt;
}