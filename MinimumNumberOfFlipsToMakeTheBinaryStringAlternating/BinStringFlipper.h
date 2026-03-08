#pragma once
#include <string>

static int minFlips(std::string s) {
	int n = s.size();
	std::string t = s + s;
	int diff1 = 0, diff2 = 0;

	int ans = INT32_MAX;

	for (int i = 0; i < 2*n; i++) {
		char expected1 = (i % 2 == 0) ? '0' : '1';
		char expected2 = (i % 2 == 0) ? '1' : '0';
		
		if (t[i] != expected1) diff1++;
		if (t[i] != expected2) diff2++;

		if (i >= n) {
			char oldExpected1 = ((i - n) % 2 == 0) ? '0' : '1';
			char oldExpected2 = ((i - n) % 2 == 0) ? '1' : '0';

			if (t[i - n] != oldExpected1) diff1--;
			if (t[i - n] != oldExpected2) diff2--;
		}

		if (i >= n - 1) {
			ans = std::min(ans, std::min(diff1, diff2));
		}
	}

	return ans;
}