#include <iostream>
#include "MountainWorker.h"

int main()
{
    std::vector<int> workerTimes = { 2,1,1 };
    int mountainHeight = 4;

    long long ans = minNumberOfSeconds(mountainHeight, workerTimes);
    std::cout << ans << std::endl;
}
