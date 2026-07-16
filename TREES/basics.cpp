#include<iostream>
using namespace std;

class Node{
    int data;
    Node* left;
    Node* right;

    Node(int value){
        data = value;
        left = NULL;
        right = NULL;


    }
};
void preorder(Node* root){
    if(root==NULL) return;

    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
    
    cout<<"Trees: "<<endl;
}