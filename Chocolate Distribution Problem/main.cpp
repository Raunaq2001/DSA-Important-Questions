#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int findMinDiff(int arr[],int n,int m){
    sort(arr,arr+n);
    int diff=INT_MAX;
    for(int i=0;i+m-1<n;i++){
        int currDiff=abs(arr[i+m-1]-arr[i]);
        diff=min(diff,currDiff);
    }
    return diff;
}
int main()
{
    int arrSize,m;
    cout<<"Enter the array size = ";
    cin>>arrSize;
    int arr[arrSize];
    cout<<"Enter the array elements = ";
    for(int i=0;i<arrSize;i++){
        cin>>arr[i];
    }
    cout<<"Enter the number of children = ";
    cin>>m;
    int result=findMinDiff(arr,arrSize,m);
    cout<<"Result = "<<result;
    return 0;
}
