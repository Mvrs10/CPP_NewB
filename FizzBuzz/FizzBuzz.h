#pragma once
#include <vector>
#include <string>

static std::vector<std::string> fizzBuzz(int n) {
	std::vector<std::string> result;

	for (int i = 1; i <= n; i++) {
		int flag = (i % 3 == 0) + 2 * (i % 5 == 0);
		switch (flag) {
		case 3:
			result.push_back("FizzBuzz");
			break;
		case 2:
			result.push_back("Buzz");
			break;
		case 1:
			result.push_back("Fizz");
			break;
		default:
			result.push_back(std::to_string(i));
		}
	}

	return result;
}