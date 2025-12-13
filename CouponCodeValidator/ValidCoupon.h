#pragma once
#include <vector>
#include <string>
#include <unordered_map>
#include <algorithm>

using namespace std;

static vector<string> validateCoupons(vector<string>& code, vector<string>& businessLine, vector<bool>& isActive) {
	unordered_map<string, vector<string>> validCoupons = {
		{"electronics", {}},
		{"grocery", {}},
		{"pharmacy", {}},
		{"restaurant", {}}
	};

	auto isValidCoupon = [](const string& code) {
		if (code.empty()) return false;

		for (char c : code) {
			if (!(isalnum(c) || c == '_')) return false;
		}

		return true;
		};

	for (int i = 0; i < code.size(); i++) {
		if (isActive[i] && validCoupons.count(businessLine[i]) > 0 && isValidCoupon(code[i]))
			validCoupons[businessLine[i]].push_back(code[i]);
	};

	vector<string> orderedCoupons;
	vector<string> categories = { "electronics" ,"grocery","pharmacy","restaurant" };

	for (const string& c : categories) {
		vector<string>& list = validCoupons[c];
		sort(list.begin(), list.end());
		orderedCoupons.insert(orderedCoupons.end(), list.begin(), list.end());
	}

	return orderedCoupons;
}