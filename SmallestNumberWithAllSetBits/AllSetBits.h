#pragma once

static int smallestNumber(int n) {
	int k = 1;

	while ((1 << k) <= n) {
		k++;
	}

	return (1 << k) - 1;
}