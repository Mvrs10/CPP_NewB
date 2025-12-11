#include <iostream>
#include "CoveredBuilding.h"

int main()
{
    std::vector<std::vector<int>> buildings = { {1,2},{2,2},{3,2},{2,1},{2,3} };
    int n = 3;
    int ans = countCoveredBuildings(n, buildings);
    std::cout << ans << std::endl;
}
