#include<iostream>
using namespace std;

int countNodes(Node* root){
    if(root==NULL) return 0;

    int x = countNodes(root->left);
    int y = countNodes(root->right);
    return x + y + 1;
}

int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    cout << "Number of nodes: " << countNodes(root) << endl;
    return 0;
}