#include <iostream>
#include "BinStringReducer.h"

int main()
{
    std::string s = "1101";
    int ans = numSteps(s);
    std::cout << ans << std::endl;
}