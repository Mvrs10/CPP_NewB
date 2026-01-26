#include <iostream>
#include "MinDiffAbs.h"

int main()
{
    std::vector<int> arr = { 1,3,6,10,15 };

    std::vector<std::vector<int>> ans = minimumAbsDifference(arr);

    for (std::vector<int> pair : ans) {
        std::cout << pair[0] << " - " << pair[1];
    }

    return 0;
}