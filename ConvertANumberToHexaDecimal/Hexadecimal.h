#pragma once
#include <string>

static std::string toHex(int num) {
	if (num == 0) return "0";
	std::string hex = "0123456789abcdef";
	std::string result;
	int count = 0;

	while (num != 0 && count < 8) {
		int digit = num & 0xf;
		result.insert(result.begin(), hex[digit]);
		num >>= 4;
		count++;
	}

	return result;
}