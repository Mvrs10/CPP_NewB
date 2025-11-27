#include <iostream>
#include "RevInt.h"

int main()
{
    int testCases[4] = { 1563847412, -2147483412, 2147483641, -123 };
    for (int test : testCases) {
        std::cout << reverse(test) << std::endl;
    }
}
