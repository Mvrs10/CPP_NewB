#include <iostream>
#include "BarRemover.h"

int main()
{
	int n = 2, m = 3;
	std::vector<int> hBars = { 2,3 };
	std::vector<int> vBars = { 2,4 };

	int ans = maximizeSquareHoleArea(n, m, hBars, vBars);
	std::cout << ans << std::endl;
}
