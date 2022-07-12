//Leetcode question # 700
//@Author: RAUNAQ SINGH
//Concept used: Level Order Traversal
    TreeNode* searchBST(TreeNode* root, int val) {
        if(root==NULL) return NULL;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int n=q.size();
            for(int i=0;i<n;i++){
                TreeNode*temp=q.front();
                q.pop();
                if(temp->val==val) return temp;
                if(temp->left!=NULL) q.push(temp->left);
                if(temp->right!=NULL) q.push(temp->right);
            }
        }
        return NULL;
    }
