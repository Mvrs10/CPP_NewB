#pragma once
#include <string>

static bool doesAliceWin(std::string s) {
	for (char c : s) {
		if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
			return true;
	}
	return false;
}