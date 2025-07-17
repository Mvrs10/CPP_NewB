#pragma once

static bool isValidPerfectSquare(int num) {
	if (num < 2) return true;

	int left = 0;
	int right = num / 2;

	while (left <= right) {
		long mid = (right + left) / 2;
		long square = mid * mid;
		if (square == num) return true;
		if (square > num) right = (int)mid - 1;
		else left = (int)mid + 1;
	}

	return false;
}