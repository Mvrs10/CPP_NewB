#pragma once
#include <vector>

static long long maxSubarraySum(std::vector<int>& nums, int k) {
	int n = nums.size();
	long long prefixSum = 0;
	long long maxSum = LLONG_MIN;
	std::vector<long long> minPrefixKSum(k, LLONG_MAX / 2);
	minPrefixKSum[0] = 0;

	for (int i = 1; i <= n; i++) {
		prefixSum += nums[i - 1];
		maxSum = std::max(maxSum, prefixSum - minPrefixKSum[i % k]);
		minPrefixKSum[i % k] = std::min(prefixSum, minPrefixKSum[i % k]);
	}

	return maxSum;
}