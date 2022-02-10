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
Node* createNode(int num){
    Node*temp=new Node(num);
    return temp;
}
Node* insertNode(Node*root,int num){
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
Node*inorderSuccessor(Node*root){
    Node*temp=root;
    while(temp->left!=NULL){
        temp=temp->left;
    }
    return temp;
}
Node* deleteNode(Node*root,int num){
    if(root==NULL){
        return NULL;
    }
    else if(num>root->data){
        root->right=deleteNode(root->right,num);
    }
    else if(num<root->data){
        root->left=deleteNode(root->left,num);
    }
    else{
        if(root->left==NULL && root->right==NULL){
            delete root;
            root=NULL;
        }
        else if(root->left==NULL){
            Node*temp=root;
            root=root->right;
            delete(temp);
        }
        else if(root->right==NULL){
            Node*temp=root;
            root=root->left;
            delete(temp);
        }
        else{
            Node*temp=inorderSuccessor(root->right);
            root->data=temp->data;
            root->right=deleteNode(root->right,temp->data);
        }
    }
    return root;
}
int main()
{
    Node*root=NULL;
    root=insertNode(root,20);
    root=insertNode(root,8);
    root=insertNode(root,22);
    root=insertNode(root,4);
    root=insertNode(root,12);
    root=insertNode(root,50);
    root=insertNode(root,1);
    root=insertNode(root,10);
    root=insertNode(root,14);
    display(root);
    cout<<endl;
    root=deleteNode(root,1);
    root=deleteNode(root,50);
    root=deleteNode(root,12);
    display(root);
    return 0;
}
