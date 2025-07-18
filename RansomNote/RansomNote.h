#pragma once
#include <string>

static bool canConstruct(std::string ransomNote, std::string magazine) {
	int letters[26] = { 0 };

	for (char c : magazine) {
		letters[c - 'a']++;
	}

	for (char c : ransomNote) {
		if (letters[c - 'a'] == 0) return false;
		letters[c - 'a']--;
	}

	return true;
}