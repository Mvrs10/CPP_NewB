#pragma once
#include <vector>
#include <algorithm>
#include <limits.h>

static int maxProfit(std::vector<int>& prices) {
	int max = 0, min = 10000;
	for (int price : prices) {
		if (price <= min) min = price;
		else max = std::max(max, price - min);
	}
	return max;
}