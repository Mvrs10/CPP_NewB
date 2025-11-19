#include <iostream>
#include "KeepX2.h"

int main()
{
    std::vector<int> nums = { 5,3,6,1,12 };
    int ans = findFinalValue(nums, 3);

    std::cout << ans << std::endl;
}