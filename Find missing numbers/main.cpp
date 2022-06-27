//Leetcode question # 268
//@Author: RAUNAQ SINGH
int missingNumber(vector<int>& nums) {
        int size=nums.size();
        sort(nums.begin(),nums.end());
        if(nums[size-1]!=size){
            return size;
        }
        int B=0;
        for(int i=size-1;i>=1;i--){
            if(nums[i]-nums[i-1]>1){
                B=nums[i]-1;
                break;
            }
        }
        return B;
    }
