#include <iostream>
#include "BinaryTreeBalancer.h"

int main()
{
    TreeNode* root = new TreeNode(1);
    TreeNode* n1 = new TreeNode(2);
    root->left = n1;

    TreeNode* n2 = new TreeNode(3);
    root->right = n2;

    TreeNode* n3 = new TreeNode(4);
    n1->left = n3;

    TreeNode* n4 = new TreeNode(16);
    n2->left = n4;

    TreeNode* n5 = new TreeNode(53);
    n2->right = n5;

    int ans = isBalanced(root);
    std::cout << (ans == 1 ? "True" : "False") << std::endl;

    delete root;
}
