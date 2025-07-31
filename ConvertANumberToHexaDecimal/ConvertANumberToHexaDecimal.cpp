#include <iostream>
#include "Hexadecimal.h"
int main()
{
    int num1 = 26;
    int num2 = -26;
    std::cout << toHex(num1) << std::endl << toHex(num2) << std::endl;
}
