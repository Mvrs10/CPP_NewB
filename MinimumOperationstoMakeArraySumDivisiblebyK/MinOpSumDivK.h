#pragma once
#include <vector>

static int minOperations(std::vector<int>& nums, int k) {
	for (int i = 1; i < nums.size(); i++)
	{
		nums[i] += nums[i - 1];
	}

	return nums.back() % k;
}