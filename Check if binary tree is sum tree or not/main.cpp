/* For C++ 14 and above isLeaf() is a pre-defined function */
bool isLeaf(Node*root){
        if(root->left==NULL && root->right==NULL){
            return true;
        }
        return false;
    }
    int sumTree(Node*root){
        if(root==NULL){
            return 0;
        }
        return (root->data+sumTree(root->left)+sumTree(root->right));
    }
    bool isSumTree(Node* root)
    {
         if(root==NULL || isLeaf(root)){
             return true;
         }
         int lSum=sumTree(root->left);
         int rSum=sumTree(root->right);
         if(root->data==lSum+rSum && isSumTree(root->left) && isSumTree(root->right)){
             return true;
         }
         return false;
    }
