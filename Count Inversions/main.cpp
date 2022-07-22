//Code Studio question # 153
//Approach used: Merge Sort
//https://www.youtube.com/watch?v=sV4RhDIIKO0&ab_channel=ApnaCollege
#include <bits/stdc++.h>
long long mergeSort(long long arr[],int lb,int mid,int ub){
    int size1=mid-lb+1;
    int size2=ub-mid;
    int arr1[size1],arr2[size2];
    long long inv=0;
    for(int i=0;i<size1;i++){
        arr1[i]=arr[lb+i];
    }
    for(int i=0;i<size2;i++){
        arr2[i]=arr[mid+i+1];
    }
    int i=0,j=0,k=lb;
    while(i<size1 && j<size2){
        if(arr1[i]<=arr2[j]){
            arr[k]=arr1[i];
            i++;
        }
        else{
            arr[k]=arr2[j];
            inv=inv+(size1-i);
            j++;
        }
        k++;
    }
    while(i<size1){
        arr[k]=arr1[i];
        i++;k++;
    }
    while(j<size2){
        arr[k]=arr2[j];
        j++;k++;
    }
    return inv;
}
long long merge(long long arr[],int lb,int ub){
    long long inv=0;
    if(lb<ub){
        int mid=(lb+ub)/2;
        inv=inv+merge(arr,lb,mid);
        inv=inv+merge(arr,mid+1,ub);
        inv=inv+mergeSort(arr,lb,mid,ub);
    }
    return inv;
}
long long getInversions(long long *arr, int n){
    long long inv=merge(arr,0,n-1);
    return inv;
}
