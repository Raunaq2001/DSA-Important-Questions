//Code Studio question # 13
//https://www.geeksforgeeks.org/k-maximum-sum-combinations-two-arrays (approach 1)
//Concept Used: C++ implements "Max-Heap" by default
#include<bits/stdc++.h>
vector<int> kMaxSumCombination(vector<int> &a, vector<int> &b, int n, int k){
	priority_queue<int> pq;
    //This loop saves all the possible combinations of sum of elements of vector a and b
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            pq.push(a[i]+b[j]);
        }
    }
    vector<int> ans;
    int counter=0;
    while(counter<k){
        ans.push_back(pq.top());
        pq.pop();
        counter++;
    }
    return ans;
}
