#pragma once
#include <algorithm>

static int binaryGap(int n) {
	int prev = -1, max = 0, i = 0;
	while (n > 0) {
		if ((n & 1) == 1) {
			if (prev != -1) {
				max = std::max(max, i - prev);
			}
			prev = i;
		}
		i++;
		n >>= 1;
	}

	return max;
}


