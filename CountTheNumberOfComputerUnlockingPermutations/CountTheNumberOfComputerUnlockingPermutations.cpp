#include <iostream>
#include "ComputerUnlockingPermutation.h"

int main()
{
    std::vector<int> complexity = { 38,223,100,123,406,234,256,93,222,259,233,69,139,245,45,98,214 };
    int ans = countPermutations(complexity);
    std::cout << ans << std::endl;
}
