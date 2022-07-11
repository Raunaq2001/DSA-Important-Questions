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
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//Leetcode question # 543
//https://www.youtube.com/watch?v=Toe0UQMWhjM&ab_channel=AnujBhaiya
    int height(TreeNode*root){
        if(root==NULL) return 0;
        int lheight=height(root->left);
        int rheight=height(root->right);
        return max(lheight,rheight)+1;
    }
    int diameterOfBinaryTree(TreeNode* root){
        if(root==NULL) return 0;
        int dl=diameterOfBinaryTree(root->left);
        int dr=diameterOfBinaryTree(root->right);
        int curr=height(root->left)+height(root->right);
        return max(curr,max(dl,dr));
    }
