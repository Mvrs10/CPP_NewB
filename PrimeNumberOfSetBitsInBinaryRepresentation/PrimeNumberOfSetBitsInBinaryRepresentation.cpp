#include <iostream>
#include "SetBitPrimer.h"

int main()
{
    int left = 6, right = 10;
    int ans = countPrimeSetBits(left, right);
    std::cout << ans << std::endl;
}
