#include <iostream>
#include "MinDaMax.h"

int main()
{
    std::vector<int> nums = { 3,2,3,5 };
    int ans = minPairSum(nums);
    std::cout << ans << std::endl;
}

