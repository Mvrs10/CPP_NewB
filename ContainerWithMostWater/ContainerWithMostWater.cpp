#include <iostream>
#include "WaterContainer.h"

int main()
{
	std::vector<std::vector<int>> testCases = { {1,1},{1,8,6,2,5,4,8,3,7} };
	for (std::vector<int> test : testCases) {
		int ans = maxArea(test);
		std::cout << ans << std::endl;
	}
	std::cout << "Hello Water World";
}

