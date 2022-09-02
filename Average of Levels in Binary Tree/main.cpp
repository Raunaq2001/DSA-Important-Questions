    //Leetcode question # 637
    //@Author: RAUNAQ SINGH
    /*Concept Used: Just do a level order traversal and save the eleemnts of each level in a temporary vector
                    then when all the nodes of the level are over simply sum up all the elements of the
                    temporary vector divide it by the number of elements in the vector ans add it to the
                    ans vector. Do this for all levels and then return the ans vector.
    */
    vector<double> averageOfLevels(TreeNode* root) {
        if(root==NULL) return {};
        vector<double> ans;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int n=q.size();
            double res=0.0;
            vector<int> v;
            for(int i=0;i<n;i++){
                TreeNode*temp=q.front();
                q.pop();
                v.push_back(temp->val);
                if(temp->left!=NULL) q.push(temp->left);
                if(temp->right!=NULL) q.push(temp->right);
            }
            for(int i=0;i<v.size();i++) res=res+v[i];
            res=res/v.size();
            ans.push_back(res);
        }
        return ans;
    }
