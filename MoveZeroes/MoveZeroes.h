#pragma once
#include <vector>

static void moveZeroes(std::vector<int>& nums) {
	int zeroIndex = 0;
	for (int i = 0; i < nums.size(); i++) {
		if (nums[i] != 0) {
			int temp = nums[i];
			nums[i] = nums[zeroIndex];
			nums[zeroIndex++] = temp;
		}
	}
}