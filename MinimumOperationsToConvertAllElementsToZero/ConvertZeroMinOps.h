#pragma once
#include <vector>
#include <stack>

static int minOperations(std::vector<int>& nums) {
	int ops = 0;
	std::stack<int> stack;
	stack.push(0);

	for (int num : nums) {
		if (num == 0) {
			while (stack.top() > 0) {
				stack.pop();
			}
			continue;
		}

		while (stack.top() > num) {
			stack.pop();
		}

		if (stack.top() < num) {
			ops++;
			stack.push(num);
		}
	}

	return ops;
}