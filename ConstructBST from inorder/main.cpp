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
void display(Node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    display(root->left);
    display(root->right);
}
void getPreorder(Node*root,vector<int> &preOrder){
    if(root==NULL){
        return;
    }
    preOrder.push_back(root->data);
    getPreorder(root->left,preOrder);
    getPreorder(root->right,preOrder);
}
void getInorder(vector<int> pre,vector<int> &in){
    sort(pre.begin(),pre.end());
    for(int i=0;i<pre.size();i++){
        in.push_back(pre[i]);
    }
}
Node* getTree(vector<int> pre,vector<int> in,int inStart,int inEnd,int &preIndex,unordered_map<int,int> &mpp){
    if(inStart<inEnd){
        return NULL;
    }
    int curr=preIndex;
    preIndex++;
    Node*temp=new Node(curr);
    if(inStart==inEnd){
        return temp;
    }
    int inIndex=mpp[curr];
    temp->left=getTree(pre,in,inStart,inIndex-1,preIndex,mpp);
    temp->right=getTree(pre,in,inIndex+1,inEnd,preIndex,mpp);
    return temp;
}
Node*constructTree(vector<int> pre){
    unordered_map<int,int> mpp;
    vector<int> in;
    getInorder(pre,in);
    for(int i=0;i<pre.size();i++){
        mpp[in[i]]=i;
    }
    int preIndex=0;
    return getTree(in,pre,0,in.size()-1,preIndex,mpp);
}
int main()
{
    Node*root=NULL;
    root=addNode(root,10);
    root=addNode(root,5);
    root=addNode(root,40);
    root=addNode(root,1);
    root=addNode(root,7);
    root=addNode(root,50);
    vector<int> preOrder;
    getPreorder(root,preOrder);
    Node* newRoot=constructTree(preOrder);

    cout<<endl;
    display(newRoot);
    return 0;
}
