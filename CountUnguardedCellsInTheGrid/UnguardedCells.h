#pragma once
#include <vector>

using namespace std;

static int countUnguarded(int m, int n, vector<vector<int>>& guards, vector<vector<int>>& walls) {
    vector<vector<int>> grid(m, vector<int>(n, 0));

    for (auto& w : walls)
        grid[w[0]][w[1]] = 1;

    for (auto& g : guards)
        grid[g[0]][g[1]] = 1;

    vector<pair<int, int>> moves = { {-1, 0}, {1, 0}, {0, -1}, {0, 1} };

    for (auto& g : guards) {
        int x = g[0];
        int y = g[1];

        for (auto& move : moves) {
            int nx = x + move.first;
            int ny = y + move.second;

            while (nx >= 0 && nx < m && ny >= 0 && ny < n && grid[nx][ny] != 1) {
                if (grid[nx][ny] == 0)
                    grid[nx][ny] = -1;
                nx += move.first;
                ny += move.second;
            }
        }
    }

    int res = 0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (grid[i][j] == 0)
                res++;
        }
    }

    return res;
}