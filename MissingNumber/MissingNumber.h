#pragma once
#include <vector>

static int missingNumber(std::vector<int>& nums) {
	int sum = 0;
	for (int num : nums) {
		sum += num;
	}
	return ((nums.size() + 1) * nums.size() / 2) - sum;
}