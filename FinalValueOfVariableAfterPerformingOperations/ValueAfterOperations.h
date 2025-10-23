#pragma once
#include <vector>
#include <string>

static int finalValueAfterOperations(std::vector<std::string>& operations) {
	int x = 0;
	for (std::string& op : operations) {
		if (op[1] == '+')
			x++;
		else
			x--;
	}
	return x;
}