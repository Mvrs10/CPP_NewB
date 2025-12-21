#include <iostream>
#include "ColumnDeletion.h"

int main()
{
    std::vector<std::string> strs = { "ca","bb","ac" };
    int ans = minDeletionSize(strs);

    std::cout << ans << std::endl;
}
