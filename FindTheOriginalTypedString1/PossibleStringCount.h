#pragma once
#include <string>

static int possibleStringCount(std::string word) {
	int count = 1;
	char prev = word[0];
	for (int i = 1; i < word.length(); i++) {
		if (word[i] == prev) count++;
		prev = word[i];
	}
	return count;
}