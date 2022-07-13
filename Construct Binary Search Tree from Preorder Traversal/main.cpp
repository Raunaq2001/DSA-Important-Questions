//Leetcode question # 1008
//@Author:RAUNAQ SINGH
//Pre-requisite: Construct Binary tree from inorder and preorder (https://github.com/Raunaq2001/DSA-Important Questions/blob/main/Construct%20Tree%20from%20Inorder%20and%20Preorder/main.cpp)
//Concept Used: Ascending traversal of pre/postorder traversal of BST gives inorder traversal
    TreeNode* buildTree(vector<int> &preorder,vector<int> &inorder,map<int,int> mpp,int preStart,int preEnd,int inStart,int inEnd){
        if(preStart>preEnd || inStart>inEnd) return NULL;
        TreeNode*root=new TreeNode(preorder[preStart]);
        int elem=mpp[root->val];
        int nelem=elem-inStart;
        root->left=buildTree(preorder,inorder,mpp,preStart+1,preStart+nelem,inStart,elem-1);
        root->right=buildTree(preorder,inorder,mpp,preStart+nelem+1,preEnd,elem+1,inEnd);
        return root;
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        vector<int> inorder=preorder;
        sort(inorder.begin(),inorder.end());
        map<int,int> mpp;
        for(int i=0;i<inorder.size();i++){
            mpp[inorder[i]]=i;
        }
        int preStart=0,preEnd=preorder.size()-1;
        int inStart=0,inEnd=inorder.size()-1;
        return buildTree(preorder,inorder,mpp,preStart,preEnd,inStart,inEnd);
    }
