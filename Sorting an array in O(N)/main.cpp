#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void sorting(int arr[],int arrSize){

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
    sorting(arr,arrSize);
    cout<<"Sorted array = ";
    for(int i=0;i<arrSize;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
