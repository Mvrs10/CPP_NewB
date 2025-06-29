#include <iostream>
#include "MaxProfit.h"

int main()
{
    std::vector<int> prices = { 7,1,5,3,6,4 };
    int result = maxProfit(prices);
    std::cout << result << std::endl;
}

