#pragma once
#include <vector>
#include <algorithm>

int binarySearch(const std::vector<int>& endTimes, int startTime, int endIndex) {
    int left = 0, right = endIndex - 1;
    int result = -1;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (endTimes[mid] < startTime) {
            result = mid;
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }
    return result;
}

static int maxValue(std::vector<std::vector<int>>& events, int k) {
    // Step 1: Sort events by end time
    std::sort(events.begin(), events.end(), [](const auto& a, const auto& b) {
        return a[1] < b[1]; // sort by endDay
        });

    int n = events.size();

    // Step 2: Create DP table: (n+1 rows) x (k+1 columns)
    // dp[i][j] = max value using first i events with j selections
    std::vector<std::vector<int>> dp(n + 1, std::vector<int>(k + 1, 0));

    // Step 3: Extract end times for binary search
    std::vector<int> endTimes(n);
    for (int i = 0; i < n; ++i) {
        endTimes[i] = events[i][1];
    }

    for (int i = 1; i <= n; ++i) {
        int start = events[i - 1][0];
        int value = events[i - 1][2];

        // Binary search to find last event that ends before this one starts
        int prev = binarySearch(endTimes, start, i - 1);

        for (int j = 1; j <= k; ++j) {
            // Option 1: skip current event
            dp[i][j] = std::max(dp[i][j], dp[i - 1][j]);

            // Option 2: attend current event
            dp[i][j] = std::max(dp[i][j], dp[prev + 1][j - 1] + value);
        }
    }
    return dp[n][k];
}

