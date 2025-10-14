#pragma once
#include <vector>


static bool hasIncreasingSubarrays(std::vector<int>& nums, int k) {
	int n = nums.size();
	if (n < 2 * k) return false;

	for (int i = 0; i <= n - 2 * k; i++) {
		int check = 1;
		int idx = i;
		bool isValid = true;
		while (check <= 2) {
			for (int j = idx; j < idx + k - 1; j++) {
				if (nums[j] >= nums[j + 1]) {
					isValid = false;
					break;
				}					
			}
			if (!isValid) break;
			check++;
			idx += k;
		}
		if (isValid) return true;
	}
	return false;
}