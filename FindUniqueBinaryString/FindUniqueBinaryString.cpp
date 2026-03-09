#include <iostream>
#include "UniqueBinString.h"

int main()
{
    std::vector<std::string> nums = { "01","11" };
    std::string ans = findDifferentBinaryString(nums);

    std::cout << ans << std::endl;
}
