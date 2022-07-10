//Leetocde question # 124
//https://takeuforward.org/data-structure/maximum-sum-path-in-binary-tree
    int findMaxPathSum(TreeNode *root,int &maxi){
        if(root==NULL) return 0;
        int lpath=max(0,findMaxPathSum(root->left,maxi));
        int rpath=max(0,findMaxPathSum(root->right,maxi));
        int val=root->val;
        maxi=max(maxi,lpath+rpath+val);
        return max(lpath,rpath)+val;
    }
    int maxPathSum(TreeNode* root) {
        if(root==NULL) return 0;
        int maxi=INT_MIN;
        findMaxPathSum(root,maxi);
        return maxi;
    }
