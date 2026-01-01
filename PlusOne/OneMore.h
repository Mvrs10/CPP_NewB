#pragma once
#include <vector>

static std::vector<int> plusOne(std::vector<int>& digits) {
	for (int i = digits.size() - 1; i >= 0; i--) {
		digits[i] += 1;

		if (digits[i] < 10) {
			return digits;
		}

		digits[i] = 0;
	}

	std::vector<int> newDigits = std::vector<int>(digits.size() + 1);
	newDigits[0] = 1;
	return newDigits;
}
