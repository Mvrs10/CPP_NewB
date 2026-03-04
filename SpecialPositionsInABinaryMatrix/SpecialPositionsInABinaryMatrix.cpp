#include <iostream>
#include "MatrixSpecialPosition.h"

int main()
{
    std::vector<std::vector<int>> mat = { {1,0,0},{0,0,1},{1,0,0} };

    int ans = numSpecial(mat);
    std::cout << ans << std::endl;
}
