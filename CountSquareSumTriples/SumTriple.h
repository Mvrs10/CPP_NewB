#pragma once
#include <cmath>

static int countTriples(int n) {
	int triples = 0;

	for (int i = 1; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			int k = i * i + j * j;
			if (std::sqrt(k) - (int)std::sqrt(k) == 0 && std::sqrt(k) <= n)
				triples += 2;
		}
	}

	return triples;
}

static int countTriples_v2(int n) {
    int count = 0;

    // Iterate through all possible values for the hypotenuse 'c'
    for (int c = 1; c <= n; ++c) {
        int target = c * c;
        int left = 1;
        int right = c - 1;

        while (left < right) {
            int sum = left * left + right * right;

            if (sum == target) {
                count += 2;
                left++;
                right--;
            }
            else if (sum < target) {
                left++;
            }
            else {
                right--;
            }
        }
    }

    return count;
}