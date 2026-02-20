#pragma once
#include <string>

static int countBinarySubstrings(std::string s) {
	int ans = 0, prev = 0;
	int cur = 1;

	for (int i = 1; i < s.size(); i++) {
		if (s[i] == s[i - 1]) {
			cur++;
		}
		else {
			ans += std::min(cur, prev);
			prev = cur;
			cur = 1;
		}
	}

	return ans + std::min(cur, prev);
}