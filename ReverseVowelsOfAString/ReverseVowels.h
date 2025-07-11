#pragma once
#include <string>
#include <vector>

static bool isVowel(char c) {
	c = c | 0x20;
	return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

static std::string reverseVowels(std::string s) {
	int front = 0;
	int back = s.length() - 1;
	bool check = isVowel(s[0]);
	while (front < back) {
		if (isVowel(s[front])) {
			while (!isVowel(s[back])) back--;
			char c = s[front];
			s[front] = s[back];
			s[back--] = c;
		}
		front++;
	}
	return s;
}

static std::string reverseVowels_v2(std::string s) {
	std::vector<int> vIndices;
	for (int i = 0; i < s.length(); i++) {
		if (isVowel(s[i])) vIndices.push_back(i);
	}
	if (vIndices.empty()) return s;

	for (int i = 0; i < vIndices.size() / 2; i++) {
		char c = s[vIndices[i]];
		s[vIndices[i]] = s[vIndices[vIndices.size() - 1 - i]];
		s[vIndices[vIndices.size() - 1 - i]] = c;
	}
	return s;
}

