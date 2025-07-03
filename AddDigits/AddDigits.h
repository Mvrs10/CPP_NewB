#pragma once

static int addDigits(int num) {
	if (num < 10) return num;
	int sum = 0;
	while (num > 0) {
		sum += num % 10;
		num /= 10;
	}
	return addDigits(sum);
}

static int addDigitsDigitalRoot(int num) {
	return (num == 0) ? num : 1 + (num - 1) % 9;
}