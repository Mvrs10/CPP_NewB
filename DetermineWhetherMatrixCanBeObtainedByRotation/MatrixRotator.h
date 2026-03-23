#pragma once
#include <vector>

static std::vector<std::vector<int>> rotate(std::vector<std::vector<int>>& mat) {
	int n = mat.size();
	std::vector<std::vector<int>> rt(n, std::vector<int>(n));

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			rt[i][j] = mat[n - j - 1][i];
		}
	}

	return rt;
}

static bool isObtained(std::vector<std::vector<int>>& mat, std::vector<std::vector<int>>& target, int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (mat[i][j] != target[i][j]) return false;
		}
	}
	return true;
}

static bool findRotation(std::vector<std::vector<int>>& mat, std::vector<std::vector<int>>& target) {
	for (int i = 0; i < 4; i++) {
		if (isObtained(mat, target, mat.size())) return true;
		mat = rotate(mat);
	}
	
	return false;
}