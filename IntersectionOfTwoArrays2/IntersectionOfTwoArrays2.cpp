#include <iostream>
#include "Intersection2.h"

int main()
{
    std::vector<int> nums1 = { 1, 2, 2, 1 };
    std::vector<int> nums2 = { 2, 2, 3 };
    std::vector<int> result = intersection(nums1, nums2);
    for (int i : result) {
        std::cout << i << std::endl;
    }
}
