#pragma once
#include <vector>

static char kthCharacter(long long k, std::vector<int>& operations) {
	long long length = 1;
	int opCount = 0;

	while (length < k) { // Find the smallest n length and number of operations to reach k.
		length *= 2;
		opCount++;
	}

	char c = 'a';
	while (length > 1) { // Reverse
		if (k > length / 2) { // New k-th position in the second half.
			k -= length/2;
			c += operations[opCount - 1];
			if (c == 'z' + 1) c = 'a';
		}
		length /= 2; // Keep searching in new first half to locate k.
		opCount--;
	}
	return c;
}