//Leetcode problem 15
//https://fizzbuzzed.com/top-interview-questions-1/#:~:text=A%20basic%2C%20O(n3,just%20use%20three%20for%20loops.
 vector<vector<int>> threeSum(vector<int>& nums) {
        //Brute-Force
        /*vector<vector<int>> output;
        if(nums.size()==0){
            return output;
        }
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();++i){
            if(i!=0 && nums[i]==nums[i-1]) continue;
            for(int j=i+1;j<nums.size();++j){
                if(j!=i+1 && nums[j]==nums[j-1]) continue;
                for(int k=j+1;k<nums.size();++k){
                    if(k!=j+1 && nums[k]==nums[k-1]) continue;
                    if(nums[i]+nums[j]+nums[k]==0){
                        output.push_back({nums[i],nums[j],nums[k]});
                    }
                }
            }
        }
        return output;*/
        //Optimal 2 pointer approach
        vector<vector<int>> output;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); ++i) {
            if (i != 0 && nums[i] == nums[i - 1]) continue;
            int j = i + 1;
            int k = nums.size() - 1;
            while (j < k) {
                if (nums[i] + nums[j] + nums[k] == 0) {
                    output.push_back({nums[i], nums[j], nums[k]});
                ++j;
                while (j < k && nums[j] == nums[j-1]) ++j;
            }
            else if (nums[i] + nums[j] + nums[k] < 0) {
                ++j;
            }
            else {
                --k;
                }
            }
        }
        return output;
    }
