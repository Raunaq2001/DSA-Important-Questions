    //@Author: RAUNAQ SINGH
    //Algorith Used: In-Order traversal of BST produces list in increasing order
    /* Concept: Simply save the inorder traversal of the BST in a vector say 'v' now create a new root with
                value v[0], create a temp pointer pointing to it and now as we used to create the linked list
                using that way we will create the required list and every node's left will be set to NULL.
                After all has been done simply return the new root which is the required answer.
    */
    void getInorder(TreeNode*root,vector<int> &v){
        if(root==NULL) return;
        getInorder(root->left,v);
        v.push_back(root->val);
        getInorder(root->right,v);
    }
    TreeNode* increasingBST(TreeNode* root) {
        if(root==NULL) return NULL;
        vector<int> v;
        getInorder(root,v);
        TreeNode*newRoot=new TreeNode(v[0]);
        TreeNode*temp=newRoot;
        for(int i=1;i<v.size();i++){
            temp->left=NULL;
            temp->right=new TreeNode(v[i]);
            temp=temp->right;
        }
        return newRoot;
    }
