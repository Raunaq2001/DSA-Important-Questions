#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void threeWayPartition(int arr[],int arrSize,int a,int b){
    int newArr[arrSize],counter=0;
    for(int i=0;i<arrSize;i++){
        if(arr[i]<a){
            newArr[counter]=arr[i];
            counter++;
        }
    }
    for(int i=0;i<arrSize;i++){
        if(arr[i]>=a && arr[i]<=b){
            newArr[counter]=arr[i];
            counter++;
        }
    }
    for(int i=0;i<arrSize;i++){
        if(arr[i]>b){
            newArr[counter]=arr[i];
            counter++;
        }
    }
    cout<<"Three way partitioning of an array around a given range = ";
    for(int i=0;i<arrSize;i++){
        cout<<newArr[i]<<" ";
    }
}
int main()
{
    int arrSize,a,b;
    cout<<"Enter the array size = ";
    cin>>arrSize;
    int arr[arrSize];
    cout<<"Enter the array elements = ";
    for(int i=0;i<arrSize;i++){
        cin>>arr[i];
    }
    cout<<"Enter the values for a and b= ";
    cin>>a>>b;
    threeWayPartition(arr,arrSize,a,b);
    return 0;
}
