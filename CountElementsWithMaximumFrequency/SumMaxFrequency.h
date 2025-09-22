#pragma once
#include <unordered_map>
#include <vector>

static int maximumFrequencyElements(std::vector<int>& nums) {
	std::unordered_map<int, int> freqTable;
	int max = 0;
	int sum = 0;

	for (int i : nums) {		
		freqTable[i]++;
		max = std::max(max, freqTable[i]);
	}

	for (std::pair<const int, int>& entry : freqTable) {
		int num = entry.first;
		int count = entry.second;
		if (count == max)
			sum += max;
	}

	return sum;
}