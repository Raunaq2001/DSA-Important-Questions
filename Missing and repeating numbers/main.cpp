//Code Studio question # 95
//@Author: RAUNAQ SINGH
#include <bits/stdc++.h>
int findMissing(vector<int> arr,int size){
    int missing=0;
    for(int i=size-1;i>0;i--){
        if(arr[i]-arr[i-1]>1){
            missing=arr[i]-1;
        }
    }
    /*
    Below if statement is written because there can be an element that occours
    more than once and if it were the case the difference might remain 0
    so to tackel the problem we manually set missing=1 when meeded.
    */
    if(missing==0){
        missing=1;
    }
    return missing;
}
int findRepeating(vector<int> arr,int size){
    int repeating=0;
    for(int i=size-1;i>=1;i--){
        if(arr[i]==arr[i-1]){
            repeating=arr[i];
            break;
        }
    }
    return repeating;
}
pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	pair<int,int> ans;
    sort(arr.begin(),arr.end());
    int A=0,B=0,size=arr.size();
    if(arr[size-1]!=size){
        A=size;
        B=findRepeating(arr,size);
    }
    else{
        A=findMissing(arr,size);
        B=findRepeating(arr,size);
    }
	ans.first=A;
    ans.second=B;
    return ans;
}
