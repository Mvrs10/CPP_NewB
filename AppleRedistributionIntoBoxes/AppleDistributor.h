#pragma once
#include <vector>
#include <algorithm>

static int minimumBoxes(std::vector<int>& apple, std::vector<int>& capacity) {
	std::sort(capacity.begin(), capacity.end(), [](int a, int b) {
		return a > b;
		});

	int n = apple.size(), m = capacity.size();
	int i = 0, j = 0;
	int boxes = 1 ;

	while (i < n && j < m) {
		capacity[j] -= apple[i];

		if (capacity[j] >= 0) {
			i++;
		}
		else {
			apple[i] = -capacity[j];
			j++;
			boxes++;
		}
	} 

	return boxes;                                                                                                              
}