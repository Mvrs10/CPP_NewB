#pragma once
#include "TreeNode.h"

static int sumOfLeftLeaves(TreeNode* root) {
	if (!root) return 0;

	int sum = 0;
	if (root->left && !root->left->left && !root->left->right)
		sum += root->left->val;
	else
		sum += sumOfLeftLeaves(root->left);

	sum += sumOfLeftLeaves(root->right);

	return sum;
}