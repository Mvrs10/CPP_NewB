#pragma once
#include <string>

static int maxOperations(std::string s) {
	int ops = 0;
	int ones = 0;
	int n = s.size();

	for (int i = 0; i < n; i++) {
		if (s[i] == '0') {
			while (i < n && s[i] == '0')
				i++;
			ops += ones;
		}
		ones++;
	}

	return ops;
}