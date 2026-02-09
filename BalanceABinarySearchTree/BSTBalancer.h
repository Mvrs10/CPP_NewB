#pragma once
#include "TreeNode.h"
#include <vector>

static TreeNode* balanceBST(TreeNode* root) {
	std::vector<TreeNode*> nodes;
	InorderSort(root, nodes);
	return buildBalancedBST(nodes, 0, nodes.size() - 1);
}

static void InorderSort(TreeNode* node, std::vector<TreeNode*>& nodes) {
	if (!node) return;

	InorderSort(node->left, nodes);
	nodes.push_back(node);
	InorderSort(node->right, nodes);
}

static TreeNode* buildBalancedBST(std::vector<TreeNode*>& nodes, int left, int right) {
	if (left > right) return nullptr;

	int mid = left + (right - left) / 2;
	TreeNode* node = nodes[mid];
	node->left = buildBalancedBST(nodes, left, mid - 1);
	node->right = buildBalancedBST(nodes, mid + 1, right);
	return node;
}