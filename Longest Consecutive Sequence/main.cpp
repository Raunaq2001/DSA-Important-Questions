//Leetcode question # 128
//https://takeuforward.org/data-structure/longest-consecutive-sequence-in-an-array/
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0) return 0;
        if(nums.size()==1) return 1;
        sort(nums.begin(),nums.end());
        int counter=1,ans=0,prev=nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i]==prev+1){
                counter++;
            }
            else if(nums[i]!=prev){
                counter=1;
            }
            prev=nums[i];
            ans=max(ans,counter);
        }
        return ans;
    }
