#include <iostream>
#include "MaxMatProd.h"

int main()
{
    std::vector<std::vector<int>> grid = { {1,-2,1},{1,-2,1},{3,-4,1} };
    int ans = maxProductPath(grid);

    std::cout << ans << std::endl;
}
