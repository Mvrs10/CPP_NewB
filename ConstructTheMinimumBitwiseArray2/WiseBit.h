#pragma once
#include <vector>

static std::vector<int> minBitwiseArray(std::vector<int>& nums) {
	for (int i = 0; i < nums.size(); i++) {
		int x = -1;
		int d = 1;
		while ((nums[i] & d) != 0) {
			x = nums[i] - d;
			d <<= 1;
		}
		nums[i] = x;
	}

	return nums;
}