#pragma once
#include <vector>
#include <map>

static int findLucky(std::vector<int> arr) {
	const int n = arr.size();
	std::vector<int> freqTable(n);

	for (int i : arr) {
		if(i <= n) freqTable[i-1]++;
	}
	for (int i = n - 1; i >= 0; i--) {
		if (freqTable[i] == i + 1) return i + 1;
	}
	return -1;
}

static int findLuckyHashMap(std::vector<int> arr) {
	std::map<int, int> freqTable;
	for (int i : arr) {
		if (freqTable.count(i)) freqTable[i]++;
		else freqTable[i] = 1;
	}
	for (std::map<int, int>::reverse_iterator it = freqTable.rbegin(); it != freqTable.rend(); ++it) {
		if (it->first == it->second) return it->first;
	}
	return -1;
}