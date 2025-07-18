#pragma once
#include "TreeNode.h"

static int countNodes(TreeNode* root) {
	if (!root) return 0;
	return 1 + countNodes(root->left) + countNodes(root->right);
}