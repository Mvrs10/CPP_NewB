#include <iostream>
#include "AppleDistributor.h"

int main()
{
	std::vector<int> apple = { 5,5,5 };
	std::vector<int> capacity = { 2                    ,     4        ,       2         ,         6 };
	int ans = minimumBoxes(apple, capacity);
	std::cout << ans << std::endl;
}
