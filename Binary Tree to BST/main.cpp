// @Author: RAUNAQ SINGH
void getInorder(Node*root,vector<int> &in){
        if(root==NULL){
            return;
        }
        getInorder(root->left,in);
        in.push_back(root->data);
        getInorder(root->right,in);
    }
    void getTree(Node*root,vector<int> in,int &i){
        if(root==NULL){
            return;
        }
        getTree(root->left,in,i);
        root->data=in[i];
        i++;
        getTree(root->right,in,i);
    }
    Node *binaryTreeToBST (Node *root)
    {
        if(root==NULL){
            return NULL;
        }
        vector<int> in;
        int i=0;
        getInorder(root,in);
        sort(in.begin(),in.end());
        getTree(root,in,i);
        return root;
    }
