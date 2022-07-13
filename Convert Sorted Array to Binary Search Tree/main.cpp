//Leetcode question # 108
//https://www.youtube.com/watch?v=0K0uCMYq5ng&ab_channel=NeetCode
    TreeNode* buildTree(vector<int> &nums,int lb,int ub){
        if(lb>ub) return 0;
        int mid=(lb+ub)/2;
        TreeNode*newNode=new TreeNode(nums[mid]);
        newNode->left=buildTree(nums,lb,mid-1);
        newNode->right=buildTree(nums,mid+1,ub);
        return newNode;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int lb=0,ub=nums.size()-1;
        int mid=(lb+ub)/2;
        TreeNode*root=new TreeNode(nums[mid]);
        root->left=buildTree(nums,lb,mid-1);
        root->right=buildTree(nums,mid+1,ub);
        return root;
    }
