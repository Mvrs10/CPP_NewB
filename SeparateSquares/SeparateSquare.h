#pragma once
#include <vector>

static double getLowArea(std::vector<std::vector<int>>& squares, double h) {
	double area = 0;

	for (const std::vector<int>& sq : squares) {
		if (sq[1] < h) {
			double s = sq[2], l = h - sq[1];
			if (sq[1] + sq[2] < h)
				l = sq[2];
			area += s * l;
		}
	}

	return area;
}

static double separateSquares(std::vector<std::vector<int>>& squares) {
	double low = 0, high = 0, totalArea = 0;
	const double EPS = 0.00001;

	for (const std::vector<int>& sq : squares) {
		double s = sq[2];
		totalArea += s * s;
		high = std::max(high, (double)(sq[1] + sq[2]));
	}

	double halfArea = totalArea / 2;

	while (low + EPS < high) {
		double mid = (high + low) / 2;

		if (getLowArea(squares, mid) < halfArea) {
			low = mid;
		}
		else {
			high = mid;
		}
	}

	return high;
}