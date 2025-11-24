#pragma once
#include <vector>

static std::vector<bool> prefixesDivBy5(std::vector<int>& nums) {
	std::vector<bool> isDivisibleBy5;
	int curr = 0;

	for (int bit : nums) {
		curr = (2 * curr + bit) % 5;
		isDivisibleBy5.push_back(curr % 5 == 0);
	}

	return isDivisibleBy5;
}