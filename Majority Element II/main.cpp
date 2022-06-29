//Leetcode question # 229
//@Author: RAUNAQ SINGH
//Concept used: Extended Moore's Voting Algorithm
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> ans;
        sort(nums.begin(),nums.end());
        int occourance=floor(nums.size()/3);
        int num=nums[0];
        int counter=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]==num){
                counter++;
            }
            else{
                if(counter>occourance){
                    ans.push_back(num);
                }
                num=nums[i];
                counter=1;
            }
        }
        if(counter>occourance){
            ans.push_back(num);
        }
        return ans;
    }
