#pragma once
#include <string>
#include <unordered_set>

static bool hasAllCodes(std::string s, int k) {
	std::unordered_set<std::string> seen;
	int needed = 1 << k;

	for (int i = 0; i + k <= s.size(); i++) {
		seen.insert(s.substr(i, k));
		if (seen.size() == needed) return true;
	}

	return false;
}