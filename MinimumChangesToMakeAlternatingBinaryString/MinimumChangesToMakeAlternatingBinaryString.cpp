#include <iostream>
#include "AlternatingBinString.h"

int main()
{
    std::string s = "100001";
    int ans = minOperations(s);

    std::cout << ans << std::endl;
}
