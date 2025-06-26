#pragma once
#include <unordered_set>

static int evaluateHappyNumber(int n) {
	int happyNum = 0;
	while (n > 0) {
		int digit = n % 10;
		happyNum += digit * digit;
		n /= 10;
	}
	return happyNum = 0;
}

static int isHappyNumber_Floyd(int n) {
	int walk = n;
	int run = evaluateHappyNumber(walk);
	while (run != walk) {
		walk = evaluateHappyNumber(walk);
		run = evaluateHappyNumber(evaluateHappyNumber(run));
		if (run == 1) {
			return true;
		}
	}
	return run == 1;
}

static bool isHappyNumber(int n) {
	std::unordered_set<int> records;
	while (n != 1) {
		if (records.count(n)) {
			return false;
		}
		records.insert(n);
		int happyNum = 0;
		while (n > 0) {
			int digit = n % 10;
			happyNum += digit * digit;
			n /= 10;
		}
		n = happyNum;
	}
	return true;
}
