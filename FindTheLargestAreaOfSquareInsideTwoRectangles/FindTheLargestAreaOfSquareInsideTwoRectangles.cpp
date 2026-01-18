#include <iostream>
#include "Header.h"
int main()
{
    std::vector<std::vector<int>> bottomLeft= { {1,1},{2,2},{3,1} };
    std::vector<std::vector<int>> topRight= { {3,3},{4,4},{6,6} };

    long long ans = largestSquareArea(bottomLeft, topRight);
    std::cout << ans << std::endl;
}