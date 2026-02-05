#include <iostream>
#include "ArrayTransformer.h"

int main()
{
    std::vector<int> nums = { 3,-2,1,1 };
    std::vector<int> ans = constructTransformedArray(nums);

    for (int n : ans) {
        std::cout << n << " - ";
    }    
}

