#include <iostream>
#include "AddBinary.h"

int main()
{
    std::string a = "1010", b = "1011";

    std::string ans = addBinary(a, b);
    std::cout << ans << std::endl;
}
