#pragma once
#include <string>
#include <vector>
#include <cmath>

static std::string getHappyString(int n, int k) {
	int total = 3 * (int)std::pow(2.0, n - 1);
	if (k > total) return "";

	std::vector<char> happyLetters = { 'a','b','c' };
	std::string happyString = "";
	char prev = 'd';

	for (int i = 0; i < n; i++) {
		int rem = n - 1 - i;

		for (char c : happyLetters) {
			if (c == prev) continue;

			int count = (int)std::pow(2, rem);
			if (k > count) {
				k -= count;
			}
			else {
				happyString += c;
				prev = c;
				break;
			}
		}
	}

	return happyString;
}