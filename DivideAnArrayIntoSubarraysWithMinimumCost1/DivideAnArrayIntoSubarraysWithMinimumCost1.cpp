#include <iostream>
#include "ArraySplitter.h"

int main()
{
    std::vector<int> nums = { 10,3,1,1 };

    int ans = minimumCost(nums);

    std::cout << ans << std::endl;
}
