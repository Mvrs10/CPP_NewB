#pragma once
#include <vector>

static int maxSum(std::vector<int>& nums) {
	std::vector<bool> uniques( 100,false );
	int max = -101;
	int sum = 0;

	for (int num : nums) {
		if (num > 0 && uniques[num] == false) {
			uniques[num] = true;
			sum += num;
		}
		max = std::max(max, num);
	}

	if (max < 0)
		return max;
	return sum;
}