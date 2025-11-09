#include <iostream>
#include "CountOps.h"

int main()
{
    int ans1 = countOperations(3, 2);
    int ans2 = countOperations(10, 10);

    std::cout << ans1 << " " << ans2 << std::endl;
}
