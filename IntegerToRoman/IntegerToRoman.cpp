#include <iostream>
#include "IntToRom.h"

int main()
{
    int testCases[] = { 3749, 58, 1994, 3999, 944 };
    for (int test : testCases) {
        std::string ans1 = intToRoman(test);
        std::string ans2 = intToRoman_v2(test);
        std::cout << ans1 << std::endl << ans2 << std::endl;
    }
}
