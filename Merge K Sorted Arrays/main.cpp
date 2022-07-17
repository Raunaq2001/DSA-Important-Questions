//Code Studio question # 39
//@Author: RAUNAQ SINGH
//Concept Used: Min-Heap
//Algorithm: Simply create a min heap using priority queue over all the
//kArrays and then take the top of the min heap put it in a vector and pop the
//top of the heap continue this process until the heap is empty and finally
//return the vector as an answer.
#include<bits/stdc++.h>
vector<int> mergeKSortedArrays(vector<vector<int>>&kArrays, int k)
{
    priority_queue<int,vector<int>,greater<int>> pq;
    for(int i=0;i<k;i++){
        for(int j=0;j<kArrays[i].size();j++){
            pq.push(kArrays[i][j]);
        }
    }
    vector<int> ans;
    while(!pq.empty()){
        int num=pq.top();
        pq.pop();
        ans.push_back(num);
    }
    return ans;
}
