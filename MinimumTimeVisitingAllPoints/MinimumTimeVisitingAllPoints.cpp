#include <iostream>
#include "PointVisitor.h"

int main()
{
    std::vector<std::vector<int>> points = { {1,1},{3,4},{-1,0} };
    int ans = minTimeToVisitAllPoints(points);
    std::cout << ans << std::endl;
}
