// Very important algorithm
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int maxCount(int arr[],int n){
    int ansIndex=0;
    int counter=1;
    int occourance=n/2;
    for(int i=1;i<n;i++){
        if(arr[i]==arr[ansIndex]){
            counter++;
        }
        else{
            counter--;
        }
        if(counter==0){
            ansIndex=i;
            counter=1;
        }
    }
    int num=arr[ansIndex];
    counter=0;
    for(int i=0;i<n;i++){
        if(arr[i]==num){
            counter++;
        }
    }
    cout<<counter;
    if(counter>occourance){
        return num;
    }
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
    int result=maxCount(arr,arrSize);
    cout<<"Element occouring more than N/2 time = "<<result;
    return 0;
}
