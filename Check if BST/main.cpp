void findNodes(Node*root,vector<int> &v){
        if(root==NULL){
            return;
        }
        findNodes(root->left,v);
        v.push_back(root->data);
        findNodes(root->right,v);
    }
    bool isBST(Node* root)
    {
        if(root==NULL){
            return false;
        }
        int flag=0;
        vector<int> v;
        findNodes(root,v);
        for(int i=0;i<v.size()-1;i++){
            if(v[i]==v[i+1] || v[i]>v[i+1]){
                flag=1;
                break;
            }
        }
        if(flag==0){
            return true;
        }
        else{
            return false;
        }
    }
