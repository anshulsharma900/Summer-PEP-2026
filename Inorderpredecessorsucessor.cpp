https://www.geeksforgeeks.org/problems/predecessor-and-successor/1 

/* BST Node
class Node {
   public:
    int data;
    Node *left;
    Node *right;

    Node(int x){
        data = x;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
  public:
  
  Node* findPred(Node* root, int key){
      Node* pred = NULL;
      while(root){
          if(key>root->data){
              pred = root;
              root=root->right;
          }
          else{
              root = root->left;
          }
      }
      return pred;
  }
  
  Node* findSuc(Node* root, int key){
      Node* suc = NULL;
      while(root){
          if(key<root->data){
              suc = root;
              root=root->left;
          }
          else{
              root=root->right;
          }
      }
      return suc;
  }
    vector<Node*> findPreSuc(Node* root, int key) {
        // code here
        Node* pre = findPred(root,key);
        Node* suc = findSuc(root,key);
        return {pre,suc};
    }
}; 