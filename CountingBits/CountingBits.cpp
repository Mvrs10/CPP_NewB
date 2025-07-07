#include <iostream>
#include "Header.h"

int main()
{
    std::vector<int> result = countBits(15);
    for (int r : result) {
        std::cout << r;
    }    
}

