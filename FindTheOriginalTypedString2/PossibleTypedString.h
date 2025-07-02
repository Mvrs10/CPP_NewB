#pragma once
#include<string>
#include<vector>

using namespace std;
static int possibleStringCount(string word, int k) {
    const int INT_GUARD = 1'000'000'007;
    vector<int> groups; // count of each group of same letter
    int n = word.length();
    int count = 1;

    for (int i = 1; i < n; ++i) {
        if (word[i] == word[i - 1]) {
            count++;
        }
        else {
            groups.push_back(count);
            count = 1;
        }
    }
    groups.push_back(count); // Add last group

    long long totalCombination = 1;
    for (int g : groups) {
        totalCombination = (totalCombination * g) % INT_GUARD;
    }

    if ((int)groups.size() >= k) return (int)totalCombination; // Alice cannot type k less than groups, min is each group once

    vector<long long> dp(k, 0);
    dp[0] = 1;

    for (int g : groups) {
        vector<long long> tempDp(k, 0);
        vector<long long> prefix(k + 1, 0);
        for (int i = 0; i < k; ++i) {
            prefix[i + 1] = (prefix[i] + dp[i]) % INT_GUARD;
        }
        for (int j = 0; j < k; ++j) {
            int minS = max(0, j - g);
            tempDp[j] = (prefix[j] - prefix[minS] + INT_GUARD) % INT_GUARD;
        }
        dp = tempDp;
    }

    long long invalid = 0;
    for (int i = 0; i < k; ++i) {
        invalid = (invalid + dp[i]) % INT_GUARD;
    }

    return (int)((totalCombination - invalid + INT_GUARD) % INT_GUARD);
}