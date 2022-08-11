    //@Author: RAUNAQ SINGH
    //Leetcode question # 501
    //Algorithm Used: Inorder traversal of BST
    /*
    Approach: What we are doing here is that we first find out the inorder traversal of the
              given BST, since we know that inorder of BST is always in sorted order we can
              then create a map and store the corresponding number (key) with their frequency
              (value) in the map.

              Then creating a vector of pair we add the key value pair to the vector of pair
              sort it and then reverse it because we want mode and mode is the most occouring
              element.

              After doing this we will create our ans vector which will be the final vector
              that we will be returning. We first push the first element of the 'v' vector
              into the ans as it will always come then running the for loop from 1 to v.size()
              we check if the v[i] occourance is same as v[i-1] occourance, if it is then it
              will also be counted on the mode and is added and whenever an instance comes
              when this is not true we simply break out of the loop and return the 'ans'
              vector.
    */
    void getInorder(TreeNode*root,vector<int> &v){
        if(root==NULL) return;
        getInorder(root->left,v);
        v.push_back(root->val);
        getInorder(root->right,v);
    }
    vector<int> findMode(TreeNode* root) {
        vector<int> temp,ans;
        getInorder(root,temp);
        map<int,int> mpp;
        for(int i=0;i<temp.size();i++) mpp[temp[i]]++;
        vector<pair<int,int>> v;
        for(auto it:mpp) v.push_back({it.second,it.first});
        sort(v.begin(),v.end());
        reverse(v.begin(),v.end());
        auto it=v[0];
        ans.push_back(it.second);
        for(int i=1;i<v.size();i++){
            auto x=v[i];
            auto y=v[i-1];
            if(x.first==y.first) ans.push_back(x.second);
            else break;
        }
        return ans;
    }
