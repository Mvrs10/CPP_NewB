#include <iostream>
#include "Min1Ops.h"

int main()
{
	std::vector<int> nums1 = { 6, 10, 10, 5 };
	std::vector<int> nums2 = { 2,10,6,12,14,28,280,7,21,14,5,35 };

	std::cout << minOperations(nums1) << " - " << minOperations(nums2) << std::endl;
}
