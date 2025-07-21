#include <iostream>
#include "IsSubsequence.h"

int main()
{
    std::string s = "abc";
    std::string t = "ahghbwd";
    bool result = isSubsequence(s, t);
    std::cout << result << std::endl;
}

