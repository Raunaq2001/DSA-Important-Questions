#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct Interval{
    int s,e;
};
bool compare(Interval i1,Interval i2){
    return i1.s<i2.s;
}
void mergeIntervals(Interval arr[],int n){
    sort(arr,arr+n,compare);
    int index=0;
    for(int i=1;i<n;i++){
        if(arr[index].e>=arr[i].s){
            arr[index].e=max(arr[index].e,arr[i].e);
        }
        else{
            index++;
            arr[index]=arr[i];
        }
    }
    for(int i=0;i<=index;i++){
        cout<<"["<<arr[i].s<<" "<<arr[i].e<<"]";
    }
    return;
}
int main(){
    Interval arr[]={{6,8},{1,9},{2,4},{4,7}};
    int size=sizeof(arr)/sizeof(arr[0]);
    mergeIntervals(arr,size);
    return 0;
}
