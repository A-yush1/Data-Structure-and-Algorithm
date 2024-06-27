using namespace std;
#include<bits/stdc++.h>
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* buildTree(int start, int end, vector<int> &sortedNodesVal)
    {
        if(start > end)
        return NULL;

        int mid = start + (end - start) / 2;
        TreeNode *root = new TreeNode(sortedNodesVal[mid]);
        root->left = buildTree(start, mid - 1, sortedNodesVal);
        root->right = buildTree(mid + 1, end, sortedNodesVal);

        return root;
    }
    void inorderTraversal(TreeNode *root, vector<int> &sortedNodesVal)
    {
        if(root == NULL)
        return;

        inorderTraversal(root->left, sortedNodesVal);
        sortedNodesVal.push_back(root->val);
        inorderTraversal(root->right, sortedNodesVal);
    }
    TreeNode* balanceBST(TreeNode* root) {
        vector<int> sortedNodesVal;
        inorderTraversal(root, sortedNodesVal);

        for(int i=0; i<sortedNodesVal.size(); i++)
        cout<<sortedNodesVal[i]<<"* ";

        cout<<"\n";
        return buildTree(0, sortedNodesVal.size() - 1, sortedNodesVal);



    }
};