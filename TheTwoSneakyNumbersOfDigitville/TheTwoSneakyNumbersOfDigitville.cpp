#include <iostream>
#include "SneakyNumbersDigitville.h"

int main()
{
    std::vector<int> nums = { 1,0,0,1 };
    std::vector<int> ans = getSneakyNumbers(nums);

    for (int x : ans) {
        std::cout << x << std::endl;
    }    
}

