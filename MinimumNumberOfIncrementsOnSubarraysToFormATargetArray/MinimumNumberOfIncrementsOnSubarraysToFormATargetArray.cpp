#include <iostream>
#include "MinimumIncrements.h"

int main()
{
    std::vector<int> target = { 1,2,3,2,1 };
    int ans = minNumberOperations(target);
    std::cout << ans << std::endl;
}
