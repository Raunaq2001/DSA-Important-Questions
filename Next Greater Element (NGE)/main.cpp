    //Function to find the next greater element for each element of the array.
    //https://www.geeksforgeeks.org/next-greater-element/ (See the approach that is just above method 3)
    //https://practice.geeksforgeeks.org/problems/next-larger-element-1587115620/1
    vector<long long> nextLargerElement(vector<long long> arr, int n){
        vector<long long> res(n);
        stack<long long> stk;
        for(int i=n-1;i>=0;i--){
            if(!stk.empty()){
                while(!stk.empty() && stk.top()<=arr[i]) stk.pop();
            }
            res[i]=stk.empty()?-1:stk.top();
            stk.push(arr[i]);
        }
        return res;
    }
