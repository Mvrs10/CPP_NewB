#pragma once
#include <vector>
#include <unordered_set>

int maximumUniqueSubarray(std::vector<int>& nums) {
	
	std::unordered_set<int> seen;
	int left = 0;
	int sum = 0;
	int result = 0;

	for (int i = 0; i < nums.size(); i++) {
		while (seen.count(nums[i])) {
			seen.erase(nums[left]);
			sum -= nums[left];
			left++;
		}
		seen.insert(nums[i]);
		sum += nums[i];
		result = std::max(sum, result);
	}

	return result;
}

