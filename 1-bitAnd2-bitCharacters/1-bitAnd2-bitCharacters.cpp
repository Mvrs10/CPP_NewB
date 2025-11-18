#include <iostream>
#include "BitCharacters.h"

int main()
{
    std::vector<int> bits = { 1,1,1,0,1,0,1,0,0,0 };
    bool ans = isOneBitCharacter(bits);

    std::cout << (ans ? "True" : "False") << std::endl;
}