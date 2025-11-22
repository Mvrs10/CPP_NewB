#pragma once
#include <cmath>

static int arrangeCoins(int n) {
	return (int)(-1 + std::sqrt(1 + 8.0 * n)) / 2;
}