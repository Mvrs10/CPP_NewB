#include <iostream>
#include "SmallestSubtree.h"

int main()
{
	TreeNode* root = new TreeNode(100);
	root->left = new TreeNode(2);
	root->right = new TreeNode(3);
	root->right->right = new TreeNode(222);

	TreeNode* ans = subtreeWithAllDeepest(root);
	std::cout << ans->val << std::endl;
}
