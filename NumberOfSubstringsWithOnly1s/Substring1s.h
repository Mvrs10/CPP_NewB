#pragma once
#include <string>

static int numSub(std::string s) {
	long sum = 0;
	long MOD = 1000000007;
	int i = 0;

	while (i < s.size()) {
		long ones = 0;

		if (s[i] == '1') {
			while (i < s.size() && s[i] == '1') {
				ones++;
				i++;
			}
			sum += ones * (ones + 1) / 2;
		}
		else {
			i++;
		}
	}

	return (int)(sum % MOD);
}