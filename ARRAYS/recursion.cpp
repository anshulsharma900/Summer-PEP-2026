#include<iostream>
using namespace std;

void print(int n){
    if(n==0) return;
    cout<<n<<endl;
    print(n-1);
}

int main(){
    int n;
    cin>>n;
    print(n);
}

// factorial of a number using recursion
int factorial(int n){
    if(n==0) return 1;
    return n*factorial(n-1);
}

// fibonacci series using recursion
int fibonacci(int n){
    if(n==0) return 0;
    if(n==1) return 1;
    return fibonacci(n-1)+fibonacci(n-2);
} 
