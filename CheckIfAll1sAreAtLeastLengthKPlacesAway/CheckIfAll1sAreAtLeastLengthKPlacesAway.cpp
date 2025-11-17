#include <iostream>
#include "1sLengthKAway.h"

int main()
{
	std::vector<int> nums = { 1,0,0,1,0,1 };
	bool ans = kLengthApart(nums, 2);
	std::cout << (ans ? "True" : "False") << std::endl;
	nums = { 0,0,0 };
	ans = kLengthApart(nums, 10);
	std::cout << (ans ? "True" : "False") << std::endl;
}
