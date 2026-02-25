#pragma once
#include "TreeNode.h"

static int sumRootToLeaf(TreeNode* root) {
	return TraverseEdge(root, 0);
}

static int TraverseEdge(TreeNode* node, int n) {
	if (!node) return 0;

	n = (n << 1) | node->val;
	if (!node->left && !node->right)
		return n;

	return TraverseEdge(node->left, n) + TraverseEdge(node->right, n);
}