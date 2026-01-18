#pragma once
#include <vector>

using namespace std;

static int largestMagicSquare(vector<vector<int>>& grid) {
    int m = grid.size();
    int n = grid[0].size();

    int size = min(m, n);

    vector<vector<int>> prefRow(m, vector<int>(n + 1, 0));
    vector<vector<int>> prefCol(m + 1, vector<int>(n, 0));

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            prefRow[i][j + 1] = prefRow[i][j] + grid[i][j];
            prefCol[i + 1][j] = prefCol[i][j] + grid[i][j];
        }
    }

    while (size > 1) {
        for (int i = 0; i + size <= m; i++) {
            for (int j = 0; j + size <= n; j++) {

                int magicSum = prefRow[i][j + size] - prefRow[i][j];
                bool isMagicSquare = true;

                for (int k = 0; k < size; k++) {
                    if (prefRow[i + k][j + size] - prefRow[i + k][j] != magicSum) {
                        isMagicSquare = false;
                        break;
                    }
                }
                if (!isMagicSquare) continue;

                for (int k = 0; k < size; k++) {
                    if (prefCol[i + size][j + k] - prefCol[i][j + k] != magicSum) {
                        isMagicSquare = false;
                        break;
                    }
                }
                if (!isMagicSquare) continue;

                int diag1 = 0, diag2 = 0;
                for (int k = 0; k < size; k++) {
                    diag1 += grid[i + k][j + k];
                    diag2 += grid[i + k][j + size - k - 1];
                }

                if (diag1 == magicSum && diag2 == magicSum)
                    return size;
            }
        }
        size--;
    }

    return 1;
}