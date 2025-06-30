#pragma once
#include <string>
#include <unordered_map>

static bool isAnagram(std::string s, std::string t) {
	if (s.size() != t.size()) return false;
	int freqTable[26] = {};
	for (int i = 0; i < s.length(); i++) {
		freqTable[s[i] - 'a']++;
		freqTable[t[i] - 'a']--;
	}
	for (int j : freqTable) {
		if (j != 0) return false;
	}
	return true;
}

static bool isAnagramHashMap(std::string s, std::string t) {
	if (s.size() != t.size()) return false;
	std::unordered_map<char, int> sMap;
	std::unordered_map<char, int> tMap;
	for (auto& c : s) {
		sMap[c]++;
	}
	for (auto& c : t) {
		tMap[c]++;
	}
	return sMap == tMap;
}
