#pragma once
#include <vector>
#include <algorithm>
#include <queue>
#include <utility>

using namespace std;

static int mostBooked(int n, vector<vector<int>>& meetings) {
    sort(meetings.begin(), meetings.end(),
        [](const vector<int>& a, const vector<int>& b) {
            return a[0] < b[0];
        });

    priority_queue<int, vector<int>, greater<int>> available;
    for (int i = 0; i < n; i++) {
        available.push(i);
    }

    priority_queue<pair<long long, int>,
        vector<pair<long long, int>>,
        greater<pair<long long, int>>> busy;

    vector<int> usage(n, 0);

    for (const auto& m : meetings) {
        long long start = m[0];
        long long end = m[1];
        long long duration = end - start;

        while (!busy.empty() && busy.top().first <= start) {
            available.push(busy.top().second);
            busy.pop();
        }

        if (!available.empty()) {

            int room = available.top();
            available.pop();
            busy.push({ end, room });
            usage[room]++;
        }

        else {
            pair<long long, int> top = busy.top();
            long long freeTime = top.first;
            int room = top.second;
            busy.pop();
            long long newEnd = freeTime + duration;
            busy.push({ newEnd, room });
            usage[room]++;
        }
    }

    int result = 0;
    for (int i = 1; i < n; i++) {
        if (usage[i] > usage[result]) {
            result = i;
        }
    }

    return result;
}