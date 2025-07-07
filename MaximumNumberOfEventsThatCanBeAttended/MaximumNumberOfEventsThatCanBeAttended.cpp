#include <iostream>
#include "MaxEvents.h"

int main()
{
    std::vector<std::vector<int>> events1 = { {1,2},{2,3},{3,4} };
    std::cout << maxEvents(events1) << std::endl;

    std::vector<std::vector<int>> events2 = { {1,2},{1,2},{1,2},{1,2},{1,2},{1,2},{1,2} };
    std::cout << maxEvents(events2) << std::endl;

    std::vector<std::vector<int>> events3 = { {5,9} };
    std::cout << maxEvents(events3) << std::endl;

    std::vector<std::vector<int>> events4 = { {1,2},{2,3},{3,4},{1,2},{1,2},{1,2} };
    std::cout << maxEvents(events4) << std::endl;
}
