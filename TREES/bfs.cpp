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