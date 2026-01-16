#include <iostream>
#include "BarRemover.h"

int main()
{
	int m = 4, n = 3;
	std::vector<int> hFences = { 2,3 };
	std::vector<int> vFences = { 2 };

	int ans = maximizeSquareArea(m, n, hFences, vFences);
	std::cout << ans << std::endl;
}
