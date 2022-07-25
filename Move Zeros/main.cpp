    //Leetcode question # 283
    //@Author: RAUNAQ SINGH
    void moveZeroes(vector<int>& nums) {
        if(nums.size()==1 && nums[0]==0) return;
        /*for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                for(int j=i+1;j<nums.size();j++){
                    if(nums[j]!=0){
                        swap(nums[i],nums[j]);
                        break;
                    }
                }
            }
        }*/
        int j=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                swap(nums[i],nums[j]);
                j++;
            }
        }
    }
