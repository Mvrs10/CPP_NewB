#include <iostream>
#include "HorizontalTrapezoid.h"

int main()
{
    std::vector<std::vector<int>> points = { {1,0} ,{2,0},{3,0},{2,2},{3,2} };
    int ans = countTrapezoids(points);
    std::cout << ans << std::endl;
}
