#include <iostream>
#include "OnesZeroes.h"

int main()
{
    std::vector<std::string> strs = { "10","0001","111001","1","0" };
    int m = 5, n = 3;
    int ans = findMaxForm(strs, m, n);
    std::cout << ans << std::endl;
}
