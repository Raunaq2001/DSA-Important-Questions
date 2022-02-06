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
Node* addNode(int num){
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
void diagonalTraversal(Node*root){
    if(root==NULL){
        return;
    }
    queue<Node*> R,L;
    vector<int> ans;
    R.push(root);
    while(R.empty()==false || L.empty()==false){
        Node*node;
        if(R.empty()==false){
            node=R.front();
            R.pop();
            ans.push_back(node->data);
            if(node->right!=NULL){
                R.push(node->right);
            }
            if(node->left!=NULL){
                L.push(node->left);
            }
        }
        else{
            node=L.front();
            L.pop();
            ans.push_back(node->data);
            if(node->right!=NULL){
                R.push(node->right);
            }
            if(node->left!=NULL){
                L.push(node->left);
            }
        }
    }
    for(auto it=ans.begin();it!=ans.end();it++){
        cout<<*it<<" ";
    }
}
int main()
{
    //Test Case-1
    /*Node*root=addNode(8);
    root->left=addNode(3);
    root->right=addNode(10);
    root->left->left=addNode(1);
    root->right->left=addNode(6);
    root->right->right=addNode(14);
    root->right->left->left=addNode(4);
    root->right->left->right=addNode(7);
    root->right->right->left=addNode(13);*/
    //Test Case-2
    Node*root=addNode(1);
    root->left=addNode(2);
    root->right=addNode(3);
    root->left->left=addNode(4);
    root->left->right=addNode(5);
    diagonalTraversal(root);
    return 0;
}
