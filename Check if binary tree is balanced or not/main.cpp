int height(Node* root){
        if(root==NULL){
            return 0;
        }
        return max(height(root->left),height(root->right))+1;
    }
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
