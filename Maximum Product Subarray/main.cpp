#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int findMaxProduct(int arr[],int n){
    int curMax=arr[0],curMin=arr[0],result=0,temp;
    for(int i=1;i<n;i++){
        if(arr[i]==0){
            curMax=1;
            curMin=1;
            continue;
        }
        temp=arr[i]*curMax;
        curMax=max(arr[i],max(curMax*arr[i],curMin*arr[i]));
        curMin=min(arr[i],min(temp,curMin*arr[i]));
        result=max(result,curMax);
    }
    return result;
}
int main()
{
    int n;
    cout<<"Enter the size of the array = ";
    cin>>n;
    int arr[n];
    cout<<"Enter the array elements = ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int result=findMaxProduct(arr,n);
    cout<<"Maximum product sub-array = "<<result;
    return 0;
}
