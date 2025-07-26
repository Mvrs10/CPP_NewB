#pragma once
#include <vector>
#include <string>

static int countBits(int x) {
	int count = 0;
	while (x != 0) {
		x = x & (x - 1);
		count++;
	}
	return count;
}

static std::vector<std::string> readBinaryWatch(int turnedOn) {
	std::vector<std::string> result;

	for (int h = 0; h < 12; h++) {
		for (int m = 0; m < 60; m++) {
			if (countBits(h) + countBits(m) == turnedOn) {
				char buffer[6];
				std::sprintf(buffer, "%d:%02d", h, m);
				std::string s(buffer);
				result.push_back(s);
			}
		}
	}

	return result;
}