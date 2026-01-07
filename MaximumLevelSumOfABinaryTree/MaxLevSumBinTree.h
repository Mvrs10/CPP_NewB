#pragma once
#include "TreeNode.h"
#include <queue>

static int maxLevelSum(TreeNode* root) {
	int level = 1;
	int current = 1;
	int max = -100006;
	std::queue<TreeNode*> q;
	q.push(root);

	while (q.size() > 0) {
		int n = q.size();
		int sum = 0;

		for (int i = 0; i < n; i++) {
			TreeNode* node = q.front();
			q.pop();
			sum += node->val;

			if (node->left) q.push(node->left);
			if (node->right) q.push(node->right);
		}

		if (sum > max) {
			max = sum;
			level = current;
		}
		current++;
	}

	return level;
}