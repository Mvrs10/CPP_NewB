#pragma once
#include <string>
#include <deque>

static std::string addStrings(std::string num1, std::string num2) {
	int n1 = num1.size() - 1;
	int n2 = num2.size() - 1;
	int carry = 0;
	std::deque<char> ans;

	while (n1 >= 0 || n2 >= 0 || carry > 0) {
		int addend1 = n1 >= 0 ? num1[n1] - '0' : 0;
		int addend2 = n2 >= 0 ? num2[n2] - '0' : 0;
		int sum = addend1 + addend2 + carry;
		char digit = sum % 10 + '0';
		ans.push_front(digit);
		carry = sum / 10;
		n1--;
		n2--;
	}

	return std::string(ans.begin(), ans.end());
}
