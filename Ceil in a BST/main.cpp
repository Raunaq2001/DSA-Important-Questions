//Code Studio # 27
//@Author: RAUNAQ SINGH
void getInorder(BinaryTreeNode<int> *root,vector<int> &v){
    if(root==NULL) return;
    getInorder(root->left,v);
    v.push_back(root->data);
    getInorder(root->right,v);
}
int findCeil(BinaryTreeNode<int> *root, int x){
    vector<int> v;
    getInorder(root,v);
    for(int i=0;i<v.size();i++){
        if(v[i]>=x) return v[i];
    }
    return -1;
}
