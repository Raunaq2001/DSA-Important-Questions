// @Author: RAUNAQ SINGH
#include<iostream>
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
Node* createNode(int num){
    Node*temp=new Node(num);
    return temp;
}
Node* createTree(Node*root,int num){
    if(root==NULL){
        return createNode(num);
    }
    else if(num>root->data){
        root->right=createTree(root->right,num);
    }
    else{
        root->left=createTree(root->left,num);
    }
    return root;
}
void display(Node*root){
    if(root==NULL){
        return;
    }
    display(root->left);
    cout<<root->data<<" ";
    display(root->right);
}
void getInorder(Node*root,vector<int> &v){
    if(root==NULL){
        return;
    }
    getInorder(root->left,v);
    v.push_back(root->data);
    getInorder(root->right,v);
}
Node* mergeTree(Node*root1,Node*root2){
    vector<int> v;
    Node* mergeBST=NULL;
    if(root1==NULL){
        getInorder(root2,v);
        for(int it=0;it<v.size();it++){
            mergeBST=createTree(mergeBST,v[it]);
        }
        return mergeBST;
    }
    if(root2==NULL){
        getInorder(root1,v);
        for(int it=0;it<v.size();it++){
            mergeBST=createTree(mergeBST,v[it]);
        }
    }
    else{
        getInorder(root1,v);
        getInorder(root2,v);
        sort(v.begin(),v.end());
        for(int it=0;it<v.size();it++){
            mergeBST=createTree(mergeBST,v[it]);
        }
    }
    return mergeBST;
}
int main()
{
    Node*root1=NULL,*root2=NULL,*root3=NULL;
    root1=createTree(root1,1);
    root1=createTree(root1,3);
    root1=createTree(root1,5);
    root2=createTree(root2,4);
    root2=createTree(root2,2);
    root2=createTree(root2,6);
    root3=mergeTree(root1,root2);
    display(root3);
    return 0;
}
