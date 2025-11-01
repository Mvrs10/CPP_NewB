#pragma once
#include <vector>

static std::vector<int> getSneakyNumbers(std::vector<int>& nums) {
	std::vector<int> ans;
	std::vector<int> count(100);

	for (int num : nums) {
		count[num]++;

		if (count[num] == 2) {
			ans.push_back(num);
		}

		if (ans.size() == 2)
			break;
	}

	return ans;
}