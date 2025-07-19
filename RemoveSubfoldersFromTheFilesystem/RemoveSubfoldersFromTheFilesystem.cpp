#include <iostream>
#include "RemoveSubfolder.h"

int main()
{
    std::vector<std::string> folder1{ "/a","/a/b","/c/d","/c/d/e","/c/f" };
    std::vector<std::string> ans = removeSubfolders(folder1);
    for (std::string f : ans) {
        std::cout << f << std::endl;
    }
}

