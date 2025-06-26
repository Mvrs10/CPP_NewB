#pragma once
#include <bitset>
static int HammingWeightNoStringConversion(int n)
{
    int count = 0;
    while (n > 0)
    {
        int mod = n % 2;
        count += (mod == 1) ? 1 : 0;
        n /= 2;
    }
    return count;
}

static int HammingWeightStringConversion(int n)
{
    int count = 0;
    std::bitset<32> bits(n);
    for (size_t i = 0; i < bits.size(); i++)
    {
        count += (bits[i] == 1) ? 1 : 0;
    }
    return count;
}