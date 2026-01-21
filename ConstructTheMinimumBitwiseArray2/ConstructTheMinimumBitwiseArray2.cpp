#include <iostream>
#include "WiseBit.h"

int main()
{
    std::vector<int> nums = { 2,3,5,7,11 };
    std::vector<int> ans = minBitwiseArray(nums);
    for (int v : ans) {
        std::cout << v << " ";
    }
}
