#include <iostream>
#include "UniquePalindrome.h"

int main()
{
    std::string s = "bbcbaba";
    int ans = countPalindromicSubsequence(s);
    std::cout << ans << std::endl;
}
