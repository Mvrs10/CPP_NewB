#pragma once
#include <string>

static bool checkOnesSegement(std::string s) {
	bool hasZero = false;
	int n = s.size();
	for (int i = 0; i < n; i++) {
		if (hasZero && s[i] == '1') return false;
		else {
			if (s[i] == '0') hasZero = true;
		}
	}

	return true;
}