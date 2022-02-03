int height(Node*root,int& ans){
        if(root==NULL){
            return 0;
        }
        int lheight=height(root->left,ans);
        int rheight=height(root->right,ans);
        ans=max(ans,lheight+rheight+1);
        return max(lheight,rheight)+1;
    }
    int diameter(Node* root) {
        if(root==NULL){
            return 0;
        }
        int ans=INT_MIN;
        height(root,ans);
        return ans;
    }
