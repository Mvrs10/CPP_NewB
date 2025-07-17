#pragma once
#include <vector>
#include <unordered_map>

static std::vector<int> intersection(std::vector<int>& nums1, std::vector<int>& nums2) {
	std::unordered_map<int, int> map;
	for (int i : nums1) {
		if (!map.count(i))
			map[i]=0;
		map[i]++;
	}

	std::vector<int> result;
	for (int i : nums2) {
		if (map.count(i) && map[i] > 0) {
			result.push_back(i);
			map[i]--;
		}			
	}

	return result;
}
