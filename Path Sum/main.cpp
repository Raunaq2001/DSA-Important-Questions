    //@Author: RAUNAQ SINGH
    //Pre-requisite: Root to all leaf path (https://github.com/Raunaq2001/DSA-Important-Questions/blob/main/Print%20all%20root%20to%20leaf%20paths/main.cpp) , Root to Node path (https://github.com/Raunaq2001/DSA-Important-Questions/blob/main/Print%20path%20from%20root%20to%20a%20given%20node%20in%20a%20binary%20tree/main.cpp)
    //Leetcode question # 112
    int sum=0;
    bool isLeaf(TreeNode*root){
        if(root->left==NULL && root->right==NULL) return true;
        return false;
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root==NULL) return false;
        sum+=root->val;
        if(sum==targetSum && isLeaf(root)) return true;
        if(hasPathSum(root->left,targetSum) || hasPathSum(root->right,targetSum)) return true;
        sum-=root->val;
        return false;
    }
