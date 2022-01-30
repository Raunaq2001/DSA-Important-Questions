#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int subArray(int arr[],int n,int x){
     int min_len = n + 1;

     // Pick every element as starting point
     for (int start=0; start<n; start++)
     {
          // Initialize sum starting with current start
          int curr_sum = arr[start];

          // If first element itself is greater
          if (curr_sum > x) return 1;

          // Try different ending points for current start
          for (int end=start+1; end<n; end++)
          {
              // add last element to current sum
              curr_sum += arr[end];

              // If sum becomes more than x and length of
              // this subarray is smaller than current smallest
              // length, update the smallest length (or result)
              if (curr_sum > x && (end - start + 1) < min_len)
                 min_len = (end - start + 1);
          }
     }
     return min_len;
}
int main()
{
    int arrSize,x;
    cout<<"Enter the array size = ";
    cin>>arrSize;
    int arr[arrSize];
    cout<<"Enter the array elements = ";
    for(int i=0;i<arrSize;i++){
        cin>>arr[i];
    }
    cout<<"Enter the value of x = ";
    cin>>x;
    int subArraySize=subArray(arr,arrSize,x);
    cout<<"Smallest subarray with sum greater than a given value = "<<subArraySize;
    return 0;
}
