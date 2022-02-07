/* If using c++14 and higher, then isLeaf is a pre-defined function */
bool isLeaf(Node*root){
        if(root->left==NULL && root->right==NULL){
            return true;
        }
        return false;
    }
    void addLeft(Node*root,vector<int> &ans){
        Node*curr=root->left;
        while(curr!=NULL){
            if(!isLeaf(curr)){
                ans.push_back(curr->data);
            }
            if(curr->left!=NULL){
                curr=curr->left;
            }
            else{
                curr=curr->right;
            }
        }
    }
    void addLeaf(Node*root,vector<int> &ans){
        if(isLeaf(root)){
            ans.push_back(root->data);
        }
        if(root->left!=NULL){
            addLeaf(root->left,ans);
        }
        if(root->right!=NULL){
            addLeaf(root->right,ans);
        }
    }
    void addRight(Node*root,vector<int> &ans){
        vector<int> temp;
        Node*curr=root->right;
        while(curr){
            if(!isLeaf(curr)){
                temp.push_back(curr->data);
            }
            if(curr->right!=NULL){
                curr=curr->right;
            }
            else{
                curr=curr->left;
            }
        }
        for(int i=temp.size()-1;i>=0;i--){
            ans.push_back(temp[i]);
        }
    }
    vector <int> boundary(Node *root)
    {
        if(root==NULL){
            return {};
        }
        vector<int> ans;
        if(!isLeaf(root)){
            ans.push_back(root->data);
        }
        addLeft(root,ans);
        addLeaf(root,ans);
        addRight(root,ans);
        return ans;
    }
