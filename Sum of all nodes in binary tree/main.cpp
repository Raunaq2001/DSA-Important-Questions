#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node*left;
    Node*right;
    Node(int num){
        this->data=num;
        this->left=this->right=NULL;
    }
};
Node* addNode(int num){
    Node* temp=new Node(num);
    return temp;
}
void display(Node* root){
    if(root==NULL){
        return;
    }
    display(root->left);
    cout<<root->data<<" ";
    display(root->right);
}
int sumTree(Node*root){
    if(root==NULL){
        return 0;
    }
    queue<Node*> q;
    q.push(root);
    int sum=0;
    while(q.empty()==false){
        Node*temp=q.front();
        q.pop();
        sum=sum+temp->data;
        if(temp->left!=NULL){
            q.push(temp->left);
        }
        if(temp->right!=NULL){
            q.push(temp->right);
        }
    }
    return sum;
}
int treeSum(Node*root){
    if(root==NULL){
        return 0;
    }
    return (root->data+treeSum(root->left)+treeSum(root->right));
}
int main()
{
    Node*root=addNode(1);
    root->left=addNode(2);
    root->right=addNode(3);
    root->left->left=addNode(4);
    root->left->right=addNode(5);
    root->right->left=addNode(6);
    root->right->right=addNode(7);
    int sum=sumTree(root);
    cout<<"Sum of the given tree = "<<sum<<endl;
    int Sum=treeSum(root);
    cout<<"Sum of the given tree = "<<Sum<<endl;
    return 0;
}
