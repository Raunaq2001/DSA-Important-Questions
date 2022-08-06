    //@Author: RAUNAQ SINGH
    //Passes 283/291 test cases
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        if(nums.size()<4) return {};
        set<vector<int>> rs;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-3;i++){
            for(int j=i+1;j<nums.size()-2;j++){
                int p=j+1,q=nums.size()-1;
                while(p<q){
                    if((nums[i]+nums[j]+nums[p]+nums[q])==target){
                        vector<int> temp(4);
                        temp[0]=nums[i];
                        temp[1]=nums[j];
                        temp[2]=nums[p];
                        temp[3]=nums[q];
                        rs.insert(temp);
                        p++;
                        q--;
                    }
                    else if((nums[i]+nums[j]+nums[p]+nums[q])<target) p++;
                    else q--;
                }
            }
        }
        vector<vector<int>> ans(rs.begin(),rs.end());
        return ans;
    }
