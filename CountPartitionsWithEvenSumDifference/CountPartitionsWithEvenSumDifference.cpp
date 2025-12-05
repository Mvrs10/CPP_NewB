#include <iostream>
#include "PartitionDiff.h"

int main()
{
	std::vector<int> nums = { 10,10,3,7,6 };
	int ans = countPartitions(nums);
    std::cout << ans << std::endl;
	ans = countPartitions_v2(nums);
	std::cout << ans << std::endl;
}