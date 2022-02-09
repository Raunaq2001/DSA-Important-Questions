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
    if(hasPath(root->left,v,x) || hasPath(root->right,v,x)){
        return true;
    }
    v.pop_back();
    return false;
}
int kthAncestor(Node*root,int x,int k){
    if(root==NULL){
        return 0;
    }
    vector<int> v;
    if(hasPath(root,v,x)){
        int sizeV=v.size();
        if(k>=sizeV){
            return -1;
        }
        else{
            reverse(v.begin(),v.end());
            return v[k];
        }
    }
}
int main()
{
    Node*root=addNode(1);
    root->left=addNode(2);
    root->right=addNode(3);
    root->left->left=addNode(4);
    root->left->right=addNode(5);
    cout<<"Kth acnestor of node = "<<kthAncestor(root,4,1);
    return 0;
}
