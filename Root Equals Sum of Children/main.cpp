    //Leetcode question # 2236
    //@Author RAUNAQ SINGH
    bool checkTree(TreeNode* root) {
        if(root->val==root->left->val+root->right->val) return true;
        return false;
    }
