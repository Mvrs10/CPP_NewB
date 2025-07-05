#pragma once
#include <vector>

class NumArray
{
public:
	NumArray(std::vector<int>nums) {
		culmulativeSums.push_back(0);
		for (int num : nums) {
			culmulativeSums.push_back(culmulativeSums.back() + num);
		}
	}

	int sumRange(int left, int right) {
		return culmulativeSums[right + 1] - culmulativeSums[left];
	}
private:
	std::vector<int> culmulativeSums;
};

