#include <bits/stdc++.h>
int subarraysXor(vector<int> &arr, int x)
{
    //Coding Ninjas question # 29
    //Brute-Force
    //@Author: RAUNAQ SINGH
    /*int counter=0;
    for(int i=0;i<arr.size();i++){
        int sum=0;
        for(int j=i;j<arr.size();j++){
            sum=sum ^ arr[j];
            if(sum==x){
                counter++;
            }
        }
    }
    return counter;*/
    //Optimal Approach
    //Technique Used: Prefix XOR
    //https://www.youtube.com/watch?v=lO9R5CaGRPY&ab_channel=takeUforward
    map<int,int> mpp;
    int prefixXor=0,counter=0;
    for(int i=0;i<arr.size();i++){
        prefixXor=prefixXor ^ arr[i];
        if(prefixXor==x){
            counter++;
        }
        if(mpp.find(prefixXor ^ x)!=mpp.end()){
            int value=mpp[prefixXor^x];
            counter=counter+value;
        }
        mpp[prefixXor]++;
    }
    return counter;
}
