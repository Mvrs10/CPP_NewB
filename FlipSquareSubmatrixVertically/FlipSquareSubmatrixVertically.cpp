#include <iostream>
#include "GridVertFlipper.h"

int main()
{
    std::vector<std::vector<int>> grid = { {1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16} };
    int x = 1, y = 0, k = 3;

	grid = reverseSubmatrix(grid, x, y, k);
    for (std::vector<int> row : grid) {
        for (int col : row) {
            std::cout << col << " ";
        }
        std::cout << std::endl;
    }
}
