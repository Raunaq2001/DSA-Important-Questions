#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int findLongestConseqSubseq(int arr[], int N){
    int arrSize=*max_element(arr,arr+N)+1;
    int freqArr[arrSize],i,counter=0,maxCount=NULL;
    for(i=0;i<arrSize;i++){
        freqArr[i]=0;
    }
    for(i=0;i<N;i++){
        freqArr[arr[i]]++;
    }
    i=0;
    while(i<arrSize){
        if(freqArr[i]>=1){
            counter++;
            maxCount=max(maxCount,counter);
        }
        else{
            maxCount=max(maxCount,counter);
            counter=0;
        }
        i++;
    }
    return maxCount;
}
int main()
{
    int arrSize;
    cout<<"Enter the array size = ";
    cin>>arrSize;
    int arr[arrSize];
    cout<<"Enter the array elements = ";
    for(int i=0;i<arrSize;i++){
        cin>>arr[i];
    }
    int len=findLongestConseqSubseq(arr,arrSize);
    cout<<"Longest consecutive subsequence = "<<len;
    return 0;
}
