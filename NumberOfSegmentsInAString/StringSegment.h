#pragma once
#include <string>

static int countSegments(std::string s) {
	int i = 0;
	int count = 0;

	while (i < s.size()) {
		if (s[i] == ' ') {
			i++;
			continue;
		}

		while (i < s.size() && s[i] != ' ') {
			i++;
		}
		count++;
	}

	return count;
}