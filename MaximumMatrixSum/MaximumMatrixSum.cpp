#include <iostream>
#include "MaxMaxtrixSum.h"

int main()
{
    std::vector<std::vector<int>> matrix = { {-1,0,-1},{-2,1,3},{3,2,2} };
    long long ans = maxMatrixSum(matrix);

    std::cout << ans << std::endl;
}
