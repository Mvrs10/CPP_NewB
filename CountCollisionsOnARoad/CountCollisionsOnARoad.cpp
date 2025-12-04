#include <iostream>
#include "Collision.h"

int main()
{
    std::string directions[] = {"RLRSLL", "LLRR", "LLSLLRR", "LLRLRLLSLRLLSLSSSS"};
    for (std::string d : directions) {
        int ans = countCollision(d);
        std::cout << ans << std::endl;
    }    
}

