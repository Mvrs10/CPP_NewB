#pragma once
#include <vector>
#include <unordered_set>
#include <algorithm>
#include <unordered_map>
#include <cstdlib>

static bool containsDuplicate(std::vector<int>& nums) {
	std::unordered_set<int> set;
	for (int n : nums) {
		if (set.count(n)) return true;
		else set.insert(n);
	}
	return false;
}

static bool containsDuplicateWithSorting(std::vector<int>& nums) {
	sort(nums.begin(), nums.end());
	for (int i = 0; i < nums.size() - 1; i++) {
		if (nums[i] == nums[i + 1]) return true;
	}
	return false;
}

static bool containsNearbyDuplicate(std::vector<int>& nums, int k) {
	std::unordered_map<int, int> map;
	for (int i = 0; i < nums.size(); i++) {
		if (map.count(nums[i]) && abs(i - map[nums[i]]) <= k) return true;
			map[nums[i]] = i;
	}
	return false;
}