#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int intervals=0,start=0,end=0;
    cout<<"Enter the number of intervals = ";
    cin>>intervals;
    int arr[intervals][2];
    cout<<"Enter the intervals (space seperated) = ";
    for(int i=0;i<intervals;i++){
        for(int j=0;j<2;j++){
            cin>>arr[i][j];
        }
    }
    start=arr[0][0];
    for(int i=0;i<intervals;i++){
        if(i<intervals-1){
            if(arr[i][1]>arr[i+1][0] || arr[i][1]==arr[i+1][0]){
                end=arr[i+1][1];
            }
            else{
                cout<<"["<<start<<" ";
                end=arr[i][1];
                cout<<end<<"]";
                start=arr[i+1][0];
            }
        }
    }
    cout<<"["<<arr[intervals-1][0]<<" "<<arr[intervals-1][1]<<"]";
    return 0;
}
