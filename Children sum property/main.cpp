//Code Studio question # 54
//https://www.youtube.com/watch?v=fnmisPM6cVo&ab_channel=takeUforward
void changeTree(BinaryTreeNode < int > * root) {
    if(root==NULL) return;
    int child=0;
    if(root->left!=NULL) child=child+root->left->data;
    if(root->right!=NULL) child=child+root->right->data;
    if(child>=root->data) root->data=child;
    else{
        if(root->left) root->left->data=root->data;
        if(root->right!=NULL) root->right->data=root->data;
    }
    changeTree(root->left);
    changeTree(root->right);
    int tot=0;
    if(root->left!=NULL) tot=tot+root->left->data;
    if(root->right!=NULL) tot=tot+root->right->data;
    if(root->left!=NULL || root->right!=NULL) root->data=tot;
}
