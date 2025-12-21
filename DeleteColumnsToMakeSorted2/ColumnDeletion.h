#pragma once
#include <vector>
#include <string>

static int minDeletionSize(std::vector<std::string> strs) {
	int n = strs.size();
	int m = strs[0].size();

	std::vector<char> unsorted(n - 1, 1);
	int deletions = 0;

	for (int col = 0; col < m; col++) {
		bool isDeleted = false;

		for (int i = 0; i < n - 1; i++) {
			if (unsorted[i] && strs[i][col] > strs[i + 1][col]) {
				deletions++;
				isDeleted = true;
				break;
			}	
		}

		if (isDeleted) continue;
		
		for (int i = 0; i < n - 1; i++) {
			if (unsorted[i] && strs[i][col] < strs[i + 1][col]) {
				unsorted[i] = 0;
			}
		}
	}

	return deletions;
}