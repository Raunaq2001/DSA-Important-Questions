#include <iostream>
using namespace std;
int main()
{
    int size=0,temp;
    cout<<"Enter the array size = ";
    cin>>size;
    int arr[size];
    cout<<"Enter the array elements = ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int count=0;
    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-1-i;j++){
            if(arr[j]>arr[j+1]){
                count++;
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    cout<<"Number of inversions = "<<count;
    return 0;
}
