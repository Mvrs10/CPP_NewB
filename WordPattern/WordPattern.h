#pragma once
#include <string>
#include <sstream>
#include <unordered_map>
#include <unordered_set>
#include <vector>

static bool wordPattern(std::string pattern, std::string s) {
	std::vector<std::string> ss;
	std::istringstream iss(s);
	std::string word;
	while (iss >> word) {
		ss.push_back(word);
	}

	std::unordered_map<char, std::string> map;
	std::unordered_set<std::string>values;
	if (ss.size() != pattern.length()) return false;
	for (int i = 0; i < pattern.length(); i++) {
		if (map.count(pattern[i])) {
			if (map[pattern[i]] != ss[i]) return false;
		}
		else {
			if (values.count(ss[i])) return false;
			map[pattern[i]] = ss[i];
			values.insert(ss[i]);
		}
	}
	return true;
}