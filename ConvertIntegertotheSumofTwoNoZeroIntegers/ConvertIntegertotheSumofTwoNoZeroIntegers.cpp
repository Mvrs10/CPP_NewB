#include <iostream>
#include "GetNoZeroIntegers.h"

int main()
{
    std::vector<int> ans = getNoZeroIntegers(209);
    for (int x : ans) {
        std::cout << x << std::endl;
    }
}

