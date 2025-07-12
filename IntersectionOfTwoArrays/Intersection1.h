#pragma once
#include <vector>
#include <unordered_set>

static std::vector<int> intersection(std::vector<int> nums1, std::vector<int> nums2) {
	std::unordered_set<int> ans;
	std::unordered_set<int> hs_nums2(nums2.begin(), nums2.end());
	for (int i : nums1) {
		if (hs_nums2.find(i) != hs_nums2.end()) ans.insert(i);
	}
	return std::vector<int>(ans.begin(), ans.end());
}