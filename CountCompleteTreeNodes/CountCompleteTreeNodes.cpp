#include <iostream>
#include "CompleteTreeNodes.h"

int main()
{
    TreeNode* n4 = new TreeNode(4);
    TreeNode* n5 = new TreeNode(5);
    TreeNode* n6 = new TreeNode(6);
    TreeNode* n2 = new TreeNode(2, n4, n5);
    TreeNode* n3 = new TreeNode(3, n6, nullptr);
    TreeNode* root = new TreeNode(1, n2, n3);
    
    std::cout << countNodes(root) << std::endl;

    delete n4;
    delete n5;
    delete n6;
    delete n2;
    delete n3;
    delete root;
}

