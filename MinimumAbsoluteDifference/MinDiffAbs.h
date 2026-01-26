#pragma once
#include <vector>
#include <algorithm>

static std::vector<std::vector<int>> minimumAbsDifference(std::vector<int>& arr) {
	std::sort(arr.begin(), arr.end());

	int minDiff = 2000000;
	for (int i = 0; i < arr.size() - 1; i++) {
		minDiff = std::min(minDiff, arr[i + 1] - arr[i]);
	}

	std::vector<std::vector<int>> minDiffPairs;
	for (int i = 0; i < arr.size() - 1; i++) {
		if (arr[i + 1] - arr[i] == minDiff)
			minDiffPairs.push_back({ arr[i],arr[i + 1] });
	}

	return minDiffPairs;
}