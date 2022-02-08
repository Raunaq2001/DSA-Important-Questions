/* @Author: RAUNAQ SINGH*/
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
bool isLeaf(Node*root){
    if(root->left==NULL && root->right==NULL){
        return true;
    }
    return false;
}
void printPath(Node*root,vector<int> &v){
    if(root==NULL){
        return;
    }
    v.push_back(root->data);
    if(isLeaf(root)){
        for(auto it=v.begin();it!=v.end();it++){
            cout<<*it<<"->";
        }
        cout<<endl;
    }
    printPath(root->left,v);
    printPath(root->right,v);
    v.pop_back();
    return;
}
void pathFinder(Node*root){
    if(root==NULL){
        return;
    }
    vector<int> v;
    printPath(root,v);
}
int main()
{
    Node*root=addNode(10);
    root->left=addNode(8);
    root->right=addNode(2);
    root->left->left=addNode(3);
    root->left->right=addNode(5);
    root->right->left=addNode(2);
    pathFinder(root);
    return 0;
}
