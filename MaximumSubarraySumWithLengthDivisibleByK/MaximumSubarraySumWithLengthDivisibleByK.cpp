#include <iostream>
#include "MaxSumSubarrayLengthDivK.h"

int main()
{
    std::vector<int> nums = { 10,20,10,5,155 };
    int k = 3;
    long long ans = maxSubarraySum(nums, k);
    std::cout << ans << std::endl;
}

