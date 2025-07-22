#pragma once

#ifdef DATASTRUCTURES_DLL
#define DATASTRUCTURES_API __declspec(dllexport)
#else
#define DATASTRUCTURES_API __declspec(dllimport)
#endif

struct DATASTRUCTURES_API TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode();
    TreeNode(int x);
    TreeNode(int x, TreeNode* left, TreeNode* right);

    ~TreeNode() {
        delete left;
        delete right;
    }
};