#pragma once
#include <vector>

static bool isOneBitCharacter(std::vector<int>& bits) {
	bool isOneBit = true;

	for (int i = 0; i < bits.size(); i++) {
		if (bits[i] == 1) {
			isOneBit = false;
			i++;
		}
		else
			isOneBit = true;
	}

	return isOneBit;
}