// To find the minimmum value
int minValue(Node* root) {
    if(root==NULL){
        return -1;
    }
    Node*temp=root;
    while(temp->left!=NULL){
        temp=temp->left;
    }
    return temp->data;
}
// To find the maximum value
int maxValue(Node*root){
    if(root==NULL){
        return -1;
    }
    Node*temp=root;
    while(temp->right!=NULL){
        temp=temp->right;
    }
    return temp->data;
}
