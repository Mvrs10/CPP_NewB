#pragma once
#include <string>
#include <unordered_set>
#include <sstream>

static int canBeTypedWords(std::string text, std::string brokenLetters) {
	std::unordered_set<char> brokenChars(brokenLetters.begin(), brokenLetters.end());
	std::stringstream ss(text);
	std::string word;
	int count = 0;
	int totalWords = 0;

	while (ss >> word) {
		totalWords++;
		for (char c : word) {
			if (brokenChars.count(c)) {
				count++;
				break;
			}
		}
	}

	return totalWords - count;
}