#pragma once
#include <unordered_map>
#include <string>

static int lengthOfLongestSubstring(std::string s) {
	int n = s.size();
	int length = 0;
	std::unordered_map<char, int> seen;

	for (int front = 0, back = 0; back < n; back++) {
		char c = s[back];

		if (seen.count(c) > 0 && seen[c] >= front) {
			front = ++seen[c];
		}

		seen[c] = back;
		length = std::max(length, back - front + 1);
	}

	return length;
}