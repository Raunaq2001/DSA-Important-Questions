#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int calculateRainwater(int arr[],int n){
    int left[n],right[n];
    long long sum=0;
    left[0]=arr[0];
    for(int i=1;i<n-1;i++){
        left[i]=max(left[i-1],arr[i]);
    }
    right[n-1]=arr[n-1];
    for(int i=n-2;i>=0;i--){
        right[i]=max(right[i+1],arr[i]);
    }
    for(int i=1;i<n-1;i++){
        int val=min(left[i],right[i]);
        if(val>arr[i]){
            sum=sum+(val-arr[i]);
        }
    }
    return sum;
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
    int result=calculateRainwater(arr,arrSize);
    cout<<"Maximum rainwater trapped = "<<result;
    return 0;
}
