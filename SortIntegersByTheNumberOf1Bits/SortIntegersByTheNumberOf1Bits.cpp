#include <iostream>
#include "IntBitSorter.h"

int main()
{
    std::vector<int> arr = { 1,2,3,4,5,6,7,8 };
    std::vector<int> ans = sortByBits(arr);
    for (int n : ans) {
        std::cout << n << "-";
    }
}
