#include <iostream>
#include "FruitsIntoBaskets2.h"

int main()
{
    std::vector<int> fruits = {3,6,1};
    std::vector<int> baskets = {6,4,7};
    std::cout << numOfUnplacedFruits(fruits, baskets);
}
