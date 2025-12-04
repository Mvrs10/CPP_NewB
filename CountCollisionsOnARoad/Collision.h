#pragma once
#include <string>

static int countCollision(std::string directions) {
	int front = 0;
	int back = directions.length() - 1;
	int collisions = 0;

	while (front <= back && directions[front] == 'L') {
		front++;
	}

	while (back >= 0 && directions[back] == 'R') {
		back--;
	}

	for (int i = front; i <= back; i++) {
		if (directions[i] != 'S')
			collisions++;
	}

	return collisions;
}