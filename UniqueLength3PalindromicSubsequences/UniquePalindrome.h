#pragma once
#include <string>
#include <unordered_set>

static int countPalindromicSubsequence(std::string s) {
	int n = s.size();
	std::vector<int> left(26, -1);
	std::vector<int> right(26, -1);

	for (int i = 0; i < n; i++) {
		int c = s[i] - 'a';
		if (left[c] == -1)
			left[c] = i;
		right[c] = i;
	}

	int count = 0;
	for (int i = 0; i < 26; i++) {
		int l = left[i];
		int r = right[i];

		if (l != -1 && r != -1 && l < r) {
			std::unordered_set<char> unique;

			for (int j = l + 1; j < r; j++) {
				unique.insert(s[j]);
			}
			count += unique.size();
		}
	}

	return count;
}