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
    /*
    //Another solution using map but is not that efficient as the above approach
    int findDuplicate(vector<int>& nums){
        if(nums.size()==0) return 0;
        map<int,int> mpp;
        for(int i=0;i<nums.size();i++) mpp[nums[i]]++;
        for(auto &it:mpp){
            if(it.second>1) return it.first;
        }
        return -1;
    }*/
    //Another Approach
    /*int findDuplicate(vector<int>& nums){
        int repeating=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1]){
                repeating=nums[i];
                break;
            }
        }
        return repeating;
    }*/
