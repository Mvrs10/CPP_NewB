#pragma once
#include <vector>

static int minTimeToVisitAllPoints(std::vector<std::vector<int>>& points) {
	int time = 0;

	for (int i = 1; i < points.size(); i++) {
		time += (std::abs(points[i][0] - points[i - 1][0]) < std::abs(points[i][1] - points[i - 1][1])) ? std::abs(points[i][1] - points[i - 1][1]) : std::abs(points[i][0] - points[i - 1][0]);
	}

	return time;
}