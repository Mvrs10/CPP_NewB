#include <iostream>
#include "TheHappiestString.h"

int main()
{
    int n = 3, k = 9;

    std::string ans = getHappyString(n, k);

    std::cout << ans << std::endl;
}
