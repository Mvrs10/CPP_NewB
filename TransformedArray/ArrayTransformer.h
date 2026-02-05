#pragma once
#include <vector>

static std::vector<int> constructTransformedArray(std::vector<int>& nums) {
	int n = nums.size();
	std::vector<int> result(n);

	for (int i = 0; i < n; i++) {
		int j = (nums[i] + i) % n;
		j = j < 0 ? n + j : j;
		result[i] = nums[j];
	}

	return result;
}