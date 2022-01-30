#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int minSwap(int arr[], int n, int k) {
    int count = 0;
    for (int i = 0; i < n; ++i)
        if (arr[i] <= k)
            ++count;
    int bad = 0;
    for (int i = 0; i < count; ++i)
        if (arr[i] > k)
            ++bad;
    int ans = bad;
    for (int i = 0, j = count; j < n; ++i, ++j)
    {
        if (arr[i] > k)
            --bad;
        if (arr[j] > k)
            ++bad;
        ans = min(ans, bad);
    }
    return ans;
}
int main()
{
    int arrSize,k;
    cout<<"Enter the array size = ";
    cin>>arrSize;
    int arr[arrSize];
    for(int i=0;i<arrSize;i++){
        cin>>arr[i];
    }
    cout<<"Enter the value of k = ";
    cin>>k;
    int minSwaps=minSwap(arr,arrSize,k);
    cout<<"Minimum swaps and k together = "<<minSwaps;
    return 0;
}
