#include<iostream>
#include<list>
using namespace std;

int main(){
    int n;    
    int m;

    cout<<"Enter the number of vertices: "<<endl;
    cin>>n;
    cout<<"Enter number of edges: "<<endl;
    cin>>m;

    // to store key, vale make map of list 
    unordered_map<int, list<int>> adjList;
    cout<<"Enter edges (u,v): "<<endl;

    for(int i=0; i<n; i++){
        int u, v;
        cin>>u>>v;
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }
    cout<<"Adj list: "<<endl;

    // print the adj list
    for(auto i : adjList){
        cout<<i.first<<"->";
        for(auto j : i.second){
            cout<<j<<",";
        }
        cout<<endl;
    }
}