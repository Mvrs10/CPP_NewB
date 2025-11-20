#include <iostream>
#include "IntervalIntersection.h"

int main()
{
    std::vector<std::vector<int>> intervals = { {1,3},{3,7},{8,9} };
    int ans = intersectionSizeTwo(intervals);
    std::cout << ans << std::endl;
}