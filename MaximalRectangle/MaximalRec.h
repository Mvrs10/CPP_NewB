#pragma once
#include <vector>

using namespace std;

static int maximalRectangle(vector<vector<char>>& matrix) {

    int rows = matrix.size();
    int cols = matrix[0].size();

    vector<int> heights(cols, 0);
    vector<int> left(cols, -1);
    vector<int> right(cols, cols);

    int maxArea = 0;

    for (int i = 0; i < rows; i++) {

        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] == '1')
                heights[j]++;
            else
                heights[j] = 0;
        }

        int curLeft = -1;
        for (int j = 0; j < cols; j++) {
            if (heights[j] == 0) {
                left[j] = -1;
                curLeft = j;
            }
            else {
                left[j] = max(left[j], curLeft);
            }
        }

        int curRight = cols;
        for (int j = cols - 1; j >= 0; j--) {
            if (heights[j] == 0) {
                right[j] = cols;
                curRight = j;
            }
            else {
                right[j] = min(right[j], curRight);
            }
        }

        for (int j = 0; j < cols; j++) {
            int width = right[j] - left[j] - 1;
            maxArea = max(maxArea, heights[j] * width);
        }
    }

    return maxArea;
}
