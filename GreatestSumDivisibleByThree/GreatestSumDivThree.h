#pragma once
#include <vector>

static int maxSumDivThree(std::vector<int>& nums) {
	int sum = 0;

	std::vector<int> r1 = { 10001, 10001 };
	std::vector<int> r2 = { 10001, 10001 };

	for (int n : nums) {
        sum += n;
        int r = n % 3;

        if (r == 1)
        {
            if (n < r1[0])
            {
                r1[1] = r1[0];
                r1[0] = n;
            }
            else if (n < r1[1])
            {
                r1[1] = n;
            }
        }
        else if (r == 2)
        {
            if (n < r2[0])
            {
                r2[1] = r2[0];
                r2[0] = n;
            }
            else if (n < r2[1])
            {
                r2[1] = n;
            }
        }
    }

    if (sum % 3 == 0) return sum;

    int result = 0;

    if (sum % 3 == 1)
    {
        result = std::max(sum - r1[0], sum - (r2[0] + r2[1]));
    }
    else
    {
        result = std::max(sum - r2[0], sum - (r1[0] + r1[1]));
	}

    return result < 0 ? 0 : result;
}