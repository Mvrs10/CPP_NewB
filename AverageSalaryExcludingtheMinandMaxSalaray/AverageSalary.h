#pragma once
#include <vector>

static double average(std::vector<int>& salary) {
	double sum = salary[0];
	int min = salary[0];
	int max = salary[0];
	int n = salary.size();

	for (int i = 1; i < n; i++) {
		if (salary[i] < min)
			min = salary[i];
		if (salary[i] > max)
			max = salary[i];
		sum += salary[i];
	}

	return (sum - min - max) / (n - 2);
}