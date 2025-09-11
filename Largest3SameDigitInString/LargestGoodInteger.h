#pragma once
#include <string>
#include <vector>

static std::string largestGoodInteger(std::string num) {
	std::string ans = "";

	for (int i = 0; i < num.size() - 2; i++) {
		if (num[i] == num[i + 1] && num[i] == num[i + 2]) {
			std::string goodInt = num.substr(i, 3);
			if (ans.empty() || goodInt > ans) {
				ans = goodInt;
			}
		}
	}

	return ans;
}