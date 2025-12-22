#pragma once
#include <vector>
#include <string>

static int minDeletionSize(std::vector<std::string>& strs) {
	int n = strs[0].size();
	std::vector<int> dp(n, 1);

	for (int col = 0; col < n; col++) {
		for (int cur = 0; cur < col; cur++) {
			bool isLexicographic = true;

			for (std::string str : strs) {
				if (str[cur] > str[col]) {
					isLexicographic = false;
					break;
				}
			}

			if (isLexicographic) {
				dp[col] = std::max(dp[col], dp[cur] + 1);
			}
		}
	}

	int longest = 0;
	for (int val : dp) {
		longest = std::max(longest, val);
	}

	return n - longest;
}