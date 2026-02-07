#pragma once
#include <string>

static int minimumDeletions(std::string s) {
	int bCount = 0, deletion = 0;

	for (char c : s) {
		if (c == 'a') {
			deletion = std::min(deletion + 1, bCount);
		}
		else
			bCount++;
	}

	return deletion;
}