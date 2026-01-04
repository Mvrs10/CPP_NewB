#pragma once
#include <vector>
#include <cmath>

static int sumFourDivisors(std::vector<int> nums) {
	int sum = 0;

	for (int n : nums) {
		int cnt = 0;
		int factor = 1;
		bool isValid = true;

		for (int i = 2; i <= std::sqrt(n); i++) {
			if (n % i == 0) {
				cnt++;
				factor = i;
			}

			if (cnt > 1 || factor == n / factor) {
				isValid = false;
				break;
			}
		}

		if (cnt > 0 && isValid)
			sum += n + 1 + factor + n / factor;
	}

	return sum;
}