#include <iostream>
#include "DescentPeriod.h"

int main()
{
    std::vector<int> prices = { 3,2,1,1 };
    long ans = getDescentPeriods(prices);
    std::cout << ans << std::endl;
}
