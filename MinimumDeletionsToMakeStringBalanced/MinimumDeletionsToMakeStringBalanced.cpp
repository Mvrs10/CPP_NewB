#include <iostream>
#include "StringBalancer.h"

int main()
{
    std::string s = "bbaaaaaba";
    int ans = minimumDeletions(s);

    std::cout << ans << std::endl;
}

