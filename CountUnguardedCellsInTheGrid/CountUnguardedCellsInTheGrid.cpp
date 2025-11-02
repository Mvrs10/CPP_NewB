#include <iostream>
#include "UnguardedCells.h"

int main()
{
    int m = 4, n = 6;
    vector<vector<int>> guards = { {0,0 }, {1, 1},{2, 3} };
    vector<vector<int>> walls = { {0,1},{2,2},{1,4} };

    int ans = countUnguarded(m, n, guards, walls);

    std::cout << ans << std::endl;
}
