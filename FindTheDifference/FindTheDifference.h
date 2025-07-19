#pragma once
#include <string>
#include <unordered_map>

static char findTheDifference(std::string s, std::string t) {

	std::unordered_map<char, int> map;
	for (char c : s) {
		map[c]++;
	}

	for (char c : t) {
		map[c]--;
		if (map[c] == -1)
			return c;
	}

	return ' ';
}