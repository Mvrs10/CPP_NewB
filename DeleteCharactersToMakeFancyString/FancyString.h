#pragma once
#include <string>

static std::string makeFancyString(std::string s) {
	std::string result;
	int count = 1;
	result += s[0];
	for (int i = 1; i < s.length(); i++) {
		if (s[i] == s[i - 1])
			count++;
		else
			count = 1;

		if (count < 3)
			result += s[i];
	}
	return result;
}