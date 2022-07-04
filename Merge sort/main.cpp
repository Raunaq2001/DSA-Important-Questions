//https://www.youtube.com/watch?v=4z9I6ZmeLOQ&ab_channel=ApnaCollege
#include <iostream>
using namespace std;
void mergeSort(int arr[],int lb,int mid,int ub){
    int n1=mid-lb+1;
    int n2=ub-mid;
    int a[n1],b[n2];
    for(int i=0;i<n1;i++){
        a[i]=arr[lb+i];
    }
    for(int i=0;i<n2;i++){
        b[i]=arr[mid+i+1];
    }
    int i=0,j=0,k=lb;
    while(i<n1 && j<n2){
        if(a[i]<b[j]){
            arr[k]=a[i];
            i++;k++;
        }
        else{
            arr[k]=b[j];
            j++;k++;
        }
    }
    while(i<n1){
        arr[k]=a[i];
        i++;k++;
    }
    while(j<n2){
        arr[k]=b[j];
        j++;k++;
    }
}
void merge(int arr[],int lb,int ub){
    if(lb<ub){
        int mid=(lb+ub)/2;
        merge(arr,lb,mid);
        merge(arr,mid+1,ub);
        mergeSort(arr,lb,mid,ub);
    }
}
int main()
{
    int arr[]={34,4,13,65,87,34,89,1};
    merge(arr,0,7);
    for(int i=0;i<8;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
