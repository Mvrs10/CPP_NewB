#include <iostream>
#include "MaxSum.h"

int main()
{
    std::vector<int> nums = { 1,2,-1,-2,1,0,-1 };
    int result = maxSum(nums);
    std::cout << result << std::endl;
}
