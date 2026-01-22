#pragma once
#include <vector>

static bool isNonDecreasing(std::vector<int>& nums) {
	for (int i = 0; i < nums.size() - 1; i++) {
		if (nums[i] > nums[i + 1]) return false;
	}

	return true;
}

static void removeMinPair(std::vector<int>& nums) {
	int i = 0;
	int sum = nums.size() * 1000;

	for (int j = 0; j < nums.size() - 1; j++) {
		if (nums[j] + nums[j + 1] < sum) {
			i = j;
			sum = nums[j] + nums[j + 1];
		}
	}

	nums[i] = sum;
	nums.erase(nums.begin() + i + 1);
}

static int minimumPairRemoval(std::vector<int>& nums) {
	int ops = 0;

	while (!isNonDecreasing(nums)) {
		ops++;
		removeMinPair(nums);
	}

	return ops;
}