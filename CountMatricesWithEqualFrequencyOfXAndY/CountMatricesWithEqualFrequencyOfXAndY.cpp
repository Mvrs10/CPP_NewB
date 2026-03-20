#include <iostream>
#include "SubmaFreq.h"

int main()
{
    std::vector<std::vector<char>> grid = { {'X','Y','.'},{'Y','.','.'} };
    int ans = numberOfSubmatrice(grid);

    std::cout << ans << std::endl;
}
