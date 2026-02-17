#include <iostream>
#include "Champagne.h"

int main()
{
    int poured = 109;
    int query_row = 33, query_glass = 17;

    double ans = champagneTower(poured, query_row, query_glass);
    std::cout << ans << std::endl;
}

