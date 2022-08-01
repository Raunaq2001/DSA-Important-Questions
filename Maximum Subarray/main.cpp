    //@Author: RAUNAQ SINGH
    //Algorithm used: Kadane's Algorithm
    int maxSubArray(vector<int>& nums){
        int maxTillNow=0,maxSoFar=0;
        for(int i=0;i<nums.size();i++){
            maxTillNow+=nums[i];
            maxSoFar=max(maxSoFar,maxTillNow);
            if(maxTillNow<0) maxTillNow=0;
        }
        if(maxSoFar==0) maxSoFar=*max_element(nums.begin(),nums.end());
        return maxSoFar;
    }
