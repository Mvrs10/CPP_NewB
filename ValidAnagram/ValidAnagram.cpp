#include <iostream>
#include "ValidAnagram.h"

int main()
{
    std::string s = "anagram";
    std::string t = "margaan";
    std::cout << isAnagram(s, t) << std::endl << isAnagramHashMap(s, t) << std::endl;
}