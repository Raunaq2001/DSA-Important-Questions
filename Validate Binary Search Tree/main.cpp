//Leetcode question # 98
//Concept used: Inorder Traversal of any BST will be in sorted manner if not then it is not a BST
    void getInorder(TreeNode*root,vector<int> &v){
        if(root==NULL) return;
        getInorder(root->left,v);
        v.push_back(root->val);
        getInorder(root->right,v);
    }
    bool isValidBST(TreeNode* root) {
        if(root==NULL || (root->left==NULL && root->right==NULL)) return true;
        vector<int> v;
        getInorder(root,v);
        for(int i=0;i<v.size()-1;i++){
            if(v[i]>=v[i+1]) return false;
        }
        return true;
    }
