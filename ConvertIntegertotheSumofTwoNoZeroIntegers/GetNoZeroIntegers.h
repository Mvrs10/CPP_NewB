#pragma once
#include <vector>

static bool isNoZero(int n) {
	while (n > 0) {
		if (n % 10 == 0)
			return false;
		n /= 10;		
	}
	return true;
}

static std::vector<int> getNoZeroIntegers(int n) {
	for (int i = 1; i < n; i++) {
		int j = n - i;
		if (isNoZero(i) && isNoZero(j))
			return std::vector<int>{ i, j };
	}
	return std::vector<int>{0, 0};
}