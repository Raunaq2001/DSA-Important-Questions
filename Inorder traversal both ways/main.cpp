#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node*left;
    node*right;
    node(int x){
        this->data=x;
        this->left=NULL;
        this->right=NULL;
    }
};
node* addNode(int num){
    node*temp=new node(num);
    return temp;
}
void inOrder(node*root){
    if(root==NULL){
        return;
    }
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}
void Inorder(node*root){
    stack<node*> s;
    node*curr=root;
    if(root==NULL){
        return;
    }
    while(!s.empty()||curr!=NULL){
        if(curr!=NULL){
            s.push(curr);
            curr=curr->left;
        }
        else{
            curr=s.top();
            cout<<curr->data<<" ";
            s.pop();
            curr=curr->right;
        }
    }
}
int main(){
    node*root=addNode(1);
    root->left=addNode(2);
    root->left->left=addNode(4);
    root->right=addNode(3);
    root->right->left=addNode(5);
    root->right->left->left=addNode(7);
    root->right->left->right=addNode(8);
    root->right->right=addNode(6);
    Inorder(root);
    return 0;
}
