#include <iostream>
#include "ArrayBalancer.h"

int main()
{
    int k = 3;
    std::vector<int> nums = { 2,1,9,6 };
    int ans = minRemoval(nums, k);

    std::cout << ans << std::endl;
}
