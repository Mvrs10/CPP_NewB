#include <iostream>
#include "DotProd.h"

int main()
{
    std::vector<int> nums1 = { 2,1,-2,5 };
    std::vector<int> nums2 = { 3,0,-6 };

    int ans = maxDotProduct(nums1, nums2);
    std::cout << ans << std::endl;
}

