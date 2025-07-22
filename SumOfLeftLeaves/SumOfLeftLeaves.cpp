#include <iostream>
#include "SumOfLeftLeaves.h"
int main()
{
    TreeNode* root = new TreeNode(3);
    TreeNode* rootL = new TreeNode(9);
    root->left = rootL;

    TreeNode* rootR = new TreeNode(20, new TreeNode(15), new TreeNode(7));
    root->right = rootR;

    int result = sumOfLeftLeaves(root);

    std::cout << result << std::endl;

    delete root;
}

