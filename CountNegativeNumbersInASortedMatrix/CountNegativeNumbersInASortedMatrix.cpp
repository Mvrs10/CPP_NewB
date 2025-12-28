#include <iostream>
#include "NegativeNumber.h"

int main()
{
    std::vector<std::vector<int>> grid = { {4,3,2,-1},{3,2,1,-1},{1,1,-1,-2},{-1,-1,-2,-3} };
    int ans = countNegatives(grid);
    std::cout << ans << std::endl;
}
