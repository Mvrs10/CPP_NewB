#include <iostream>
#include "DisappearedNumber.h"

int main()
{
    std::vector<int> nums = { 4,3,2,7,8,2,3,1 };
    std::vector<int> ans = findDisappearedNumbers(nums);

    for (int i : ans) {
        std::cout << i << std::endl;
    }    
}
