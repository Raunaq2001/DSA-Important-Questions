    //Leetcode Question # 653
    //@Author: RAUNAQ SINGH
    //Pre-Requisite: 2 SUM Problem (https://github.com/Raunaq2001/DSA-Important-Questions/blob/main/2SUM/main.cpp)
    void getInorder(TreeNode*root,vector<int> &v){
        if(root==NULL) return;
        getInorder(root->left,v);
        v.push_back(root->val);
        getInorder(root->right,v);
    }
    bool findTarget(TreeNode* root, int k) {
        if(root==NULL) return false;
        vector<int> v;
        getInorder(root,v);
        //O(N^2) approach
        /*for(int i=0;i<v.size();i++){
            if(i!=0 && v[i]==v[i-1]) continue;
            for(int j=i+1;j<v.size();j++){
                if(j!=i+1 && v[j]==v[j-1]) continue;
                if(v[i]+v[j]==k) return true;
            }
        }*/
        //O(N) approach
        int lb=0,ub=v.size()-1;
        while(lb<ub){
            if(v[lb]+v[ub]==k) return true;
            else if(v[lb]+v[ub]>k) ub--;
            else lb++;
        }
        return false;
    }
