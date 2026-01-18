#include <iostream>
#include "MagicSquare.h"

int main()
{
    vector<vector<int>> grid = { {1,1,3},{1,1,4},{2,4,7} };
    int ans = largestMagicSquare(grid);

    std::cout << ans << std::endl;
}
