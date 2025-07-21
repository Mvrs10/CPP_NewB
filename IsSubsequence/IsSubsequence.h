#pragma once
#include <string>

static bool isSubsequence(std::string s, std::string t) {
	int sPtr = 0;
	int tPtr = 0;

	while (sPtr < s.length() && tPtr < t.length()) {
		if (s[sPtr] == t[tPtr]) 
			sPtr++;
		tPtr++;
	}

	if (sPtr == s.length())
		return true;
	else
		return false;
}