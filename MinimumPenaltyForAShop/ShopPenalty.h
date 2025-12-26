#pragma once
#include <string>

static int bestClosingTime(std::string customers) {
	int closingTime = 0;
	int bestScore = 0;
	int currentScore = 0;

	for (int i = 0; i < customers.size(); i++) {
		if (customers[i] == 'Y')
			currentScore += 1;
		else
			currentScore -= 1;

		if (currentScore > bestScore) {
			bestScore = currentScore;
			closingTime = i + 1;
		}
	}

	return closingTime;
}