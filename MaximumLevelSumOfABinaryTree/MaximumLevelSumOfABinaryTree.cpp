#include <iostream>
#include "MaxLevSumBinTree.h"

int main()
{
    TreeNode* n4 = new TreeNode(-8);
    TreeNode* n3 = new TreeNode(7);
    TreeNode* n2 = new TreeNode(0);
    TreeNode* n1 = new TreeNode(7, n3, n4);
    TreeNode* root = new TreeNode(1, n1, n2);

    int ans = maxLevelSum(root);
    std::cout << ans << std::endl;

    delete root;
}
