/* Just make the left pointer to point towards right and right pointer point towards left */
void mirror(Node* node) {
        if(node==NULL){
            return;
        }
        Node*temp=node->left;
        node->left=node->right;
        node->right=temp;
        if(node->left){
            mirror(node->left);
        }
        if(node->right){
            mirror(node->right);
        }
    }
