    //@Author: RAUNAQ SINGH
    //Leetcode question # 78
    //https://www.youtube.com/watch?v=mEBEw_xScsE&t=840s&ab_channel=AnujBhaiya
    void getSubsets(vector<vector<int>> &ans,vector<int> &nums,vector<int> &temp,int i){
        if(i==nums.size()){
            ans.push_back(temp);
            return;
        }
        temp.push_back(nums[i]);
        getSubsets(ans,nums,temp,i+1);
        temp.pop_back();
        getSubsets(ans,nums,temp,i+1);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;
        getSubsets(ans,nums,temp,0);
        return ans;
    }
