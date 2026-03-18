#pragma once
#include <vector>
#include <algorithm>
static int largestSubmatrix(std::vector<std::vector<int>>& matrix) {
	int m = matrix.size();
	int n = matrix[0].size();

	for (int j = 0; j < n; j++) {
		for (int i = 1; i < m; i++) {
			matrix[i][j] = matrix[i][j] == 0 ? 0 : matrix[i - 1][j] + 1;
		}
	}

	int ans = 0;
	for (int i = 0; i < m; i++) {
		std::sort(matrix[i].begin(), matrix[i].end(), std::greater<int>());

		for (int j = 0; j < n; j++) {
			ans = std::max(ans, matrix[i][j] * (j + 1));
		}
	}
	
	return ans;
}
