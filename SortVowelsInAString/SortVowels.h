#pragma once
#include <string>
#include <vector>
#include <algorithm>

static std::string sortVowels(std::string s) {
	std::string vowels = "AEIOUaeiou";
	std::vector<char> s_vowels;

	for (char c : s) {
		if (vowels.find(c) != std::string::npos)
			s_vowels.push_back(c);
	}

	std::sort(s_vowels.begin(), s_vowels.end());

	for (int i = 0, j = 0; i < s.size(); i++) {
		if (vowels.find(s[i]) != std::string::npos) {
			s[i] = s_vowels[j];
			j++;
		}
	}

	return s;
}