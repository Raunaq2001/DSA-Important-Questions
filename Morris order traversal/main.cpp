// @Author: RAUNAQ SINGH
//https://www.youtube.com/watch?v=80Zug6D1_r4&ab_channel=takeUforward
vector<int> inOrder(Node* root) {
        vector<int> v;
        if(root==NULL){
            return v;
        }
        Node*curr=root;
        while(curr!=NULL){
            if(curr->left==NULL){
                v.push_back(curr->data);
                curr=curr->right;
            }
            else{
                Node*temp=curr->left;
                while(temp->right!=NULL && temp->right!=curr){
                    temp=temp->right;
                }
                if(temp->right==NULL){
                    temp->right=curr;
                    /*v.push_back(curr->data); If this line is written here then it will result in preorder traversal */
                    curr=curr->left;
                }
                else{
                    temp->right=NULL;
                    v.push_back(curr->data); // If this line is written here then it will result in inorder traversal
                    curr=curr->right;
                }
            }
        }
        return v;
    }
