#pragma once
#include <string>
#include <unordered_map>

static bool isIsomorphicTest(std::string s, std::string t) {
	std::unordered_map<char, char> map;
	for (int i = 0; i < s.length(); i++) {
		if (!map.count(s[i])) {
			map[s[i]] = t[i];
		}
		else {
			if (map[s[i]] != t[i]) return false;
		}
	}
	return true;
}

static bool isIsomorphic(std::string s, std::string t) {
	return isIsomorphicTest(s, t) && isIsomorphicTest(t, s);
}