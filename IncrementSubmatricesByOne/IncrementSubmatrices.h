#pragma once
#include <vector>

static std::vector<std::vector<int>> rangeAddQueries(int n, std::vector<std::vector<int>> queries) {
	std::vector<std::vector<int>> flag(n + 1, std::vector<int>(n + 1, 0));

	for (std::vector<int> q : queries) {
		int r1 = q[0], c1 = q[1];
		int r2 = q[2], c2 = q[3];

		flag[r1][c1] += 1;
		flag[r1][c2 + 1] -= 1;
		flag[r2 + 1][c1] -= 1;
		flag[r2 + 1][c2 + 1] += 1;
	}

	for (int r = 0; r < n + 1; r++) {
		for (int c = 1; c < n + 1; c++) {
			flag[r][c] += flag[r][c - 1];
		}
	}

	for (int c = 0; c < n + 1; c++) {
		for (int r = 1; r < n + 1; r++) {
			flag[r][c] += flag[r - 1][c];
		}
	}

	std::vector<std::vector<int>> ans(n, std::vector<int>(n, 0));
	for (int r = 0; r < n; r++) {
		for (int c = 0; c < n; c++) {
			ans[r][c] = flag[r][c];
		}
	}

	return ans;
}