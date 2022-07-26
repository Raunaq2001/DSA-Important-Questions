    //Leetcode question # 189
    //@Author: RAUNAQ SINGH
    void rotate(vector<int>& nums, int k) {
        k=k%nums.size();
        if(k==0) return;
        vector<int> temp;
        int index=nums.size()-k;
        for(int i=index;i<nums.size();i++) temp.push_back(nums[i]);
        for(int i=0;i<index;i++) temp.push_back(nums[i]);
        nums=temp;
    }
