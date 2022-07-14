//Leetcode Question # 1373
//@Author: RAUNAQ SINGH
    void getInorder(TreeNode*root,vector<int> &v){
        if(root==NULL) return;
        getInorder(root->left,v);
        v.push_back(root->val);
        getInorder(root->right,v);
    }
    bool isBST(TreeNode*root){
        if(root==NULL || (root->left==NULL && root->right==NULL)) return true;
        vector<int> v;
        getInorder(root,v);
        for(int i=0;i<v.size()-1;i++){
            if(v[i]>=v[i+1]) return false;
        }
        return true;
    }
    int maxSumBST(TreeNode* root) {
        if(root==NULL) return 0;
        queue<TreeNode*> q;
        q.push(root);
        int ans=0;
        while(!q.empty()){
            int n=q.size();
            for(int i=0;i<n;i++){
                TreeNode*temp=q.front();
                q.pop();
                int sum=0;
                vector<int> v;
                if(isBST(temp)){
                    getInorder(temp,v);
                    for(int i=0;i<v.size();i++) sum=sum+v[i];
                    ans=max(ans,sum);
                }
                if(temp->left!=NULL) q.push(temp->left);
                if(temp->right!=NULL) q.push(temp->right);
            }
        }
        return ans;
    }
