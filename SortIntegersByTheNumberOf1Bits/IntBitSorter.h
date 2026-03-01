#pragma once
#include <vector>
#include <algorithm>

static int countSetBits(int n) {
	int count = 0;

	while (n > 0) {
		if ((n & 1) == 1) count++;
		n >>= 1;
	}

	return count;
}

static std::vector<int> sortByBits(std::vector<int>& arr) {
	std::sort(arr.begin(), arr.end(),
		[](int x, int y) {
			int bx = countSetBits(x);
			int by = countSetBits(y);
			return (bx == by) ? (x < y) : (bx < by);
		});

	return arr;
}