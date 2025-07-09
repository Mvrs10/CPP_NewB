#include <iostream>
#include "MaxFreeTime.h"

int main()
{
    int eventTime = 10;
    int k = 2;
    std::vector<int> startTime = { 0,2,9 };
    std::vector<int> endTime = { 1,4,10 };
    int result = maxFreeTime(eventTime, k, startTime, endTime);
    std::cout << result << std::endl;
}

