#include <iostream>
#include "ProdMatConstructor.h"

int main()
{
    std::vector<std::vector<int>> grid = { {1,2},{3,4} };
    std::vector<std::vector<int>> ans = constructProductMatrix(grid);

    for (std::vector<int> r : ans) {
        for (int c : r) {
            std::cout << c << " ";
        }
        std::cout << std::endl;
    }
}
