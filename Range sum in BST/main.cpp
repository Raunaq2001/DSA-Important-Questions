    //@Author: RAUNAQ SINGH
    //Leetcode question # 938
    /* Concept Used: Use a level order traversal and check if the incomming node lies in between the high and                        low range if it does simply add the value to a variable called ans initially initialized
                     to 0. When all the level order traversal is done simply return the ans.
    */
    int rangeSumBST(TreeNode* root, int low, int high) {
        if(root==NULL) return 0;
        int ans=0;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int n=q.size();
            for(int i=0;i<n;i++){
                TreeNode*temp=q.front();
                q.pop();
                if(temp->val>=low && temp->val<=high) ans+=temp->val;
                if(temp->left!=NULL) q.push(temp->left);
                if(temp->right!=NULL) q.push(temp->right);
            }
        }
        return ans;
    }
