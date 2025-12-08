#include <iostream>
#include "CountOdd.h"
#include <vector>
int main()
{
    std::vector<std::vector<int>> testCases = { {3,7},{4,8},{1,2},{5,5} };

    for (std::vector<int> test : testCases) {
        std::cout << countOdds(test[0], test[1]) << std::endl;
    }
}
