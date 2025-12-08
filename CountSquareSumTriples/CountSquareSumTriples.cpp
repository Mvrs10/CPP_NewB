#include <iostream>
#include "SumTriple.h"

int main()
{
    int tests[] = { 5,10,1,2,250 };
    for (int n : tests) {
        std::cout << countTriples(n) << std::endl << countTriples_v2(n) << std::endl;
    }
}

