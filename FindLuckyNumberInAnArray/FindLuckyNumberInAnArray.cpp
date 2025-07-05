#include <iostream>
#include "FindLucky.h"

int main()
{
    std::vector<int> nums1 = { 1, 2, 2, 3, 3 ,3};
    std::vector<int> nums2 = { 1, 1, 2, 7, 5 ,3 };
    std::cout << findLucky(nums1) << std::endl << findLucky(nums2) << std::endl << findLuckyHashMap(nums1) << std::endl << findLuckyHashMap(nums2) << std::endl;
}

