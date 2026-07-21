https://leetcode.com/problems/delete-node-in-a-bst/description/ 

        // step1 : find node to deleted by doing serching 
        // step2: restructure its children by preserving the order 

        // there can be three cases for deleting a node: 
        //  case1: no children - leaf node, can be deleted directly , no effect on tree
        // case2: to delete node with only left node or right node , update value of that node with left or right value then delete node 
        // case3: to delte node with both nodes, update value of node with its inorder predecessor or successor then delete that node
        
/**
 * 
 * /**
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

    TreeNode* minElement(TreeNode* node){
        while(node->left!=NULL){
            node = node->left;
        }
        return node;
    }
    TreeNode* deleteNode(TreeNode* root, int key) {
        // step1 : find node to deleted by doing serching 
        // step2: restructure its children by preserving the order 

        // there can be three cases for deleting a node: 
        //  case1: no children - leaf node, can be deleted directly , no effect on tree
        // case2: to delete node with only left node or right node , update value of that node with left or right value then delete node 
        // case3: to delete node with both nodes, update value of node with its inorder predecessor or successor then delete that node

        if(root==NULL) return NULL;

        if(key<root->val){
            root->left = deleteNode(root->left, key);
        }
        else if(key>root->val){
            root->right = deleteNode(root->right, key);
        }
        else{
            // case 1
            if(root->left==NULL){
                TreeNode* temp = root->right;
                delete root;
                return temp;
            }

            // case 2
            else if(root->right==NULL){
                TreeNode* temp = root->left;
                delete root;
                return temp;
            }

            // case 3 : find inorder succ and pred 
            TreeNode* temp = minElement(root->right);

            // copy min element value in node we have to delete
            root->val = temp->val;

            // delete the successor from BST as we already copy value 
            root->right = deleteNode(root->right, temp->val);
        }
        return root;
    }
};


