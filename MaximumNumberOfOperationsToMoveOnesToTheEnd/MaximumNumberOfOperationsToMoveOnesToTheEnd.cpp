#include <iostream>
#include <vector>
#include "OnesToTheEnd.h"

int main()
{
	std::vector<std::string> s = { "0011010101100" , "1001101" ,"00111" };
	for (std::string ss : s) {
		std::cout << maxOperations(ss) << std::endl;
	}
}
