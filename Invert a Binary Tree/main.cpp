    //@Author: RAUNAQ SINGH
    //Concept used: Same as "Mirror of a tree", "Invert a Binary Tree" is just a fancy name for "Conver a Binary tree to its mirror"
    //https://practice.geeksforgeeks.org/problems/mirror-tree/1
    TreeNode* invertTree(TreeNode* root) {
        if(root==NULL) return NULL;
        TreeNode*temp=root->left;
        root->left=root->right;
        root->right=temp;
        invertTree(root->left);
        invertTree(root->right);
        return root;
    }
