//Algorithm: Starting from 2nd last index find a value that is less than it's next value once found that will be our index 1 then
//           in another loop starting from last value till index+1 find a value that is greater than the element at index1 that 
//           will be index2 then swap those values finally reverse the array from index+1 till end
//https://takeuforward.org/data-structure/next_permutation-find-next-lexicographically-greater-permutation
    void nextPermutation(vector<int>& nums){
        int i,j;
        for(i=nums.size()-2;i>=0;i--){
            if(nums[i]<nums[i+1]) break;
        }
        if(i<0){
            reverse(nums.begin(),nums.end());
        }
        else{
            for(j=nums.size()-1;j>i;j--){
                if(nums[j]>nums[i]) break;
            }
            swap(nums[i],nums[j]);
            reverse(nums.begin()+i+1,nums.end());
        }
    }
