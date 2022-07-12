//Leetcode question # 114
//https://takeuforward.org/data-structure/flatten-binary-tree-to-linked-list
    TreeNode*prev=NULL;
    void flatten(TreeNode* root) {
        if(root==NULL) return;
        flatten(root->right);
        flatten(root->left);
        root->right=prev;
        root->left=NULL;
        prev=root;
    }
