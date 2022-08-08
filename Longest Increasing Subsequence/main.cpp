    //https://www.geeksforgeeks.org/longest-increasing-subsequence-dp-3/ (See method 2)
    //Leetcode question # 300
    //Leetcode 30 days of challenge 8 August question
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        vector<int> LIS(n,0);
        LIS[0]=1;
        for(int i=1;i<n;i++){
            LIS[i]=1;
            for(int j=0;j<i;j++){
                if(nums[i]>nums[j] && LIS[i]<LIS[j]+1) LIS[i]=LIS[j]+1;
            }
        }
        return *max_element(LIS.begin(),LIS.end());
    }
