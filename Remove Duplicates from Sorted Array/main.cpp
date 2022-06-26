//Leetcode question # 26
//https://takeuforward.org/data-structure/remove-duplicates-in-place-from-sorted-array/
int removeDuplicates(vector<int>& nums) {
        int i=0;
        for(int j=1;j<nums.size();j++){
            if(nums[i]!=nums[j]){
                i++;
                nums[i]=nums[j];
            }
        }
        return i+1;
    }
