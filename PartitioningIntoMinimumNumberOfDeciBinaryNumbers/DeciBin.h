#pragma once
#include <string>

static int minPartitions(std::string n) {
	for (int i = 1; i < n.size(); i++) {
		if (n[i] > n[0])
			n[0] = n[i];
	}

	return n[0] - '0';
}