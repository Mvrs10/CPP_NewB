#pragma once
#include <vector>
#include <algorithm>

static int maximizeSquareHoleArea(int n, int m, std::vector<int>& hBars, std::vector<int>& vBars) {
	std::sort(hBars.begin(), hBars.end());
	std::sort(vBars.begin(), vBars.end());

	int hMax = 1, hCnt = 1;
	int vMax = 1, vCnt = 1;

	for (int i = 1; i < hBars.size(); i++) {
		if (hBars[i] - hBars[i - 1] == 1)
			hCnt++;
		else
			hCnt = 1;
		hMax = std::max(hMax, hCnt);
	}

	for (int i = 1; i < vBars.size(); i++) {
		if (vBars[i] - vBars[i - 1] == 1)
			vCnt++;
		else
			vCnt = 1;
		vMax = std::max(vMax, vCnt);
	}

	int s = std::min(hMax, vMax) + 1;

	return s * s;
}