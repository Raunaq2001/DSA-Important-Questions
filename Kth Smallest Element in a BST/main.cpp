//Leetcode Question # 230
//@Author: RAUNAQ SINGH
//Concept Used: Get the inorder traversal of the tree, store it in a vector and then
    void getInorder(TreeNode*root,vector<int> &v){
        if(root==NULL) return;
        getInorder(root->left,v);
        v.push_back(root->val);
        getInorder(root->right,v);
    }
    int kthSmallest(TreeNode* root, int k) {
        vector<int> v;
        getInorder(root,v);
        return v[k-1];
    }
