#include <iostream>
#include "OneMore.h"

int main()
{
	std::vector<int> digits = { 9,9,9 };
	std::vector<int> ans = plusOne(digits);
	for (int d : ans) {
		std::cout << d << "-";
	}
}
