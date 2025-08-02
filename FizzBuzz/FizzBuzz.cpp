#include <iostream>
#include "FizzBuzz.h"

int main()
{
    std::vector<std::string> fb = fizzBuzz(15);
    for (std::string s : fb) {
        std::cout << s << std::endl;
    }
}
