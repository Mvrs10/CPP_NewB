#pragma once
#include <string>

static bool isValid(std::string word) {
	if (word.length() < 3) return false;

	bool hasVowels = false;
	bool hasConsonants = false;

	for (char c : word) {
		if (c == '@' || c == '#' || c == '$') return false;
		if ((c >= '0' && c <= '9') || (hasVowels && hasConsonants)) continue;
		if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' || c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
			hasVowels = true;
		else
			hasConsonants = true;
	}

	return hasVowels && hasConsonants;
}