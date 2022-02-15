    // @Author: RAUNAQ SINGH
    void findSize(Node*root,int &treeSize){
        if(root==NULL){
            return;
        }
        findSize(root->left,treeSize);
        treeSize++;
        findSize(root->right,treeSize);
    }
    void findAns(Node*root,int &counter,int target,int &ans){
        if(root==NULL){
            return;
        }
        findAns(root->left,counter,target,ans);
        if(counter==target){
            ans=root->data;
        }
        counter++;
        findAns(root->right,counter,target,ans);
    }
    int kthLargest(Node *root, int k)
    {
        if(root==NULL){
            return -1;
        }
        int treeSize=0,counter=0,target,ans;
        findSize(root,treeSize);
        if(k>treeSize){
            return -1;
        }
        target=treeSize-k;
        findAns(root,counter,target,ans);
        return ans;
    }
