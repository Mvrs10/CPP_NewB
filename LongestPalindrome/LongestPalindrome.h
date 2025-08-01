#pragma once
#include <string>
#include <vector>

static int longestPalindrome(std::string s) {
	std::vector<int> table(58, 0);
	int count = 0;

	for (char c : s) {
		int i = c - 'A';
		table[i]++;
		if (table[i] % 2 == 0)
			count += 2;
	}

	for (int i : table) {
		if (i % 2 == 1) {
			count++;
			break;
		}
	}
	
	return count;
}