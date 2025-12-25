#include <iostream>
#include "MaxHappiness.h"

int main()
{
	std::vector<int> happiness = { 1,2,3 };
	int k = 2;
	long long ans = maximumHappinessSum(happiness, k);
	std::cout << ans << std::endl;
}
