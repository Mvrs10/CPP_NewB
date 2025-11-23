#pragma once
#include <vector>

static std::vector<int> findDisappearedNumbers(std::vector<int>& nums) {
	std::vector<int> temp(nums.size());
	std::vector<int> missingNumbers;

	for (int i = 0; i < nums.size(); i++) {
		temp[nums[i] - 1] = nums[i];
	}

	for (int i = 0; i < temp.size(); i++) {
		if (temp[i] == 0)
			missingNumbers.push_back(i + 1);
	}

	return missingNumbers;
}