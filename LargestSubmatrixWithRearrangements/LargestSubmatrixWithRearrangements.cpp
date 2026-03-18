#include <iostream>
#include "MatrixRearrangement.h"

int main()
{
    std::vector<std::vector<int>> matrix = { {1,0,1}, {1,1,1}, {0,1,1} };

    int result = largestSubmatrix(matrix);

    std::cout << result << std::endl;
}
