#pragma once
#include "TreeNode.h"
#include <vector>
#include <string>
#include <sstream>

static void binaryTreePaths(TreeNode* root, std::vector<std::string>& list, std::string path) {
	if (!root->left && !root->right) {
		list.push_back(path + std::to_string(root->val));
		return;
	}
	std::ostringstream builder;
	builder << path << root->val << "->";
	path = builder.str();
	if (root->left) binaryTreePaths(root->left, list, path);
	if (root->right) binaryTreePaths(root->right, list, path);
}

static std::vector<std::string> binaryTreePaths(TreeNode* root) {
	std::vector<std::string> result;
	std::string empty;
	binaryTreePaths(root, result, empty);
	return result;
}