#pragma once
#include <vector>
#include <unordered_set>

static int findFinalValue(std::vector<int>& nums, int original) {
	std::unordered_set<int> set(nums.begin(), nums.end());

	while (set.count(original)) {
		original *= 2;
	}

	return original;
}