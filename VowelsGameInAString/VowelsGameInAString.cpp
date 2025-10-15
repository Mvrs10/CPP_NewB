#include <iostream>
#include "VowelsGame.h"

int main()
{
    std::string s1 = "leetcoder";
    std::string s2 = "jklh";
    std::cout << doesAliceWin(s1) << std::endl;
    std::cout << doesAliceWin(s2) << std::endl;
}

