#include <iostream>
#include "PairRemover.h"

int main()
{
    std::vector<int> nums = { 5,2,3,1 };
    int ans = minimumPairRemoval(nums);

    std::cout << ans << std::endl;
}
