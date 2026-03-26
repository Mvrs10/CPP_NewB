#include <iostream>
#include "SumGridPartition.h"

int main()
{
    std::vector<std::vector<int>> grid = { {1,2},{4,3} };
    bool ans = canPartitionGrid(grid);

    std::cout << ((ans == 1) ? "True" : "False") << std::endl;
}
