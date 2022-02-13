#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void addEdge(vector<int> arr[],int src,int dst){
    arr[src].push_back(dst);
    arr[dst].push_back(src);
}
void displayGraph(vector<int> arr[],int V){
    for(int i=0;i<V;i++){
        for(auto x:arr[i]){
            cout<<x<<" ";
        }
        cout<<endl;
    }
}
void BFS(vector<int> arr[],int V,int startNode){
    bool visited[V];
    for(int i=0;i<V;i++){
        visited[i]=false;
    }
    queue<int> q;
    q.push(startNode);
    visited[startNode]=true;
    cout<<"BFS Traversal = ";
    while(q.empty()==false){
        int num=q.front();
        q.pop();
        cout<<num<<" ";
        for(auto it=arr[num].begin();it!=arr[num].end();it++){
            if(visited[*it]==false){
                visited[*it]=true;
                q.push(*it);
            }
        }
    }
}
int main()
{
    int V=5;
    vector<int> arr[V];
    addEdge(arr,0,1);
    addEdge(arr,0,4);
    addEdge(arr,1,2);
    addEdge(arr,1,3);
    addEdge(arr,1,4);
    addEdge(arr,2,3);
    addEdge(arr,3,4);
    BFS(arr,V,0);
    return 0;
}
