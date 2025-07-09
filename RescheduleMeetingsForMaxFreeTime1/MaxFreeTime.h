#pragma once
#include <vector>

static int maxFreeTime(int eventTime, int k, std::vector<int>& startTime, std::vector<int>& endTime) {
	int meetings = startTime.size();
	std::vector<int> gaps;
	
	gaps.push_back(startTime[0]);
	
	for (int i = 1; i < meetings; i++) {
		gaps.push_back(startTime[i] - endTime[i - 1]);
	}

	gaps.push_back(eventTime - endTime[meetings - 1]);

	int freeTime = 0;
	int window = 0;
	for (int i = 0; i < gaps.size(); i++) {
		window += gaps[i];
		if (i > k) window -= gaps[i - k + 1];
		if (i > k - 1) freeTime = std::max(freeTime, window);
	}
	return freeTime;
}