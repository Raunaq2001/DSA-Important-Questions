//@Author: RAUNAQ SINGH
//Concept Used: Inorder Traversal
//Pre-Requisite: K-th Smallest element in a BST
    void getInorder(Node*root,vector<int> &v){
        if(root==NULL) return;
        getInorder(root->left,v);
        v.push_back(root->data);
        getInorder(root->right,v);
    }
    int kthLargest(Node *root, int K)
    {
        if(root==NULL) return INT_MIN;
        vector<int> v;
        getInorder(root,v);
        reverse(v.begin(),v.end()); //This line depends on which platform the code is being solved, as GFG consideres largest element from the last where as ideally it should have been from the begining.
        return v[K-1];
    }
