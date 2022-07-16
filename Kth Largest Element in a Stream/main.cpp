//Leetcode question # 703
    //@Author: RAUNAQ SINGH
    //Concept Used: Brute-Force (Passes 7/10 testcases)
    /*
    vector<int> ans;
    int target;
    KthLargest(int k, vector<int>& nums) {
        target=k-1;
        ans=nums;
    }
    int add(int val) {
        ans.push_back(val);
        sort(ans.begin(),ans.end());
        reverse(ans.begin(),ans.end());
        return ans[target];
    }
    */
    //https://www.youtube.com/watch?v=yAs3tONaf3s&ab_channel=AnujBhaiya
    //Concept Used: Priority Queue (In C++ priority queue is implemented using max heap by default)
    //https://leetcode.com/problems/kth-largest-element-in-a-stream/discuss/2280637/Simple-Solution-using-priority-queue-oror-C%2B%2B
    //https://www.youtube.com/watch?v=yAs3tONaf3s&ab_channel=AnujBhaiya
    int target;
    priority_queue<int> pq;
    KthLargest(int k, vector<int>& nums) {
        target=k;
        for(int i=0;i<nums.size();i++){
            pq.push(-nums[i]);
            if(pq.size()>k) pq.pop();
        }
    }
    int add(int val) {
        pq.push(-val);
        if(pq.size()>target) pq.pop();
        return -pq.top();
    }
