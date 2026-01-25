#include <iostream>
#include "MinDiffKScores.h"

int main()
{
    std::vector<int> nums = { 7,9,1,4 };
    int ans = minimumDifference(nums, 2);
    std::cout << ans << std::endl;
}
