// @Author: RAUNAQ SINGH
void formulateBST(Node*root,vector<int> &v){
    if(root==NULL){
        return;
    }
    formulateBST(root->left,v);
    v.push_back(root->data);
    formulateBST(root->right,v);
}
int getCount(Node *root, int l, int h)
{
    if(root==NULL){
        return -1;
    }
    vector<int> v;
    int counter=0;
    formulateBST(root,v);
    for(int i=0;i<v.size();i++){
        if(v[i]>= l && v[i]<=h){
            counter++;
        }
    }
    return counter;
}
