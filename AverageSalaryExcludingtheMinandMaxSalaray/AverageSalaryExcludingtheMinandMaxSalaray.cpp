#include <iostream>
#include "AverageSalary.h"

int main()
{
    std::vector<int> salary = { 1000,2000,3000,4000,15000,6700 };
    std::cout << average(salary);
}