#include <iostream>
#include "ColorfulRope.h"

int main()
{
    std::string color = "aaabbbabbbb";
    std::vector<int> neededTime = { 3,5,10,7,5,3,5,5,4,8,1 };

    int ans = minCost(color, neededTime);
    std::cout << ans << std::endl;
}

