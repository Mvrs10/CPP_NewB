#pragma once
#include <unordered_map>
#include <vector>

static int countTrapezoids(std::vector<std::vector<int>> points) {
	const int MOD = 1e9 + 7;
	std::unordered_map<int, int> groupY;

	for (std::vector<int> p : points) {
		if (groupY.count(p[1]) == 0)
			groupY[p[1]] = 0;
		groupY[p[1]]++;
	}

	long ans = 0;
	long prefixSum = 0;
	for (std::pair<int, int> kv : groupY) {
		long point = kv.second;
		if (point == 1) continue;

		long segments = point * (point - 1) / 2;
		ans += segments * prefixSum;
		prefixSum += segments;
	}

	return (int)(ans % MOD);
}