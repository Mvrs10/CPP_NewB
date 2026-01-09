#pragma once
#include "TreeNode.h"
#include <algorithm>

static int getMaxDepth(TreeNode* node) {
	if (!node) return 0;

	return 1 + std::max(getMaxDepth(node->left), getMaxDepth(node->right));
}

static TreeNode* findSmallestSubtree(TreeNode* node, int depth, int maxDepth) {
    if (!node) return nullptr;

    if (depth == maxDepth) return node;

    TreeNode* left = findSmallestSubtree(node->left, depth + 1, maxDepth);
    TreeNode* right = findSmallestSubtree(node->right, depth + 1, maxDepth);

    if (left && right) return node;
    else if (left) return left;
    else return right;
}

static TreeNode* subtreeWithAllDeepest(TreeNode* root) {
	int maxDepth = getMaxDepth(root);
	return findSmallestSubtree(root, 1, maxDepth);
}