    // @Author: RAUNAQ SINGH
    void findSize(Node*root,int &sizeTree){
        if(root==NULL){
            return;
        }
        findSize(root->left,sizeTree);
        sizeTree++;
        findSize(root->right,sizeTree);
    }
    void kthSmallest(Node*root,int &counter,int k,int &ans){
        if(root==NULL){
            return;
        }
        kthSmallest(root->left,counter,k,ans);
        counter++;
        if(counter==k){
            ans=root->data;
        }
        kthSmallest(root->right,counter,k,ans);
    }
    int KthSmallestElement(Node *root, int k) {
        if(root==NULL){
            return -1;
        }
        int sizeTree=0,counter=0;
        findSize(root,sizeTree);
        if(k>sizeTree){
            return -1;
        }
        int ans=0;
        kthSmallest(root,counter,k,ans);
        return ans;
    }
