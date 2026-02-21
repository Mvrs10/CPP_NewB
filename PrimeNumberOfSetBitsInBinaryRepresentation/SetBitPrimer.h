#pragma once

static int countPrimeSetBits(int left, int right) {
	int prime = 0;

	for (int i = left; i <= right; i++) {
		int setBits = 0;
		int n = i;
		while (n > 0) {
			if ((n & 1) == 1) setBits++;
			n >>= 1;
		}

		if (setBits == 0 || setBits == 1) continue;
		if (setBits == 2 || setBits == 3 || setBits == 5 || setBits == 7 ||setBits == 11 || setBits == 13 || setBits == 17 || setBits == 19 || setBits == 23 || setBits == 29 || setBits == 31)
		{
			prime++;
		}
	}

	return prime;
}