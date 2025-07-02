#include <iostream>
#include "BinaryTreePaths.h"

int main()
{
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->right = new TreeNode(5);

    std::vector<std::string> result = binaryTreePaths(root);
    for (std::string s : result) {
        std::cout << s << std::endl;
    }
}
