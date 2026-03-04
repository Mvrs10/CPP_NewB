#pragma once
#include <vector>

static int numSpecial(std::vector<std::vector<int>>& mat) {
	int specialPos = 0;
	int m = mat.size(), n = mat[0].size();

	std::vector<std::vector<int>> ones;
	std::vector<int> row(m);
	std::vector<int> col(n);

	for (int r = 0; r < m; r++) {
		for (int c = 0; c < n; c++) {
			if (mat[r][c] == 1) {
				ones.push_back({ r,c });
				row[r]++;
				col[c]++;
			}
		}
	}

	for (std::vector<int> one : ones) {
		if (row[one[0]] == 1 && col[one[1]] == 1)
			specialPos++;
	}

	return specialPos;
}