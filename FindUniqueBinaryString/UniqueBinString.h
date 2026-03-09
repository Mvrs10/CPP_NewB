#pragma once
#include <vector>
#include <string>

static std::string findDifferentBinaryString(std::vector<std::string>& nums) {
	int n = nums.size();
	std::vector<char> unique(n);

	for (int i = 0; i < n; i++) {
		unique[i] = nums[i][i] == '0' ? '1' : '0';
	}

	return std::string(unique.begin(), unique.end());
}
