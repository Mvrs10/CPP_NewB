#include <iostream>
#include "OverlappingEvent.h"

int main()
{
    vector<vector<int>> events = { {1,3,2} ,{4,5,2},{2,4,3} };
    int ans = maxTwoEvents(events);
    std::cout << ans << std::endl;
}