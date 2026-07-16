#include<iostream>
using namespace std;

class MyStack{
    int *arr;
    int top;
    int size;

    MyStack(int size){
        this->size = size;
        arr = new int[size];
        top = -1;

    }

    void push(int x){
        if(top==size-1){
            cout<<"Stack Overflow"<<endl;
            return;
        }
        top++;
        arr[top] = x;
    }
}

int main(){
    MyStack s(5);
}