#pragma once
#include <vector>

static int numOfUnplacedFruits(std::vector<int>& fruits, std::vector<int>& baskets) {
	int n = baskets.size();
	std::vector<bool> usedBasket(n, false);
	int unplaced = fruits.size();

	for (int fruit : fruits) {
		bool placed = false;
		
		for (int i = 0; i < n; i++) {
			if (fruit <= baskets[i] && !usedBasket[i]) {
				usedBasket[i] = true;
				placed = true;
				break;
			}
		}

		if (placed) unplaced--;
	}
	return unplaced;
}