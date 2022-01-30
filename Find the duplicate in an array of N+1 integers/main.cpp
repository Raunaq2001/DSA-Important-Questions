#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N,size;
    cout<<"Enter N = ";
    cin>>N;
    size=N+1;
    int arr1[size],arr2[size];
    cout<<"Enter array elements = ";
    for(int i=0;i<size;i++){
        cin>>arr1[i];
    }
    for(int i=0;i<size;i++){
        arr2[i]=0;
    }
    cout<<"Duplicate elements = ";
    for(int i=0;i<size;i++){
        if(arr2[arr1[i]]==0){
            arr2[arr1[i]]+=1;
        }
        else{
            cout<<arr1[i];
        }
    }
    return 0;
}
