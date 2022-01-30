#include <iostream>
#include<process.h>
using namespace std;
int main()
{
    int size;
    cout<<"enter the array size = ";
    cin>>size;
    int arr[size],copy[size];
    cout<<"Enter the array elements = ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int sum=0;
    for(int i=0;i<size;i++){
        if(arr[i]==0){
            cout<<"Yes";
            exit(0);
        }
    }
    for(int i=0;i<size;i++){
        sum=sum+arr[i];
        copy[i]=sum;
    }
    for(int i=0;i<size;i++){
        if(copy[i]==0 || copy[i]==arr[0]){
            cout<<"Yes";
            break;
        }
    }
    return 0;
}
