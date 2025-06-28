#include "pch.h"
#include "TreeNode.h"


// Dummy cpp - define the constructor (not inline)
TreeNode::TreeNode()
    : val(0), left(nullptr), right(nullptr) {
}

TreeNode::TreeNode(int x)
    : val(x), left(nullptr), right(nullptr) {
}

TreeNode::TreeNode(int x, TreeNode* left, TreeNode* right)
    : val(x), left(left), right(right) {
}
