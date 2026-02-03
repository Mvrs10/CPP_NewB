#include <iostream>
#include "TrionicArray.h"

int main()
{
    std::vector<int> nums = { 6,10,2,1 };
    std::cout << (isTrionic(nums) ? "True" : "False") << std::endl;
}