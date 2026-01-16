#pragma once
#include <vector>
#include <unordered_set>

static int maximizeSquareArea(int m, int n, std::vector<int>& hFences, std::vector<int>& vFences) {
	int s = 0;
	const int MOD = 1000000007;
	
	hFences.push_back(1);
	hFences.push_back(m);
	vFences.push_back(1);
	vFences.push_back(n);

	std::unordered_set<int> seen;
	for (int i = 0; i < hFences.size() - 1; i++) {
		for (int j = i + 1; j < hFences.size(); j++) {
			int k = std::abs(hFences[j] - hFences[i]);
			seen.insert(k);
		}
	}

	for (int i = 0; i < vFences.size() - 1; i++) {
		for (int j = i + 1; j < vFences.size(); j++) {
			int k = std::abs(vFences[j] - vFences[i]);
			if (seen.count(k)) {
				s = std::max(s, k);
			}
		}
	}

	return s == 0 ? -1 : (long)s * s % MOD;
}