#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    cout<<"Enter the size of the array = ";
    cin>>size;
    int arr[size];
    cout<<"Enter the array elements = ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int counter=0,index=0,i=0;
    for(int i=0;i<size;i++){
        if(arr[i]==0){
            if(i!=size-1){
                cout<<"Since 0 was encountered array end cannot be reached";
            }
        }
    }
    while(i<size){
        counter++;
        index=index+arr[i];
        if(index>size || index==size-1){
            break;
        }
        else{
            i=index;
        }
    }
    cout<<"Minimum number of jumps = "<<counter;
    return 0;
}
