#include<iostream>
using namespace std;

bool isPresent(int arr[][3], int target, int row, int col){
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(arr[i][j]==target){
                return true;
            }
        }
    }
    return false;
}

// caalculate row sum of 2d array
// void calSum(int arr[][3], int row,int col){
//     for(int i=0; i<3; i++){
//         int sum = 0;
//         for(int j=0 ;j<3; j++){
//             sum += arr[i][j];
//         }
//         cout << "Sum of row " << i << ": " << sum << endl;
//     }
// }

// print value of max sum and its row index 
 int maxSum(int arr[][3], int row, int col){
    int max = 0;
    int rowIndex = -1;
    for(int i=0; i<row; i++){
        int sum = 0;
        for(int j=0; j<col; j++){
            sum += arr[i][j];
        }
        if(sum>max){
            max = sum;
            rowIndex = i;
        }
    }
    cout << "Max sum is: " << max << " at row index: " << rowIndex << endl;

 }

//  traversal of 2d array

 int  traversal(int arr[][3], int r, int c){
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
 }

 int wavePrint(int arr[][3], int row, int col){
    for(int c=0; c<col; c++){
        if(c%2==0){
            for(int r=0; r<3; r++){
                cout<<arr[r][c]<<"  ";
            }
        }
        else{
            for(int r=2; r>=0; r--){
                cout<<arr[r][c]<<" ";
            }
        }
    }
 }

 

int main(){

    int arr[3][3] = {{1,2,3},
                    {4,5,6},
                    {7,8,9}};

    isPresent(arr, 5, 3,3);
    // calSum(arr, 3, 3);
    maxSum(arr, 3, 3);
    traversal(arr, 3, 3);
}