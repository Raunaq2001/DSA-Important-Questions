//@Author: RAUNAQ SINGH
//Code Studios question # 39
//Concept Used: Store the elements in a min-heap it will by default be storedin sorted order then transfer elements from min-heap to a data structure like vector and then depending upon the size of the vector find the required answer.
#include<bits/stdc++.h>
int getMedian(vector<vector<int>> &matrix)
{
    priority_queue<int,vector<int>,greater<int>> minHeap;
    int ans=0;
    for(int i=0;i<matrix.size();i++){
        for(int j=0;j<matrix[i].size();j++){
            minHeap.push(matrix[i][j]);
        }
    }
    vector<int> temp(minHeap.size());
    for(int i=0;i<minHeap.size();i++){
        int num=minHeap.top();
        minHeap.pop();
        temp[i]=num;
    }
    if(temp.size()%2!=0) ans=temp[temp.size()/2];
    else ans=(temp[temp.size()/2-1]+temp[temp.size()/2])/2;
    return ans;
}
