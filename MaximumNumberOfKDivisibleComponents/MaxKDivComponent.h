#pragma once
#include<vector>

using namespace std;

class Solution {
public:
    vector<long long> val;
    vector<vector<int>> adj;
    int k;
    int cnt = 0;

    long long dfs(int u, int parent) {
        long long sum = val[u];

        for (int v : adj[u]) {
            if (v == parent) continue;
            sum += dfs(v, u);
        }

        if (sum % k == 0) {
            cnt++;
            return 0;
        }
        return sum;
    }

    int maxKDivisibleComponents(int n, vector<vector<int>>& edges, vector<int>& values, int k) {
        this->k = k;
        adj.assign(n, {});
        val.assign(values.begin(), values.end());

        for (auto& e : edges) {
            adj[e[0]].push_back(e[1]);
            adj[e[1]].push_back(e[0]);
        }

        dfs(0, -1);
        return cnt;
    }
};