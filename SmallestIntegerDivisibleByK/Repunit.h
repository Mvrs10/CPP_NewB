#pragma once

static int smallestRepunitDiveByK(int k) {
	if (k % 2 == 0 || k % 5 == 0)
		return -1;

	int repunit = 0;

	for (int length = 1; length <= k; length++) {
		repunit = (repunit * 10 + 1) % k;
		if (repunit % k == 0)
			return length;
	}

	return -1;
}