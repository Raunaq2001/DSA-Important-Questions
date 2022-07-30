    //@Author: RAUNAQ SINGH
    //Concept used: Simply XOR all the elements of the array, XOR has a property that when it is XORed with the same element it results in 0 since       in the question it is given that only 1 element is appearing once rest are appearing twice so XORing all the array will result in that one         unique number which is the required answer
    int singleNonDuplicate(vector<int>& nums) {
        int ans=0;
        for(int i=0;i<nums.size();i++) ans=ans^nums[i];
        return ans;
    }
