#pragma once
#include <vector>
#include <unordered_map>
#include <algorithm>

class FindSumPairs {

public:
	FindSumPairs(std::vector<int>& nums1, std::vector<int>& nums2) : _nums1(nums1), _nums2(nums2) {
		std::sort(_nums1.begin(), _nums1.end());

		for (int i : nums2) {
			if (!freqTable.count(i)) freqTable[i] = 0;
			freqTable[i]++;
		}
	}

	void add(int index, int val) {
		int v = _nums2[index];
		_nums2[index] += val;
		
		freqTable[v]--;
		if (freqTable[v] == 0) freqTable.erase(v);

		int newV = _nums2[index];
		if (!freqTable.count(newV)) freqTable[newV] = 0;
		freqTable[newV]++;
	}

	int count(int tot) {
		int sumPairs = 0;
		int i = 0;
		while (i < _nums1.size() && _nums1[i] < tot) {
			int complement = tot - _nums1[i];
			if (freqTable.count(complement)) sumPairs += freqTable[complement];
			i++;
		}
		return sumPairs;
	}

private:
	std::vector<int> _nums1;
	std::vector<int> _nums2;
	std::unordered_map<int, int> freqTable;
};