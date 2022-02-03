//Function to find the height of a binary tree.
    int height(struct Node* node){
        if(node==NULL){
            return 0;
        }
        else{
            int lheight=height(node->left);
            int rheight=height(node->right);
            return max(lheight,rheight)+1;
        }
    }
