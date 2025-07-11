#pragma once
#include <vector>
#include <algorithm>

static int maxFreeTime(int eventTime, std::vector<int>& startTime, std::vector<int>& endTime) {
	int meetings = startTime.size();
	std::vector<int> gaps;
	gaps.push_back(startTime[0]);
	for (int i = 1; i < meetings; i++) {
		gaps.push_back(startTime[i] - endTime[i - 1]);
	}
	gaps.push_back(eventTime - endTime.back());

	std::vector<int> maxLeftSoFar;
	maxLeftSoFar.push_back(gaps[0]);
	for (int i = 1; i < gaps.size(); i++) {
		int biggestGap = std::max(maxLeftSoFar[i - 1], gaps[i]);
		maxLeftSoFar.push_back(biggestGap);
	}

	std::vector<int> maxRightSoFar(meetings + 1);
	maxRightSoFar.back() = gaps.back();
	for (int i = gaps.size() - 2; i >= 0; i--) {
		int biggestGap = std::max(maxRightSoFar[i + 1], gaps[i]);
		maxRightSoFar[i] = biggestGap;
	}

	int freeTime = 0;
	for (int i = 0; i < meetings; i++) {
		int meetingDuration = endTime[i] - startTime[i];
		int sumAdjacentGaps = gaps[i] + gaps[i + 1];

		int biggestSlot = std::max((i==0) ? 0 : maxLeftSoFar[i-1], (i > meetings - 2) ? 0 : maxRightSoFar[i + 2]);
		if (meetingDuration <= biggestSlot) {
			sumAdjacentGaps += meetingDuration;
		freeTime = std::max(freeTime, sumAdjacentGaps);}
	}
	return freeTime;
}