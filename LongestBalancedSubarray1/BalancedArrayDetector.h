#pragma once
#include <vector>
#include <unordered_set>

static int longestBalanced(std::vector<int>& nums) {
	int n = nums.size();
	int max = 0;

	for (int i = 0; i < n; i++) {
		std::unordered_set<int> evens;
		std::unordered_set<int> odds;

		for (int j = i; j < n; j++) {
			if (nums[j] & 1) {
				odds.insert(nums[j]);
			}
			else {
				evens.insert(nums[j]);
			}

			if (odds.size() == evens.size())
				max = std::max(max, j - i + 1);
		}
	}
	return max;
}