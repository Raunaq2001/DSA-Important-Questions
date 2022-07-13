//https://www.youtube.com/watch?v=SXKAD2svfmI&ab_channel=takeUforward
Node* findSuc(Node*root,int key){
    Node* successor=NULL;
    while(root!=NULL){
        if(root->key<=key){
            root=root->right;
        }
        else{
            successor=root;
            root=root->left;
        }
    }
    return successor;
}
Node* findPre(Node*root,int key){
    Node* predecessor=NULL;
    while(root!=NULL){
        if(root->key>=key){
            root=root->left;
        }
        else{
            predecessor=root;
            root=root->right;
        }
    }
    return predecessor;
}
void findPreSuc(Node* root, Node*& pre, Node*& suc, int key)
{
    if(root==NULL) return;
    suc=findSuc(root,key);
    pre=findPre(root,key);
}
