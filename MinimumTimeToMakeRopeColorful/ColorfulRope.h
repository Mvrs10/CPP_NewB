#pragma once
#include <vector>
#include <string>

static int minCost(std::string colors, std::vector<int> neededTime) {
	int time = 0;
	int n = neededTime.size();

	for (int i = 0; i < n - 1; i++) {
		if (colors[i] == colors[i + 1]) {
			if (neededTime[i] <= neededTime[i + 1]) {
				time += neededTime[i];
			}
			else {
				time += neededTime[i + 1];
				neededTime[i + 1] = neededTime[i];
			}
		}
	}

	return time;
}