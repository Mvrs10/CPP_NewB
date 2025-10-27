#pragma once
#include <vector>
#include <string>

static int numberOfBeams(std::vector<std::string>& bank) {
	int beams = 0;
	int devices = 0;

	for (std::string row : bank) {
		int count = 0;

		for (char cell : row) {
			if (cell == '1')
				count++;
		}

		if (count != 0) {
			if (devices != 0)
				beams += devices * count;
			devices = count;
		}
	}

	return beams;
}
