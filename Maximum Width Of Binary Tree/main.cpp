//Leetcode question # 662
//https://takeuforward.org/data-structure/maximum-width-of-a-binary-tree
    int widthOfBinaryTree(TreeNode* root) {
        if(root==NULL) return 0;
        int ans=0;
        queue<pair<TreeNode*,int>> q;
        q.push({root,0});
        while(!q.empty()){
            int n=q.size();
            int currDepth=q.front().second;
            int leftMost,rightMost;
            for(int i=0;i<n;i++){
                auto it=q.front();
                q.pop();
                TreeNode*temp=it.first;
                long long depth=it.second-currDepth;
                if(i==0) leftMost=depth;
                if(i==n-1) rightMost=depth;
                if(temp->left!=NULL) q.push({temp->left,2*depth+1});
                if(temp->right!=NULL) q.push({temp->right,2*depth+2});
            }
            ans=max(ans,rightMost-leftMost+1);
        }
        return (int)ans;
    }
