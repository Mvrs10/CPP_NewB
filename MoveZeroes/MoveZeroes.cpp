#include <iostream>
#include "MoveZeroes.h"

int main()
{
    std::vector<int> nums1 = { 0,0,0,-3,5 };
    moveZeroes(nums1);
    for (int num : nums1) std::cout << num << ", ";
}

