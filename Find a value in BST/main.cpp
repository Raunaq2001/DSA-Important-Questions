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
Node*createNode(int num){
    Node*temp=new Node(num);
    return temp;
}
Node*insertNode(Node*root,int num){
    if(root==NULL){
        return createNode(num);
    }
    else if(num>root->data){
        root->right=insertNode(root->right,num);
    }
    else{
        root->left=insertNode(root->left,num);
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
bool searchTree(Node*root,int num){
    if(root==NULL){
        return false;
    }
    if(root->data==num){
        return true;
    }
    if(num>root->data){
        return searchTree(root->right,num);
    }
    else{
        return searchTree(root->left,num);
    }
}
int main()
{
    Node*root=NULL;
    root=insertNode(root,8);
    root=insertNode(root,3);
    root=insertNode(root,10);
    root=insertNode(root,1);
    root=insertNode(root,6);
    root=insertNode(root,14);
    root=insertNode(root,4);
    root=insertNode(root,7);
    root=insertNode(root,13);
    display(root);
    cout<<endl;
    cout<<"Finding 1 in the tree = "<<searchTree(root,1);
    cout<<endl;
    cout<<"Finding 26 in the tree = "<<searchTree(root,26);
    return 0;
}
