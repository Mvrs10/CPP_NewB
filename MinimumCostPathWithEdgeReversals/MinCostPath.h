#pragma once
#include <vector>
#include <deque>

using namespace std;

static int minCost(int n, vector<vector<int>>& edges) {
    vector<vector<pair<int, int>>> adj(n);
    for (const auto& edge : edges) {
        int u = edge[0];
        int v = edge[1];
        int w = edge[2];
        adj[u].push_back({ v, w });
        adj[v].push_back({ u, 2 * w });
    }

    vector<int> dist(n, 1e9);
    dist[0] = 0;

    deque<int> dq;
    dq.push_back(0);

    while (!dq.empty()) {
        int curr = dq.front();
        dq.pop_front();

        for (auto& edge : adj[curr]) {
            int neighbor = edge.first;
            int weight = edge.second;

            if (dist[curr] + weight < dist[neighbor]) {
                dist[neighbor] = dist[curr] + weight;

                if (weight == 0) {
                    dq.push_front(neighbor);
                }
                else {
                    dq.push_back(neighbor);
                }
            }
        }
    }

    return (dist[n - 1] == 1e9) ? -1 : dist[n - 1];
}