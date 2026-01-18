#pragma once
#include <vector>

static long long largestSquareArea(std::vector<std::vector<int>>& bottomLeft, std::vector<std::vector<int>>& topRight) {
	long long maxArea = 0;

	for (int i = 0; i < bottomLeft.size() - 1; i++) {
		for (int j = i + 1; j < topRight.size(); j++) {
			if (std::min(topRight[i][0], topRight[j][0]) - std::max(bottomLeft[i][0], bottomLeft[j][0]) > 0
				&& std::min(topRight[i][1], topRight[j][1]) - std::max(bottomLeft[i][1], bottomLeft[j][1]) > 0) {
				long long s = std::min(std::min(topRight[i][0], topRight[j][0]) - std::max(bottomLeft[i][0], bottomLeft[j][0]), std::min(topRight[i][1], topRight[j][1]) - std::max(bottomLeft[i][1], bottomLeft[j][1]));
				maxArea = std::max(maxArea, s * s);
			}
		}
	}

	return maxArea;
}