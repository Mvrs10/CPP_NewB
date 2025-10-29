#include <iostream>
#include "AllSetBits.h"
#include <vector>

int main()
{
    std::vector<int> testSets = { 3,15,5,32 };
    for (int i : testSets) {
        std::cout << smallestNumber(i) << std::endl;
    }    
}
