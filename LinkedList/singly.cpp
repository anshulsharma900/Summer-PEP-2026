#include<iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void delAtEnd(Node* &head){
    if(head==NULL){
        return;
    }
    if(head->next==NULL){
        delete head;
        head = NULL;
        return;
    }

    Node* temp = head;
    while(temp->next->next != NULL){
        temp = temp->next;
    }
    delete temp->next;
    temp->next = NULL;
}

void delAtBegin(Node* &head){
    if(head==NULL){
        return;
    }

    Node* temp = head;
    head = head->next;
    delete temp;

}

void delAtPos(Node* &head, int pos){
    if(head==NULL){
        return;
    }
    if(pos==1){
        delAtBegin(head);
        return;
    }

    Node* temp = head;
    for(int i=1; i<pos-1; i++){
        temp = temp->next;
    }
    Node* toDelete = temp->next;
    temp->next = temp->next->next;
    delete toDelete;

}


int main(){
    Node* head = NULL;

}