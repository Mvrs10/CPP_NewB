#include <iostream>
#include "DeciBin.h"

int main()
{
    std::string n = "14902";
    int ans = minPartitions(n);

    std::cout << ans << std::endl;
}
