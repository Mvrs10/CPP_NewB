#pragma once
#include "TreeNode.h"
#include "algorithm"

static int getHeight(TreeNode* node);

static bool isBalanced(TreeNode* root) {
	return getHeight(root) != -1;
}

static int getHeight(TreeNode* node) {
	if (!node) return 0;

	int lH = getHeight(node->left);
	if (lH == -1) return -1;

	int rH = getHeight(node->right);
	if (rH == -1) return -1;

	if (std::abs(rH - lH) > 1) return -1;

	return std::max(lH, rH) + 1;
}