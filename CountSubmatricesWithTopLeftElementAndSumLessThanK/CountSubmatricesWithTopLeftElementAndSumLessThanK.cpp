#include <iostream>
#include "GridCount.h"

int main()
{
    std::vector<std::vector<int>> grid = { {7,6,3},{6,6,1} };
    int k = 18;

    int ans = countSubmatrices(grid, k);
    std::cout << ans << std::endl;
}
