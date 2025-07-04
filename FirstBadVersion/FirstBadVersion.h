#pragma once

static int isBadVersion(int n) {
	return n >= 1702766719;
}

static int firstBadVersion(int n) {
	int first = 1, last = n;
	while (first <= last) {
		int mid = first + (last - first) / 2;
		if (isBadVersion(mid)) last = mid - 1;
		else first = mid + 1;
	}
	return first;
}