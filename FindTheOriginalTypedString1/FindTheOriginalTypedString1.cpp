#include <iostream>
#include "PossibleStringCount.h"

int main()
{
    std::string word1 = "ere";
    std::string word2 = "abbcccc";
    int result = possibleStringCount(word1);
    std::cout << result << std::endl;
    result = possibleStringCount(word2);
    std::cout << result << std::endl;
}


