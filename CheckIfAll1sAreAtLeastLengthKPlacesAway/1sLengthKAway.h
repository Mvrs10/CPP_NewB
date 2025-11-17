#pragma once
#include <vector>

static bool kLengthApart(std::vector<int>& nums, int k) {
	int cur = -1;

	for (int i = 0; i < nums.size(); i++) {
		if (nums[i] == 1) {
			if (cur > -1) {
				int distance = i - cur - 1;
				if (distance < k)
					return false;
			}
			cur = i;
		}
	}

	return true;
}