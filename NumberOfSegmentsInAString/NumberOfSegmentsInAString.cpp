#include <iostream>
#include "StringSegment.h"

int main()
{
    std::string s = "Hello, my name is John";
    int ans = countSegments(s);
    std::cout << ans << std::endl;
    s = " aa  ,bbbb     k    ";
    ans = countSegments(s);
    std::cout << ans << std::endl;
}
