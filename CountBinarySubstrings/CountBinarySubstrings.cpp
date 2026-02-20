#include <iostream>
#include "BinarySubstring.h"

int main()
{
    std::string s = "001110";
    int ans = countBinarySubstrings(s);
    std::cout << ans << std::endl;
}
