#include <iostream>
#include "SeparateSquare.h"

int main()
{
	std::vector<std::vector<int>> squares = { {0,0,1},{2,2,1} };

	double ans = separateSquares(squares);

	std::cout << ans << std::endl;
}
