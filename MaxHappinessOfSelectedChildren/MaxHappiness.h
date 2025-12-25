#pragma once
#include <vector>
#include <algorithm>

static long long maximumHappinessSum(std::vector<int>& happiness, int k) {
	std::sort(happiness.begin(), happiness.end(), [](int a, int b) {
		return a > b;
		});

	long long max = 0;
	for (int i = 0; i < k; i++) {
		int current = happiness[i] - i;

		max += (current >= 0) ? current : 0;
	}

	return max;
}