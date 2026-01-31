#pragma once
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

static long long minimumCost(string source, string target, vector<char>& original, vector<char>& changed, vector<int>& cost) {
	long long MAX = 26000000;
	vector<vector<long long>> graph(26, vector<long long>(26, MAX));

	for (int i = 0; i < 26; i++) {
		for (int j = 0; j < 26; j++) {
			if (i == j)
				graph[i][j] = 0;
		}
	}

	for (int i = 0; i < original.size(); i++) {
		int source = original[i] - 'a';
		int target = changed[i] - 'a';
		graph[source][target] = min(graph[source][target], (long long)cost[i]);
	}

	for (int i = 0; i < 26; i++) {
		for (int s = 0; s < 26; s++) {
			for (int t = 0; t < 26; t++) {
				long long cost = graph[s][i] + graph[i][t];
				if (cost < graph[s][t])
					graph[s][t] = cost;
			}
		}
	}

	long long totalCost = 0;
	for (int i = 0; i < source.size(); i++) {
		int s = source[i] - 'a';
		int t = target[i] - 'a';

		if (graph[s][t] == MAX)
			return -1;
		
		totalCost += graph[s][t];
	}

	return totalCost;
}