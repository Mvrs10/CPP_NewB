#pragma once
#include <vector>

static bool isTrionic(std::vector<int>& nums) {
	int n = nums.size();
	if (n == 3 || nums[0] >= nums[1]) return false;

	int i = 1;
	bool isIncreasing = true;
	int switchDirection = 0;

	while (i < n) {
		if (nums[i] == nums[i - 1]) return false;

		else if (isIncreasing == nums[i] > nums[i - 1]) {
			i++;
			continue;
		}

		isIncreasing = !isIncreasing;
		switchDirection++;
		if (switchDirection > 2) return false;
		i++;
	}

	return switchDirection == 2;
}