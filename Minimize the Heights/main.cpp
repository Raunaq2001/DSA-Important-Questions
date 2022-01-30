#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> vec1;
    int size,k,diff1,diff2,max1,min1,max2,min2;
    cout<<"Enter k = ";
    cin>>k;
    cout<<"Enter the size of the array = ";
    cin>>size;
    cout<<"Enter the array elements  = ";
    for(int i=0;i<size;i++){
        int num;
        cin>>num;
        vec1.push_back(num);
    }
    vector<int> vec2(vec1);
    for(int i=0;i<size;i++){
        if(vec1.at(i)<=k){
            vec1.at(i)+=k;
        }
        else{
            int num;
            num=vec1.at(i)-k;
            if(num>0){
                vec1.at(i)=num;
            }
        }
    }
    min1=*min_element(vec1.begin(),vec1.end());
    max1=*max_element(vec1.begin(),vec1.end());
    diff1=max1-min1;
    for(int i=0;i<size;i++){
        if(vec2.at(i)>=k){
            int num;
            num=vec2.at(i)-k;
            if(num>0){
                vec2.at(i)=num;
            }
        }
        else{
            vec2.at(i)+=k;
        }
    }
    min2=*min_element(vec2.begin(),vec2.end());
    max2=*max_element(vec2.begin(),vec2.end());
    diff2=max2-min1;
    if(diff1>diff2){
        cout<<"Maximum difference = "<<diff1;
    }
    else{
        cout<<"Maximum difference = "<<diff2;
    }
    return 0;
}
