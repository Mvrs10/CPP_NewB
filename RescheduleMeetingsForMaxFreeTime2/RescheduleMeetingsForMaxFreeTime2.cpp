#include <iostream>
#include "MaxFreeTime.h"

int main()
{
    int eventTime1 = 10;
    std::vector<int> startTime1 = { 0,7,9 };
    std::vector<int> endTime1 = { 1,8,10 };
    
    int result = maxFreeTime(eventTime1, startTime1, endTime1);
    std::cout << result << std::endl;

    int eventTime2 = 10;
    std::vector<int> startTime2 = { 0,3,7,9 };
    std::vector<int> endTime2 = { 1,4,8,10 };
    result = maxFreeTime(eventTime2, startTime2, endTime2);
    std::cout << result << std::endl;
}
