#pragma once
#include <string>
#include <unordered_map>

int longestBalanced(std::string s) {
	int max = 0;

	for (int j = 0; j < s.size(); j++) {
		std::unordered_map<char, int> map;
		for (int i = j; i < s.size(); i++) {
			if (!map.count(s[i])) {
				map[s[i]] = 0;
			}
			map[s[i]]++;

			int freq = map.begin()->second;
			bool isBalanced = true;
			for (std::pair<char, int> kvp : map) {
				if (kvp.second != freq) {
					isBalanced = false;
					break;
				}
			}
			if (isBalanced) {
				max = std::max(max, i - j + 1);
			}
		}
	}

	return max;
}