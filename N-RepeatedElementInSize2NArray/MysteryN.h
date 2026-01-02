#pragma once
#include <vector>
#include <unordered_map>

static int repeatedNTimes(std::vector<int>& nums) {
	std::unordered_map<int, int> dict;

	for (int n : nums) {
		if (dict.count(n)) {
			return n;
		}
		dict[n] = 1;
	}

	return -1;
}