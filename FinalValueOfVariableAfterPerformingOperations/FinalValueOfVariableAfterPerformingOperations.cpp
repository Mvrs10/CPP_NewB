#include <iostream>
#include "ValueAfterOperations.h"

int main()
{
    std::vector<std::string> ops = { "X++","--X","++X" };
    int ans = finalValueAfterOperations(ops);
    std::cout << ans << std::endl;
}

