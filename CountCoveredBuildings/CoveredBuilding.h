#pragma once
#include <vector>

static int countCoveredBuildings(int n, std::vector<std::vector<int>>& buildings) {
	std::vector<std::vector<int>> rowBoundaries(n + 1, std::vector<int>({ n + 1,0 }));
	std::vector<std::vector<int>> colBoundaries(n + 1, std::vector<int>({ n + 1,0 }));

	for (std::vector<int> building : buildings) {
		int r = building[0], c = building[1];

		rowBoundaries[r][0] = std::min(rowBoundaries[r][0], building[1]);
		rowBoundaries[r][1] = std::max(rowBoundaries[r][1], building[1]);

		colBoundaries[c][0] = std::min(colBoundaries[c][0], building[0]);
		colBoundaries[c][1] = std::max(colBoundaries[c][1], building[0]);
	}

	int coveredBuildings = 0;
	for (std::vector<int> building : buildings) {
		bool isCoveredEW = building[1] > rowBoundaries[building[0]][0] && building[1] < rowBoundaries[building[0]][1];
		bool isCoveredNS = building[0] > colBoundaries[building[1]][0] && building[0] < colBoundaries[building[1]][1];

		coveredBuildings += (isCoveredEW && isCoveredNS);
	}

	return coveredBuildings;
}