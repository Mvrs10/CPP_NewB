#pragma once
#include <vector>

static int countPartitions(std::vector<int>& nums) {
	for (int i = 1; i < nums.size(); i++) {
		nums[i] += nums[i - 1];
	}

	int partitions = 0;
	for (int i = 0; i < nums.size() - 1; i++) {
		if ((nums[nums.size() - 1] - 2 * nums[i]) % 2 == 0)
			partitions++;
	}

	return partitions;
}

static int countPartitions_v2(std::vector<int>& nums) {
	int sum = 0;
	for (int n : nums) {
		sum += n;
	};

	if (sum % 2 == 0) return nums.size() - 1;
	else return 0;
}