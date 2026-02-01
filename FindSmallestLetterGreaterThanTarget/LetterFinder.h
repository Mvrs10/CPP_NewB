#pragma once
#include <vector>

static char nextGreatestLetter(std::vector<char> letters, char target) {
	int low = 0, high = letters.size() - 1;

	while (low <= high) {
		int mid = (low + high) / 2;

		if (letters[mid] <= target)
			low = mid + 1;
		else
			high = mid - 1;
	}

	return letters[low % letters.size()];
}