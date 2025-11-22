#include <iostream>
#include "MinOpsDivisibleByThree.h"

int main()
{
    std::vector<int> nums = { 1,2,3,4,6,6,9,0,16,200 };
    int ans = minimumOperations(nums);

    std::cout << ans << std::endl;
}