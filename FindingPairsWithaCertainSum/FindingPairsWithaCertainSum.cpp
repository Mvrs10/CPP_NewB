#include <iostream>
#include "FindSumPairs.h"

int main()
{
    std::vector<int> nums1 = { 1, 1, 2, 2, 2, 3 };
    std::vector<int> nums2 = { 1, 4, 5, 2, 5, 4 };
    FindSumPairs* obj = new FindSumPairs(nums1,nums2);
    std::cout << obj->count(7) << std::endl;
    obj->add(3, 2);
    std::cout << obj->count(8) << std::endl;
    delete obj;
}
