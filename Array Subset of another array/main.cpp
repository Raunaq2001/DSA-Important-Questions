#include <iostream>
#include<bits/stdc++.h>
using namespace std;
string isSubset(int a1[], int a2[], int n, int m) ;
int main() {
    int size1,size2;
    cout<<"Enter the size of array 1 = ";
    cin>>size1;
    cout<<"Enter the size of array 2 = ";
    cin>>size2;
    int arr1[size1],arr2[size2];
    cout<<"Enter the array 1 elements = ";
    for(int i=0;i<size1;i++){
        cin>>arr1[i];
    }
    cout<<"Enter the array 2 elements = ";
    for(int i=0;i<size2;i++){
        cin>>arr2[i];
    }
    cout<<isSubset(arr1,arr2,size1,size2);
}
string isSubset(int a1[], int a2[], int n, int m) {
    int max1=*max_element(a1,a1+n);
    int max2=*max_element(a2,a2+n);
    if(max2>max1){
        return "No";
    }
    max1++;
    int freqArr[max1],counter=0;
    for(int i=0;i<max1;i++){
        freqArr[i]=0;
    }
    for(int i=0;i<n;i++){
        freqArr[a1[i]]++;
    }
    for(int i=0;i<m;i++){
        freqArr[a2[i]]++;
    }
    /*for(int i=0;i<max1;i++){
        cout<<freqArr[i]<<" ";
    }*/
    for(int i=0;i<max1;i++){
        if(freqArr[i]>=2){
            counter++;
        }
    }
    if(counter==m){
        return "Yes";
    }
    else{
        return "No";
    }
}
