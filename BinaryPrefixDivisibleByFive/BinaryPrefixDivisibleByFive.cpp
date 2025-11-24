#include <iostream>
#include "BinaryDiv5.h"

int main()
{
	std::vector<int> nums = { 1,0,0,1,0,1,0,0,1,0,1,1,1,1,1,1,1,1,1,1,0,0,0,0,1,0,1,0,0,0,0,1,1,0,1,0,0,0,1 };
	std::vector<bool> ans = prefixesDivBy5(nums);

	for (bool b : ans) {
		std::cout << (b ? "True" : "False") << ", ";
	}
}
