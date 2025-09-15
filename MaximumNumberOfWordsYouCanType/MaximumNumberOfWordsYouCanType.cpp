#include <iostream>
#include "MaximumWordsCanBeTyped.h"

int main()
{
    std::string text = "leet code";
    std::string brokenLetters = "lt";
    std::cout << canBeTypedWords(text, brokenLetters) << std::endl;
}
