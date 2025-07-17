#pragma once

static int guess(int number) {
	const int PICK = 6;
	if (number > PICK) return -1;
	else if (number < PICK) return 1;
	else return 0;
}

static int guessNumber(int n) {
	int front = 1;
	int back = n;

	while (front < back) {
		int mid = front + (back - front) / 2;
		if (guess(mid) == 0)
			return mid;
		if (guess(mid) == -1)
			back = mid - 1;
		else
			front = mid + 1;
	}
	return front;
}