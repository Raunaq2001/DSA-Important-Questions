    //Leetcode question # 347
    //@Author: RAUNAQ SINGH
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mpp;
        vector<int> ans;
        for(int i=0;i<nums.size();i++) mpp[nums[i]]++;
        vector<pair<int,int>> temp;
        for(auto &it:mpp){
            temp.push_back({it.second,it.first}); //Push the elements in configuration frequency,element
        }
        sort(temp.begin(),temp.end());
        reverse(temp.begin(),temp.end());
        for(int i=0;i<k;i++){
            auto it=temp[i];
            int num=it.second;
            ans.push_back(num);
        }
        return ans;
    }
