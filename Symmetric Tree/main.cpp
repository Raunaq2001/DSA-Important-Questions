//Leetcode question # 101
//@Author: RAUNAQ SINGH
    bool equality(TreeNode*p,TreeNode*q){
        if(p==NULL && q==NULL) return true;
        if(p==NULL || q==NULL) return false;
        if(p->val!=q->val) return false;
        return equality(p->left,q->right) && equality(p->right,q->left);
    }
    bool isSymmetric(TreeNode* root) {
        if(root==NULL) return false;
        if(root->left==NULL && root->right==NULL) return true;
        TreeNode*p=root->left,*q=root->right;
        if(p==NULL || q==NULL) return false;
        if(p->val!=q->val) return false;
        bool check=equality(p,q);
        return check;
    }
