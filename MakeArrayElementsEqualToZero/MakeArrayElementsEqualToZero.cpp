#include <iostream>
#include "BoucingSimulation.h"

int main()
{
    std::vector<int> nums = { 16,0,0,12,5 };
    int ans = countValidSelection(nums);
    std::cout << ans << std::endl;
}
