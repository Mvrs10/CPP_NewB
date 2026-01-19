#include <iostream>
#include "Prefix2D.h"

int main()
{
    vector<vector<int>> mat = { {1,1},{1,1} };
    int threshold = 1;

    int ans = maxSideLength(mat, threshold);
    std::cout << ans << endl;
}
