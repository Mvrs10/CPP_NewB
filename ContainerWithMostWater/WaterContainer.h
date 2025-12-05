#pragma once
#include <vector>
#include <algorithm>

static int maxArea(std::vector<int>& height) {
	int front = 0;
	int back = height.size() - 1;
	int max = 0;

	while (front < back) {
		int l = back - front;
		int h = std::min(height[front], height[back]);
		max = std::max(max, l * h);

		if (height[front] <= height[back])
			front++;
		else
			back--;
	}

	return max;
}