    // Pre-Requisute: Next Greater Element (NGE)
    // Concept used: Next smaller element
    // https://practice.geeksforgeeks.org/problems/fab3dbbdce746976ba35c7b9b24afde40eae5a04/1
    // https://github.com/Raunaq2001/DSA-Important-Questions/blob/main/Next%20Greater%20Element%20(NGE)/main.cpp
    // @Author: RAUNAQ SINGH
    vector<int> help_classmate(vector<int> arr, int n)
    {
        vector<int> res(n);
        stack<int> stk;
        for(int i=n-1;i>=0;i--){
            if(!stk.empty()){
                while(!stk.empty() && stk.top()>=arr[i]) stk.pop();
            }
            res[i]=stk.empty()?-1:stk.top();
            stk.push(arr[i]);
        }
        return res;
    }
