#pragma once

static bool isBeautiful(int n) {
	int freq[10] = {};

	while (n > 0) {
		int digit = n % 10;
		freq[digit]++;
		n /= 10;
	}

	for (int i = 0; i < 10; i++) {
		if (freq[i] != 0 && freq[i] != i)
			return false;
	}

	return true;
}

static int nextBeautifulNumber(int n) {
	const int MAX_BEAUTY = 1224444;
	
	for (int i = n + 1; i <= MAX_BEAUTY; i++) {
		if (isBeautiful(i))
			return i;
	}

	return MAX_BEAUTY;
}