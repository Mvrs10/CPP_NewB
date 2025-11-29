#include <iostream>
#include "MaxKDivComponent.h"

int main()
{
    Solution* sol = new Solution();

    int n = 5, k = 6;
    vector<vector<int>> edges = { {0,2},{1,2},{1,3},{2,4} };
    vector<int> values = { 1,8,1,4,4 };

    int ans = sol->maxKDivisibleComponents(n, edges, values, k);
    cout << ans << endl;
}