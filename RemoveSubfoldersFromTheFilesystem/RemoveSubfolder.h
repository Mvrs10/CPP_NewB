#pragma once
#include <string>
#include <vector>
#include <algorithm>

static std::vector<std::string> removeSubfolders(std::vector<std::string>& folder) {
	std::sort(folder.begin(), folder.end());

	std::vector<std::string> result;
	result.push_back(folder[0]);
	std::string root = folder[0];

	for (int i = 1; i < folder.size(); i++) {
		if (folder[i].find(root + "/") != 0) {
			result.push_back(folder[i]);
			root = folder[i];
		}
	}

	return result;
}