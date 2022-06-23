void nextPermutation(vector<int>& nums) {
        int index=nums.size()-2,index1=-999,index2=0;
        for(int i=index;i>=0;i--){
            if(nums[i]<nums[i+1]){
                index1=i;
                break;
            }
        }
        if(index1==-999){
            reverse(nums.begin(),nums.end());

        }
        else{
        index=nums.size()-1;
        for(int i=index;i>index1;i--){
            if(nums[i]>nums[index1]){
                index2=i;
                break;
            }
        }
        swap(nums[index1],nums[index2]);
        reverse(nums.begin()+index1+1,nums.end());
        }
    }
