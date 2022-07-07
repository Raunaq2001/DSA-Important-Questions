//Code Studio question 32
//@Author: RAUNAQ SINGH
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
void print(Node*root,vector<int> &pre,vector<int> &in,vector<int> &post){
    if(root==NULL){
        return;
    }
    pre.push_back(root->data);
    print(root->left,pre,in,post);
    in.push_back(root->data);
    print(root->right,pre,in,post);
    post.push_back(root->data);
}
int main()
{
    Node*root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    root->right->left=new Node(6);
    root->right->right=new Node(7);
    vector<int> pre,in,post;
    print(root,pre,in,post);
    cout<<"Preorder Trasversal = ";
    for(auto i=pre.begin();i!=pre.end();i++){
        cout<<*i<<" ";
    }
    cout<<endl;
    cout<<"Inorder Trasversal = ";
    for(auto i=in.begin();i!=in.end();i++){
        cout<<*i<<" ";
    }
    cout<<endl;
    cout<<"Postorder Trasversal = ";
    for(auto i=post.begin();i!=post.end();i++){
        cout<<*i<<" ";
    }
    return 0;
}
