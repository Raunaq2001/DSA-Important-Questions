//Leetcode Question # 230
//@Author: RAUNAQ SINGH
//Concept Used: Get the inorder traversal of the tree, store it in a vector and then
    void getInorder(TreeNode*root,vector<int> &v){
        if(root==NULL) return;
        getInorder(root->left,v);
        v.push_back(root->val);
        getInorder(root->right,v);
    }
    int kthSmallest(TreeNode* root, int k) {
        vector<int> v;
        getInorder(root,v);
        return v[k-1];
    }
    //Approach 2
    //Use the concept of priority queue, since we have to find the k-th smallest element in BST we will use Max-Heap, if here we were asked to find the K-th largest element then we will use Min-Heap
    void getElements(TreeNode*root,priority_queue<int> &maxHeap,int k){
        if(root==NULL) return;
        getElements(root->left,maxHeap,k);
        maxHeap.push(root->val);
        if(maxHeap.size()>k) maxHeap.pop();
        getElements(root->right,maxHeap,k);
    }
    int kthSmallest(TreeNode* root, int k){
        priority_queue<int> maxHeap;
        getElements(root,maxHeap,k);
        return maxHeap.top();
    }
