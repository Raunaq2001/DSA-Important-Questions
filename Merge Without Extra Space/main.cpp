#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void mergeArr(int arr1[],int arr2[],int size1,int size2){
    int i,temp;
    for(i=0;i<size1;i++){
        if(arr1[i]>arr2[0]){
            temp=arr1[i];
            arr1[i]=arr2[0];
            arr2[0]=temp;
            sort(arr2,arr2+size2);
        }
    }
}
int main()
{
    int size1,size2,i;
    cout<<"Enter arr1 and arr2 size = ";
    cin>>size1>>size2;
    int arr1[size1],arr2[size2];
    cout<<"Enter arr1 = ";
    for(i=0;i<size1;i++){
        cin>>arr1[i];
    }
    cout<<"Enter arr2 = ";
    for(i=0;i<size2;i++){
        cin>>arr2[i];
    }
    mergeArr(arr1,arr2,size1,size2);
    cout<<"arr1 = ";
    for(i=0;i<size1;i++){
        cout<<arr1[i]<<" ";
    }
    cout<<"arr2 = ";
    for(i=0;i<size2;i++){
        cout<<arr2[i]<<" ";
    }
    return 0;
}
