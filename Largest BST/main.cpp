    // @Author: RAUNAQ SINGH
    int sizeBST(Node*root){
        if(root==NULL){
            return 0;
        }
        else{
            return (sizeBST(root->left)+sizeBST(root->right)+1);
        }
    }
    // To get the elements of the BST
    void getNodes(Node*root,vector<int> &v){
        if(root==NULL){
            return;
        }
        getNodes(root->left,v);
        v.push_back(root->data);
        getNodes(root->right,v);
    }
    // To check if it is BST or not
    bool isBST(Node*root){
        if(root==NULL){
            return {};
        }
        vector<int> v;
        getNodes(root,v);
        for(int i=0;i<v.size()-1;i++){
            if(v[i]>=v[i+1]){
                return false;
            }
        }
        return true;
    }
    // To find the largest BST
    int largestBst(Node *root)
    {
    	if(root==NULL){
    	    return -1;
    	}
    	if(isBST(root)){
    	    return sizeBST(root);
    	}
    	else{
    	    return max(largestBst(root->left),largestBst(root->right));
    	}
    }
