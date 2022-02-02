#include <iostream>
using namespace std;
struct node{
    int data;
    struct node*left;
    struct node*right;
};
struct node*addValue(int num){
    struct node*temp=new node;
    temp->data=num;
    temp->left=NULL;
    temp->right=NULL;
    return temp;
};
void inOrder(struct node*root){
    if(root==NULL){
        return;
    }
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}
void preOrder(struct node*root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}
void postOrder(struct node*root){
    if(root==NULL){
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
}
int main()
{
    struct node*root=addValue(10);
    root->left=addValue(20);
    root->right=addValue(30);
    cout<<"Inorder :";
    inOrder(root);
    cout<<"\nPreorder :";
    preOrder(root);
    cout<<"\nPostorder :";
    postOrder(root);
    return 0;
}
