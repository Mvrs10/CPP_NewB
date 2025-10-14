#include <iostream>
#include "IncreasingSubarrays.h"

int main()
{
    std::vector<int> nums = { 2,5,7,8,9,2,3,4,3,1 };
    int k = 3;
    std::cout << hasIncreasingSubarrays(nums, k);
}

