#include <iostream>
#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node*left=NULL;
    Node*right=NULL;
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
void display(Node*root){
    if(root==NULL){
        return;
    }
    display(root->left);
    cout<<root->data<<" ";
    display(root->right);
}
int sum(Node*root,int &ans){
    if(root==NULL){
        return 0;
    }
    int currSum=root->data+sum(root->left,ans)+sum(root->right,ans);
    ans=max(ans,currSum);
    return currSum;
}
int sumTree(Node*root){
    if(root==NULL){
        return 0;
    }
    int ans=INT_MIN;
    sum(root,ans);
    return ans;
}
int main()
{
    Node*root=addNode(1);
    root->left=addNode(-2);
    root->right=addNode(3);
    root->left->left=addNode(4);
    root->left->right=addNode(5);
    root->right->left=addNode(-6);
    root->right->right=addNode(2);
    int maxSum=sumTree(root);
    cout<<maxSum<<" ";
    return 0;
}
