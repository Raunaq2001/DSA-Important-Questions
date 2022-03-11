//@Author: RAUNAQ SINGH
// https://leetcode.com/problems/same-tree/
bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p==NULL && q==NULL){
            return true;
        }
        if(p==NULL || q==NULL){
            return false;
        }
        else if(p->val == q->val){
            if(isSameTree(p->left,q->left) && isSameTree(p->right,q->right)){
                return true;
            }
        }
        return false;
    }
