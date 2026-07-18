// BST : every node has atlost 2 children 
// For every child node, the left child is less than the parent node and the right child is greater than the parent node
// This property is true for every node in the tree

Search in BST
https://leetcode.com/problems/search-in-a-binary-search-tree/description/ 

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
    TreeNode* searchBST(TreeNode* root, int val) {
        if(root==NULL || root->val==val) return root;
        if(val<root->val) return searchBST(root->left, val);
        return searchBST(root->right, val);
    }
};