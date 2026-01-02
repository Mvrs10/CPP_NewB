#include <iostream>
#include "MysteryN.h"

int main()
{
    std::vector<int> nums = { 99,2,5,99 };
    int ans = repeatedNTimes(nums);
    std::cout << ans << std::endl;
}