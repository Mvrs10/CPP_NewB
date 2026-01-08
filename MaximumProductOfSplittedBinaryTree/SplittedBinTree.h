#pragma once
#include <algorithm>
#include "TreeNode.h"

long long totalSum = 0;
long long maxProd = 0;

long long computeMaxProduct(TreeNode* node) {
	if (!node) return 0;

	long long leftSum = computeMaxProduct(node->left);
	long long rightSum = computeMaxProduct(node->right);

	long long subTreeSum = node->val + leftSum + rightSum;
	long long product = (totalSum - subTreeSum) * subTreeSum;
	maxProd = std::max(product, maxProd);

	return subTreeSum;
}

long long getMaxSum(TreeNode* node) {
	if (!node) return 0;

	return node->val + getMaxSum(node->left) + getMaxSum(node->right);
}

int maxProduct(TreeNode* root) {
	int MOD = 1000000007;

	totalSum = getMaxSum(root);
	computeMaxProduct(root);

	return (int)(maxProd % MOD);
}