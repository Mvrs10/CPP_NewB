#include <iostream>
#include "StringGame2.h"
int main()
{
    long long k = 33354182522397;
    std::vector<int> ops = { 0,0,0,0,0,1,0,0,0,0,0,1,1,1,1,1,1,0,1,0,0,1,1,0,1,0,1,1,0,1,1,1,0,1,0,1,0,1,0,0,0,0,0,1,1,1,1,0,0,1,1,0,0,1,1,1,1,0,0,0,1,0,1,1,0,1,0,0,0,1,0,1,0,1,1,0,0,0,0,1,0,1,1,0,0,1,0,0,1,1,0,1,1,1,1,1,1,0,0,0 };
    std::vector<int> opss = { 1 };
    std::cout << kthCharacter(k, ops) << std::endl << kthCharacter(2, opss) << std::endl;
}

