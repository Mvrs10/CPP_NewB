#include <iostream>
#include "BinCoder.h"

int main()
{
    std::string s = "00110110";
    int k = 2;
    bool ans = hasAllCodes(s, k);
    std::cout << (ans == 0 ? "False" : "True") << std::endl;
}
