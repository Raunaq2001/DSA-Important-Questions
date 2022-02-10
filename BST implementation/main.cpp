#include <iostream>
#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node*left;
    Node*right;
};
// To create a node
Node* createNode(int num){
    Node*temp=new Node();
    temp->data=num;
    temp->left=temp->right=NULL;
    return temp;
}
// To add a node
Node* addNode(Node*root,int num){
    if(root==NULL){
        return createNode(num);
    }
    else if(num>root->data){
        root->right=addNode(root->right,num);
    }
    else{
        root->left=addNode(root->left,num);
    }
    return root;
}
// To print
void display(Node*root){
    if(root==NULL){
        return;
    }
    display(root->left);
    cout<<root->data<<" ";
    display(root->right);
}
// To search for a key in the tree
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
    root=addNode(root,40);
    root=addNode(root,30);
    root=addNode(root,60);
    root=addNode(root,65);
    root=addNode(root,70);
    display(root);
    cout<<endl;
    cout<<"Search for ke 40 yields = "<<searchTree(root,40)<<endl;
    cout<<"Search for key 26 yields  = "<<searchTree(root,26);
    return 0;
}
