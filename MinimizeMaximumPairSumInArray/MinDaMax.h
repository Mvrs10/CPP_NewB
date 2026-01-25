#pragma once
#include <vector>
#include <algorithm>

static int minPairSum(std::vector<int>& nums) {
	std::sort(nums.begin(), nums.end());

	int l = 0, r = nums.size() - 1;
	int max = 0;

	while (l < r) {
		int sum = nums[l] + nums[r];
		if (sum > max)
			max = sum;
		l++;
		r--;
	}

	return max;
}
