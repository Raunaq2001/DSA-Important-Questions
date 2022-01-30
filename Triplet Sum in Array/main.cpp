#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool checkSum(int arr[],int arrSize,int sum){
    int i,lb,ub;
    sort(arr,arr+arrSize);
    for(i=0;i<arrSize-2;i++){
        lb=i+1;
        ub=arrSize-1;
        while(lb<ub){
            if(arr[i]+arr[lb]+arr[ub]==sum){
                return true;
            }
            else if(arr[i]+arr[lb]+arr[ub]<sum){
                lb++;
            }
            else{
                ub--;
            }
        }
    }
    return false;
}
int main()
{
    int arrSize,sum;
    cout<<"Enter the array size = ";
    cin>>arrSize;
    cout<<"Enter the triplet sum = ";
    cin>>sum;
    cout<<"Enter the array elements = ";
    int arr[arrSize];
    for(int i=0;i<arrSize;i++){
        cin>>arr[i];
    }
    cout<<"Triplet sum in array = "<<checkSum(arr,arrSize,sum);
    return 0;
}
