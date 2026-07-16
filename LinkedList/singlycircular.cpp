#include<iostream>
using namespace std;

// circular linked list 
class Node {
private:
    int data;
    Node* next;
public:
    Node(int value) {
        data = value;
        next = NULL;
    }
};

// insertion at beginning , nth pos

void insertAtEnd(Node* &head, int val){
    Node* node = new Node(val);

    Node* temp = head;
    if(head==NULL){
        head = node;
        node->next = head;
        return;
    }
    while(temp->next !=head){
        temp = temp->next;
    }
    temp->next = node;
    node->next = head;

}

// deletion at end , nth pos 
void delAtBeg(Node* &head){
    if(head==NULL){
        return;
    }
    if(head->next == head){
        delete head;
        head = NULL;
        return;
    }
    Node* temp = head;
    Node* toDel = head;

    while(temp->next!= head){
        temp = temp->next;
    }
    toDel = head;
    head = head->next;
    temp->next = head;
    delete toDel;
}

void printList(Node* head){
    Node* temp = head;
    do{
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    while(temp!=head);
}






