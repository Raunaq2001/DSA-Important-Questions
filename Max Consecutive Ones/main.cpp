//Leetcode question # 485
int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxOccourance=0;
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                maxOccourance++;
            }
            else{
                ans.push_back(maxOccourance);
                maxOccourance=0;
            }
        }
        ans.push_back(maxOccourance);
        maxOccourance=*max_element(ans.begin(),ans.end());
        return maxOccourance;
    }
     //Better approach
    //@Author: RAUNAQ SINGH
    int findMaxConsecutiveOnes(vector<int>& nums){
        int ans=0,counter=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1) counter++;
            else{
                ans=max(ans,counter);
                counter=0;
            }
        }
        ans=max(ans,counter);
        return ans;
    }
