#include <iostream>
#include "MatrixPathsDivByK.h"

int main()
{
	vector<vector<int>> grid = { {5,2,4 }, { 3,0,5 }, { 0,7,2 }};
	int k = 3;

	int ans = numberOfPaths(grid, k);

	cout << ans << endl;
}
