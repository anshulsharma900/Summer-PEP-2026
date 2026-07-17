#include<iostream>
using namespace std;

class Node{
    int val;
    Node* left;
    Node* right;
    
    Node(int val){
        this->val = val;
        this->left = nullptr;
        this->right = nullptr;
    }
};

void levelOrder(Node* root) {
    if(root == nullptr) return;
    
    // first create queue and push root and null in queue
    queue<Node*> q;
    q.push(root);
    q.push(nullptr);
    
    while(!q.empty()) {
        Node* current = q.front();
        q.pop();
        
       if(current != nullptr){
            cout << current->val << " ";
            
            if(current->left != nullptr) {
                q.push(current->left);
            }
            
            if(current->right != nullptr) {
                q.push(current->right);
            }
       }
       else if(!q.empty()) {
            cout << endl;
            q.push(nullptr);
       }
    }
}

https://leetcode.com/problems/binary-tree-level-order-traversal/submissions/2070563966/

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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> res;
        if(root==NULL) return res;

        queue<TreeNode *> q;
        q.push(root);
        while(!q.empty()){
            int n = q.size();
            vector<int> level;

            for(int i=0; i<n; i++){
                TreeNode* front = q.front();
                q.pop();
                level.push_back(front->val);
                if(front->left) q.push(front->left);
                if(front->right) q.push(front->right);
            }
            res.push_back(level);
        }
        return res;
    
    }
};