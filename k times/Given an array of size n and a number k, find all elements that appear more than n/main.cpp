#include<iostream>
using namespace std;
void counter(int arr[],int n,int k){
    int countValue=n/k;
    int copyArr[n];
    for(int i=0;i<n;i++){
        copyArr[i]=0;
    }
    for(int i=0;i<n;i++){
        copyArr[arr[i]]+=1;
    }
    /*for(int i=0;i<n;i++){
        cout<<copyArr[i]<<" ";
    }*/
    for(int i=0;i<n;i++){
        if(copyArr[i]>countValue){
            cout<<i<<" ";
        }
    }
}
int main()
{
    int n,k;
    cout<<"Enter the array size = ";
    cin>>n;
    int arr[n];
    cout<<"Enter the array elements = ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the value of k = ";
    cin>>k;
    counter(arr,n,k);
    return 0;
}
