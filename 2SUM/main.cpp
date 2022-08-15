//Leetcode question # 1
//@Author: RAUNAQ SINGH
vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            if(i!=0 && nums[i]==nums[i-1]) continue;
            for(int j=i+1;j<nums.size();j++){
                if(j!=i+1 && nums[j]==nums[j-1]) continue;
                if(nums[i]+nums[j]==target){
                    ans.push_back(i);
                    ans.push_back(j);
                }
            }
        }
        return ans;
    }
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//O(N) approach 
vector<int> twoSum(vector<int> &nums,int target){
        vector<int> ans;
        sort(nums.begin(),nums.end());
        int i=0,j=nums.size()-1;
        while(i<j){
                if(nums[i]+nums[j]==target){
                        ans.push_back(i);
                        ans.push_back(j);
                }
                else if(nums[i]+nums[j]<target) i++;
                else j--;
                if(nums[i]==nums[j]) continue;
        }
        return ans;
}
