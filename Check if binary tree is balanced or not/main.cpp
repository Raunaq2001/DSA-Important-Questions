int height(Node* root){
        if(root==NULL){
            return 0;
        }
        return max(height(root->left),height(root->right))+1;
    }
//Reccursive approach
    bool isBalanced(Node *root)
    {
        if(root==NULL){
            return true;
        }
        int lheight=height(root->left);
        int rheight=height(root->right);
        if(abs(lheight-rheight)<=1 && isBalanced(root->left) && isBalanced(root->right)){
            return true;
        }
        else{
            return false;
        }
    }
//Iterative Approach
    //Leetcode question # 110
    //Approach used: Level Order Traversal
    //@Author: RAUNAQ SINGH
    int height(TreeNode*root){
        if(root==NULL){
            return 0;
        }
        return max(height(root->left),height(root->right))+1;
    }
    bool isBalanced(TreeNode* root){
        if(root==NULL) return false;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            TreeNode*temp=q.front();
            q.pop();
            int lheight=height(temp->left);
            int rheight=height(temp->right);
            if(abs(lheight-rheight)>1) return false;
            if(temp->left!=NULL) q.push(temp->left);
            if(temp->right!=NULL) q.push(temp->right);
        }
        return true;
    }
