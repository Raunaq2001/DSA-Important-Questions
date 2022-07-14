//Leetcode Question # 173
//@Author: RAUNAQ SINGH
    vector<int> v;
    int i=0;
    void getInorder(TreeNode*root,vector<int> &v){
        if(root==NULL) return;
        getInorder(root->left,v);
        v.push_back(root->val);
        getInorder(root->right,v);
    }
    BSTIterator(TreeNode* root) {
        getInorder(root,v);
    }
    int next() {
        int ans=v[i];
        i++;
        return ans;
    }

    bool hasNext() {
        int n=v.size();
        if(i<n) return true;
        return false;
    }
