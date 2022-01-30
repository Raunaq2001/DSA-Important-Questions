#include <iostream>
using namespace std;
void reArrange(int arr[],int arrSize){
    int temp,i,j;
    for(i=0;i<arrSize-1;i++){
        for(j=i+1;j<arrSize;j++){
            if(i%2==0){
                if(arr[j]<0){
                    temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                }
            }
            else{
                if(arr[i]<0){
                    if(arr[j]>0){
                        temp=arr[i];
                        arr[i]=arr[j];
                        arr[j]=temp;
                    }
                }
            }
        }
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
    reArrange(arr,arrSize);
    cout<<"Rearraned array = ";
    for(int i=0;i<arrSize;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
