#include <iostream>
#include "NumArray.h"

int main()
{
    std::vector<int> nums = { -2,0,3,-5,2,-1 };
    NumArray* obj = new NumArray(nums);

    int r1 = obj->sumRange(0, 2);
    int r2 = obj->sumRange(2, 5);
    int r3 = obj->sumRange(0, 5);
    std::cout << r1 << std::endl << r2 << std::endl<< r3 << std::endl;
}
