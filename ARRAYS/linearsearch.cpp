#include<iostream>
using namespace std;

bool linearsearch(int arr[], int size, int key){
    if(size==0) return false;
    if(arr[0]==key) return true;

    else{
        return linearsearch(arr+1, size-1, key);
    }
}

int main(){

}