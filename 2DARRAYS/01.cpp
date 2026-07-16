#include<iostream>
using namespace std;

// void dummy(int arr[][4]){
    
    
// }

int main(){

    int arr[3][4] = {{1,2,3,4},
                    {5,6,7,8},
                    {9,10,11,12}};
    
    // row wise inputs

    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            // cin>>arr[i][j];
        }
    }

    // column wise inputs
    for(int i=0; i<4; i++){
        for(int j=0; j<3; j++){
            // cin>>arr[j][i];
        }
    }

    // print values of array
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    // print all elements in even columns
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j=j+2){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    // print all elements in odd rows
    for(int i=0; i<3; i+=2){
        for(int j=0; j<4; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

}