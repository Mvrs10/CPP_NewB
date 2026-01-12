#include <iostream>
#include "MaximalRec.h"

int main()
{
	vector<vector<char>> matrix = { {'1','1','1'},{'0','1','1'} ,{'0','0','1'} ,{'0','0','1'} };
	int ans = maximalRectangle(matrix);
	std::cout << ans << std::endl;
}
