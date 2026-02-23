#include <iostream>
#include <vector>
#include "BinaryGapFinder.h"

int main()
{
    std::vector<int> testNums = { 22,8,5 };
    for (int n : testNums) {
        int ans = binaryGap(n);
        std::cout << ans << std::endl;
    }
}

