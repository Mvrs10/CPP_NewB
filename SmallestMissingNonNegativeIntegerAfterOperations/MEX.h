#pragma once
#include <vector>
#include <unordered_map>

static int findSmallestInteger(std::vector<int> nums, int value) {
	std::unordered_map<int, int> freq;
	for (int num : nums) {
		int mod = ((num % value) + value) % value;
		freq[mod]++;
	}

	int mex = 0;
	while (true) {
		int mod = mex % value;
		if (freq[mod] == 0)
			return mex;
		freq[mod]--;
		mex++;
	}
}