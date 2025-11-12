#pragma once
#include <vector>
#include <algorithm>

static int findGCF(int a, int b);

static int minOperations(std::vector<int>& nums) {
	int n = nums.size();

	int currentGCF = nums[0];
	int ones = 0;
	for (int num : nums) {
		currentGCF = findGCF(currentGCF, num);
		if (num == 1) ones++;
	}
	if (currentGCF > 1) return -1;
	if (ones > 0) return n - ones;

	int minSubArrayLength = n;
	for (int i = 0; i < n; i++) {
		currentGCF = nums[i];
		for (int j = i + 1; j < n; j++) {
			currentGCF = findGCF(currentGCF, nums[j]);
			if (currentGCF == 1) {
				minSubArrayLength = std::min(minSubArrayLength, j - i + 1);
				break;
			}
		}
	}
	return minSubArrayLength - 1 + n - 1;
}

static int findGCF(int a, int b) {
	while (b > 0) {
		int temp = b;
		b = a % b;
		a = temp;
	}
	return a;
}