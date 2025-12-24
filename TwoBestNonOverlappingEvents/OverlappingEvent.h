#pragma once
#include <vector>
#include <algorithm>
#include <queue>
#include <utility>

using namespace std;

static int maxTwoEvents(vector<vector<int>>& events) {

    sort(events.begin(), events.end(),
        [](const vector<int>& a, const vector<int>& b) {
            return a[0] < b[0];
        });

    priority_queue<pair<int, int>,
        vector<pair<int, int>>,
        greater<pair<int, int>>> pq;

    int maxEndedValue = 0;
    int answer = 0;

    for (const auto& e : events) {
        int start = e[0];
        int end = e[1];
        int value = e[2];

        // Remove all events that ended before current start
        while (!pq.empty() && pq.top().first < start) {
            maxEndedValue = max(maxEndedValue, pq.top().second);
            pq.pop();
        }
        answer = max(answer, maxEndedValue + value);

        pq.push({ end, value });
    }

    return answer;
}