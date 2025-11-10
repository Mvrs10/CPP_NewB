#include <iostream>
#include "ConvertZeroMinOps.h"

int main()
{
    std::vector<int> nums = { 1, 2, 2, 1, 16, 4, 1, 0, 3, 5 };
    int ans = minOperations(nums);
    std::cout << ans << std::endl;
}

