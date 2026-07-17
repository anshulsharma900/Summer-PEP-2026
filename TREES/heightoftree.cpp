https://www.geeksforgeeks.org/problems/height-of-binary-tree/1 

/*
Definition for Node
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/

class Solution {
  public:
    int height(Node* root) {
        // code here
        if(root==NULL) return -1;
        
        int leftHeight = height(root->left);
        int rightHeight = height(root->right);
        
        return 1+ max(leftHeight, rightHeight);
    }
};

