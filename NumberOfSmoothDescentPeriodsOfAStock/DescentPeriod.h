#pragma once
#include <vector>

static long long getDescentPeriods(std::vector<int>& prices) {
	long long k = 1;
	long long descentPeriods = 0;

	for (int i = 1; i < prices.size(); i++) {
		if (prices[i - 1] - prices[i] == 1) {
			k++;
		}
		else {
			descentPeriods += k * (k + 1) / 2;
			k = 1;
		}
	}

	descentPeriods += k * (k + 1) / 2;

	return descentPeriods;
}