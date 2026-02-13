#include <iostream>
#include "SubstringBalancer.h"
#include <vector>

int main()
{
    std::vector<std::string> tests = { "abbac","a","kk","zzabccy" };
    for (std::string s : tests) {
        int ans = longestBalanced(s);
        std::cout << ans << std::endl;
    }
}
