#include "ASCII.h"
#include <iostream>

int main()
{
    string s1 = "eat";
    string s2 = "sea";

    int ans = minimumDeleteSum(s2, s1);
    std::cout << ans << std::endl;
}

