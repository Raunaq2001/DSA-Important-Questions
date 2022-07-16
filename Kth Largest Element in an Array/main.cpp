    //Leetcode question # 215
    //For K-th largest --> Min Heap
    //For K-th smallest --> Max Heap
    //@Author:Raunaq Singh
    /*int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        reverse(nums.begin(),nums.end());
        return nums[k-1];
    }*/
    int findKthLargest(vector<int>& nums, int k){
        priority_queue<int> pq;
        for(int i=0;i<nums.size();i++){
            pq.push(-nums[i]);
            if(pq.size()>k) pq.pop();
        }
        return -pq.top();
    }
