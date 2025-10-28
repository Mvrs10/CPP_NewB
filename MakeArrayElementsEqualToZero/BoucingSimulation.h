#pragma once
#include <vector>

static bool isValid(const std::vector<int>& nums, int i, int direction) {
    std::vector<int> clone = nums;

    while (i >= 0 && i < clone.size()) {
        if (clone[i] > 0) {
            clone[i]--;
            direction *= -1;
        }
        i += direction;
    }

    for (int val : clone) {
        if (val != 0) return false;
    }
    return true;
}

static int countValidSelection(std::vector<int>& nums) {
    int count = 0;
    int n = nums.size();

    for (int i = 0; i < n; ++i) {
        if (nums[i] == 0) {
            if (isValid(nums, i, 1)) count++;
            if (isValid(nums, i, -1)) count++;
        }
    }
    return count;
}