#pragma once
#include <vector>

static int countPermutations(std::vector<int>& complexity) {
	long permutations = 1;

	for (int i = complexity.size() - 1; i >= 1; i--) {
		if (complexity[i] <= complexity[0])
			return 0;

		permutations = (permutations * i) % 1000000007;
	}

	return (int)permutations;
}