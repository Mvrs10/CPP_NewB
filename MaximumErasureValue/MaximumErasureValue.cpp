#include <iostream>
#include "MaxErasureValue.h"

int main()
{
    std::vector<int> nums{ 5,2,1,2,5,2,1,2,5 };
    int result = maximumUniqueSubarray(nums);
    std::cout << result << std::endl;
}

