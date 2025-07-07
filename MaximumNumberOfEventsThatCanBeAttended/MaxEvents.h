#pragma once
#include <vector>
#include <queue>
#include <algorithm>

static int maxEvents(std::vector<std::vector<int>>& events) {
	std::sort(events.begin(), events.end()); // Sort in chronological order

	int day = 1, joinedEvent = 0;
	int i = 0, n = events.size();
	std::priority_queue<int, std::vector<int>, std::greater<int>> schedule;
	while (i < n || !schedule.empty()) { // Break when no more events and schedule is empty.
		while (i < n && events[i][0] == day) {
			schedule.push(events[i][1]);
			i++;
		}

		while (!schedule.empty() && schedule.top() < day) { // Remove all expired events
			schedule.pop();
		}

		if (!schedule.empty()) { // Attend an event
			joinedEvent++;
			schedule.pop();
		}
		day++;
	}
	return joinedEvent;
}