#include <iostream>
#include "WordPattern.h"

int main()
{
    std::string pattern = "abba";
    std::string s = "dog cat cat dog";
    bool result = wordPattern(pattern, s);
    std::cout << result << std::endl;
}