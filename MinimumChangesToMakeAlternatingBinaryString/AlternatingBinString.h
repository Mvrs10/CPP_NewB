#pragma once
#include <string>

static int minOperations(std::string s) {
	int zeroOne = 0;

	for (int i = 0; i < s.size(); i++) {
		if (i % 2 == 0) {
			if (s[i] == '1') zeroOne++;
		}
		else {
			if (s[i] == '0') zeroOne++;
		}
	}

	return std::min(zeroOne, (int)s.size() - zeroOne);
}