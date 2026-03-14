#pragma once
#include <vector>
#include <cmath>

static bool canFinish(long long time, int mountainHeight, std::vector<int>& workerTimes) {
	long removedHeight = 0;

	for (int t : workerTimes) {
		long long h = (long long)((std::sqrt(1 + 8.0 * time / t) - 1) / 2);
		removedHeight += h;

		if (removedHeight >= mountainHeight) return true;
	}

	return false;
}

static long long minNumberOfSeconds(int mountainHeight, std::vector<int>& workerTimes) {
	int slowest = workerTimes[0];
	for (int t : workerTimes) {
		if (t < slowest) slowest = t;
	}
	
	long long low = 1;
	long long high = (long long)slowest * mountainHeight * (mountainHeight + 1) / 2;

	while (low < high) {
		long long mid = low + (high - low) / 2;

		if (canFinish(mid, mountainHeight, workerTimes))
			high = mid;
		else
			low = mid + 1;
	}

	return low;
}