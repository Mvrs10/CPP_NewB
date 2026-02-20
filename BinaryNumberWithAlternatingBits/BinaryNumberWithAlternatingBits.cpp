#include <iostream>
#include "AlternatingBits.h"

int main()
{
    int n = 5;
    bool ans = hasAlternatingBits(n);
    std::cout << ((ans == 1) ? "True" : "False") << std::endl;
}
