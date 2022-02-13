// Implementation of graph using Adjacency List
// @Author: RAUNAQ SINGH
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void addEdge(vector<int> arr[],int src,int dst){
    arr[src].push_back(dst);
    arr[dst].push_back(src);
}
void printGraph(vector<int> arr[],int vertices){
    for(int i=0;i<vertices;i++){
        for(auto x:arr[i]){
            cout<<x<<"->";
        }
        cout<<endl;
    }
}
int main()
{
    int vertices;
    cout<<"Enter the number of vertices = ";
    cin>>vertices;
    vector<int> arr[vertices];
    /*for(int i=0i<vertices;i++){
        int source;
        int destination;
        cout<<"Enter source = ";
        cin>>source;
        cout<<"Enter destination = ";
        cin>>destination;
        addEdge(arr,source,destination);
    }*/
    addEdge(arr,0,1);
    addEdge(arr,0,4);
    addEdge(arr,1,2);
    addEdge(arr,1,4);
    addEdge(arr,1,3);
    addEdge(arr,2,3);
    addEdge(arr,3,4);
    printGraph(arr,vertices);
    return 0;
}
