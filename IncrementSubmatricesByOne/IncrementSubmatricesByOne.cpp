#include <iostream>
#include "IncrementSubmatrices.h"

int main()
{
    std::vector<std::vector<int>> queries{ {1,1,2,2},{0,0,1,1} };

    std::vector<std::vector<int>> ans = rangeAddQueries(3, queries);

    for (std::vector<int> r : ans) {
        for (int c : r) {
            std::cout << c << " ";
        }
        std::cout << std::endl;
    }    
}

