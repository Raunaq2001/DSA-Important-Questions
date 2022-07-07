//Leetcode question # 987 OR Code Studios 6
//https://www.geeksforgeeks.org/print-binary-tree-vertical-order
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
void findMinMax(Node*root,int &minVal,int &maxVal,int hd){
    if(root==NULL){
        return;
    }
    if(hd<minVal){
        minVal=hd;
    }
    else if(hd>maxVal){
        maxVal=hd;
    }
    findMinMax(root->left,minVal,maxVal,hd-1);
    findMinMax(root->right,minVal,maxVal,hd+1);
}
void printVerticleOrder(Node*root,int lineNo,int hd){
    if(root==NULL){
        return;
    }
    if(hd==lineNo){
        cout<<root->data<<" ";
    }
    printVerticleOrder(root->left,lineNo,hd-1);
    printVerticleOrder(root->right,lineNo,hd+1);
}
void verticleOrder(Node*root){
    if(root==NULL){
        return;
    }
    int minVal=0,maxVal=0;
    findMinMax(root,minVal,maxVal,0);
    for(int i=minVal;i<=maxVal;i++){
        printVerticleOrder(root,i,0);
        cout<<endl;
    }
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
    root->right->left->right=new Node(8);
    root->right->right->right=new Node(9);
    verticleOrder(root);
    return 0;
}
-----------------------------------------------------------------------------------------------------------------------------------------------------------------------
//Leetcode Solution
    void find(TreeNode*root,int &minVal,int &maxVal,int hd){
        if(root==NULL) return;
        if(hd<minVal) minVal=hd;
        if(hd>maxVal) maxVal=hd;
        find(root->left,minVal,maxVal,hd-1);
        find(root->right,minVal,maxVal,hd+1);
    }
    void getNodes(TreeNode*root,vector<int> &ans,int lineNo,int hd){
        if(root==NULL) return;
        if(lineNo==hd) ans.push_back(root->val);
        getNodes(root->left,ans,lineNo,hd-1);
        getNodes(root->right,ans,lineNo,hd+1);
    }
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        if(root==NULL) return {};
        vector<vector<int>> ans;
        int minVal=0,maxVal=0;
        find(root,minVal,maxVal,0);
        for(int i=minVal;i<=maxVal;i++){
            vector<int> temp;
            getNodes(root,temp,i,0);
            sort(temp.begin(),temp.end());
            ans.push_back({temp});
            temp.clear();
        }
        return ans;
    }
-----------------------------------------------------------------------------------------------------------------------------------------------------------------------
//Code Studios solutions
    void find(TreeNode<int>*root,int &minVal,int &maxVal,int hd){
    if(root==NULL) return;
    if(hd<minVal) minVal=hd;
    if(hd>maxVal) maxVal=hd;
    find(root->left,minVal,maxVal,hd-1);
    find(root->right,minVal,maxVal,hd+1);
}
void getNodes(TreeNode<int>*root,vector<int> &ans,int lineNo,int hd){
    if(root==NULL) return;
    if(lineNo==hd) ans.push_back(root->data);
    getNodes(root->left,ans,lineNo,hd-1);
    getNodes(root->right,ans,lineNo,hd+1);
}
vector<int> verticalOrderTraversal(TreeNode<int> *root)
{
    if(root==NULL) return {};
    vector<int> ans;
    int minVal=0,maxVal=0;
    find(root,minVal,maxVal,0);
    for(int i=minVal;i<=maxVal;i++){
        getNodes(root,ans,i,0);
    }
    return ans;
}
