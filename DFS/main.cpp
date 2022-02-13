#include<iostream>
#include<bits/stdc++.h>
bool visited[5];
using namespace std;
void addEdge(vector<int> arr[],int src,int dst){
    arr[src].push_back(dst);
    arr[dst].push_back(src);
}
void displayTree(vector<int> arr[],int V){
    for(int i=0;i<V;i++){
        for(auto x: arr[i]){
            cout<<x<<" ";
        }
        cout<<endl;
    }
}
void DFS(vector<int> arr[],int startNode){
    visited[startNode]=true;
    cout<<startNode<<" ";
    for(auto it=arr[startNode].begin();it!=arr[startNode].end();it++){
        if(visited[*it]);
        else{
            DFS(arr,*it);
        }
    }
}
int main()
{
    for(int i=0;i<5;i++){
        visited[i]=false;
    }
    int V=5;
    vector<int> arr[V];
    addEdge(arr,0,1);
    addEdge(arr,0,4);
    addEdge(arr,1,2);
    addEdge(arr,1,3);
    addEdge(arr,1,4);
    addEdge(arr,3,2);
    addEdge(arr,3,4);
    DFS(arr,0);
    return 0;
}
