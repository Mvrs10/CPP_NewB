#include <iostream>
#include "ContainsDuplicate.h"
#include <sstream>
#include <iomanip>

int main()
{
	std::vector<int> nums = { 1, 2, 3, 4, 4 };
	std::ostringstream oss;
	oss << std::boolalpha << containsDuplicate(nums);
	std::cout << oss.str() << std::endl;
	oss.str("");
	oss.clear();
	oss << std::boolalpha << containsDuplicateWithSorting(nums);
	std::cout << oss.str() << std::endl;
	oss.str("");
	oss.clear();
	std::vector<int> nums1 = { 1,0,3,1 };
	oss << std::boolalpha << containsNearbyDuplicate(nums1, 2);
	std::cout << oss.str() << std::endl;
}

