#include <iostream>
#include "StringConverter.h"

int main()
{
    string source = "aaaa", target = "bbbb";
    vector<char> original = { 'a','c' }, vector<char> changed = { 'c','b' };
    vector<int> cost = { 1,2 };

    long long result = minimumCost(source, target, original, changed, cost);
    std::cout << result << std::endl;
}
