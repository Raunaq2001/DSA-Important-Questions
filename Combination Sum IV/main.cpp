    //https://www.lexicodes.com/articles/combination-sum-iv-cpp
    //https://www.youtube.com/watch?v=dw2nMCxG0ik&ab_channel=NeetCode
    //Unsigned int is used because normal int will cause an overflow to occour
    //Leetcode question # 337
    int combinationSum4(vector<int>& nums, int target) {
        vector<unsigned int>dp(target+1,0);
        dp[0]=1;
        for(int i=1;i<=target;i++){
            for(int num:nums){
                if(i-num>=0) dp[i]=dp[i]+dp[i-num];
            }
        }
        return dp[target];
    }
