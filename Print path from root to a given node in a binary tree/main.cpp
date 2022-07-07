#include <iostream>
#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node*left;
    Node*right;
    Node(int num){
        this->data=num;
        this->left=NULL;
        this->right=NULL;
    }
};
Node*addNode(int num){
    Node*temp=new Node(num);
    return temp;
}
bool hasPath(Node*root,vector<int> &v,int x){
    if(root==NULL){
        return false;
    }
    v.push_back(root->data);
    if(root->data==x){
        return true;
    }
    if(hasPath(root->left,v,x)||hasPath(root->right,v,x)){
        return true;
    }
    v.pop_back();
    return false;
}
void printPath(Node*root,int x){
    if(root==NULL){
        return;
    }
    vector<int> v;
    if(hasPath(root,v,x)){
        for(auto it=v.begin();it!=v.end();it++){
            cout<< *it<<" ";
        }
    }
    else{
        cout<<"Path dosen't exists";
    }
}
int main()
{
    Node*root=addNode(1);
    root->left=addNode(2);
    root->right=addNode(3);
    root->left->left=addNode(6);
    root->left->right=addNode(4);
    root->left->right->left=addNode(5);
    root->right->right=addNode(7);
    printPath(root,5);
    return 0;
}
-----------------------------------------------------------------------------------------------------------------------------------------------------------------------
//Much simpler implementation
void printPath(Node*root,vector<int> &ans,int target){
    if(root==NULL) return;
    ans.push_back(root->data);
    if(root->data==target){
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
    }
    printPath(root->left,ans,target);
    printPath(root->right,ans,target);
    ans.pop_back();
}
