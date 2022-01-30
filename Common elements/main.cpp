#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr1[] = {1, 5, 5};
    int arr2[] = {3, 4, 5, 5, 10};
    int arr3[] = {5, 5, 10, 20};
    map<int,int> m;
    for(int i=0;i<3;i++){
        m[arr1[i]]++;
    }
    for(int i=0;i<5;i++){
        m[arr2[i]]++;
    }
    for(int i=0;i<4;i++){
        m[arr3[i]]++;
    }
    for(auto i:m){
        if(i.second>=3){
            cout<<i.first<<" ";
        }
    }
    return 0;
}
