#include<iostream>
using namespace std;

bool binarysearch(int arr,int start, int end, int key){
    if(start>end) return false;

    int mid = (start+end)/2;

    if(arr[mid]==key) return true;
    else if(arr[mid]<key){
        return binarysearch(arr,mid+1, end, key);
    } 
    else{
        return binarysearch(arr, start, mid-1, key);
    }
}