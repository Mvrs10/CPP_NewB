#pragma once
#include<vector>
#include<algorithm>

static int intersectionSizeTwo(std::vector<std::vector<int>>& intervals) {
	std::sort(intervals.begin(), intervals.end(), [](const std::vector<int> a, const std::vector<int> b) {
		if (a[1] == b[1]) return a[0] > b[0];
		else return b[1] > a[1];
		});

	int num1 = -1, num2 = -1;
	int count = 0;

	for (std::vector<int> interval : intervals) {
		int start = interval[0], end = interval[1];

		bool hasNum1 = num1 >= start && num1 <= end;
		bool hasNum2 = num2 >= start && num2 <= end;

		if (hasNum1 && hasNum2) continue;
		else {
			if (hasNum2) {
				num1 = num2;
				count++;
			}
			else {
				num1 = end - 1;
				count += 2;
			}
			num2 = end;
		}
	}

	return count;
}