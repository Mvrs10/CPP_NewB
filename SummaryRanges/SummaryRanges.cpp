#include <iostream>
#include "SummaryRange.h"

int main()
{
    std::vector<int> nums = { 0,1,2,4,5,7,10 };
    std::vector<std::string> result = summaryRanges(nums);
    for (std::string range : result) {
        std::cout << range << std::endl;
    }
}

