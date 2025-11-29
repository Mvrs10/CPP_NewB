#include <iostream>
#include "MinOpSumDivK.h"

int main()
{
    std::vector<int> nums = { 3, 7, 8, 10, 5, 15, 9, 9, 32, 1 };
    int k = 3;
    int ans = minOperations(nums, k);

    std::cout << ans << std::endl;
}
