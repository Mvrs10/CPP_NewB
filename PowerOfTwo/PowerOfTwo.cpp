#include <iostream>
#include "PowerOfTwo.h"

int main()
{
    std::cout << isPowerOfTwo(1) << std::endl << isPowerOfTwo(536870912) << std::endl << isPowerOfTwo(15);
    std::cout << isPowerOfTwoBitWise(1) << std::endl << isPowerOfTwoBitWise(536870912) << std::endl << isPowerOfTwoBitWise(15);
}