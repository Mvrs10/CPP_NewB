#pragma once
#include <vector>

static long long maxMatrixSum(std::vector<std::vector<int>>& matrix) {
	long long sum = 0;
	int min = 100006;
	int cnt = 0;

	for (const std::vector<int>& r : matrix) {
		for (int c : r) {
			if (c < 0) {
				cnt++;
				c = -c;
			}
			min = std::min(c, min);
			sum += c;
		}
	}

	sum -= (cnt % 2 != 0) ? 2 * min : 0;

	return sum;
}