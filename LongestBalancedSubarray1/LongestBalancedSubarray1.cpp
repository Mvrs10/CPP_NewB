#include <iostream>
#include "BalancedArrayDetector.h"

int main()
{
    std::vector<int> nums = { 1,3,2,2 };
    int ans = longestBalanced(nums);

    std::cout << ans << std::endl;
}
