#pragma once
#include <vector>
#include <string>

static std::vector<std::string> summaryRanges(std::vector<int> nums) {
	std::vector<std::string> result;
	int n = nums.size();
	int index = 0;
	while (index < n) {
		int start = index;
		while (index < n - 1 && nums[index] == nums[index + 1] - 1) {
			index++;
		}
		if (start == index) {
			result.push_back(std::to_string(nums[start]));
		}
		else {
			result.push_back(std::to_string(nums[start]) + "->" + std::to_string(nums[index]));
		}
		index++;
	}
	return result;
}