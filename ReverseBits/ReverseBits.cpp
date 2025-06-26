#include <iostream>
#include "ReverseBits.h"

int main()
{
    std::cout << "Reverse Bit by Bit" << std::endl;
    uint32_t n = 0b00000010100101000001111010011100;
    uint32_t result = reverseBitsMovingN(n);
    std::cout << result << std::endl;
    result = reverseBitsMovingResult(n);
    std::cout << result << std::endl;
}

