#include <iostream>
#include "ThirdMax.h"

int main()
{
    std::vector<int> nums = { -2147483648, 1, 2 };
    int ans = thirdMax(nums);
    std::cout << ans << std::endl;
}
