    //Leetocde question 814
    //https://walkccc.me/LeetCode/problems/0814
    /* Concept Used: We recursively go to each node and then check if the left child is NULL and the right child
                     is NULL and also that the value of that node is 0, if all these 3 conditions are met then
                     we return NULL i.e. pruning that node otherwise we return the root i.e. that node hasn't
                     been pruned.
    */
    TreeNode* pruneTree(TreeNode* root) {
        if(root==NULL) return NULL;
        root->left = pruneTree(root->left);
        root->right = pruneTree(root->right);
        if(root->left==NULL && root->right==NULL && root->val==0) return NULL;
        return root;
    }
