//Leetcode question # 287
//@Author: RAUNAQ SINGH
int findDuplicate(vector<int>& nums) {
        int repeating=0;
        sort(nums.begin(),nums.end());
        for(int i=nums.size()-1;i>=1;i--){
            if(nums[i]==nums[i-1]){
                repeating=nums[i];
                break;
            }
        }
        return repeating;
    }
