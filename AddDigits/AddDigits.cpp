#include <iostream>
#include "AddDigits.h"

int main()
{
    int num1 = 912439;
    int num2 = 27;
    int num3 = 0;
    std::cout << addDigitsDigitalRoot(num1) << std::endl << addDigits(num1) << std::endl;
    std::cout << addDigitsDigitalRoot(num2) << std::endl << addDigits(num2) << std::endl;
    std::cout << addDigitsDigitalRoot(num3) << std::endl << addDigits(num3) << std::endl;
}
