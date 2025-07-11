#include <iostream>
#include "ReverseString2P.h"

int main()
{
    std::vector<char> s1({ 'h', 'e', 'l', 'l', 'o' });
    reverseString(s1);
    for (char c : s1) {
        std::cout << c;
    }
}
