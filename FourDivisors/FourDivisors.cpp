#include <iostream>
#include "FourDiv.h"

int main()
{
	std::vector<int> nums = { 21,4,7 };
	int ans = sumFourDivisors(nums);

	std::cout << ans << std::endl;
}

