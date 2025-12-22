#include <iostream>
#include "ColumnDel.h"

int main()
{
    std::vector<std::string> strs = { "babca", "bbazb" };
    int ans = minDeletionSize(strs);
    std::cout << ans << std::endl;
}
