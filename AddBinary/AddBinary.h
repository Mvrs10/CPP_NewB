#pragma once
#include <string>
#include <vector>

static std::string addBinary(std::string a, std::string b) {
	int m = a.size(), n = b.size(), carry = 0;
	if (m == 0) return b;
	if (n == 0) return a;

	std::vector<char> ans;
	while (m > 0 || n > 0 || carry > 0) {
		int sum = (m > 0 ? a[m - 1] - '0' : 0) + (n > 0 ? b[n - 1] - '0' : 0) + carry;
		carry = sum / 2;
		ans.insert(ans.begin(), (sum % 2 == 0 ? '0' : '1'));
		m--;
		n--;
	}

	return std::string(ans.begin(), ans.end());
}