#pragma once
#include <vector>
#include <algorithm>

static int minRemoval(std::vector<int>& nums, int k) {
	int n = nums.size();
	int min = nums.size();
	std::sort(nums.begin(), nums.end());

	for (int i = 0, j = 0; j < nums.size(); j++) {
		while (i < j && (long long)nums[i] * k < nums[j]) {
			i++;
		}

		min = std::min(min, n - (j - i +1));
	}
	
	return min;
}