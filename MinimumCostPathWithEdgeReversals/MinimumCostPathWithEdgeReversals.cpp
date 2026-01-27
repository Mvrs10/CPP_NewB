#include <iostream>
#include "MinCostPath.h"

int main()
{
    int n = 4;
    vector<vector<int>> edges = { {0,1,3 }, {3, 1, 1},{2, 3, 4},{0, 2, 2} };

    int ans = minCost(n, edges);
    std::cout << ans << std::endl;
}
