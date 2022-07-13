//Code Studio Question # 25
//@Author: RAUNAQ SINGH
//Concept Used: Inorder Traversal of BST gives elements in ascending order
#include<bits/stdc++.h>
void getInorder(TreeNode<int>*root,vector<int> &v){
    if(root==NULL) return;
    getInorder(root->left,v);
    v.push_back(root->val);
    getInorder(root->right,v);
}
int floorInBST(TreeNode<int> * root, int X)
{
    vector<int> v;
    getInorder(root,v);
    reverse(v.begin(),v.end());
    for(int i=0;i<v.size()-1;i++){
        if(v[i]<=X) return v[i];
    }
    return v[v.size()-1]; //If no answer is found then return the smallest value
}
