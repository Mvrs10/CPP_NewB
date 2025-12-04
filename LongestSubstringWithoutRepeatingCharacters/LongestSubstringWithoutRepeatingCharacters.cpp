#include <iostream>
#include "LongestUniqueSubstring.h"
#include <vector>

int main()
{
    std::vector<std::string> tests = { "tmmzuxt", "abcabcbb", "bbb", "pwwekw", "abcdaefghijklmn","abbbbbb" };

    for (std::string test : tests) {
        std::cout << lengthOfLongestSubstring(test) << std::endl;
    }       
}
