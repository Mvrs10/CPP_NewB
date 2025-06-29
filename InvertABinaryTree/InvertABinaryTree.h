#pragma once
#include "TreeNode.h"
#include <algorithm>

static TreeNode* invertTreeWithAlgorithm(TreeNode* root) {
	if (!root) return nullptr;
	std::swap(root->left, root->right);
	invertTreeWithAlgorithm(root->left);
	invertTreeWithAlgorithm(root->right);
	return root;
}

static TreeNode* invertTree(TreeNode* root) {
	if (!root) return nullptr;
	TreeNode* temp = root->left;
	root->left = invertTree(root->right);
	root->right = invertTree(temp);
	return root;
}