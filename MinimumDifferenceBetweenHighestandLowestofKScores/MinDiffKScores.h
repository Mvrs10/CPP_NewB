#pragma once
#include <vector>
#include <algorithm>

static int minimumDifference(std::vector<int>& nums, int k) {
	if (k == 0) return 0;

	std::sort(nums.begin(), nums.end());
	int diff = 100000;
	for (int i = 0; i <= nums.size() - k; i++) {
		diff = std::min(diff, nums[i + k - 1] - nums[i]);
	}

	return diff;
}