#include <iostream>
#include "MaxSubsequence1.h"

int main()
{
	std::vector<int> nums1{ 1,2,3,4 };
	std::vector<int> nums2{ 1,2,1,1,2,1,2 };
	std::vector<int> nums3{ 1,3 };

	std::cout << maximumLength(nums1) << std::endl << maximumLength(nums2) << std::endl << maximumLength(nums3) << std::endl;
}
