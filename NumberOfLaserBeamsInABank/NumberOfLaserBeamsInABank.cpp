#include <iostream>
#include "LaserBeams.h"

int main()
{
    std::vector<std::string> bank = { "011001","000000","010100","001000" };
    int ans = numberOfBeams(bank);
    std::cout << ans << std::endl;
}
